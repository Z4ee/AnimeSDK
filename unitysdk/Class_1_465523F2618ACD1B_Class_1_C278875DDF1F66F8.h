#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_465523F2618ACD1B_PathNodeState.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_465523F2618ACD1B_CLASS_1_C278875DDF1F66F8_COMPARETO_OFFSET UNITYSDK_OFFSET(0x11E19AB0)
#define CLASS_1_465523F2618ACD1B_CLASS_1_C278875DDF1F66F8_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x11E19DD0)
#define CLASS_1_465523F2618ACD1B_CLASS_1_C278875DDF1F66F8__CTOR_OFFSET UNITYSDK_OFFSET(0x11E19BA0)

inline static constexpr unsigned int Class_1_465523F2618ACD1B_Class_1_C278875DDF1F66F8_TypeDefinitionIndex = 50003;

class Class_1_465523F2618ACD1B_Class_1_C278875DDF1F66F8 : public ::System::Object
{
public:
	::Class_1_465523F2618ACD1B_Class_1_C278875DDF1F66F8* Field_1_5; // 0x10
	::Class_1_465523F2618ACD1B_PathNodeState Field_1_0; // 0x18
	::System::Int32 Field_1_2; // 0x1C
	::System::Int32 Field_1_3; // 0x20
	::System::Int32 Field_1_4; // 0x24
	::RPG::GameCore::IVec2 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_465523F2618ACD1B_CLASS_1_C278875DDF1F66F8__CTOR_OFFSET))(this);
	}

	::System::Int32 CompareTo(::Class_1_465523F2618ACD1B_Class_1_C278875DDF1F66F8* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_465523F2618ACD1B_Class_1_C278875DDF1F66F8*))((::PBYTE)hIl2Cpp + CLASS_1_465523F2618ACD1B_CLASS_1_C278875DDF1F66F8_COMPARETO_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_465523F2618ACD1B_CLASS_1_C278875DDF1F66F8_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}
};

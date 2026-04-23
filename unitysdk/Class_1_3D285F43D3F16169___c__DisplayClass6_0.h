#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3D285F43D3F16169;
class Class_3_301DB96170A54A53;
namespace System { class String; }
namespace UnityEngine { class Object; }

#define CLASS_1_3D285F43D3F16169___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12907970)
#define CLASS_1_3D285F43D3F16169___C__DISPLAYCLASS6_0__LOADBLOCK_B__0_OFFSET UNITYSDK_OFFSET(0x12907CE0)
#define CLASS_1_3D285F43D3F16169___C__DISPLAYCLASS6_0__LOADBLOCK_B__1_OFFSET UNITYSDK_OFFSET(0x12907E80)
#define CLASS_1_3D285F43D3F16169___C__DISPLAYCLASS6_0__LOADBLOCK_B__2_OFFSET UNITYSDK_OFFSET(0x12907EC0)

inline static constexpr unsigned int Class_1_3D285F43D3F16169___c__DisplayClass6_0_TypeDefinitionIndex = 45687;

class Class_1_3D285F43D3F16169___c__DisplayClass6_0 : public ::System::Object
{
public:
	::Class_3_301DB96170A54A53* loadingTask; // 0x10
	::Class_1_3D285F43D3F16169* __4__this; // 0x18
	::System::String* name; // 0x20
	::System::Int32 blockResHandle; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D285F43D3F16169___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Void _LoadBlock_b__0(::UnityEngine::Object* obj)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3D285F43D3F16169___C__DISPLAYCLASS6_0__LOADBLOCK_B__0_OFFSET))(this, obj);
	}

	::System::Void _LoadBlock_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D285F43D3F16169___C__DISPLAYCLASS6_0__LOADBLOCK_B__1_OFFSET))(this);
	}

	::System::Void _LoadBlock_b__2(::System::Boolean b)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3D285F43D3F16169___C__DISPLAYCLASS6_0__LOADBLOCK_B__2_OFFSET))(this, b);
	}
};

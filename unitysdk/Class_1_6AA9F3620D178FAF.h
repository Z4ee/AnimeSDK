#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatStageFirstType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_A88C3AAF0DD46F4C;
namespace System { class String; }

#define CLASS_1_6AA9F3620D178FAF_METHOD_1_1FAE1389D4EFD9B1_OFFSET UNITYSDK_OFFSET(0x1822DCA0)
#define CLASS_1_6AA9F3620D178FAF__CTOR_OFFSET UNITYSDK_OFFSET(0x1822E1D0)

inline static constexpr unsigned int Class_1_6AA9F3620D178FAF_TypeDefinitionIndex = 10806;

class Class_1_6AA9F3620D178FAF : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* Field_1_15; // 0x10
	::Il2CppArray<::Class_1_A88C3AAF0DD46F4C*>* Field_1_11; // 0x18
	::System::String* Field_1_13; // 0x20
	::Il2CppArray<::System::UInt32>* Field_1_3; // 0x28
	::Il2CppArray<::System::UInt32>* Field_1_7; // 0x30
	::Il2CppArray<::System::UInt32>* Field_1_9; // 0x38
	::System::String* Field_1_12; // 0x40
	::System::UInt32 Field_1_1; // 0x48
	::System::UInt32 Field_1_8; // 0x4C
	::RPG::GameCore::DiceCombatStageFirstType Field_1_6; // 0x50
	::System::UInt32 Field_1_2; // 0x54
	::System::UInt32 Field_1_4; // 0x58
	::System::UInt32 Field_1_5; // 0x5C
	::System::UInt32 Field_1_14; // 0x60
	::System::UInt32 Field_1_10; // 0x64
	::System::UInt32 Field_1_0; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6AA9F3620D178FAF__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1FAE1389D4EFD9B1(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_6AA9F3620D178FAF*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_6AA9F3620D178FAF*&))((::PBYTE)hIl2Cpp + CLASS_1_6AA9F3620D178FAF_METHOD_1_1FAE1389D4EFD9B1_OFFSET))(a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }

#define CLASS_1_B10D9DB4D3D8BBA7_METHOD_1_F6FF3DE94D09C840_OFFSET UNITYSDK_OFFSET(0x19369550)
#define CLASS_1_B10D9DB4D3D8BBA7__CTOR_OFFSET UNITYSDK_OFFSET(0x19369A00)

inline static constexpr unsigned int Class_1_B10D9DB4D3D8BBA7_TypeDefinitionIndex = 12331;

class Class_1_B10D9DB4D3D8BBA7 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* Field_1_0; // 0x10
	::Il2CppArray<::System::UInt32>* Field_1_1; // 0x18
	::Il2CppArray<::System::UInt32>* Field_1_2; // 0x20
	::Il2CppArray<::System::UInt32>* Field_1_3; // 0x28
	::Il2CppArray<::RPG::GameCore::AttackDamageType>* Field_1_4; // 0x30
	::Il2CppArray<::RPG::GameCore::ItemConfig*>* Field_1_5; // 0x38
	::Il2CppArray<::RPG::GameCore::ItemConfig*>* Field_1_6; // 0x40
	::Il2CppArray<::System::UInt32>* Field_1_7; // 0x48
	::System::UInt32 Field_1_8; // 0x50
	::System::UInt32 Field_1_9; // 0x54
	::System::UInt32 Field_1_10; // 0x58
	::System::UInt32 Field_1_11; // 0x5C
	::System::UInt32 Field_1_12; // 0x60
	::System::UInt32 Field_1_13; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B10D9DB4D3D8BBA7__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_F6FF3DE94D09C840(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_B10D9DB4D3D8BBA7*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_B10D9DB4D3D8BBA7*&))((::PBYTE)hIl2Cpp + CLASS_1_B10D9DB4D3D8BBA7_METHOD_1_F6FF3DE94D09C840_OFFSET))(a1, a2);
	}
};

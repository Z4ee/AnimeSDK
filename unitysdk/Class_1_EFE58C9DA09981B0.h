#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRoundType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_EFE58C9DA09981B0_METHOD_1_95FA3048B3F79507_OFFSET UNITYSDK_OFFSET(0x179C1A40)
#define CLASS_1_EFE58C9DA09981B0__CTOR_OFFSET UNITYSDK_OFFSET(0x179C1DC0)

inline static constexpr unsigned int Class_1_EFE58C9DA09981B0_TypeDefinitionIndex = 10734;

class Class_1_EFE58C9DA09981B0 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::FateRoundType>* Field_1_6; // 0x10
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_7; // 0x18
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_8; // 0x20
	::System::UInt32 Field_1_5; // 0x28
	::System::UInt32 Field_1_4; // 0x2C
	::System::UInt32 Field_1_1; // 0x30
	::System::UInt32 Field_1_3; // 0x34
	::System::UInt32 Field_1_0; // 0x38
	::System::UInt32 Field_1_2; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFE58C9DA09981B0__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_95FA3048B3F79507(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_EFE58C9DA09981B0*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_EFE58C9DA09981B0*&))((::PBYTE)hIl2Cpp + CLASS_1_EFE58C9DA09981B0_METHOD_1_95FA3048B3F79507_OFFSET))(a1, a2);
	}
};

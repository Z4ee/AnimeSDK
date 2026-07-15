#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCardPileType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_90EA2BB24C67408F_METHOD_3_57A1D28F65E6799B_OFFSET UNITYSDK_OFFSET(0x1BD46D60)
#define CLASS_3_90EA2BB24C67408F_METHOD_3_88B5F069AE1DF533_OFFSET UNITYSDK_OFFSET(0x1BD46D20)
#define CLASS_3_90EA2BB24C67408F__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD46D50)

inline static constexpr unsigned int Class_3_90EA2BB24C67408F_TypeDefinitionIndex = 19115;

class Class_3_90EA2BB24C67408F : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x18
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_1; // 0x20
	::Il2CppArray<::System::UInt32>* Field_3_2; // 0x28
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_3; // 0x30
	::System::Boolean Field_3_4; // 0x38
	::System::Boolean Field_3_5; // 0x39
	::RPG::GameCore::FateRinCardPileType Field_3_6; // 0x3A
	::System::UInt32 Field_3_7; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_90EA2BB24C67408F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_88B5F069AE1DF533(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_90EA2BB24C67408F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_90EA2BB24C67408F*&))((::PBYTE)hIl2Cpp + CLASS_3_90EA2BB24C67408F_METHOD_3_88B5F069AE1DF533_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_57A1D28F65E6799B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_90EA2BB24C67408F* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_90EA2BB24C67408F*))((::PBYTE)hIl2Cpp + CLASS_3_90EA2BB24C67408F_METHOD_3_57A1D28F65E6799B_OFFSET))(a1, a2);
	}
};

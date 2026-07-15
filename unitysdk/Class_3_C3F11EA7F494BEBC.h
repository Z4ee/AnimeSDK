#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCardPileType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_C3F11EA7F494BEBC_METHOD_3_5CD8C9940BD71092_OFFSET UNITYSDK_OFFSET(0x193BAC80)
#define CLASS_3_C3F11EA7F494BEBC_METHOD_3_88B5F069AE1DF533_OFFSET UNITYSDK_OFFSET(0x193BAC30)
#define CLASS_3_C3F11EA7F494BEBC__CTOR_OFFSET UNITYSDK_OFFSET(0x193BAC70)

inline static constexpr unsigned int Class_3_C3F11EA7F494BEBC_TypeDefinitionIndex = 19143;

class Class_3_C3F11EA7F494BEBC : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x18
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_1; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_2; // 0x28
	::RPG::GameCore::DynamicFloat* Field_3_3; // 0x30
	::RPG::GameCore::FateRinCardPileType Field_3_4; // 0x38
	::RPG::GameCore::FateRinCardPileType Field_3_5; // 0x3A
	::System::Boolean Field_3_6; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C3F11EA7F494BEBC__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_88B5F069AE1DF533(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C3F11EA7F494BEBC*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C3F11EA7F494BEBC*&))((::PBYTE)hIl2Cpp + CLASS_3_C3F11EA7F494BEBC_METHOD_3_88B5F069AE1DF533_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_5CD8C9940BD71092(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C3F11EA7F494BEBC* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C3F11EA7F494BEBC*))((::PBYTE)hIl2Cpp + CLASS_3_C3F11EA7F494BEBC_METHOD_3_5CD8C9940BD71092_OFFSET))(a1, a2);
	}
};

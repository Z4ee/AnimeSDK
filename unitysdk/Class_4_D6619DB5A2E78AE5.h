#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCardCasterSource.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_D6619DB5A2E78AE5_METHOD_4_01AD6E2CA9B55A57_OFFSET UNITYSDK_OFFSET(0x1B56EF30)
#define CLASS_4_D6619DB5A2E78AE5_METHOD_4_657D584BE35E89A2_OFFSET UNITYSDK_OFFSET(0x1B56F150)
#define CLASS_4_D6619DB5A2E78AE5_METHOD_4_73F0031E4983E886_OFFSET UNITYSDK_OFFSET(0x1B56EF70)
#define CLASS_4_D6619DB5A2E78AE5_METHOD_4_998FE0E79A92DBE5_OFFSET UNITYSDK_OFFSET(0x1B56F120)
#define CLASS_4_D6619DB5A2E78AE5__CTOR_OFFSET UNITYSDK_OFFSET(0x1B56EF60)

inline static constexpr unsigned int Class_4_D6619DB5A2E78AE5_TypeDefinitionIndex = 19138;

class Class_4_D6619DB5A2E78AE5 : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::FateRinCardCasterSource Field_4_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D6619DB5A2E78AE5__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_01AD6E2CA9B55A57(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_D6619DB5A2E78AE5*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_D6619DB5A2E78AE5*&))((::PBYTE)hIl2Cpp + CLASS_4_D6619DB5A2E78AE5_METHOD_4_01AD6E2CA9B55A57_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_73F0031E4983E886(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_D6619DB5A2E78AE5* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_D6619DB5A2E78AE5*))((::PBYTE)hIl2Cpp + CLASS_4_D6619DB5A2E78AE5_METHOD_4_73F0031E4983E886_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_998FE0E79A92DBE5(::SimpleJSON::JSONNode* a1, ::Class_4_D6619DB5A2E78AE5*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_D6619DB5A2E78AE5*&))((::PBYTE)hIl2Cpp + CLASS_4_D6619DB5A2E78AE5_METHOD_4_998FE0E79A92DBE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_657D584BE35E89A2(::SimpleJSON::JSONNode* a1, ::Class_4_D6619DB5A2E78AE5* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_D6619DB5A2E78AE5*))((::PBYTE)hIl2Cpp + CLASS_4_D6619DB5A2E78AE5_METHOD_4_657D584BE35E89A2_OFFSET))(a1, a2);
	}
};

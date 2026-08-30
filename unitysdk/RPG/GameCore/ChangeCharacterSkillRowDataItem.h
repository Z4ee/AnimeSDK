#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHANGECHARACTERSKILLROWDATAITEM_METHOD_2_DF9DDBA5DDBBA054_OFFSET UNITYSDK_OFFSET(0x1D116CB0)
#define RPG_GAMECORE_CHANGECHARACTERSKILLROWDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D116F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeCharacterSkillRowDataItem_TypeDefinitionIndex = 23404;

	class ChangeCharacterSkillRowDataItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* TriggerKey; // 0x10
		::RPG::GameCore::AttackDamageType DamageType; // 0x18
		::RPG::GameCore::DynamicFloat* SPNeedSet; // 0x20
		::RPG::GameCore::DynamicFloat* SPNeedAdd; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::DynamicFloat*>* ParamList; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::DynamicFloat*>* SimpleParamList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERSKILLROWDATAITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DF9DDBA5DDBBA054(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeCharacterSkillRowDataItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeCharacterSkillRowDataItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERSKILLROWDATAITEM_METHOD_2_DF9DDBA5DDBBA054_OFFSET))(a1, a2);
		}
	};
}

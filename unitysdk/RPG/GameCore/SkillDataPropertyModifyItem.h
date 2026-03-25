#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SkillPropertyModifyType.h"
#include "unitysdk/RPG/GameCore/SkillPropertyType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_SKILLDATAPROPERTYMODIFYITEM_METHOD_2_D12DABBD4987F806_OFFSET UNITYSDK_OFFSET(0x1770E630)
#define RPG_GAMECORE_SKILLDATAPROPERTYMODIFYITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1770E820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillDataPropertyModifyItem_TypeDefinitionIndex = 21788;

	class SkillDataPropertyModifyItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::SkillPropertyType PropertyType; // 0x10
		::RPG::GameCore::SkillPropertyModifyType OperatorType; // 0x14
		::RPG::GameCore::DynamicFloat* Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATAPROPERTYMODIFYITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D12DABBD4987F806(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SkillDataPropertyModifyItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SkillDataPropertyModifyItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLDATAPROPERTYMODIFYITEM_METHOD_2_D12DABBD4987F806_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREGROUPSTATE_METHOD_4_8B9CCD7A6DF2067C_OFFSET UNITYSDK_OFFSET(0x19516E70)
#define RPG_GAMECORE_BYCOMPAREGROUPSTATE_METHOD_4_C93AAE7418A6A698_OFFSET UNITYSDK_OFFSET(0x19516D90)
#define RPG_GAMECORE_BYCOMPAREGROUPSTATE_METHOD_4_D5D3F36C45379070_OFFSET UNITYSDK_OFFSET(0x195170B0)
#define RPG_GAMECORE_BYCOMPAREGROUPSTATE_METHOD_4_F2523DB02C3430ED_OFFSET UNITYSDK_OFFSET(0x19517030)
#define RPG_GAMECORE_BYCOMPAREGROUPSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19516E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareGroupState_TypeDefinitionIndex = 20909;

	class ByCompareGroupState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType EquationType; // 0x20
		::System::UInt32 Value; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C93AAE7418A6A698(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareGroupState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareGroupState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPSTATE_METHOD_4_C93AAE7418A6A698_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8B9CCD7A6DF2067C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareGroupState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareGroupState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPSTATE_METHOD_4_8B9CCD7A6DF2067C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F2523DB02C3430ED(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGroupState*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGroupState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPSTATE_METHOD_4_F2523DB02C3430ED_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D5D3F36C45379070(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareGroupState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareGroupState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPSTATE_METHOD_4_D5D3F36C45379070_OFFSET))(a1, a2);
		}
	};
}

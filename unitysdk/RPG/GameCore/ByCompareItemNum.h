#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ByCompareItemPair; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREITEMNUM_METHOD_4_14DAACB86A434C0F_OFFSET UNITYSDK_OFFSET(0x1D4B8B80)
#define RPG_GAMECORE_BYCOMPAREITEMNUM_METHOD_4_88E007C8F7AF349D_OFFSET UNITYSDK_OFFSET(0x1D4B8D80)
#define RPG_GAMECORE_BYCOMPAREITEMNUM_METHOD_4_8C33D2099279797E_OFFSET UNITYSDK_OFFSET(0x1D4B8BC0)
#define RPG_GAMECORE_BYCOMPAREITEMNUM_METHOD_4_AE8E839FA7965E6A_OFFSET UNITYSDK_OFFSET(0x1D4B8DB0)
#define RPG_GAMECORE_BYCOMPAREITEMNUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B8BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareItemNum_TypeDefinitionIndex = 21093;

	class ByCompareItemNum : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ByCompareItemPair*>* ItemPair; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREITEMNUM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_14DAACB86A434C0F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareItemNum*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareItemNum*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREITEMNUM_METHOD_4_14DAACB86A434C0F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8C33D2099279797E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareItemNum* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareItemNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREITEMNUM_METHOD_4_8C33D2099279797E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_88E007C8F7AF349D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareItemNum*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareItemNum*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREITEMNUM_METHOD_4_88E007C8F7AF349D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AE8E839FA7965E6A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareItemNum* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareItemNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREITEMNUM_METHOD_4_AE8E839FA7965E6A_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYANY_METHOD_4_1623A88B4BD17BFF_OFFSET UNITYSDK_OFFSET(0x194F3450)
#define RPG_GAMECORE_BYANY_METHOD_4_D1BE8A9D7879DA85_OFFSET UNITYSDK_OFFSET(0x194F3170)
#define RPG_GAMECORE_BYANY_METHOD_4_EEA3E9793C21275B_OFFSET UNITYSDK_OFFSET(0x194F3240)
#define RPG_GAMECORE_BYANY_METHOD_4_FE98CF8022B63278_OFFSET UNITYSDK_OFFSET(0x194F33D0)
#define RPG_GAMECORE_BYANY__CTOR_OFFSET UNITYSDK_OFFSET(0x194F31F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByAny_TypeDefinitionIndex = 22491;

	class ByAny : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PredicateConfig*>* PredicateList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D1BE8A9D7879DA85(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAny*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAny*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANY_METHOD_4_D1BE8A9D7879DA85_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EEA3E9793C21275B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAny* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAny*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANY_METHOD_4_EEA3E9793C21275B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FE98CF8022B63278(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAny*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAny*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANY_METHOD_4_FE98CF8022B63278_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1623A88B4BD17BFF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAny* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAny*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANY_METHOD_4_1623A88B4BD17BFF_OFFSET))(a1, a2);
		}
	};
}

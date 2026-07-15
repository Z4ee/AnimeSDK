#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYANY_METHOD_4_39526544828FD73E_OFFSET UNITYSDK_OFFSET(0x19CBB790)
#define RPG_GAMECORE_BYANY_METHOD_4_A40E3F1972B18F71_OFFSET UNITYSDK_OFFSET(0x19CBB760)
#define RPG_GAMECORE_BYANY_METHOD_4_ECEC94103E835CE2_OFFSET UNITYSDK_OFFSET(0x19CBB590)
#define RPG_GAMECORE_BYANY_METHOD_4_EEA3E9793C21275B_OFFSET UNITYSDK_OFFSET(0x19CBB5D0)
#define RPG_GAMECORE_BYANY__CTOR_OFFSET UNITYSDK_OFFSET(0x19CBB5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByAny_TypeDefinitionIndex = 22941;

	class ByAny : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PredicateConfig*>* PredicateList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_ECEC94103E835CE2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAny*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAny*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANY_METHOD_4_ECEC94103E835CE2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EEA3E9793C21275B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAny* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAny*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANY_METHOD_4_EEA3E9793C21275B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A40E3F1972B18F71(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAny*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAny*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANY_METHOD_4_A40E3F1972B18F71_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_39526544828FD73E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAny* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAny*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANY_METHOD_4_39526544828FD73E_OFFSET))(a1, a2);
		}
	};
}

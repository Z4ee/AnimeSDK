#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYPAMONLINEFIRST_METHOD_4_38196AEB6C135E4C_OFFSET UNITYSDK_OFFSET(0x19578C20)
#define RPG_GAMECORE_BYPAMONLINEFIRST_METHOD_4_AE62F6FE5F2BD499_OFFSET UNITYSDK_OFFSET(0x19578990)
#define RPG_GAMECORE_BYPAMONLINEFIRST_METHOD_4_E6F81E5F9C289294_OFFSET UNITYSDK_OFFSET(0x19578BA0)
#define RPG_GAMECORE_BYPAMONLINEFIRST_METHOD_4_EA651D880F5B1E43_OFFSET UNITYSDK_OFFSET(0x19578A60)
#define RPG_GAMECORE_BYPAMONLINEFIRST__CTOR_OFFSET UNITYSDK_OFFSET(0x19578A10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPamOnlineFirst_TypeDefinitionIndex = 18885;

	class ByPamOnlineFirst : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMONLINEFIRST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AE62F6FE5F2BD499(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPamOnlineFirst*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPamOnlineFirst*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMONLINEFIRST_METHOD_4_AE62F6FE5F2BD499_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EA651D880F5B1E43(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPamOnlineFirst* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPamOnlineFirst*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMONLINEFIRST_METHOD_4_EA651D880F5B1E43_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E6F81E5F9C289294(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamOnlineFirst*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamOnlineFirst*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMONLINEFIRST_METHOD_4_E6F81E5F9C289294_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_38196AEB6C135E4C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamOnlineFirst* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamOnlineFirst*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMONLINEFIRST_METHOD_4_38196AEB6C135E4C_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYPAMONLINEFIRST_METHOD_4_13DF4C4C98949419_OFFSET UNITYSDK_OFFSET(0x1B2B2190)
#define RPG_GAMECORE_BYPAMONLINEFIRST_METHOD_4_80CB99BEB3FEBD50_OFFSET UNITYSDK_OFFSET(0x1B2B21C0)
#define RPG_GAMECORE_BYPAMONLINEFIRST_METHOD_4_999AE840531F2730_OFFSET UNITYSDK_OFFSET(0x1B2B2010)
#define RPG_GAMECORE_BYPAMONLINEFIRST_METHOD_4_EA651D880F5B1E43_OFFSET UNITYSDK_OFFSET(0x1B2B2050)
#define RPG_GAMECORE_BYPAMONLINEFIRST__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2B2040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPamOnlineFirst_TypeDefinitionIndex = 19235;

	class ByPamOnlineFirst : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMONLINEFIRST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_999AE840531F2730(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPamOnlineFirst*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPamOnlineFirst*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMONLINEFIRST_METHOD_4_999AE840531F2730_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EA651D880F5B1E43(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPamOnlineFirst* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPamOnlineFirst*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMONLINEFIRST_METHOD_4_EA651D880F5B1E43_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_13DF4C4C98949419(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamOnlineFirst*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamOnlineFirst*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMONLINEFIRST_METHOD_4_13DF4C4C98949419_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_80CB99BEB3FEBD50(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamOnlineFirst* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamOnlineFirst*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMONLINEFIRST_METHOD_4_80CB99BEB3FEBD50_OFFSET))(a1, a2);
		}
	};
}

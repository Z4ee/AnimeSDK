#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYONHIT_METHOD_4_5917E1D0D70BF614_OFFSET UNITYSDK_OFFSET(0x19C15C40)
#define RPG_GAMECORE_ST_BYONHIT_METHOD_4_7D003AD597903531_OFFSET UNITYSDK_OFFSET(0x19C15E50)
#define RPG_GAMECORE_ST_BYONHIT_METHOD_4_EDD4C80B5F9B74F5_OFFSET UNITYSDK_OFFSET(0x19C15ED0)
#define RPG_GAMECORE_ST_BYONHIT_METHOD_4_EDE8AD51B505A71E_OFFSET UNITYSDK_OFFSET(0x19C15D10)
#define RPG_GAMECORE_ST_BYONHIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19C15CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByOnHit_TypeDefinitionIndex = 18964;

	class ST_ByOnHit : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYONHIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5917E1D0D70BF614(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByOnHit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByOnHit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYONHIT_METHOD_4_5917E1D0D70BF614_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EDE8AD51B505A71E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByOnHit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByOnHit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYONHIT_METHOD_4_EDE8AD51B505A71E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7D003AD597903531(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByOnHit*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByOnHit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYONHIT_METHOD_4_7D003AD597903531_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EDD4C80B5F9B74F5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByOnHit* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByOnHit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYONHIT_METHOD_4_EDD4C80B5F9B74F5_OFFSET))(a1, a2);
		}
	};
}

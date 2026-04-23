#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class Effect_OracleOutlineBehavior; }
namespace RPG::Client::Prop { class OraclePuzzleItem; }
namespace System { class String; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_EFFECT_ORACLEOUTLINEMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xA1E80F0)
#define RPG_CLIENT_EFFECT_ORACLEOUTLINEMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xA1E8140)
#define RPG_CLIENT_EFFECT_ORACLEOUTLINEMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xA1E8160)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_OracleOutlineMonoPlugin_TypeDefinitionIndex = 65005;

	class Effect_OracleOutlineMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::Effect_OracleOutlineBehavior*>
	{
	public:
		::System::Int32 ExampleProperty; // 0x30
		::RPG::Client::Prop::OraclePuzzleItem* target; // 0x38
		::System::Int32 cutSlice; // 0x40
		::UnityEngine::Material* mat; // 0x48
		::System::Single outlineWidth; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ORACLEOUTLINEMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ORACLEOUTLINEMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ORACLEOUTLINEMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client { class AssemNPC; }
namespace RPG::Client { class IdentityData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_ASSEMNPCCONFIG_METHOD_3_2C59D1D0CBDC6514_OFFSET UNITYSDK_OFFSET(0x90DA660)
#define RPG_CLIENT_ASSEMNPCCONFIG_METHOD_3_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x90DA900)
#define RPG_CLIENT_ASSEMNPCCONFIG_METHOD_3_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x90D9680)
#define RPG_CLIENT_ASSEMNPCCONFIG_METHOD_3_758732BD37F8618C_OFFSET UNITYSDK_OFFSET(0x90DA440)
#define RPG_CLIENT_ASSEMNPCCONFIG_METHOD_3_AD319275F843656C_OFFSET UNITYSDK_OFFSET(0x90D9FC0)
#define RPG_CLIENT_ASSEMNPCCONFIG_METHOD_3_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x90D8E10)
#define RPG_CLIENT_ASSEMNPCCONFIG_METHOD_3_E99B65C7129DD63C_OFFSET UNITYSDK_OFFSET(0x90DA2C0)
#define RPG_CLIENT_ASSEMNPCCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x90DA9A0)

namespace RPG::Client
{
	inline static constexpr unsigned int AssemNPCConfig_TypeDefinitionIndex = 48620;

	class AssemNPCConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IdentityData*>* IdentityData; // 0x18
		::UnityEngine::AnimationCurve* EmittrRatioCurve; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::RPG::Client::AssemNPC*>*>* AssemNpcFeatureDic; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_E876C8B6D3B840A6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCONFIG_METHOD_3_E876C8B6D3B840A6_OFFSET))(this);
		}

		::System::Void Method_3_33E2FA8E6403B93D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCONFIG_METHOD_3_33E2FA8E6403B93D_OFFSET))(this);
		}

		::System::Void Method_3_AD319275F843656C(::System::String* a1, ::RPG::Client::AssemNPC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::AssemNPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCONFIG_METHOD_3_AD319275F843656C_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_3_E99B65C7129DD63C(::System::String* a1, ::System::String* a2, ::RPG::Client::AssemNPC* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::Client::AssemNPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCONFIG_METHOD_3_E99B65C7129DD63C_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_758732BD37F8618C(::System::String* a1, ::RPG::Client::AssemNPC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::AssemNPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCONFIG_METHOD_3_758732BD37F8618C_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_3_2C59D1D0CBDC6514(::System::String* a1, ::System::String* a2, ::RPG::Client::AssemNPC* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::Client::AssemNPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCONFIG_METHOD_3_2C59D1D0CBDC6514_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCONFIG_METHOD_3_30D1209326FA87FC_OFFSET))(this);
		}
	};
}

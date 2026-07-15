#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client { class AssemNPC; }
namespace RPG::Client { class IdentityData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_ASSEMNPCCONFIG_METHOD_3_2C59D1D0CBDC6514_OFFSET UNITYSDK_OFFSET(0x19B30B80)
#define RPG_CLIENT_ASSEMNPCCONFIG_METHOD_3_758732BD37F8618C_OFFSET UNITYSDK_OFFSET(0x19B30950)
#define RPG_CLIENT_ASSEMNPCCONFIG_METHOD_3_8217D0BE55D652BA_OFFSET UNITYSDK_OFFSET(0x19B30340)
#define RPG_CLIENT_ASSEMNPCCONFIG_METHOD_3_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x19B30E50)
#define RPG_CLIENT_ASSEMNPCCONFIG_METHOD_3_A74BD9120F7FD2AB_OFFSET UNITYSDK_OFFSET(0x19B30760)
#define RPG_CLIENT_ASSEMNPCCONFIG_METHOD_3_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0x19B2FA50)
#define RPG_CLIENT_ASSEMNPCCONFIG_METHOD_3_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x19B2F3B0)
#define RPG_CLIENT_ASSEMNPCCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B30EE0)

namespace RPG::Client
{
	inline static constexpr unsigned int AssemNPCConfig_TypeDefinitionIndex = 57343;

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

		::System::Void Method_3_EAD10B3E55E2C4C5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCONFIG_METHOD_3_EAD10B3E55E2C4C5_OFFSET))(this);
		}

		::System::Void Method_3_DB67EEFB041425EC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCONFIG_METHOD_3_DB67EEFB041425EC_OFFSET))(this);
		}

		::System::Void Method_3_8217D0BE55D652BA(::System::String* a1, ::RPG::Client::AssemNPC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::AssemNPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCONFIG_METHOD_3_8217D0BE55D652BA_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_3_A74BD9120F7FD2AB(::System::String* a1, ::System::String* a2, ::RPG::Client::AssemNPC* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::Client::AssemNPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCONFIG_METHOD_3_A74BD9120F7FD2AB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_758732BD37F8618C(::System::String* a1, ::RPG::Client::AssemNPC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::AssemNPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCONFIG_METHOD_3_758732BD37F8618C_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_3_2C59D1D0CBDC6514(::System::String* a1, ::System::String* a2, ::RPG::Client::AssemNPC* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::Client::AssemNPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCONFIG_METHOD_3_2C59D1D0CBDC6514_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_89D1F247B9D324EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPCCONFIG_METHOD_3_89D1F247B9D324EE_OFFSET))(this);
		}
	};
}

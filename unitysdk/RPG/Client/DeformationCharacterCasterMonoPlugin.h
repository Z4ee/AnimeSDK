#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class DeformationCharacterCasterBehavior; }
namespace RPG::Client { class DeformationCharacterCasterMonoPlugin_DeformationCasterTransform; }
namespace RPG::Client { class DeformationCharacterCasterMonoPlugin_RegisteredCasterInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERMONOPLUGIN_BIND_OFFSET UNITYSDK_OFFSET(0x192E4000)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERMONOPLUGIN_GET_REGISTEREDCASTERINFOS_OFFSET UNITYSDK_OFFSET(0x192E40E0)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERMONOPLUGIN_UNBIND_OFFSET UNITYSDK_OFFSET(0x192E4080)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x192E40F0)

namespace RPG::Client
{
	inline static constexpr unsigned int DeformationCharacterCasterMonoPlugin_TypeDefinitionIndex = 70233;

	class DeformationCharacterCasterMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::DeformationCharacterCasterBehavior*>
	{
	public:
		::System::Boolean OverrideAutoBind; // 0x30
		::System::String* BoneName; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::DeformationCharacterCasterMonoPlugin_DeformationCasterTransform*>* DeformationCasterList; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::DeformationCharacterCasterMonoPlugin_RegisteredCasterInfo*>* _RegisteredCasterInfos_k__BackingField; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void Bind(::UnityEngine::GameObject* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERMONOPLUGIN_BIND_OFFSET))(this, a1, a2);
		}

		::System::Void Unbind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERMONOPLUGIN_UNBIND_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DeformationCharacterCasterMonoPlugin_RegisteredCasterInfo*>* get_RegisteredCasterInfos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DeformationCharacterCasterMonoPlugin_RegisteredCasterInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERMONOPLUGIN_GET_REGISTEREDCASTERINFOS_OFFSET))(this);
		}
	};
}

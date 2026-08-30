#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_MONOEFFECTPLUGINSHOWNUMBER_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7C8BD0)
#define RPG_CLIENT_MONOEFFECTPLUGINSHOWNUMBER_METHOD_6_86889F095D50CF32_OFFSET UNITYSDK_OFFSET(0xD7C8880)
#define RPG_CLIENT_MONOEFFECTPLUGINSHOWNUMBER_METHOD_6_EA672F77F1086A27_OFFSET UNITYSDK_OFFSET(0xD7C8D50)
#define RPG_CLIENT_MONOEFFECTPLUGINSHOWNUMBER_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7C7F50)
#define RPG_CLIENT_MONOEFFECTPLUGINSHOWNUMBER__CTOR_OFFSET UNITYSDK_OFFSET(0xD7C8DE0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginShowNumber_TypeDefinitionIndex = 70075;

	class MonoEffectPluginShowNumber : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::System::String* DynamicValueName; // 0x28
		::UnityEngine::GameObject* OBJFPKGDNKG; // 0x30
		::UnityEngine::GameObject* BIMMKGAAKFJ; // 0x38
		::UnityEngine::GameObject* BHIHBEHCNBN; // 0x40
		::UnityEngine::ParticleSystem* KPNJFKIALJC; // 0x48
		::UnityEngine::ParticleSystem* BLDCAHDJGNA; // 0x50
		::System::UInt32 FLPHNONEHNE; // 0x58
		::System::UInt32 KDKJHGLKGPK; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSHOWNUMBER__CTOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSHOWNUMBER_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSHOWNUMBER_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void Method_6_EA672F77F1086A27(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSHOWNUMBER_METHOD_6_EA672F77F1086A27_OFFSET))(this, a1);
		}

		::System::Void Method_6_86889F095D50CF32(::RPG::GameCore::StringHash a1, ::System::Nullable_1<::RPG::GameCore::FixPoint> a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSHOWNUMBER_METHOD_6_86889F095D50CF32_OFFSET))(this, a1, a2, a3);
		}
	};
}

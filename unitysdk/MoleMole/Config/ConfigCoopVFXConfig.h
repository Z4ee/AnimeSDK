#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_CONFIG_CONFIGCOOPVFXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x139A0BE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCoopVFXConfig_TypeDefinitionIndex = 42078;

	class ConfigCoopVFXConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::String*>*>* CoopEffectsWithAvatarIDWhiteList; // 0x58
		::System::Collections::Generic::HashSet_1<::System::String*>* CoopEffectWhiteList; // 0x60
		::System::Collections::Generic::HashSet_1<::System::String*>* CoopScreenEffectWhiteList; // 0x68
		::System::Collections::Generic::HashSet_1<::System::String*>* CoopMaterialPropWhiteList; // 0x70
		::System::Collections::Generic::HashSet_1<::System::String*>* CoopEffectBlackListWithSpectator; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOOPVFXCONFIG__CTOR_OFFSET))(this);
		}
	};
}

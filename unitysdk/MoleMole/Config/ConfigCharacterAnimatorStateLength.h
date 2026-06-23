#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigBranchCharacterAnimatorStateLength; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGCHARACTERANIMATORSTATELENGTH_GET_BRANCHSTATELENGTHCONFIG_OFFSET UNITYSDK_OFFSET(0x1A3411C0)
#define MOLEMOLE_CONFIG_CONFIGCHARACTERANIMATORSTATELENGTH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3413D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCharacterAnimatorStateLength_TypeDefinitionIndex = 70015;

	class ConfigCharacterAnimatorStateLength : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>* StateLengthDic; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>* StateNameDic; // 0x60
		::System::String* BranchStateLengthAssetPath; // 0x68
		::MoleMole::Config::ConfigBranchCharacterAnimatorStateLength* _branchStateLengthConfig; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHARACTERANIMATORSTATELENGTH__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::ConfigBranchCharacterAnimatorStateLength* get_BranchStateLengthConfig()
		{
			return ((::MoleMole::Config::ConfigBranchCharacterAnimatorStateLength*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHARACTERANIMATORSTATELENGTH_GET_BRANCHSTATELENGTHCONFIG_OFFSET))(this);
		}
	};
}

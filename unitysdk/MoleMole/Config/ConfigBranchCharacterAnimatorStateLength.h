#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGBRANCHCHARACTERANIMATORSTATELENGTH__CTOR_OFFSET UNITYSDK_OFFSET(0x19297C70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigBranchCharacterAnimatorStateLength_TypeDefinitionIndex = 66022;

	class ConfigBranchCharacterAnimatorStateLength : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>*>* StateLengthDic; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBRANCHCHARACTERANIMATORSTATELENGTH__CTOR_OFFSET))(this);
		}
	};
}

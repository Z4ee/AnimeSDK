#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGAVATARANIMATORSTATEFRAMELENDIC__CTOR_OFFSET UNITYSDK_OFFSET(0xED0FD90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAvatarAnimatorStateFrameLenDic_TypeDefinitionIndex = 77360;

	class ConfigAvatarAnimatorStateFrameLenDic : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>*>* AvatarStateLengthDic; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>*>* AvatarStateNameDic; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAVATARANIMATORSTATEFRAMELENDIC__CTOR_OFFSET))(this);
		}
	};
}

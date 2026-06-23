#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/EntityType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_CONFIG_CONFIGANIMATORSTATEFRAMELENDIC_CLEAR_OFFSET UNITYSDK_OFFSET(0x1270D9C0)
#define MOLEMOLE_CONFIG_CONFIGANIMATORSTATEFRAMELENDIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1270DA60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAnimatorStateFrameLenDic_TypeDefinitionIndex = 61605;

	class ConfigAnimatorStateFrameLenDic : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::MoleMole::Config::EntityType>*>* Config2Type; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* Config2ID; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*>* Config2CodeName; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>* FrameLenDic; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSTATEFRAMELENDIC__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSTATEFRAMELENDIC_CLEAR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGANIMATORSHORTHASHNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x16A82170)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAnimatorShortHashName_TypeDefinitionIndex = 73223;

	class ConfigAnimatorShortHashName : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* ShortHashToNameDic; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSHORTHASHNAME__CTOR_OFFSET))(this);
		}
	};
}

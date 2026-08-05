#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class AllEffectParam; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGGALGAMEEFFECTDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B805BD0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigGalgameEffectDictionary_TypeDefinitionIndex = 77186;

	class ConfigGalgameEffectDictionary : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::AllEffectParam*>* configGalgameEffectDic; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMEEFFECTDICTIONARY__CTOR_OFFSET))(this);
		}
	};
}

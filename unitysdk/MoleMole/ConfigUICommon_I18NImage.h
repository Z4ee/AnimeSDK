#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/I18nImageCollection.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGUICOMMON_I18NIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x190D3E70)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_I18NImage_TypeDefinitionIndex = 78362;

	class ConfigUICommon_I18NImage : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::I18nImageCollection>* I18NImageCollections; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_I18NIMAGE__CTOR_OFFSET))(this);
		}
	};
}

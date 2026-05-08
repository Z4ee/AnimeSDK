#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class ConfigUILightParam; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGUILIGHT_GETPARAMBYKEY_OFFSET UNITYSDK_OFFSET(0xFB17D50)
#define MOLEMOLE_CONFIGUILIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0xFB17ED0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUILight_TypeDefinitionIndex = 78077;

	class ConfigUILight : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::ConfigUILightParam*>* Params; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUILIGHT__CTOR_OFFSET))(this);
		}

		::MoleMole::ConfigUILightParam* GetParamByKey(::System::String* key)
		{
			return ((::MoleMole::ConfigUILightParam*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUILIGHT_GETPARAMBYKEY_OFFSET))(this, key);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIStorePageConfig; }
namespace System { class String; }

#define MOLEMOLE_CONFIGUISTORECAMERA_KEYVALUEINFO_STOREPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x15A07590)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIStoreCamera_KeyValueInfo_StorePage_TypeDefinitionIndex = 60003;

	class ConfigUIStoreCamera_KeyValueInfo_StorePage : public ::System::Object
	{
	public:
		::System::String* keyInst; // 0x10
		::MoleMole::UIStorePageConfig* valueInst; // 0x18

		::System::Void _ctor(::System::String* _keyInst, ::MoleMole::UIStorePageConfig* _valueInst)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::UIStorePageConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUISTORECAMERA_KEYVALUEINFO_STOREPAGE__CTOR_OFFSET))(this, _keyInst, _valueInst);
		}
	};
}

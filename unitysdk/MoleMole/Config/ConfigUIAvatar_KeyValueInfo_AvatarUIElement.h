#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIAvatar_ColorConfigs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGUIAVATAR_KEYVALUEINFO_AVATARUIELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x148765B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIAvatar_KeyValueInfo_AvatarUIElement_TypeDefinitionIndex = 46495;

	class ConfigUIAvatar_KeyValueInfo_AvatarUIElement : public ::System::Object
	{
	public:
		::System::Int32 keyInst; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigUIAvatar_ColorConfigs*>* valueInst; // 0x18

		::System::Void _ctor(::System::Int32 _keyInst, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigUIAvatar_ColorConfigs*>* _valueInst)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigUIAvatar_ColorConfigs*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIAVATAR_KEYVALUEINFO_AVATARUIELEMENT__CTOR_OFFSET))(this, _keyInst, _valueInst);
		}
	};
}

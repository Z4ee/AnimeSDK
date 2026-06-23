#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class AvatarUIElementColor; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGUIAVATAR_COLORCONFIGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA64D60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIAvatar_ColorConfigs_TypeDefinitionIndex = 48019;

	class ConfigUIAvatar_ColorConfigs : public ::System::Object
	{
	public:
		::System::String* keyInst; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::AvatarUIElementColor*>* colorList; // 0x18

		::System::Void _ctor(::System::String* _keyInst, ::System::Collections::Generic::List_1<::MoleMole::AvatarUIElementColor*>* _colorList)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::AvatarUIElementColor*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIAVATAR_COLORCONFIGS__CTOR_OFFSET))(this, _keyInst, _colorList);
		}
	};
}

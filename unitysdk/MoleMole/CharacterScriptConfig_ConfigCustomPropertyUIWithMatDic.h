#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CharacterScriptConfig_ConfigCustomPropertyUI.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUIWITHMATDIC__CTOR_OFFSET UNITYSDK_OFFSET(0x144C63A0)

namespace MoleMole
{
	inline static constexpr unsigned int CharacterScriptConfig_ConfigCustomPropertyUIWithMatDic_TypeDefinitionIndex = 72224;

	class CharacterScriptConfig_ConfigCustomPropertyUIWithMatDic : public ::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUI
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* MaterialPaths; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUIWITHMATDIC__CTOR_OFFSET))(this);
		}
	};
}

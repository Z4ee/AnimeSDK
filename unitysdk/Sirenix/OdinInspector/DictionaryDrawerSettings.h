#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/DictionaryDisplayOptions.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_DICTIONARYDRAWERSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E328A10)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int DictionaryDrawerSettings_TypeDefinitionIndex = 7274;

	class DictionaryDrawerSettings : public ::System::Attribute
	{
	public:
		::System::String* ExpandedKey; // 0x10
		::System::String* ValueLabel; // 0x18
		::System::String* KeyLabel; // 0x20
		::System::Boolean IsReadOnly; // 0x28
		::System::Int32 ExpandedLevel; // 0x2C
		::Sirenix::OdinInspector::DictionaryDisplayOptions DisplayMode; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_DICTIONARYDRAWERSETTINGS__CTOR_OFFSET))(this);
		}
	};
}

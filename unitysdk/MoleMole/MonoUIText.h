#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_MONOUITEXT_GET_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x10819600)
#define MOLEMOLE_MONOUITEXT_MARKVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x10819620)
#define MOLEMOLE_MONOUITEXT_REINITFROMTEXT_OFFSET UNITYSDK_OFFSET(0x10819480)
#define MOLEMOLE_MONOUITEXT_SET_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x10819610)
#define MOLEMOLE_MONOUITEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x10819470)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIText_TypeDefinitionIndex = 67579;

	class MonoUIText : public ::System::Object
	{
	public:
		::System::Int32 fontSize; // 0x10
		::System::Boolean _valueChanged_k__BackingField; // 0x14

		::System::Void _ctor(::UnityEngine::UI::Text* text)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITEXT__CTOR_OFFSET))(this, text);
		}

		::System::Boolean get_valueChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITEXT_GET_VALUECHANGED_OFFSET))(this);
		}

		::System::Void set_valueChanged(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITEXT_SET_VALUECHANGED_OFFSET))(this, value);
		}

		::System::Boolean ReInitFromText(::UnityEngine::UI::Text* text)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITEXT_REINITFROMTEXT_OFFSET))(this, text);
		}

		::System::Void MarkValueChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUITEXT_MARKVALUECHANGE_OFFSET))(this);
		}
	};
}

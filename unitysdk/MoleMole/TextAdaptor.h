#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoUIAdaptor.h"

class Class_1_CF69D1566697178D;
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_TEXTADAPTOR_GET_ISCHANGED_OFFSET UNITYSDK_OFFSET(0x17DF2640)
#define MOLEMOLE_TEXTADAPTOR_SET_ISCHANGED_OFFSET UNITYSDK_OFFSET(0x17DF2660)
#define MOLEMOLE_TEXTADAPTOR_UPDATEPARAMS_OFFSET UNITYSDK_OFFSET(0x17DF2730)
#define MOLEMOLE_TEXTADAPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x17DF26C0)

namespace MoleMole
{
	inline static constexpr unsigned int TextAdaptor_TypeDefinitionIndex = 61032;

	class TextAdaptor : public ::MoleMole::MonoUIAdaptor
	{
	public:
		::Class_1_CF69D1566697178D* AdaptorText; // 0x10

		::System::Void _ctor(::UnityEngine::UI::Text* text)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTADAPTOR__CTOR_OFFSET))(this, text);
		}

		::System::Boolean get_IsChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTADAPTOR_GET_ISCHANGED_OFFSET))(this);
		}

		::System::Void set_IsChanged(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTADAPTOR_SET_ISCHANGED_OFFSET))(this, value);
		}

		::System::Void UpdateParams(::UnityEngine::UI::Text* text)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTADAPTOR_UPDATEPARAMS_OFFSET))(this, text);
		}
	};
}

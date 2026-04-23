#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace SRF::UI { class Style; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SRF_UI_STYLESHEET_GETSTYLE_OFFSET UNITYSDK_OFFSET(0x19EB1210)
#define SRF_UI_STYLESHEET__CTOR_OFFSET UNITYSDK_OFFSET(0x19EB14C0)

namespace SRF::UI
{
	inline static constexpr unsigned int StyleSheet_TypeDefinitionIndex = 33311;

	class StyleSheet : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* _keys; // 0x18
		::System::Collections::Generic::List_1<::SRF::UI::Style*>* _styles; // 0x20
		::SRF::UI::StyleSheet* Parent; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_STYLESHEET__CTOR_OFFSET))(this);
		}

		::SRF::UI::Style* GetStyle(::System::String* key, ::System::Boolean searchParent)
		{
			return ((::SRF::UI::Style*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRF_UI_STYLESHEET_GETSTYLE_OFFSET))(this, key, searchParent);
		}
	};
}

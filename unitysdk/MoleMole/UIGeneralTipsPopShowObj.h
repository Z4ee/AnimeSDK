#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_205B03D40B9BD873.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIGENERALTIPSPOPSHOWOBJ_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x185AA8B0)
#define MOLEMOLE_UIGENERALTIPSPOPSHOWOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x185AA840)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTipsPopShowObj_TypeDefinitionIndex = 65537;

	class UIGeneralTipsPopShowObj : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::String* title; // 0x28
		::System::Action* cancelClick; // 0x30
		::System::String* msg; // 0x38
		::System::Action* okClick; // 0x40
		::System::String* SourceTag; // 0x48

		::System::Void _ctor(::System::String* title, ::System::Action* okClick, ::Enum_3_205B03D40B9BD873 showPage, ::System::String* msg, ::System::String* sourceTag, ::System::Action* cancelClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*, ::Enum_3_205B03D40B9BD873, ::System::String*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPSHOWOBJ__CTOR_OFFSET))(this, title, okClick, showPage, msg, sourceTag, cancelClick);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPSHOWOBJ_ONPROCESS_OFFSET))(this);
		}
	};
}

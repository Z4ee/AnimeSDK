#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UILOGINMESSAGESPOPSHOWOBJ_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x17141D30)
#define MOLEMOLE_UILOGINMESSAGESPOPSHOWOBJ_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x17141DF0)
#define MOLEMOLE_UILOGINMESSAGESPOPSHOWOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17141D40)

namespace MoleMole
{
	inline static constexpr unsigned int UILoginMessagesPopShowObj_TypeDefinitionIndex = 71842;

	class UILoginMessagesPopShowObj : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Action* cancelBtnCb; // 0x28
		::System::Nullable_1<::Foundation::AssetPath> cancelBtnIcon; // 0x30
		::System::Action* okBtnCb; // 0x48
		::System::String* content; // 0x50
		::System::Nullable_1<::Foundation::AssetPath> okBtnIcon; // 0x58
		::System::String* title; // 0x70
		::System::String* okText; // 0x78
		::System::String* cancelText; // 0x80
		::System::Boolean hideCancel; // 0x88

		::System::Void _ctor(::System::String* title, ::System::String* content, ::System::Boolean hideCancel, ::System::String* okText, ::System::Action* okBtnCb, ::System::Nullable_1<::Foundation::AssetPath> okBtnIcon, ::System::String* cancelText, ::System::Action* cancelBtnCb, ::System::Nullable_1<::Foundation::AssetPath> cancelBtnIcon)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::String*, ::System::Action*, ::System::Nullable_1<::Foundation::AssetPath>, ::System::String*, ::System::Action*, ::System::Nullable_1<::Foundation::AssetPath>))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGESPOPSHOWOBJ__CTOR_OFFSET))(this, title, content, hideCancel, okText, okBtnCb, okBtnIcon, cancelText, cancelBtnCb, cancelBtnIcon);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGESPOPSHOWOBJ_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGESPOPSHOWOBJ_ONPROCESS_OFFSET))(this);
		}
	};
}

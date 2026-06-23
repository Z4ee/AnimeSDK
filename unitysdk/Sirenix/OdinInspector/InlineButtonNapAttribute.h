#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace UnityEngine { class Texture2D; }

#define SIRENIX_ODININSPECTOR_INLINEBUTTONNAPATTRIBUTE_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x1D90C8A0)
#define SIRENIX_ODININSPECTOR_INLINEBUTTONNAPATTRIBUTE_GET_IMAGE_OFFSET UNITYSDK_OFFSET(0x1D90C890)
#define SIRENIX_ODININSPECTOR_INLINEBUTTONNAPATTRIBUTE_GET_LABEL_OFFSET UNITYSDK_OFFSET(0x1D90C8B0)
#define SIRENIX_ODININSPECTOR_INLINEBUTTONNAPATTRIBUTE_GET_SHOWIF_OFFSET UNITYSDK_OFFSET(0x1D90C8F0)
#define SIRENIX_ODININSPECTOR_INLINEBUTTONNAPATTRIBUTE_GET_TOOLTIP_OFFSET UNITYSDK_OFFSET(0x1D90C8D0)
#define SIRENIX_ODININSPECTOR_INLINEBUTTONNAPATTRIBUTE_SET_LABEL_OFFSET UNITYSDK_OFFSET(0x1D90C8C0)
#define SIRENIX_ODININSPECTOR_INLINEBUTTONNAPATTRIBUTE_SET_SHOWIF_OFFSET UNITYSDK_OFFSET(0x1D90C900)
#define SIRENIX_ODININSPECTOR_INLINEBUTTONNAPATTRIBUTE_SET_TOOLTIP_OFFSET UNITYSDK_OFFSET(0x1D90C8E0)
#define SIRENIX_ODININSPECTOR_INLINEBUTTONNAPATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D90C920)
#define SIRENIX_ODININSPECTOR_INLINEBUTTONNAPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D90C910)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int InlineButtonNapAttribute_TypeDefinitionIndex = 7833;

	class InlineButtonNapAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Label_k__BackingField; // 0x10
		::System::String* _Action_k__BackingField; // 0x18
		::UnityEngine::Texture2D* _Image_k__BackingField; // 0x20
		::System::String* _ShowIf_k__BackingField; // 0x28
		::System::String* _Tooltip_k__BackingField; // 0x30

		::System::Void _ctor(::System::String* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_INLINEBUTTONNAPATTRIBUTE__CTOR_OFFSET))(this, action);
		}

		::System::Void _ctor_1(::System::String* action, ::System::String* imagePath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_INLINEBUTTONNAPATTRIBUTE__CTOR_1_OFFSET))(this, action, imagePath);
		}

		::UnityEngine::Texture2D* get_Image()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_INLINEBUTTONNAPATTRIBUTE_GET_IMAGE_OFFSET))(this);
		}

		::System::String* get_Action()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_INLINEBUTTONNAPATTRIBUTE_GET_ACTION_OFFSET))(this);
		}

		::System::String* get_Label()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_INLINEBUTTONNAPATTRIBUTE_GET_LABEL_OFFSET))(this);
		}

		::System::Void set_Label(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_INLINEBUTTONNAPATTRIBUTE_SET_LABEL_OFFSET))(this, value);
		}

		::System::String* get_Tooltip()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_INLINEBUTTONNAPATTRIBUTE_GET_TOOLTIP_OFFSET))(this);
		}

		::System::Void set_Tooltip(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_INLINEBUTTONNAPATTRIBUTE_SET_TOOLTIP_OFFSET))(this, value);
		}

		::System::String* get_ShowIf()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_INLINEBUTTONNAPATTRIBUTE_GET_SHOWIF_OFFSET))(this);
		}

		::System::Void set_ShowIf(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_INLINEBUTTONNAPATTRIBUTE_SET_SHOWIF_OFFSET))(this, value);
		}
	};
}

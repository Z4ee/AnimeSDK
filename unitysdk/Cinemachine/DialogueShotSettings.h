#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/EditorViewportComposition.h"
#include "unitysdk/Cinemachine/ViewportComposition.h"
#include "unitysdk/System/ValueType.h"

#define CINEMACHINE_DIALOGUESHOTSETTINGS_GET_EDITORCOMPOSITIONS_OFFSET UNITYSDK_OFFSET(0x28E30)
#define CINEMACHINE_DIALOGUESHOTSETTINGS_METHOD_2_ACFE687AEF20661E_OFFSET UNITYSDK_OFFSET(0x855C0)
#define CINEMACHINE_DIALOGUESHOTSETTINGS_METHOD_2_CF7B7B17AFC7D53A_OFFSET UNITYSDK_OFFSET(0x85640)
#define CINEMACHINE_DIALOGUESHOTSETTINGS_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x855A0)
#define CINEMACHINE_DIALOGUESHOTSETTINGS_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x855B0)
#define CINEMACHINE_DIALOGUESHOTSETTINGS_SET_EDITORCOMPOSITIONS_OFFSET UNITYSDK_OFFSET(0x28E40)
#define CINEMACHINE_DIALOGUESHOTSETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0xA6E45F0)

namespace Cinemachine
{
	inline static constexpr unsigned int DialogueShotSettings_TypeDefinitionIndex = 40321;

	struct alignas(8) DialogueShotSettings
	{
		static ::Cinemachine::DialogueShotSettings* StaticGet_Default()
		{
			return (::Cinemachine::DialogueShotSettings*)Il2CppClass::FromTypeDefinitionIndex(DialogueShotSettings_TypeDefinitionIndex)->GetStaticField(0x25FF0);
		}
		::System::Single Yaw; // 0x10
		::Cinemachine::ViewportComposition Own; // 0x14
		::Cinemachine::ViewportComposition Aim; // 0x1C
		::Il2CppArray<::Cinemachine::EditorViewportComposition>* _EditorCompositions_k__BackingField; // 0x28

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_DIALOGUESHOTSETTINGS__CCTOR_OFFSET))();
		}

		::Il2CppArray<::Cinemachine::EditorViewportComposition>* get_EditorCompositions()
		{
			return ((::Il2CppArray<::Cinemachine::EditorViewportComposition>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_DIALOGUESHOTSETTINGS_GET_EDITORCOMPOSITIONS_OFFSET))(this);
		}

		::System::Void set_EditorCompositions(::Il2CppArray<::Cinemachine::EditorViewportComposition>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Cinemachine::EditorViewportComposition>*))((::PBYTE)hIl2Cpp + CINEMACHINE_DIALOGUESHOTSETTINGS_SET_EDITORCOMPOSITIONS_OFFSET))(this, value);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_DIALOGUESHOTSETTINGS_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_DIALOGUESHOTSETTINGS_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::Cinemachine::DialogueShotSettings Method_2_ACFE687AEF20661E()
		{
			return ((::Cinemachine::DialogueShotSettings(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_DIALOGUESHOTSETTINGS_METHOD_2_ACFE687AEF20661E_OFFSET))(this);
		}

		::System::Void Method_2_CF7B7B17AFC7D53A(::System::Int32 a1, ::Cinemachine::EditorViewportComposition a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Cinemachine::EditorViewportComposition))((::PBYTE)hIl2Cpp + CINEMACHINE_DIALOGUESHOTSETTINGS_METHOD_2_CF7B7B17AFC7D53A_OFFSET))(this, a1, a2);
		}
	};
}

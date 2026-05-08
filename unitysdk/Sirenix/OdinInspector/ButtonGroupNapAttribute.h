#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/ButtonGroupAttribute.h"

namespace System { class String; }
namespace UnityEngine { class GUILayoutOption; }

#define SIRENIX_ODININSPECTOR_BUTTONGROUPNAPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B76F050)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int ButtonGroupNapAttribute_TypeDefinitionIndex = 8106;

	class ButtonGroupNapAttribute : public ::Sirenix::OdinInspector::ButtonGroupAttribute
	{
	public:
		::Il2CppArray<::UnityEngine::GUILayoutOption*>* Options; // 0x30

		::System::Void _ctor(::System::String* group, ::System::Single order, ::System::Single width, ::System::Single minWidth, ::System::Single maxWidth, ::System::Single height, ::System::Single minHeight, ::System::Single maxHeight, ::System::Boolean expandWidth, ::System::Boolean expandHeight)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_BUTTONGROUPNAPATTRIBUTE__CTOR_OFFSET))(this, group, order, width, minWidth, maxWidth, height, minHeight, maxHeight, expandWidth, expandHeight);
		}
	};
}

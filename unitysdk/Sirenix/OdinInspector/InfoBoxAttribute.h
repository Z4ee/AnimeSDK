#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/InfoMessageType.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_INFOBOXATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E329510)
#define SIRENIX_ODININSPECTOR_INFOBOXATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E329500)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int InfoBoxAttribute_TypeDefinitionIndex = 7319;

	class InfoBoxAttribute : public ::System::Attribute
	{
	public:
		::System::String* Message; // 0x10
		::System::String* VisibleIf; // 0x18
		::System::Boolean ReplaceNoWrapSpaces; // 0x20
		::System::Boolean GUIAlwaysEnabled; // 0x21
		::Sirenix::OdinInspector::InfoMessageType InfoMessageType; // 0x24

		::System::Void _ctor(::System::String* message, ::Sirenix::OdinInspector::InfoMessageType infoMessageType, ::System::String* visibleIfMemberName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Sirenix::OdinInspector::InfoMessageType, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_INFOBOXATTRIBUTE__CTOR_OFFSET))(this, message, infoMessageType, visibleIfMemberName);
		}

		::System::Void _ctor_1(::System::String* message, ::System::String* visibleIfMemberName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_INFOBOXATTRIBUTE__CTOR_1_OFFSET))(this, message, visibleIfMemberName);
		}
	};
}

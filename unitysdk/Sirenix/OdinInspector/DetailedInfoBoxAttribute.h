#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/InfoMessageType.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_DETAILEDINFOBOXATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3289F0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int DetailedInfoBoxAttribute_TypeDefinitionIndex = 7273;

	class DetailedInfoBoxAttribute : public ::System::Attribute
	{
	public:
		::System::String* Message; // 0x10
		::System::String* Details; // 0x18
		::System::String* VisibleIf; // 0x20
		::System::Boolean ReplaceNoWrapSpaces; // 0x28
		::Sirenix::OdinInspector::InfoMessageType InfoMessageType; // 0x2C

		::System::Void _ctor(::System::String* message, ::System::String* details, ::Sirenix::OdinInspector::InfoMessageType infoMessageType, ::System::String* visibleIf)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Sirenix::OdinInspector::InfoMessageType, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_DETAILEDINFOBOXATTRIBUTE__CTOR_OFFSET))(this, message, details, infoMessageType, visibleIf);
		}
	};
}

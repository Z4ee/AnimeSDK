#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace Sirenix::OdinInspector { class CustomContextMenuAttribute; }
namespace System { class String; }

#define SIRENIX_ODININSPECTOR_COLLECTIONELEMENTCUSTOMCONTEXTMENUATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC9B040)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int CollectionElementCustomContextMenuAttribute_TypeDefinitionIndex = 7775;

	class CollectionElementCustomContextMenuAttribute : public ::System::Attribute
	{
	public:
		::Sirenix::OdinInspector::CustomContextMenuAttribute* Attribute; // 0x10

		::System::Void _ctor(::System::String* menuItem, ::System::String* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_COLLECTIONELEMENTCUSTOMCONTEXTMENUATTRIBUTE__CTOR_OFFSET))(this, menuItem, action);
		}
	};
}

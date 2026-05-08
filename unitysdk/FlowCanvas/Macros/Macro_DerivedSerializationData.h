#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ParadoxNotion { class DynamicParameterDefinition; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLOWCANVAS_MACROS_MACRO_DERIVEDSERIALIZATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4ABDF0)

namespace FlowCanvas::Macros
{
	inline static constexpr unsigned int Macro_DerivedSerializationData_TypeDefinitionIndex = 26773;

	class Macro_DerivedSerializationData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::ParadoxNotion::DynamicParameterDefinition*>* inputDefinitions; // 0x10
		::System::Collections::Generic::List_1<::ParadoxNotion::DynamicParameterDefinition*>* outputDefinitions; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRO_DERIVEDSERIALIZATIONDATA__CTOR_OFFSET))(this);
		}
	};
}

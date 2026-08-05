#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowNode; }
namespace FlowCanvas { class Port; }
namespace System { class String; }

#define FLOWCANVAS_FLOWNODE___C__DISPLAYCLASS78_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB22580)
#define FLOWCANVAS_FLOWNODE___C__DISPLAYCLASS78_0__DESERIALIZEINPUTPORTVALUES_B__0_OFFSET UNITYSDK_OFFSET(0x1DB22590)

namespace FlowCanvas
{
	inline static constexpr unsigned int FlowNode___c__DisplayClass78_0_TypeDefinitionIndex = 31247;

	class FlowNode___c__DisplayClass78_0 : public ::System::Object
	{
	public:
		::FlowCanvas::FlowNode* __4__this; // 0x10
		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*> pair; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE___C__DISPLAYCLASS78_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _DeserializeInputPortValues_b__0(::FlowCanvas::Port* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlowCanvas::Port*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE___C__DISPLAYCLASS78_0__DESERIALIZEINPUTPORTVALUES_B__0_OFFSET))(this, p);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class Port; }
namespace System { class String; }

#define FLOWCANVAS_FLOWNODE___C__DISPLAYCLASS68_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A292700)
#define FLOWCANVAS_FLOWNODE___C__DISPLAYCLASS68_0__REPLACEORREGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1A292710)

namespace FlowCanvas
{
	inline static constexpr unsigned int FlowNode___c__DisplayClass68_0_TypeDefinitionIndex = 27888;

	class FlowNode___c__DisplayClass68_0 : public ::System::Object
	{
	public:
		::System::Nullable_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::FlowCanvas::Port*>> pair; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE___C__DISPLAYCLASS68_0__CTOR_OFFSET))(this);
		}

		::System::Object* _ReplaceOrRegisterPorts_b__0()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE___C__DISPLAYCLASS68_0__REPLACEORREGISTERPORTS_B__0_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_6.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMESELECTSTRINGBYPLATFORM_INVOKE_OFFSET UNITYSDK_OFFSET(0x13A7FB60)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMESELECTSTRINGBYPLATFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x13A7FC70)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameSelectStringByPlatform_TypeDefinitionIndex = 79944;

	class HackerGameSelectStringByPlatform : public ::FlowCanvas::Nodes::CallableFunctionNode_6<::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMESELECTSTRINGBYPLATFORM__CTOR_OFFSET))(this);
		}

		::System::String* Invoke(::System::String* none, ::System::String* mobile, ::System::String* pc, ::System::String* console, ::System::String* mobileConsole)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMESELECTSTRINGBYPLATFORM_INVOKE_OFFSET))(this, none, mobile, pc, console, mobileConsole);
		}
	};
}

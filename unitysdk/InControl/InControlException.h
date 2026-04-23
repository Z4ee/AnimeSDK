#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define INCONTROL_INCONTROLEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17165C70)
#define INCONTROL_INCONTROLEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x17165CD0)
#define INCONTROL_INCONTROLEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17165C10)

namespace InControl
{
	inline static constexpr unsigned int InControlException_TypeDefinitionIndex = 37135;

	class InControlException : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::String* message, ::System::Exception* inner)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLEXCEPTION__CTOR_2_OFFSET))(this, message, inner);
		}
	};
}

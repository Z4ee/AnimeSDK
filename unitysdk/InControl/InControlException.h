#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define INCONTROL_INCONTROLEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18E7D530)
#define INCONTROL_INCONTROLEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18E7D590)
#define INCONTROL_INCONTROLEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18E7D4D0)

namespace InControl
{
	inline static constexpr unsigned int InControlException_TypeDefinitionIndex = 39534;

	class InControlException : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLEXCEPTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}
	};
}

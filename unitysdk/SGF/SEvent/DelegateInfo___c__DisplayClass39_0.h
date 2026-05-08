#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define SGF_SEVENT_DELEGATEINFO___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C011A50)
#define SGF_SEVENT_DELEGATEINFO___C__DISPLAYCLASS39_0__GUESSORIGINALTYPE_B__0_OFFSET UNITYSDK_OFFSET(0x1C011A60)

namespace SGF::SEvent
{
	inline static constexpr unsigned int DelegateInfo___c__DisplayClass39_0_TypeDefinitionIndex = 7714;

	class DelegateInfo___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::System::String* nameSpace; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEINFO___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GuessOriginalType_b__0(::System::Type* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SGF_SEVENT_DELEGATEINFO___C__DISPLAYCLASS39_0__GUESSORIGINALTYPE_B__0_OFFSET))(this, t);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace System { class String; }

#define NODECANVAS_DIALOGUETREES_STATEMENT___C__DISPLAYCLASS16_0__BLACKBOARDREPLACE_B__0_OFFSET UNITYSDK_OFFSET(0x1DFDD1E0)
#define NODECANVAS_DIALOGUETREES_STATEMENT___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFDD1D0)

namespace NodeCanvas::DialogueTrees
{
	inline static constexpr unsigned int Statement___c__DisplayClass16_0_TypeDefinitionIndex = 31177;

	class Statement___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::NodeCanvas::Framework::IBlackboard* bb; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_STATEMENT___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::String* _BlackboardReplace_b__0(::System::String* input)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_STATEMENT___C__DISPLAYCLASS16_0__BLACKBOARDREPLACE_B__0_OFFSET))(this, input);
		}
	};
}

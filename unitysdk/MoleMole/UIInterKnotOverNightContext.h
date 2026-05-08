#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_E342D954CB576697;
namespace MoleMole { class UIBaseController; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIINTERKNOTOVERNIGHTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x155F20F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotOverNightContext_TypeDefinitionIndex = 54809;

	class UIInterKnotOverNightContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UIBaseController* FromController; // 0x28
		::Class_3_E342D954CB576697* FirstPost; // 0x30
		::System::Action_1<::System::String*>* OnClose; // 0x38
		::System::Single FadeOut; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTOVERNIGHTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}

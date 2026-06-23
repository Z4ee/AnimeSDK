#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E9529ED64113E4E9;
namespace MoleMole { class UIActivityReturnPageController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18659D00)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__DISPLAYCLASS19_0__PLAYTRAILVIDEO_B__0_OFFSET UNITYSDK_OFFSET(0x18659D10)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__DISPLAYCLASS19_0__PLAYTRAILVIDEO_B__1_OFFSET UNITYSDK_OFFSET(0x18659D60)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityReturnPageController___c__DisplayClass19_0_TypeDefinitionIndex = 84843;

	class UIActivityReturnPageController___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::MoleMole::UIActivityReturnPageController* __4__this; // 0x10
		::System::Action_1<::Class_1_E9529ED64113E4E9*>* OnVideoFinished; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayTrailVideo_b__0(::Class_1_E9529ED64113E4E9* vp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__DISPLAYCLASS19_0__PLAYTRAILVIDEO_B__0_OFFSET))(this, vp);
		}

		::System::Void _PlayTrailVideo_b__1(::Class_1_E9529ED64113E4E9* vp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__DISPLAYCLASS19_0__PLAYTRAILVIDEO_B__1_OFFSET))(this, vp);
		}
	};
}

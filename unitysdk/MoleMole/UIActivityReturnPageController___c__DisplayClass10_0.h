#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E9529ED64113E4E9;
namespace MoleMole { class UIActivityReturnPageController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18943DD0)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__DISPLAYCLASS10_0__PLAYINTROVIDEO_B__0_OFFSET UNITYSDK_OFFSET(0x18943DE0)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__DISPLAYCLASS10_0__PLAYINTROVIDEO_B__1_OFFSET UNITYSDK_OFFSET(0x18943E30)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityReturnPageController___c__DisplayClass10_0_TypeDefinitionIndex = 73191;

	class UIActivityReturnPageController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::Action_1<::Class_1_E9529ED64113E4E9*>* OnVideoFinished; // 0x10
		::MoleMole::UIActivityReturnPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayIntroVideo_b__0(::Class_1_E9529ED64113E4E9* vp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__DISPLAYCLASS10_0__PLAYINTROVIDEO_B__0_OFFSET))(this, vp);
		}

		::System::Void _PlayIntroVideo_b__1(::Class_1_E9529ED64113E4E9* vp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__DISPLAYCLASS10_0__PLAYINTROVIDEO_B__1_OFFSET))(this, vp);
		}
	};
}

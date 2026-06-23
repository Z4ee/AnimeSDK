#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_0_16E4307DCC419505_35;
class Class_3_025FF4981524A424_255;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12E6C6B0)
#define FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__DISPLAYCLASS2_0__REQUESTBIGSCENEDUNGEONEND_B__0_OFFSET UNITYSDK_OFFSET(0x12E6C6C0)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int ExitDonjonUtils___c__DisplayClass2_0_TypeDefinitionIndex = 64848;

	class ExitDonjonUtils___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::Threading::CancellationToken ct; // 0x10
		::System::Action* onResultContextPrepared; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestBigSceneDungeonEnd_b__0(::Class_3_025FF4981524A424_255* rsp, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_35*>* ntfs)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_255*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_35*>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__DISPLAYCLASS2_0__REQUESTBIGSCENEDUNGEONEND_B__0_OFFSET))(this, rsp, ntfs);
		}
	};
}

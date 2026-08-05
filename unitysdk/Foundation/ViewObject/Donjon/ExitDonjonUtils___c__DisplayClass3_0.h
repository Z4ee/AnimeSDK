#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_0_16E4307DCC419505_34;
class Class_3_025FF4981524A424_403;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14827570)
#define FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__DISPLAYCLASS3_0__REQUESTBIGSCENEDUNGEONEND_B__0_OFFSET UNITYSDK_OFFSET(0x14827580)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int ExitDonjonUtils___c__DisplayClass3_0_TypeDefinitionIndex = 69992;

	class ExitDonjonUtils___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Threading::CancellationToken ct; // 0x10
		::System::Action* onResultContextPrepared; // 0x18
		::System::Boolean success; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestBigSceneDungeonEnd_b__0(::Class_3_025FF4981524A424_403* rsp, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_34*>* ntfs)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_403*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_34*>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__DISPLAYCLASS3_0__REQUESTBIGSCENEDUNGEONEND_B__0_OFFSET))(this, rsp, ntfs);
		}
	};
}

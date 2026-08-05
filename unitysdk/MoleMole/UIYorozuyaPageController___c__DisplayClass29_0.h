#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIYorozuyaPageController; }
namespace System { template <typename T1, typename T2> class Tuple_2; }

#define MOLEMOLE_UIYOROZUYAPAGECONTROLLER___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14D91A20)
#define MOLEMOLE_UIYOROZUYAPAGECONTROLLER___C__DISPLAYCLASS29_0__REFRESHCAPTERMES_B__2_OFFSET UNITYSDK_OFFSET(0x14D91A30)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaPageController___c__DisplayClass29_0_TypeDefinitionIndex = 54557;

	class UIYorozuyaPageController___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::System::Tuple_2<::System::Int32, ::System::Int32>* progress; // 0x10
		::MoleMole::UIYorozuyaPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAPAGECONTROLLER___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshCapterMes_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAPAGECONTROLLER___C__DISPLAYCLASS29_0__REFRESHCAPTERMES_B__2_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_3_2159197412A91599;
namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }

#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x183B4270)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER___C__DISPLAYCLASS18_0__SENDREFRESHMAPREQ_B__0_OFFSET UNITYSDK_OFFSET(0x183B4280)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER___C__DISPLAYCLASS18_0__SENDREFRESHMAPREQ_B__1_OFFSET UNITYSDK_OFFSET(0x183B4330)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2MapRefreshPageController___c__DisplayClass18_0_TypeDefinitionIndex = 56656;

	class UIAbyssS2MapRefreshPageController___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::ValueTuple_2<::System::Boolean, ::Class_3_2159197412A91599*>>* tcs; // 0x10
		::System::Threading::CancellationToken ctsToken; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _SendRefreshMapReq_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER___C__DISPLAYCLASS18_0__SENDREFRESHMAPREQ_B__0_OFFSET))(this);
		}

		::System::Void _SendRefreshMapReq_b__1(::System::Boolean b, ::Class_3_2159197412A91599* map)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_2159197412A91599*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER___C__DISPLAYCLASS18_0__SENDREFRESHMAPREQ_B__1_OFFSET))(this, b, map);
		}
	};
}

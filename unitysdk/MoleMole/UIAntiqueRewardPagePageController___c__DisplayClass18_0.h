#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15EC69A0)
#define MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER___C__DISPLAYCLASS18_0__REFRESHEXP_B__0_OFFSET UNITYSDK_OFFSET(0x15EC69B0)
#define MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER___C__DISPLAYCLASS18_0__REFRESHEXP_B__1_OFFSET UNITYSDK_OFFSET(0x15EC6A20)

namespace MoleMole
{
	inline static constexpr unsigned int UIAntiqueRewardPagePageController___c__DisplayClass18_0_TypeDefinitionIndex = 80715;

	class UIAntiqueRewardPagePageController___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::Int32 nextNeedCount; // 0x10
		::System::Int32 showItemCount; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::String* _RefreshExp_b__0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER___C__DISPLAYCLASS18_0__REFRESHEXP_B__0_OFFSET))(this);
		}

		::System::String* _RefreshExp_b__1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDPAGEPAGECONTROLLER___C__DISPLAYCLASS18_0__REFRESHEXP_B__1_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B679E4D914A10080.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT___C__DISPLAYCLASS25_0__CALCULATESECTIONUNLOCK_B__0_OFFSET UNITYSDK_OFFSET(0x17D77EB0)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17D77EA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointWidgetContext___c__DisplayClass25_0_TypeDefinitionIndex = 65383;

	class UIUrbanMapPointWidgetContext___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::System::Int32 partnerID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CalculateSectionUnlock_b__0(::Struct_2_B679E4D914A10080 sectionID)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_B679E4D914A10080))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT___C__DISPLAYCLASS25_0__CALCULATESECTIONUNLOCK_B__0_OFFSET))(this, sectionID);
		}
	};
}

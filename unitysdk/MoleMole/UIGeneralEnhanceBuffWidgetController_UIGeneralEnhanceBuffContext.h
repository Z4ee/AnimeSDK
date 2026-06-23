#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1EA8435E138F2E03;

#define MOLEMOLE_UIGENERALENHANCEBUFFWIDGETCONTROLLER_UIGENERALENHANCEBUFFCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1730C390)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralEnhanceBuffWidgetController_UIGeneralEnhanceBuffContext_TypeDefinitionIndex = 51944;

	class UIGeneralEnhanceBuffWidgetController_UIGeneralEnhanceBuffContext : public ::System::Object
	{
	public:
		::Class_1_1EA8435E138F2E03* BindNode; // 0x10
		::System::Boolean IsRecommend; // 0x18
		::System::Boolean IsEmpty; // 0x19
		::System::Boolean IsAdd; // 0x1A
		::System::Boolean IsLock; // 0x1B
		::System::Int32 ItemId; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALENHANCEBUFFWIDGETCONTROLLER_UIGENERALENHANCEBUFFCONTEXT__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_542A772D07AFD4EA;
namespace System { class String; }

#define MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_CURSECONFIGCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x19F187A0)
#define MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_CURSECONFIGCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x19F18910)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowErosionWidgetController_CurseConfigComparer_TypeDefinitionIndex = 47070;

	class UIHollowErosionWidgetController_CurseConfigComparer : public ::System::Object
	{
	public:
		// static const ::System::String* SPECIAL_TAG; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_CURSECONFIGCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::Class_2_542A772D07AFD4EA* x, ::Class_2_542A772D07AFD4EA* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_542A772D07AFD4EA*, ::Class_2_542A772D07AFD4EA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_CURSECONFIGCOMPARER_COMPARE_OFFSET))(this, x, y);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_0633E1F7FECC3DFD;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UISOCIALCIRCLEMAINTAGWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x178FA9A0)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleMainTagWidgetController_Data_TypeDefinitionIndex = 63678;

	class UISocialCircleMainTagWidgetController_Data : public ::System::Object
	{
	public:
		::System::Action_1<::MoleMole::UISocialCircleMainTagWidgetController_Data*>* OnClick; // 0x10
		::Class_2_0633E1F7FECC3DFD* templateExt; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMAINTAGWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}

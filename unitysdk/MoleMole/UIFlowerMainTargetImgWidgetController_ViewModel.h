#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

class Class_0_16E4307DCC419505_139;
namespace System { class String; }
template <typename T> class Class_0_16E4307DCC419505_165;

#define MOLEMOLE_UIFLOWERMAINTARGETIMGWIDGETCONTROLLER_VIEWMODEL_GET_IMGPATH_OFFSET UNITYSDK_OFFSET(0x17A77B70)
#define MOLEMOLE_UIFLOWERMAINTARGETIMGWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x17A77B90)
#define MOLEMOLE_UIFLOWERMAINTARGETIMGWIDGETCONTROLLER_VIEWMODEL_SET_IMGPATH_OFFSET UNITYSDK_OFFSET(0x17A77B80)
#define MOLEMOLE_UIFLOWERMAINTARGETIMGWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x17A77B60)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMainTargetImgWidgetController_ViewModel_TypeDefinitionIndex = 68902;

	class UIFlowerMainTargetImgWidgetController_ViewModel : public ::Class_1_C331A5DC726F030A
	{
	public:
		::Class_0_16E4307DCC419505_165<::System::String*>* _ImgPath_k__BackingField; // 0x60

		::System::Void _ctor(::Class_0_16E4307DCC419505_139* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_139*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETIMGWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
		}

		::Class_0_16E4307DCC419505_165<::System::String*>* get_ImgPath()
		{
			return ((::Class_0_16E4307DCC419505_165<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETIMGWIDGETCONTROLLER_VIEWMODEL_GET_IMGPATH_OFFSET))(this);
		}

		::System::Void set_ImgPath(::Class_0_16E4307DCC419505_165<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_165<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETIMGWIDGETCONTROLLER_VIEWMODEL_SET_IMGPATH_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETIMGWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}

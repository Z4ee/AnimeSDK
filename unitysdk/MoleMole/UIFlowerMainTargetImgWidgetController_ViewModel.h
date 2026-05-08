#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4299CC27263318B.h"

class Class_0_16E4307DCC419505_103;
namespace System { class String; }
template <typename T> class Class_0_16E4307DCC41950C_13;

#define MOLEMOLE_UIFLOWERMAINTARGETIMGWIDGETCONTROLLER_VIEWMODEL_GET_IMGPATH_OFFSET UNITYSDK_OFFSET(0x15EF8450)
#define MOLEMOLE_UIFLOWERMAINTARGETIMGWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x15EF8470)
#define MOLEMOLE_UIFLOWERMAINTARGETIMGWIDGETCONTROLLER_VIEWMODEL_SET_IMGPATH_OFFSET UNITYSDK_OFFSET(0x15EF8460)
#define MOLEMOLE_UIFLOWERMAINTARGETIMGWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x15EF8440)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMainTargetImgWidgetController_ViewModel_TypeDefinitionIndex = 73783;

	class UIFlowerMainTargetImgWidgetController_ViewModel : public ::Class_1_F4299CC27263318B
	{
	public:
		::Class_0_16E4307DCC41950C_13<::System::String*>* _ImgPath_k__BackingField; // 0x70

		::System::Void _ctor(::Class_0_16E4307DCC419505_103* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_103*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETIMGWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
		}

		::Class_0_16E4307DCC41950C_13<::System::String*>* get_ImgPath()
		{
			return ((::Class_0_16E4307DCC41950C_13<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETIMGWIDGETCONTROLLER_VIEWMODEL_GET_IMGPATH_OFFSET))(this);
		}

		::System::Void set_ImgPath(::Class_0_16E4307DCC41950C_13<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC41950C_13<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETIMGWIDGETCONTROLLER_VIEWMODEL_SET_IMGPATH_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETIMGWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

class Class_0_16E4307DCC419505_135;
namespace System { class String; }
template <typename T> class Class_0_16E4307DCC419505_159;

#define MOLEMOLE_UIFLOWERMAINTARGETIMGWIDGETCONTROLLER_VIEWMODEL_GET_IMGPATH_OFFSET UNITYSDK_OFFSET(0x183EFED0)
#define MOLEMOLE_UIFLOWERMAINTARGETIMGWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x183EFEF0)
#define MOLEMOLE_UIFLOWERMAINTARGETIMGWIDGETCONTROLLER_VIEWMODEL_SET_IMGPATH_OFFSET UNITYSDK_OFFSET(0x183EFEE0)
#define MOLEMOLE_UIFLOWERMAINTARGETIMGWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x183EFEC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMainTargetImgWidgetController_ViewModel_TypeDefinitionIndex = 74028;

	class UIFlowerMainTargetImgWidgetController_ViewModel : public ::Class_1_5F5ACAAB9AA1EB49
	{
	public:
		::Class_0_16E4307DCC419505_159<::System::String*>* _ImgPath_k__BackingField; // 0x80

		::System::Void _ctor(::Class_0_16E4307DCC419505_135* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_135*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETIMGWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
		}

		::Class_0_16E4307DCC419505_159<::System::String*>* get_ImgPath()
		{
			return ((::Class_0_16E4307DCC419505_159<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETIMGWIDGETCONTROLLER_VIEWMODEL_GET_IMGPATH_OFFSET))(this);
		}

		::System::Void set_ImgPath(::Class_0_16E4307DCC419505_159<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_159<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETIMGWIDGETCONTROLLER_VIEWMODEL_SET_IMGPATH_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINTARGETIMGWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}

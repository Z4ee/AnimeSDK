#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl_1.h"

class Class_1_1B1C1CCEF5791333;
template <typename T> class Class_1_D90286A3143EECEC;

#define RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLEITEMCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE3D0A60)
#define RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLEITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xE3D0AB0)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int UINavigationFocusSampleItemControl_TypeDefinitionIndex = 73368;

	class UINavigationFocusSampleItemControl : public ::Sofa::BaseSofaControl_1<::Class_1_1B1C1CCEF5791333*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLEITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_1_1B1C1CCEF5791333*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_1_1B1C1CCEF5791333*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLEITEMCONTROL__BINDING_OFFSET))(this, a1);
		}
	};
}

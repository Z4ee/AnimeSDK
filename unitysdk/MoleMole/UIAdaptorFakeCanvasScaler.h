#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_UIADAPTORFAKECANVASSCALER_GET_RATIO_OFFSET UNITYSDK_OFFSET(0x16340300)
#define MOLEMOLE_UIADAPTORFAKECANVASSCALER_GET_REFERENCERESOLUTION_OFFSET UNITYSDK_OFFSET(0x16340470)
#define MOLEMOLE_UIADAPTORFAKECANVASSCALER_GET_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x163402E0)
#define MOLEMOLE_UIADAPTORFAKECANVASSCALER_MARKVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x16340490)
#define MOLEMOLE_UIADAPTORFAKECANVASSCALER_SET_RATIO_OFFSET UNITYSDK_OFFSET(0x163403B0)
#define MOLEMOLE_UIADAPTORFAKECANVASSCALER_SET_REFERENCERESOLUTION_OFFSET UNITYSDK_OFFSET(0x16340480)
#define MOLEMOLE_UIADAPTORFAKECANVASSCALER_SET_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x163402F0)
#define MOLEMOLE_UIADAPTORFAKECANVASSCALER__CTOR_OFFSET UNITYSDK_OFFSET(0x163404D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAdaptorFakeCanvasScaler_TypeDefinitionIndex = 69525;

	class UIAdaptorFakeCanvasScaler : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 _referenceResolution; // 0x10
		::System::Boolean _valueChanged_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADAPTORFAKECANVASSCALER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_valueChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADAPTORFAKECANVASSCALER_GET_VALUECHANGED_OFFSET))(this);
		}

		::System::Void set_valueChanged(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADAPTORFAKECANVASSCALER_SET_VALUECHANGED_OFFSET))(this, value);
		}

		::System::Single get_Ratio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADAPTORFAKECANVASSCALER_GET_RATIO_OFFSET))(this);
		}

		::System::Void set_Ratio(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADAPTORFAKECANVASSCALER_SET_RATIO_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_referenceResolution()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADAPTORFAKECANVASSCALER_GET_REFERENCERESOLUTION_OFFSET))(this);
		}

		::System::Void set_referenceResolution(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADAPTORFAKECANVASSCALER_SET_REFERENCERESOLUTION_OFFSET))(this, value);
		}

		::System::Void MarkValueChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADAPTORFAKECANVASSCALER_MARKVALUECHANGE_OFFSET))(this);
		}
	};
}

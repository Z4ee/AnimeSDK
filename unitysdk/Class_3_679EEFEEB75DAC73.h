#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/PropertyGroupAttribute.h"

namespace System { class String; }

#define CLASS_3_679EEFEEB75DAC73_COMBINEVALUESWITH_OFFSET UNITYSDK_OFFSET(0xE0202C0)
#define CLASS_3_679EEFEEB75DAC73_GET_EXPANDED_OFFSET UNITYSDK_OFFSET(0xE020230)
#define CLASS_3_679EEFEEB75DAC73_SET_EXPANDED_OFFSET UNITYSDK_OFFSET(0xE020240)
#define CLASS_3_679EEFEEB75DAC73__CTOR_OFFSET UNITYSDK_OFFSET(0xE020250)
#define CLASS_3_679EEFEEB75DAC73___IFIXBASEPROXY_COMBINEVALUESWITH_OFFSET UNITYSDK_OFFSET(0xE020360)

inline static constexpr unsigned int Class_3_679EEFEEB75DAC73_TypeDefinitionIndex = 67797;

class Class_3_679EEFEEB75DAC73 : public ::Sirenix::OdinInspector::PropertyGroupAttribute
{
public:
	::System::Boolean _Expanded_k__BackingField; // 0x28

	::System::Void _ctor(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_679EEFEEB75DAC73__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_Expanded()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_679EEFEEB75DAC73_GET_EXPANDED_OFFSET))(this);
	}

	::System::Void set_Expanded(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_679EEFEEB75DAC73_SET_EXPANDED_OFFSET))(this, value);
	}

	::System::Void CombineValuesWith(::Sirenix::OdinInspector::PropertyGroupAttribute* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Sirenix::OdinInspector::PropertyGroupAttribute*))((::PBYTE)hIl2Cpp + CLASS_3_679EEFEEB75DAC73_COMBINEVALUESWITH_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_CombineValuesWith(::Sirenix::OdinInspector::PropertyGroupAttribute* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Sirenix::OdinInspector::PropertyGroupAttribute*))((::PBYTE)hIl2Cpp + CLASS_3_679EEFEEB75DAC73___IFIXBASEPROXY_COMBINEVALUESWITH_OFFSET))(this, P0);
	}
};

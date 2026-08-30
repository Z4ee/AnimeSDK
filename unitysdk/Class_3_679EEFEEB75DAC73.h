#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/PropertyGroupAttribute.h"

namespace System { class String; }

#define CLASS_3_679EEFEEB75DAC73_COMBINEVALUESWITH_OFFSET UNITYSDK_OFFSET(0x19C27300)
#define CLASS_3_679EEFEEB75DAC73_GET_EXPANDED_OFFSET UNITYSDK_OFFSET(0x19C27270)
#define CLASS_3_679EEFEEB75DAC73_SET_EXPANDED_OFFSET UNITYSDK_OFFSET(0x19C27280)
#define CLASS_3_679EEFEEB75DAC73__CTOR_OFFSET UNITYSDK_OFFSET(0x19C27290)

inline static constexpr unsigned int Class_3_679EEFEEB75DAC73_TypeDefinitionIndex = 73555;

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

	::System::Void set_Expanded(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_679EEFEEB75DAC73_SET_EXPANDED_OFFSET))(this, a1);
	}

	::System::Void CombineValuesWith(::Sirenix::OdinInspector::PropertyGroupAttribute* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Sirenix::OdinInspector::PropertyGroupAttribute*))((::PBYTE)hIl2Cpp + CLASS_3_679EEFEEB75DAC73_COMBINEVALUESWITH_OFFSET))(this, a1);
	}
};

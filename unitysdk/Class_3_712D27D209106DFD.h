#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/PropertyGroupAttribute.h"

namespace System { class String; }

#define CLASS_3_712D27D209106DFD_COMBINEVALUESWITH_OFFSET UNITYSDK_OFFSET(0x1A8BC460)
#define CLASS_3_712D27D209106DFD_GET_EXPANDED_OFFSET UNITYSDK_OFFSET(0x1A8BC3D0)
#define CLASS_3_712D27D209106DFD_GET_TOGGLEMEMBERNAME_OFFSET UNITYSDK_OFFSET(0x1A8BC3B0)
#define CLASS_3_712D27D209106DFD_SET_EXPANDED_OFFSET UNITYSDK_OFFSET(0x1A8BC3E0)
#define CLASS_3_712D27D209106DFD_SET_TOGGLEMEMBERNAME_OFFSET UNITYSDK_OFFSET(0x1A8BC3C0)
#define CLASS_3_712D27D209106DFD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8BC3F0)

inline static constexpr unsigned int Class_3_712D27D209106DFD_TypeDefinitionIndex = 73556;

class Class_3_712D27D209106DFD : public ::Sirenix::OdinInspector::PropertyGroupAttribute
{
public:
	::System::String* _ToggleMemberName_k__BackingField; // 0x28
	::System::Boolean _Expanded_k__BackingField; // 0x30

	::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_712D27D209106DFD__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::String* get_ToggleMemberName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_712D27D209106DFD_GET_TOGGLEMEMBERNAME_OFFSET))(this);
	}

	::System::Void set_ToggleMemberName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_712D27D209106DFD_SET_TOGGLEMEMBERNAME_OFFSET))(this, a1);
	}

	::System::Boolean get_Expanded()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_712D27D209106DFD_GET_EXPANDED_OFFSET))(this);
	}

	::System::Void set_Expanded(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_712D27D209106DFD_SET_EXPANDED_OFFSET))(this, a1);
	}

	::System::Void CombineValuesWith(::Sirenix::OdinInspector::PropertyGroupAttribute* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Sirenix::OdinInspector::PropertyGroupAttribute*))((::PBYTE)hIl2Cpp + CLASS_3_712D27D209106DFD_COMBINEVALUESWITH_OFFSET))(this, a1);
	}
};

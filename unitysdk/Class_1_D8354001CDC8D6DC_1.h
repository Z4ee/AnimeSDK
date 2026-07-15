#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_D8354001CDC8D6DC_1_GET_CARDINDEX_OFFSET UNITYSDK_OFFSET(0x18EF1F50)
#define CLASS_1_D8354001CDC8D6DC_1_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x18EF1F60)
#define CLASS_1_D8354001CDC8D6DC_1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18EF1F80)
#define CLASS_1_D8354001CDC8D6DC_1_SET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x18EF1F70)
#define CLASS_1_D8354001CDC8D6DC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18EF1F40)

inline static constexpr unsigned int Class_1_D8354001CDC8D6DC_1_TypeDefinitionIndex = 75759;

class Class_1_D8354001CDC8D6DC_1 : public ::System::Object
{
public:
	::System::Boolean _IsSelected_k__BackingField; // 0x10
	::System::Int32 _CardIndex_k__BackingField; // 0x14

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D8354001CDC8D6DC_1__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 get_CardIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8354001CDC8D6DC_1_GET_CARDINDEX_OFFSET))(this);
	}

	::System::Boolean get_IsSelected()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8354001CDC8D6DC_1_GET_ISSELECTED_OFFSET))(this);
	}

	::System::Void set_IsSelected(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D8354001CDC8D6DC_1_SET_ISSELECTED_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8354001CDC8D6DC_1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};

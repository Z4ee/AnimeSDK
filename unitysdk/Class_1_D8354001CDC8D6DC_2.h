#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_D8354001CDC8D6DC_2_GET_CARDINDEX_OFFSET UNITYSDK_OFFSET(0xB365700)
#define CLASS_1_D8354001CDC8D6DC_2_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0xB365710)
#define CLASS_1_D8354001CDC8D6DC_2_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB365730)
#define CLASS_1_D8354001CDC8D6DC_2_SET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0xB365720)
#define CLASS_1_D8354001CDC8D6DC_2__CTOR_OFFSET UNITYSDK_OFFSET(0xB3656F0)

inline static constexpr unsigned int Class_1_D8354001CDC8D6DC_2_TypeDefinitionIndex = 80716;

class Class_1_D8354001CDC8D6DC_2 : public ::System::Object
{
public:
	::System::Boolean _IsSelected_k__BackingField; // 0x10
	::System::Int32 _CardIndex_k__BackingField; // 0x14

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D8354001CDC8D6DC_2__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 get_CardIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8354001CDC8D6DC_2_GET_CARDINDEX_OFFSET))(this);
	}

	::System::Boolean get_IsSelected()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8354001CDC8D6DC_2_GET_ISSELECTED_OFFSET))(this);
	}

	::System::Void set_IsSelected(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D8354001CDC8D6DC_2_SET_ISSELECTED_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8354001CDC8D6DC_2_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};

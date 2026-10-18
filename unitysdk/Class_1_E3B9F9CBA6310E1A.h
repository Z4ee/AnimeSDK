#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45CA56C59C8BBBC0;
namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class ReadOnlyReactiveProperty_1; }

#define CLASS_1_E3B9F9CBA6310E1A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16430170)
#define CLASS_1_E3B9F9CBA6310E1A_GET_NEEDWAITFORCRAFTTARGET_OFFSET UNITYSDK_OFFSET(0x1642FF20)
#define CLASS_1_E3B9F9CBA6310E1A_METHOD_1_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x1642FE50)
#define CLASS_1_E3B9F9CBA6310E1A_METHOD_1_8AE653474AE4DD46_OFFSET UNITYSDK_OFFSET(0x1642FEE0)
#define CLASS_1_E3B9F9CBA6310E1A_METHOD_1_B19CA5238A4CF490_OFFSET UNITYSDK_OFFSET(0x1642FF30)
#define CLASS_1_E3B9F9CBA6310E1A__CTOR_OFFSET UNITYSDK_OFFSET(0x164300C0)

inline static constexpr unsigned int Class_1_E3B9F9CBA6310E1A_TypeDefinitionIndex = 79577;

class Class_1_E3B9F9CBA6310E1A : public ::System::Object
{
public:
	::R3::ReadOnlyReactiveProperty_1<::System::Int32>* BHANCGNPOAG; // 0x10
	::Class_1_45CA56C59C8BBBC0* JOKBAPFCJFM; // 0x18
	::System::Boolean _NeedWaitForCraftTarget_k__BackingField; // 0x20

	::System::Void _ctor(::Class_1_45CA56C59C8BBBC0* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45CA56C59C8BBBC0*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E3B9F9CBA6310E1A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3B9F9CBA6310E1A_METHOD_1_37D0382D0C30A2DC_OFFSET))(this);
	}

	::R3::Observable_1<::System::Int32>* Method_1_8AE653474AE4DD46()
	{
		return ((::R3::Observable_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3B9F9CBA6310E1A_METHOD_1_8AE653474AE4DD46_OFFSET))(this);
	}

	::System::Boolean get_NeedWaitForCraftTarget()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3B9F9CBA6310E1A_GET_NEEDWAITFORCRAFTTARGET_OFFSET))(this);
	}

	static ::Class_1_E3B9F9CBA6310E1A* Method_1_B19CA5238A4CF490(::Class_1_45CA56C59C8BBBC0* a1, ::System::Boolean a2)
	{
		return ((::Class_1_E3B9F9CBA6310E1A*(*)(::Class_1_45CA56C59C8BBBC0*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E3B9F9CBA6310E1A_METHOD_1_B19CA5238A4CF490_OFFSET))(a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3B9F9CBA6310E1A_DISPOSE_OFFSET))(this);
	}
};

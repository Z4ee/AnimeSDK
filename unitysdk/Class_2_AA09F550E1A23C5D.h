#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_16CA124888A687A8.h"

#define CLASS_2_AA09F550E1A23C5D_GET_BEHIT_OFFSET UNITYSDK_OFFSET(0x14B945B0)
#define CLASS_2_AA09F550E1A23C5D_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x14B94490)
#define CLASS_2_AA09F550E1A23C5D_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x14B94530)
#define CLASS_2_AA09F550E1A23C5D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14B94570)
#define CLASS_2_AA09F550E1A23C5D_SET_BEHIT_OFFSET UNITYSDK_OFFSET(0x14B945C0)
#define CLASS_2_AA09F550E1A23C5D__CTOR_OFFSET UNITYSDK_OFFSET(0x14B945D0)

inline static constexpr unsigned int Class_2_AA09F550E1A23C5D_TypeDefinitionIndex = 74600;

class Class_2_AA09F550E1A23C5D : public ::Class_1_16CA124888A687A8
{
public:
	::System::Boolean _BeHit_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA09F550E1A23C5D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA09F550E1A23C5D_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA09F550E1A23C5D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA09F550E1A23C5D_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean get_BeHit()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA09F550E1A23C5D_GET_BEHIT_OFFSET))(this);
	}

	::System::Void set_BeHit(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AA09F550E1A23C5D_SET_BEHIT_OFFSET))(this, a1);
	}
};

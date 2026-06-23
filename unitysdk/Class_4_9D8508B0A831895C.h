#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_95932C222EBC5BA5.h"
#include "unitysdk/Class_4_9D8508B0A831895C_Enum_3_101C5536797039E4.h"

class Class_1_8289F2785D9AA990;
namespace System { class Action; }

#define CLASS_4_9D8508B0A831895C_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x11D638A0)
#define CLASS_4_9D8508B0A831895C_METHOD_4_56837B75C42A33D0_OFFSET UNITYSDK_OFFSET(0x11D63BA0)
#define CLASS_4_9D8508B0A831895C_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x11D63B10)
#define CLASS_4_9D8508B0A831895C_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x11D63970)
#define CLASS_4_9D8508B0A831895C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11D638F0)
#define CLASS_4_9D8508B0A831895C__CTOR_OFFSET UNITYSDK_OFFSET(0x11D63A80)

inline static constexpr unsigned int Class_4_9D8508B0A831895C_TypeDefinitionIndex = 75007;

class Class_4_9D8508B0A831895C : public ::Class_3_95932C222EBC5BA5
{
public:
	// static const ::System::Int32 Field_4_0 = 0x222; // 0x0
	::System::Action* Field_4_3; // 0x50
	::Class_1_8289F2785D9AA990* Field_4_2; // 0x58
	::Class_4_9D8508B0A831895C_Enum_3_101C5536797039E4 Field_4_1; // 0x60

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_9D8508B0A831895C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9D8508B0A831895C__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9D8508B0A831895C_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9D8508B0A831895C_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9D8508B0A831895C_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_4_9D8508B0A831895C* Method_4_56837B75C42A33D0()
	{
		return ((::Class_4_9D8508B0A831895C*(*)())((::PBYTE)hIl2Cpp + CLASS_4_9D8508B0A831895C_METHOD_4_56837B75C42A33D0_OFFSET))();
	}
};

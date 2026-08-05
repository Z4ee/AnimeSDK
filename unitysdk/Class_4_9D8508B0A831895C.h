#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_A26D4A2AAC08C213.h"
#include "unitysdk/Class_4_9D8508B0A831895C_Enum_3_101C5536797039E4.h"

class Class_1_8289F2785D9AA990;
namespace System { class Action; }

#define CLASS_4_9D8508B0A831895C_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x15E05CF0)
#define CLASS_4_9D8508B0A831895C_METHOD_4_3FC5188C07CF0F71_OFFSET UNITYSDK_OFFSET(0x15E05EE0)
#define CLASS_4_9D8508B0A831895C_METHOD_4_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x15E05F60)
#define CLASS_4_9D8508B0A831895C_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x15E05DC0)
#define CLASS_4_9D8508B0A831895C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E05D40)
#define CLASS_4_9D8508B0A831895C__CTOR_OFFSET UNITYSDK_OFFSET(0x15E05ED0)

inline static constexpr unsigned int Class_4_9D8508B0A831895C_TypeDefinitionIndex = 79999;

class Class_4_9D8508B0A831895C : public ::Class_3_A26D4A2AAC08C213
{
public:
	// static const ::System::Int32 Field_4_1 = 0x222; // 0x0
	::System::Action* Field_4_6; // 0x50
	::Class_1_8289F2785D9AA990* Field_4_7; // 0x58
	::Class_4_9D8508B0A831895C_Enum_3_101C5536797039E4 Field_4_0; // 0x60

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

	static ::Class_4_9D8508B0A831895C* Method_4_3FC5188C07CF0F71()
	{
		return ((::Class_4_9D8508B0A831895C*(*)())((::PBYTE)hIl2Cpp + CLASS_4_9D8508B0A831895C_METHOD_4_3FC5188C07CF0F71_OFFSET))();
	}

	::System::Int32 Method_4_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9D8508B0A831895C_METHOD_4_A1D8CD775DEC3C21_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_1_FB3AD67D095D0BFB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D797BA8F4DF2F72D_CLASS_1_05B0DACC13AB4B1D_METHOD_1_78224552C71626C4_OFFSET UNITYSDK_OFFSET(0x12A51E30)
#define CLASS_2_D797BA8F4DF2F72D_CLASS_1_05B0DACC13AB4B1D__CTOR_OFFSET UNITYSDK_OFFSET(0x12A51E20)

inline static constexpr unsigned int Class_2_D797BA8F4DF2F72D_Class_1_05B0DACC13AB4B1D_TypeDefinitionIndex = 59141;

class Class_2_D797BA8F4DF2F72D_Class_1_05B0DACC13AB4B1D : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_FB3AD67D095D0BFB*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D797BA8F4DF2F72D_CLASS_1_05B0DACC13AB4B1D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_78224552C71626C4(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_D797BA8F4DF2F72D_CLASS_1_05B0DACC13AB4B1D_METHOD_1_78224552C71626C4_OFFSET))(this, a1);
	}
};

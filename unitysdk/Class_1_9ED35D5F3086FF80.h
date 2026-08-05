#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_870;
class Class_3_6F28FFD006F2B451;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9ED35D5F3086FF80_METHOD_1_33CC096FAD55BE1F_OFFSET UNITYSDK_OFFSET(0x1D2B81B0)
#define CLASS_1_9ED35D5F3086FF80__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2B81A0)

inline static constexpr unsigned int Class_1_9ED35D5F3086FF80_TypeDefinitionIndex = 92455;

class Class_1_9ED35D5F3086FF80 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9ED35D5F3086FF80__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_870* Method_1_33CC096FAD55BE1F(::Class_3_6F28FFD006F2B451* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::Class_0_16E4307DCC419505_870*(*)(::PVOID, ::Class_3_6F28FFD006F2B451*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_9ED35D5F3086FF80_METHOD_1_33CC096FAD55BE1F_OFFSET))(this, a1, a2, a3);
	}
};

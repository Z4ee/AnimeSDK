#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_667;
class Class_2_53B7DA6B50203A3E;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8EE32143F33D628E_GET_CONDITIONS_OFFSET UNITYSDK_OFFSET(0xBD2EC40)
#define CLASS_1_8EE32143F33D628E_METHOD_1_F1372164966A6952_OFFSET UNITYSDK_OFFSET(0xBD2EC50)
#define CLASS_1_8EE32143F33D628E__CTOR_OFFSET UNITYSDK_OFFSET(0xBD2ED70)

inline static constexpr unsigned int Class_1_8EE32143F33D628E_TypeDefinitionIndex = 63337;

class Class_1_8EE32143F33D628E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_53B7DA6B50203A3E*>* _Conditions_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8EE32143F33D628E__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_53B7DA6B50203A3E*>* get_Conditions()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_53B7DA6B50203A3E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8EE32143F33D628E_GET_CONDITIONS_OFFSET))(this);
	}

	::System::Void Method_1_F1372164966A6952(::Class_0_16E4307DCC419505_667* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_667*))((::PBYTE)hIl2Cpp + CLASS_1_8EE32143F33D628E_METHOD_1_F1372164966A6952_OFFSET))(this, a1);
	}
};

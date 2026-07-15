#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B9E6DC87D4879FCD.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_322;
class Class_1_105C32866538BE74;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_96F671E4E83A73C0_GET_CONCRETE_OFFSET UNITYSDK_OFFSET(0x1D0DE9E0)
#define CLASS_1_96F671E4E83A73C0_GET_CONTRACTS_OFFSET UNITYSDK_OFFSET(0x1D0DE9D0)
#define CLASS_1_96F671E4E83A73C0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0DE9F0)

inline static constexpr unsigned int Class_1_96F671E4E83A73C0_TypeDefinitionIndex = 41480;

class Class_1_96F671E4E83A73C0 : public ::System::Object
{
public:
	::Struct_2_B9E6DC87D4879FCD Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_322* Field_1_1; // 0x28
	::Class_1_105C32866538BE74* _Concrete_k__BackingField; // 0x30
	::System::Collections::Generic::HashSet_1<::Struct_2_B9E6DC87D4879FCD>* _Contracts_k__BackingField; // 0x38
	::System::Object* Field_1_4; // 0x40
	::System::Boolean Field_1_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96F671E4E83A73C0__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::Struct_2_B9E6DC87D4879FCD>* get_Contracts()
	{
		return ((::System::Collections::Generic::HashSet_1<::Struct_2_B9E6DC87D4879FCD>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96F671E4E83A73C0_GET_CONTRACTS_OFFSET))(this);
	}

	::Class_1_105C32866538BE74* get_Concrete()
	{
		return ((::Class_1_105C32866538BE74*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96F671E4E83A73C0_GET_CONCRETE_OFFSET))(this);
	}
};

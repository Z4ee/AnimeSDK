#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B9E6DC87D4879FCD.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_283;
class Class_1_60B5E5A0CB5606E4;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_96F671E4E83A73C0_GET_CONCRETE_OFFSET UNITYSDK_OFFSET(0x18383E00)
#define CLASS_1_96F671E4E83A73C0_GET_CONTRACTS_OFFSET UNITYSDK_OFFSET(0x18383DF0)
#define CLASS_1_96F671E4E83A73C0__CTOR_OFFSET UNITYSDK_OFFSET(0x18381360)

inline static constexpr unsigned int Class_1_96F671E4E83A73C0_TypeDefinitionIndex = 34014;

class Class_1_96F671E4E83A73C0 : public ::System::Object
{
public:
	::Struct_2_B9E6DC87D4879FCD Field_1_0; // 0x10
	::Class_1_60B5E5A0CB5606E4* _Concrete_k__BackingField; // 0x28
	::Class_0_16E4307DCC419505_283* Field_1_4; // 0x30
	::System::Object* Field_1_3; // 0x38
	::System::Collections::Generic::HashSet_1<::Struct_2_B9E6DC87D4879FCD>* _Contracts_k__BackingField; // 0x40
	::System::Boolean Field_1_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96F671E4E83A73C0__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::Struct_2_B9E6DC87D4879FCD>* get_Contracts()
	{
		return ((::System::Collections::Generic::HashSet_1<::Struct_2_B9E6DC87D4879FCD>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96F671E4E83A73C0_GET_CONTRACTS_OFFSET))(this);
	}

	::Class_1_60B5E5A0CB5606E4* get_Concrete()
	{
		return ((::Class_1_60B5E5A0CB5606E4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96F671E4E83A73C0_GET_CONCRETE_OFFSET))(this);
	}
};

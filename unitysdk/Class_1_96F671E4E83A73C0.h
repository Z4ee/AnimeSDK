#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B9E6DC87D4879FCD.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_428;
class Class_1_C6F4C4ABEDB8B5E9;
class Class_1_F3CAAE7E7C7111CC;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_96F671E4E83A73C0_GET_CONCRETE_OFFSET UNITYSDK_OFFSET(0x1EC37E70)
#define CLASS_1_96F671E4E83A73C0_GET_CONTRACTS_OFFSET UNITYSDK_OFFSET(0x1EC37E60)
#define CLASS_1_96F671E4E83A73C0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC37E80)

inline static constexpr unsigned int Class_1_96F671E4E83A73C0_TypeDefinitionIndex = 44280;

class Class_1_96F671E4E83A73C0 : public ::System::Object
{
public:
	::Struct_2_B9E6DC87D4879FCD FNLHLLELBPA; // 0x10
	::Class_0_16E4307DCC419505_428* BEOPHFOAECG; // 0x28
	::System::Object* AFCLHADDBKA; // 0x30
	::Class_1_F3CAAE7E7C7111CC* _Concrete_k__BackingField; // 0x38
	::Class_1_C6F4C4ABEDB8B5E9* NKCLBBFDEEI; // 0x40
	::System::Collections::Generic::HashSet_1<::Struct_2_B9E6DC87D4879FCD>* _Contracts_k__BackingField; // 0x48
	::System::Boolean LCNMMBEHLNH; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96F671E4E83A73C0__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::Struct_2_B9E6DC87D4879FCD>* get_Contracts()
	{
		return ((::System::Collections::Generic::HashSet_1<::Struct_2_B9E6DC87D4879FCD>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96F671E4E83A73C0_GET_CONTRACTS_OFFSET))(this);
	}

	::Class_1_F3CAAE7E7C7111CC* get_Concrete()
	{
		return ((::Class_1_F3CAAE7E7C7111CC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96F671E4E83A73C0_GET_CONCRETE_OFFSET))(this);
	}
};

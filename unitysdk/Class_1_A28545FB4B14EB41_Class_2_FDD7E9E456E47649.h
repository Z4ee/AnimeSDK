#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/EqualityComparer_1.h"

#define CLASS_1_A28545FB4B14EB41_CLASS_2_FDD7E9E456E47649_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5B3600)
#define CLASS_1_A28545FB4B14EB41_CLASS_2_FDD7E9E456E47649_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5B3620)
#define CLASS_1_A28545FB4B14EB41_CLASS_2_FDD7E9E456E47649__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B3640)

inline static constexpr unsigned int Class_1_A28545FB4B14EB41_Class_2_FDD7E9E456E47649_TypeDefinitionIndex = 18663;

class Class_1_A28545FB4B14EB41_Class_2_FDD7E9E456E47649 : public ::System::Collections::Generic::EqualityComparer_1<::System::Single>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A28545FB4B14EB41_CLASS_2_FDD7E9E456E47649__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A28545FB4B14EB41_CLASS_2_FDD7E9E456E47649_EQUALS_OFFSET))(this, a1, a2);
	}

	::System::Int32 GetHashCode(::System::Single a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A28545FB4B14EB41_CLASS_2_FDD7E9E456E47649_GETHASHCODE_OFFSET))(this, a1);
	}
};

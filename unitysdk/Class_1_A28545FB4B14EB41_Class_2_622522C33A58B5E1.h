#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/EqualityComparer_1.h"
#include "unitysdk/System/Nullable_1.h"

#define CLASS_1_A28545FB4B14EB41_CLASS_2_622522C33A58B5E1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C48EB40)
#define CLASS_1_A28545FB4B14EB41_CLASS_2_622522C33A58B5E1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C48ED10)
#define CLASS_1_A28545FB4B14EB41_CLASS_2_622522C33A58B5E1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C48EE90)

inline static constexpr unsigned int Class_1_A28545FB4B14EB41_Class_2_622522C33A58B5E1_TypeDefinitionIndex = 9324;

class Class_1_A28545FB4B14EB41_Class_2_622522C33A58B5E1 : public ::System::Collections::Generic::EqualityComparer_1<::System::Nullable_1<::System::Double>>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A28545FB4B14EB41_CLASS_2_622522C33A58B5E1__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Nullable_1<::System::Double> a1, ::System::Nullable_1<::System::Double> a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Nullable_1<::System::Double>, ::System::Nullable_1<::System::Double>))((::PBYTE)hIl2Cpp + CLASS_1_A28545FB4B14EB41_CLASS_2_622522C33A58B5E1_EQUALS_OFFSET))(this, a1, a2);
	}

	::System::Int32 GetHashCode(::System::Nullable_1<::System::Double> a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Nullable_1<::System::Double>))((::PBYTE)hIl2Cpp + CLASS_1_A28545FB4B14EB41_CLASS_2_622522C33A58B5E1_GETHASHCODE_OFFSET))(this, a1);
	}
};

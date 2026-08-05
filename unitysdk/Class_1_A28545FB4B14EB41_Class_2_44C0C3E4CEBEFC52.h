#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/EqualityComparer_1.h"

#define CLASS_1_A28545FB4B14EB41_CLASS_2_44C0C3E4CEBEFC52_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FBE5720)
#define CLASS_1_A28545FB4B14EB41_CLASS_2_44C0C3E4CEBEFC52_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FBE5740)
#define CLASS_1_A28545FB4B14EB41_CLASS_2_44C0C3E4CEBEFC52__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBE5750)

inline static constexpr unsigned int Class_1_A28545FB4B14EB41_Class_2_44C0C3E4CEBEFC52_TypeDefinitionIndex = 19018;

class Class_1_A28545FB4B14EB41_Class_2_44C0C3E4CEBEFC52 : public ::System::Collections::Generic::EqualityComparer_1<::System::Double>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A28545FB4B14EB41_CLASS_2_44C0C3E4CEBEFC52__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Double a1, ::System::Double a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_A28545FB4B14EB41_CLASS_2_44C0C3E4CEBEFC52_EQUALS_OFFSET))(this, a1, a2);
	}

	::System::Int32 GetHashCode(::System::Double a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_A28545FB4B14EB41_CLASS_2_44C0C3E4CEBEFC52_GETHASHCODE_OFFSET))(this, a1);
	}
};

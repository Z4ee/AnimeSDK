#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/EqualityComparer_1.h"
#include "unitysdk/System/Nullable_1.h"

#define CLASS_1_A28545FB4B14EB41_CLASS_2_86DBE71C9F855992_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF40FE0)
#define CLASS_1_A28545FB4B14EB41_CLASS_2_86DBE71C9F855992_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF41150)
#define CLASS_1_A28545FB4B14EB41_CLASS_2_86DBE71C9F855992__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF412A0)

inline static constexpr unsigned int Class_1_A28545FB4B14EB41_Class_2_86DBE71C9F855992_TypeDefinitionIndex = 18660;

class Class_1_A28545FB4B14EB41_Class_2_86DBE71C9F855992 : public ::System::Collections::Generic::EqualityComparer_1<::System::Nullable_1<::System::Single>>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A28545FB4B14EB41_CLASS_2_86DBE71C9F855992__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Nullable_1<::System::Single> a1, ::System::Nullable_1<::System::Single> a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Nullable_1<::System::Single>, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_1_A28545FB4B14EB41_CLASS_2_86DBE71C9F855992_EQUALS_OFFSET))(this, a1, a2);
	}

	::System::Int32 GetHashCode(::System::Nullable_1<::System::Single> a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_1_A28545FB4B14EB41_CLASS_2_86DBE71C9F855992_GETHASHCODE_OFFSET))(this, a1);
	}
};

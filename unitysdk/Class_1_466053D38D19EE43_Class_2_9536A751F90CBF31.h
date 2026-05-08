#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_466053D38D19EE43_Struct_2_F88FF36E1926FFBA.h"
#include "unitysdk/System/Collections/Generic/EqualityComparer_1.h"
#include "unitysdk/System/Nullable_1.h"

#define CLASS_1_466053D38D19EE43_CLASS_2_9536A751F90CBF31_EQUALS_OFFSET UNITYSDK_OFFSET(0x133B0DA0)
#define CLASS_1_466053D38D19EE43_CLASS_2_9536A751F90CBF31_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x133B1160)
#define CLASS_1_466053D38D19EE43_CLASS_2_9536A751F90CBF31__CCTOR_OFFSET UNITYSDK_OFFSET(0x133B12B0)
#define CLASS_1_466053D38D19EE43_CLASS_2_9536A751F90CBF31__CTOR_OFFSET UNITYSDK_OFFSET(0x133B1290)

inline static constexpr unsigned int Class_1_466053D38D19EE43_Class_2_9536A751F90CBF31_TypeDefinitionIndex = 74236;

class Class_1_466053D38D19EE43_Class_2_9536A751F90CBF31 : public ::System::Collections::Generic::EqualityComparer_1<::System::Nullable_1<::Class_1_466053D38D19EE43_Struct_2_F88FF36E1926FFBA>>
{
public:
	static ::Class_1_466053D38D19EE43_Class_2_9536A751F90CBF31** StaticGet_Field_2_0()
	{
		return (::Class_1_466053D38D19EE43_Class_2_9536A751F90CBF31**)Il2CppClass::FromTypeDefinitionIndex(Class_1_466053D38D19EE43_Class_2_9536A751F90CBF31_TypeDefinitionIndex)->GetStaticField(0x42950);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_466053D38D19EE43_CLASS_2_9536A751F90CBF31__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_466053D38D19EE43_CLASS_2_9536A751F90CBF31__CCTOR_OFFSET))();
	}

	::System::Boolean Equals(::System::Nullable_1<::Class_1_466053D38D19EE43_Struct_2_F88FF36E1926FFBA> a1, ::System::Nullable_1<::Class_1_466053D38D19EE43_Struct_2_F88FF36E1926FFBA> a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Nullable_1<::Class_1_466053D38D19EE43_Struct_2_F88FF36E1926FFBA>, ::System::Nullable_1<::Class_1_466053D38D19EE43_Struct_2_F88FF36E1926FFBA>))((::PBYTE)hIl2Cpp + CLASS_1_466053D38D19EE43_CLASS_2_9536A751F90CBF31_EQUALS_OFFSET))(this, a1, a2);
	}

	::System::Int32 GetHashCode(::System::Nullable_1<::Class_1_466053D38D19EE43_Struct_2_F88FF36E1926FFBA> a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Nullable_1<::Class_1_466053D38D19EE43_Struct_2_F88FF36E1926FFBA>))((::PBYTE)hIl2Cpp + CLASS_1_466053D38D19EE43_CLASS_2_9536A751F90CBF31_GETHASHCODE_OFFSET))(this, a1);
	}
};

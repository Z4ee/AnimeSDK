#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6CB0D6BA6DCFD8B7;
class Class_2_98CC9643C32C6170_Class_1_DBE45A2B69DC33BB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6CB0D6BA6DCFD8B7_CLASS_1_E21FBE296630443F_METHOD_1_9A5E606F81CD7EDA_OFFSET UNITYSDK_OFFSET(0xFE6C290)
#define CLASS_1_6CB0D6BA6DCFD8B7_CLASS_1_E21FBE296630443F_METHOD_1_9DEE51A669757C7D_OFFSET UNITYSDK_OFFSET(0xFE6C140)
#define CLASS_1_6CB0D6BA6DCFD8B7_CLASS_1_E21FBE296630443F__CTOR_OFFSET UNITYSDK_OFFSET(0xFE6C130)

inline static constexpr unsigned int Class_1_6CB0D6BA6DCFD8B7_Class_1_E21FBE296630443F_TypeDefinitionIndex = 56202;

class Class_1_6CB0D6BA6DCFD8B7_Class_1_E21FBE296630443F : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Class_1_6CB0D6BA6DCFD8B7* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_CLASS_1_E21FBE296630443F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9DEE51A669757C7D(::Class_2_98CC9643C32C6170_Class_1_DBE45A2B69DC33BB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_98CC9643C32C6170_Class_1_DBE45A2B69DC33BB*))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_CLASS_1_E21FBE296630443F_METHOD_1_9DEE51A669757C7D_OFFSET))(this, a1);
	}

	::System::Void Method_1_9A5E606F81CD7EDA(::Class_2_98CC9643C32C6170_Class_1_DBE45A2B69DC33BB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_98CC9643C32C6170_Class_1_DBE45A2B69DC33BB*))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_CLASS_1_E21FBE296630443F_METHOD_1_9A5E606F81CD7EDA_OFFSET))(this, a1);
	}
};

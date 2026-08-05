#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6CB0D6BA6DCFD8B7;
class Class_2_98CC9643C32C6170_Class_1_DBE45A2B69DC33BB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6CB0D6BA6DCFD8B7_CLASS_1_ED94689857BE2093_METHOD_1_843875561A2EA9FB_OFFSET UNITYSDK_OFFSET(0x1461AAE0)
#define CLASS_1_6CB0D6BA6DCFD8B7_CLASS_1_ED94689857BE2093_METHOD_1_9DEE51A669757C7D_OFFSET UNITYSDK_OFFSET(0x1461B040)
#define CLASS_1_6CB0D6BA6DCFD8B7_CLASS_1_ED94689857BE2093__CTOR_OFFSET UNITYSDK_OFFSET(0x1461AAD0)

inline static constexpr unsigned int Class_1_6CB0D6BA6DCFD8B7_Class_1_ED94689857BE2093_TypeDefinitionIndex = 84270;

class Class_1_6CB0D6BA6DCFD8B7_Class_1_ED94689857BE2093 : public ::System::Object
{
public:
	::Class_1_6CB0D6BA6DCFD8B7* Field_1_7; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_CLASS_1_ED94689857BE2093__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_843875561A2EA9FB(::Class_2_98CC9643C32C6170_Class_1_DBE45A2B69DC33BB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_98CC9643C32C6170_Class_1_DBE45A2B69DC33BB*))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_CLASS_1_ED94689857BE2093_METHOD_1_843875561A2EA9FB_OFFSET))(this, a1);
	}

	::System::Void Method_1_9DEE51A669757C7D(::Class_2_98CC9643C32C6170_Class_1_DBE45A2B69DC33BB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_98CC9643C32C6170_Class_1_DBE45A2B69DC33BB*))((::PBYTE)hIl2Cpp + CLASS_1_6CB0D6BA6DCFD8B7_CLASS_1_ED94689857BE2093_METHOD_1_9DEE51A669757C7D_OFFSET))(this, a1);
	}
};

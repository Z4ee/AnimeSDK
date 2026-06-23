#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_92.h"

class Class_1_D802F9214B724137;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C57FF0A433007940_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x154DA4A0)
#define CLASS_2_C57FF0A433007940_METHOD_2_3026E3D2F906E905_OFFSET UNITYSDK_OFFSET(0x154D9F80)
#define CLASS_2_C57FF0A433007940_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x154DA410)
#define CLASS_2_C57FF0A433007940_METHOD_2_EED89D65D7987CAD_OFFSET UNITYSDK_OFFSET(0x154DA4E0)
#define CLASS_2_C57FF0A433007940_METHOD_2_EFB6D6A58777DAF3_OFFSET UNITYSDK_OFFSET(0x154D9CD0)
#define CLASS_2_C57FF0A433007940_TOSTRING_OFFSET UNITYSDK_OFFSET(0x154D9F30)
#define CLASS_2_C57FF0A433007940__CTOR_OFFSET UNITYSDK_OFFSET(0x154D9610)

inline static constexpr unsigned int Class_2_C57FF0A433007940_TypeDefinitionIndex = 56324;

class Class_2_C57FF0A433007940 : public ::Class_1_43BD383C98B4C0C5_92
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_43BD383C98B4C0C5_92*>* Field_2_2; // 0x10
	::System::String* Field_2_0; // 0x18
	::System::String* Field_2_1; // 0x20
	::System::Boolean Field_2_3; // 0x28

	::System::Void _ctor(::System::String* a1, ::System::Func_2<::System::String*, ::System::Double>* a2, ::System::Func_2<::System::String*, ::System::String*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Func_2<::System::String*, ::System::Double>*, ::System::Func_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_C57FF0A433007940__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_2_EFB6D6A58777DAF3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C57FF0A433007940_METHOD_2_EFB6D6A58777DAF3_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C57FF0A433007940_TOSTRING_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* Method_2_3026E3D2F906E905()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C57FF0A433007940_METHOD_2_3026E3D2F906E905_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C57FF0A433007940_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C57FF0A433007940_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_2_EED89D65D7987CAD(::Class_1_D802F9214B724137* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D802F9214B724137*))((::PBYTE)hIl2Cpp + CLASS_2_C57FF0A433007940_METHOD_2_EED89D65D7987CAD_OFFSET))(this, a1);
	}
};

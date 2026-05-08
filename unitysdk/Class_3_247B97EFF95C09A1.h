#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

class Class_1_B76E080EF26C938D;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_247B97EFF95C09A1_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1198BAF0)
#define CLASS_3_247B97EFF95C09A1_METHOD_3_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1198BD40)
#define CLASS_3_247B97EFF95C09A1_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1198BC50)
#define CLASS_3_247B97EFF95C09A1_METHOD_3_C2235B12D15AFAC5_OFFSET UNITYSDK_OFFSET(0x1198BCE0)
#define CLASS_3_247B97EFF95C09A1_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x1198BBD0)
#define CLASS_3_247B97EFF95C09A1_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1198B020)
#define CLASS_3_247B97EFF95C09A1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1198B060)
#define CLASS_3_247B97EFF95C09A1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1198BB40)
#define CLASS_3_247B97EFF95C09A1__CTOR_OFFSET UNITYSDK_OFFSET(0x1198BBC0)

inline static constexpr unsigned int Class_3_247B97EFF95C09A1_TypeDefinitionIndex = 70083;

class Class_3_247B97EFF95C09A1 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_2 = 0xB1; // 0x0
	::Class_1_B76E080EF26C938D* Field_3_0; // 0x48
	::System::Collections::Generic::List_1<::System::String*>* Field_3_1; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_247B97EFF95C09A1__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_247B97EFF95C09A1__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_247B97EFF95C09A1_ONCLEAN_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_247B97EFF95C09A1_TOSTRING_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_247B97EFF95C09A1_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_247B97EFF95C09A1* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_247B97EFF95C09A1*(*)())((::PBYTE)hIl2Cpp + CLASS_3_247B97EFF95C09A1_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_247B97EFF95C09A1_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Method_3_C2235B12D15AFAC5()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_247B97EFF95C09A1_METHOD_3_C2235B12D15AFAC5_OFFSET))(this);
	}

	::System::String* Method_3_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_247B97EFF95C09A1_METHOD_3_128774387667156B_OFFSET))(this);
	}
};

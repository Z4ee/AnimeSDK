#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Struct_2_745325AFD7021EFB_1.h"

class Class_3_D9B9957BE01D6471;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_5B469150FB946625_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x194CF0E0)
#define CLASS_3_5B469150FB946625_METHOD_3_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x194CF1C0)
#define CLASS_3_5B469150FB946625_METHOD_3_16EFDCE5DBC3AF26_OFFSET UNITYSDK_OFFSET(0x194CF740)
#define CLASS_3_5B469150FB946625_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x194CFA40)
#define CLASS_3_5B469150FB946625_METHOD_3_207D0944C67D849D_OFFSET UNITYSDK_OFFSET(0x194CF1E0)
#define CLASS_3_5B469150FB946625_METHOD_3_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x194CF1D0)
#define CLASS_3_5B469150FB946625_METHOD_3_9A3A5002BC8BA269_OFFSET UNITYSDK_OFFSET(0x194CF390)
#define CLASS_3_5B469150FB946625_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x194CFDC0)
#define CLASS_3_5B469150FB946625_METHOD_3_BB267A19EE88BB87_OFFSET UNITYSDK_OFFSET(0x194CFC00)
#define CLASS_3_5B469150FB946625_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x194CF3D0)
#define CLASS_3_5B469150FB946625_METHOD_3_EC45F90F4D7536C1_OFFSET UNITYSDK_OFFSET(0x194CF450)
#define CLASS_3_5B469150FB946625_METHOD_3_F683A8F3BA512C47_OFFSET UNITYSDK_OFFSET(0x194CFAA0)
#define CLASS_3_5B469150FB946625_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x194CEFD0)
#define CLASS_3_5B469150FB946625__CCTOR_OFFSET UNITYSDK_OFFSET(0x194CF130)
#define CLASS_3_5B469150FB946625__CTOR_OFFSET UNITYSDK_OFFSET(0x194CF1B0)

inline static constexpr unsigned int Class_3_5B469150FB946625_TypeDefinitionIndex = 75901;

class Class_3_5B469150FB946625 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_6 = 0xC5; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* Field_3_0; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_745325AFD7021EFB_1>*>* Field_3_7; // 0x50
	::System::UInt32 Field_3_1; // 0x58

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_5B469150FB946625__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5B469150FB946625__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5B469150FB946625_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5B469150FB946625_GETCLASSID_OFFSET))(this);
	}

	::System::UInt32 Method_3_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5B469150FB946625_METHOD_3_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_3_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_5B469150FB946625_METHOD_3_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_207D0944C67D849D(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_5B469150FB946625_METHOD_3_207D0944C67D849D_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* Method_3_9A3A5002BC8BA269()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5B469150FB946625_METHOD_3_9A3A5002BC8BA269_OFFSET))(this);
	}

	static ::Class_3_5B469150FB946625* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_5B469150FB946625*(*)())((::PBYTE)hIl2Cpp + CLASS_3_5B469150FB946625_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_EC45F90F4D7536C1(::Class_3_D9B9957BE01D6471* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D9B9957BE01D6471*))((::PBYTE)hIl2Cpp + CLASS_3_5B469150FB946625_METHOD_3_EC45F90F4D7536C1_OFFSET))(this, a1);
	}

	::System::Void Method_3_16EFDCE5DBC3AF26(::System::String* a1, ::System::String* a2, ::Struct_2_745325AFD7021EFB_1 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Struct_2_745325AFD7021EFB_1))((::PBYTE)hIl2Cpp + CLASS_3_5B469150FB946625_METHOD_3_16EFDCE5DBC3AF26_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5B469150FB946625_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_3_F683A8F3BA512C47(::System::String* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_3_5B469150FB946625_METHOD_3_F683A8F3BA512C47_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_BB267A19EE88BB87(::System::String* a1, ::System::String* a2, ::Struct_2_745325AFD7021EFB_1& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::Struct_2_745325AFD7021EFB_1&))((::PBYTE)hIl2Cpp + CLASS_3_5B469150FB946625_METHOD_3_BB267A19EE88BB87_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5B469150FB946625_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};

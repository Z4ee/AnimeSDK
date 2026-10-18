#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FFCEEED483D7C73B.h"
#include "unitysdk/System/Object.h"

class Class_1_4AB01E8FEDBFD1EC;
class Class_1_C974D9B5A2874893;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1FC9D91520196382_METHOD_1_1EA3754039AA10DF_OFFSET UNITYSDK_OFFSET(0x1C932D50)
#define CLASS_1_1FC9D91520196382_METHOD_1_2BA3DB2BD2587D96_OFFSET UNITYSDK_OFFSET(0x1C933D20)
#define CLASS_1_1FC9D91520196382_METHOD_1_40EBA7013E4CCDDF_OFFSET UNITYSDK_OFFSET(0x1C933C50)
#define CLASS_1_1FC9D91520196382_METHOD_1_7A013F4AF4412CCF_OFFSET UNITYSDK_OFFSET(0x1C932CA0)
#define CLASS_1_1FC9D91520196382_METHOD_1_B961D33AD47A2113_OFFSET UNITYSDK_OFFSET(0x1C933A00)
#define CLASS_1_1FC9D91520196382_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C933F40)
#define CLASS_1_1FC9D91520196382__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C933F50)
#define CLASS_1_1FC9D91520196382__CTOR_OFFSET UNITYSDK_OFFSET(0x1C932C30)

inline static constexpr unsigned int Class_1_1FC9D91520196382_TypeDefinitionIndex = 43059;

class Class_1_1FC9D91520196382 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_OHLMEBFACLG()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1FC9D91520196382_TypeDefinitionIndex)->GetStaticField(0x12CE0);
	}
	::Class_1_4AB01E8FEDBFD1EC* FLMODBLFAGD; // 0x10
	::System::Collections::Generic::List_1<::Class_1_C974D9B5A2874893*>* OBCHNKJCPCI; // 0x18
	::Struct_2_FFCEEED483D7C73B GNOEGILFEMD; // 0x20
	::System::UInt32 AGDOLIPGNND; // 0x3C
	::System::Boolean OFBDNGGNLDJ; // 0x40
	::System::Boolean FMNEEONAMNO; // 0x41
	::System::Int32 ANEGAFDLPKM; // 0x44

	::System::Void _ctor(::Class_1_4AB01E8FEDBFD1EC* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AB01E8FEDBFD1EC*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1FC9D91520196382__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1FC9D91520196382__CCTOR_OFFSET))();
	}

	::System::Void Method_1_7A013F4AF4412CCF(::System::UInt32 a1, ::Struct_2_FFCEEED483D7C73B a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Struct_2_FFCEEED483D7C73B, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1FC9D91520196382_METHOD_1_7A013F4AF4412CCF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_40EBA7013E4CCDDF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FC9D91520196382_METHOD_1_40EBA7013E4CCDDF_OFFSET))(this);
	}

	::System::Void Method_1_1EA3754039AA10DF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1FC9D91520196382_METHOD_1_1EA3754039AA10DF_OFFSET))(this, a1);
	}

	::System::Void Method_1_B961D33AD47A2113()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FC9D91520196382_METHOD_1_B961D33AD47A2113_OFFSET))(this);
	}

	::System::Void Method_1_2BA3DB2BD2587D96(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1FC9D91520196382_METHOD_1_2BA3DB2BD2587D96_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FC9D91520196382_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};

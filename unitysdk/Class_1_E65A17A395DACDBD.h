#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_596F5FE4E2068C11.h"
#include "unitysdk/Enum_3_981FFC6E2EAFCCBA.h"
#include "unitysdk/System/Object.h"

class Class_1_24D09E0C86FE94A3;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E65A17A395DACDBD_METHOD_1_0B6B12880F86DD2D_OFFSET UNITYSDK_OFFSET(0x1E4DB1D0)
#define CLASS_1_E65A17A395DACDBD_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1E4DD6D0)
#define CLASS_1_E65A17A395DACDBD_METHOD_1_693D66EFE9D8C58D_OFFSET UNITYSDK_OFFSET(0x1E4DBEA0)
#define CLASS_1_E65A17A395DACDBD_METHOD_1_7D3FEB3C84E0A029_OFFSET UNITYSDK_OFFSET(0x1E4DD4C0)
#define CLASS_1_E65A17A395DACDBD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4DAEE0)
#define CLASS_1_E65A17A395DACDBD__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4DAE50)

inline static constexpr unsigned int Class_1_E65A17A395DACDBD_TypeDefinitionIndex = 29499;

class Class_1_E65A17A395DACDBD : public ::System::Object
{
public:
	static ::Class_1_E65A17A395DACDBD** StaticGet_Field_1_0()
	{
		return (::Class_1_E65A17A395DACDBD**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E65A17A395DACDBD_TypeDefinitionIndex)->GetStaticField(0x24D50);
	}
	static ::Class_1_E65A17A395DACDBD** StaticGet_Field_1_5()
	{
		return (::Class_1_E65A17A395DACDBD**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E65A17A395DACDBD_TypeDefinitionIndex)->GetStaticField(0x24D58);
	}
	static ::Class_1_E65A17A395DACDBD** StaticGet_Field_1_7()
	{
		return (::Class_1_E65A17A395DACDBD**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E65A17A395DACDBD_TypeDefinitionIndex)->GetStaticField(0x24D60);
	}
	static ::Class_1_E65A17A395DACDBD** StaticGet_Field_1_6()
	{
		return (::Class_1_E65A17A395DACDBD**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E65A17A395DACDBD_TypeDefinitionIndex)->GetStaticField(0x24D68);
	}
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Class_1_24D09E0C86FE94A3*>* Field_1_4; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E65A17A395DACDBD__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E65A17A395DACDBD__CCTOR_OFFSET))();
	}

	::System::String* Method_1_0B6B12880F86DD2D(::Enum_3_981FFC6E2EAFCCBA a1, ::System::Boolean a2, ::Enum_3_596F5FE4E2068C11 a3)
	{
		return ((::System::String*(*)(::PVOID, ::Enum_3_981FFC6E2EAFCCBA, ::System::Boolean, ::Enum_3_596F5FE4E2068C11))((::PBYTE)hIl2Cpp + CLASS_1_E65A17A395DACDBD_METHOD_1_0B6B12880F86DD2D_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Class_1_24D09E0C86FE94A3*>* Method_1_693D66EFE9D8C58D(::Enum_3_981FFC6E2EAFCCBA a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Class_1_24D09E0C86FE94A3*>*(*)(::PVOID, ::Enum_3_981FFC6E2EAFCCBA, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E65A17A395DACDBD_METHOD_1_693D66EFE9D8C58D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7D3FEB3C84E0A029(::System::UInt64 a1, ::System::UInt64 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E65A17A395DACDBD_METHOD_1_7D3FEB3C84E0A029_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E65A17A395DACDBD_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}
};

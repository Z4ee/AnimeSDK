#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_13264FE803E7E6C1;
class Class_1_88B58E519B07D4A1_Class_1_2D55C9347314EEAB;
class Class_1_88B58E519B07D4A1_Class_3_487EE6B302AC50B7_4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_88B58E519B07D4A1_METHOD_1_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0x15EE01F0)
#define CLASS_1_88B58E519B07D4A1_METHOD_1_8575601835F89AEB_OFFSET UNITYSDK_OFFSET(0x15EE05B0)
#define CLASS_1_88B58E519B07D4A1_METHOD_1_F0605045D9BFDB1F_OFFSET UNITYSDK_OFFSET(0x15EE0B00)
#define CLASS_1_88B58E519B07D4A1__CCTOR_OFFSET UNITYSDK_OFFSET(0x15EE0C70)

inline static constexpr unsigned int Class_1_88B58E519B07D4A1_TypeDefinitionIndex = 66188;

class Class_1_88B58E519B07D4A1 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_88B58E519B07D4A1_Class_1_2D55C9347314EEAB*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_88B58E519B07D4A1_Class_1_2D55C9347314EEAB*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_88B58E519B07D4A1_TypeDefinitionIndex)->GetStaticField(0x5FEA0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_13264FE803E7E6C1*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_13264FE803E7E6C1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_88B58E519B07D4A1_TypeDefinitionIndex)->GetStaticField(0x5FEA8);
	}
	static ::System::Collections::Generic::List_1<::Class_1_13264FE803E7E6C1*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::List_1<::Class_1_13264FE803E7E6C1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_88B58E519B07D4A1_TypeDefinitionIndex)->GetStaticField(0x5FEB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_88B58E519B07D4A1__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_1F130271093617A5()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_88B58E519B07D4A1_METHOD_1_1F130271093617A5_OFFSET))();
	}

	static ::System::Void Method_1_8575601835F89AEB(::System::String* a1, ::Class_1_88B58E519B07D4A1_Class_3_487EE6B302AC50B7_4* a2)
	{
		return ((::System::Void(*)(::System::String*, ::Class_1_88B58E519B07D4A1_Class_3_487EE6B302AC50B7_4*))((::PBYTE)hIl2Cpp + CLASS_1_88B58E519B07D4A1_METHOD_1_8575601835F89AEB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F0605045D9BFDB1F(::System::String* a1, ::Class_1_88B58E519B07D4A1_Class_3_487EE6B302AC50B7_4* a2)
	{
		return ((::System::Void(*)(::System::String*, ::Class_1_88B58E519B07D4A1_Class_3_487EE6B302AC50B7_4*))((::PBYTE)hIl2Cpp + CLASS_1_88B58E519B07D4A1_METHOD_1_F0605045D9BFDB1F_OFFSET))(a1, a2);
	}
};

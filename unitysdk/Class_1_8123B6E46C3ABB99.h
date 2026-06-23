#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_191;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8123B6E46C3ABB99_METHOD_1_45163DBDE57500EF_OFFSET UNITYSDK_OFFSET(0x18823FD0)
#define CLASS_1_8123B6E46C3ABB99_METHOD_1_57A56833535D7AD6_OFFSET UNITYSDK_OFFSET(0x18823ED0)
#define CLASS_1_8123B6E46C3ABB99__CCTOR_OFFSET UNITYSDK_OFFSET(0x18823DB0)

inline static constexpr unsigned int Class_1_8123B6E46C3ABB99_TypeDefinitionIndex = 65452;

class Class_1_8123B6E46C3ABB99 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_191*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_191*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8123B6E46C3ABB99_TypeDefinitionIndex)->GetStaticField(0x4D190);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8123B6E46C3ABB99__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_191* Method_1_45163DBDE57500EF(::System::Type* a1)
	{
		return ((::Class_0_16E4307DCC419505_191*(*)(::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_8123B6E46C3ABB99_METHOD_1_45163DBDE57500EF_OFFSET))(a1);
	}

	static ::System::Void Method_1_57A56833535D7AD6(::System::Type* a1, ::Class_0_16E4307DCC419505_191* a2)
	{
		return ((::System::Void(*)(::System::Type*, ::Class_0_16E4307DCC419505_191*))((::PBYTE)hIl2Cpp + CLASS_1_8123B6E46C3ABB99_METHOD_1_57A56833535D7AD6_OFFSET))(a1, a2);
	}
};

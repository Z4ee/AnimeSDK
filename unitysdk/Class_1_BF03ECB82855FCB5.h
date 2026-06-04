#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_698098A743D71086.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

class Class_0_16E4307DCC419505_549;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BF03ECB82855FCB5_METHOD_1_1D2BD77962F12ABD_OFFSET UNITYSDK_OFFSET(0xA75F820)
#define CLASS_1_BF03ECB82855FCB5_METHOD_1_DF1A63E59EE6C532_OFFSET UNITYSDK_OFFSET(0xA75F750)
#define CLASS_1_BF03ECB82855FCB5__CCTOR_OFFSET UNITYSDK_OFFSET(0xA75F8C0)

inline static constexpr unsigned int Class_1_BF03ECB82855FCB5_TypeDefinitionIndex = 53796;

class Class_1_BF03ECB82855FCB5 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::Struct_2_698098A743D71086>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::Struct_2_698098A743D71086>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF03ECB82855FCB5_TypeDefinitionIndex)->GetStaticField(0x60290);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF03ECB82855FCB5_TypeDefinitionIndex)->GetStaticField(0x124E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF03ECB82855FCB5__CCTOR_OFFSET))();
	}

	static ::Struct_2_698098A743D71086 Method_1_DF1A63E59EE6C532(::System::RuntimeTypeHandle a1)
	{
		return ((::Struct_2_698098A743D71086(*)(::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + CLASS_1_BF03ECB82855FCB5_METHOD_1_DF1A63E59EE6C532_OFFSET))(a1);
	}

	static ::Struct_2_698098A743D71086 Method_1_1D2BD77962F12ABD(::Class_0_16E4307DCC419505_549* a1)
	{
		return ((::Struct_2_698098A743D71086(*)(::Class_0_16E4307DCC419505_549*))((::PBYTE)hIl2Cpp + CLASS_1_BF03ECB82855FCB5_METHOD_1_1D2BD77962F12ABD_OFFSET))(a1);
	}
};

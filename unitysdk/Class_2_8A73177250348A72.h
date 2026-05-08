#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_161.h"
#include "unitysdk/Enum_3_B03166BB74859DD7.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_651.h"

class Class_0_16E4307DCC419505_13;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_8A73177250348A72_METHOD_2_011FED32953F4A34_OFFSET UNITYSDK_OFFSET(0x19034610)
#define CLASS_2_8A73177250348A72_METHOD_2_2099467EE59C9548_OFFSET UNITYSDK_OFFSET(0x19034AA0)
#define CLASS_2_8A73177250348A72_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19034620)
#define CLASS_2_8A73177250348A72_METHOD_2_F9B7966EAEC825B3_OFFSET UNITYSDK_OFFSET(0x19034C40)
#define CLASS_2_8A73177250348A72__CCTOR_OFFSET UNITYSDK_OFFSET(0x19034630)
#define CLASS_2_8A73177250348A72__CTOR_OFFSET UNITYSDK_OFFSET(0x19034400)

inline static constexpr unsigned int Class_2_8A73177250348A72_TypeDefinitionIndex = 12076;

class Class_2_8A73177250348A72 : public ::Class_1_5DA2E7556103D5A3_161
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8A73177250348A72_TypeDefinitionIndex)->GetStaticField(0x8CF0);
	}
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_1; // 0xF0
	::Enum_3_B03166BB74859DD7 Field_2_2; // 0xF8

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_651 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_651, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_8A73177250348A72__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8A73177250348A72__CCTOR_OFFSET))();
	}

	::System::Int32 Method_2_011FED32953F4A34()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A73177250348A72_METHOD_2_011FED32953F4A34_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A73177250348A72_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::Enum_3_B03166BB74859DD7 Method_2_2099467EE59C9548()
	{
		return ((::Enum_3_B03166BB74859DD7(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A73177250348A72_METHOD_2_2099467EE59C9548_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_2_F9B7966EAEC825B3()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A73177250348A72_METHOD_2_F9B7966EAEC825B3_OFFSET))(this);
	}
};

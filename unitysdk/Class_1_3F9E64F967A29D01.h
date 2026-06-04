#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_31.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_60;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3F9E64F967A29D01_METHOD_1_36A43EE474699637_OFFSET UNITYSDK_OFFSET(0xAEE9970)
#define CLASS_1_3F9E64F967A29D01_METHOD_1_389486378BEF2498_OFFSET UNITYSDK_OFFSET(0xAEE9D00)
#define CLASS_1_3F9E64F967A29D01_METHOD_1_3A1C917DB7DB612D_OFFSET UNITYSDK_OFFSET(0xAEE9550)
#define CLASS_1_3F9E64F967A29D01_METHOD_1_3BEE013982122797_OFFSET UNITYSDK_OFFSET(0xAEE9810)
#define CLASS_1_3F9E64F967A29D01_METHOD_1_68DA3F8325D873C1_OFFSET UNITYSDK_OFFSET(0xAEE9AE0)
#define CLASS_1_3F9E64F967A29D01__CTOR_OFFSET UNITYSDK_OFFSET(0xAEE9D90)

inline static constexpr unsigned int Class_1_3F9E64F967A29D01_TypeDefinitionIndex = 53102;

class Class_1_3F9E64F967A29D01 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Enum_3_4608E37A1B3D374A_31>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::Enum_3_4608E37A1B3D374A_31, ::System::Collections::Generic::List_1<::System::UInt32>*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F9E64F967A29D01__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_3A1C917DB7DB612D(::System::Collections::Generic::IList_1<::Class_1_1CBA230307F9C289_60*>* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_1CBA230307F9C289_60*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3F9E64F967A29D01_METHOD_1_3A1C917DB7DB612D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_3BEE013982122797()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F9E64F967A29D01_METHOD_1_3BEE013982122797_OFFSET))(this);
	}

	::System::Void Method_1_36A43EE474699637()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F9E64F967A29D01_METHOD_1_36A43EE474699637_OFFSET))(this);
	}

	::System::Void Method_1_68DA3F8325D873C1(::Enum_3_4608E37A1B3D374A_31 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_31, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3F9E64F967A29D01_METHOD_1_68DA3F8325D873C1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_389486378BEF2498(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3F9E64F967A29D01_METHOD_1_389486378BEF2498_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_32.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_59;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A3C5E2851E365218_METHOD_1_3BEE013982122797_OFFSET UNITYSDK_OFFSET(0x128AF280)
#define CLASS_1_A3C5E2851E365218_METHOD_1_3F1A5F0DB7432C33_OFFSET UNITYSDK_OFFSET(0x128AF7C0)
#define CLASS_1_A3C5E2851E365218_METHOD_1_6946F1F238E10B32_OFFSET UNITYSDK_OFFSET(0x128AF5C0)
#define CLASS_1_A3C5E2851E365218_METHOD_1_70F9AF56CA31874A_OFFSET UNITYSDK_OFFSET(0x128AEF80)
#define CLASS_1_A3C5E2851E365218_METHOD_1_F9555880FBE027D5_OFFSET UNITYSDK_OFFSET(0x128AF410)
#define CLASS_1_A3C5E2851E365218__CTOR_OFFSET UNITYSDK_OFFSET(0x128AF870)

inline static constexpr unsigned int Class_1_A3C5E2851E365218_TypeDefinitionIndex = 52402;

class Class_1_A3C5E2851E365218 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Enum_3_4608E37A1B3D374A_32>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::Enum_3_4608E37A1B3D374A_32, ::System::Collections::Generic::List_1<::System::UInt32>*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3C5E2851E365218__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_70F9AF56CA31874A(::System::Collections::Generic::IList_1<::Class_1_1CBA230307F9C289_59*>* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_1CBA230307F9C289_59*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A3C5E2851E365218_METHOD_1_70F9AF56CA31874A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_3BEE013982122797()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3C5E2851E365218_METHOD_1_3BEE013982122797_OFFSET))(this);
	}

	::System::Void Method_1_F9555880FBE027D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3C5E2851E365218_METHOD_1_F9555880FBE027D5_OFFSET))(this);
	}

	::System::Void Method_1_6946F1F238E10B32(::Enum_3_4608E37A1B3D374A_32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A3C5E2851E365218_METHOD_1_6946F1F238E10B32_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_3F1A5F0DB7432C33(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A3C5E2851E365218_METHOD_1_3F1A5F0DB7432C33_OFFSET))(this, a1);
	}
};

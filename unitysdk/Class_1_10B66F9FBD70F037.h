#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_019938BC9C50B169_1.h"
#include "unitysdk/Struct_2_019938BC9C50B169_2.h"
#include "unitysdk/System/Object.h"

class Class_1_40118813D113D3D1;
class Class_1_6869ECCA5B46F302_2;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_10B66F9FBD70F037_METHOD_1_07DEE4181DE3C33B_OFFSET UNITYSDK_OFFSET(0x11E7AB00)
#define CLASS_1_10B66F9FBD70F037_METHOD_1_890F8BA4747733BE_OFFSET UNITYSDK_OFFSET(0x11E7AA40)
#define CLASS_1_10B66F9FBD70F037_METHOD_1_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x11E7A660)
#define CLASS_1_10B66F9FBD70F037_METHOD_1_E5EF06B7D2A57CD4_OFFSET UNITYSDK_OFFSET(0x11E7A980)
#define CLASS_1_10B66F9FBD70F037__CTOR_OFFSET UNITYSDK_OFFSET(0x11E7A570)

inline static constexpr unsigned int Class_1_10B66F9FBD70F037_TypeDefinitionIndex = 57801;

class Class_1_10B66F9FBD70F037 : public ::System::Object
{
public:
	::Class_1_6869ECCA5B46F302_2* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169_1, ::System::Collections::Generic::List_1<::Class_1_40118813D113D3D1*>*>* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169_2, ::Class_1_40118813D113D3D1*>* Field_1_1; // 0x20

	::System::Void _ctor(::Class_1_6869ECCA5B46F302_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6869ECCA5B46F302_2*))((::PBYTE)hIl2Cpp + CLASS_1_10B66F9FBD70F037__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_40118813D113D3D1*>* Method_1_E5EF06B7D2A57CD4(::Struct_2_019938BC9C50B169_1& a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_40118813D113D3D1*>*(*)(::PVOID, ::Struct_2_019938BC9C50B169_1&))((::PBYTE)hIl2Cpp + CLASS_1_10B66F9FBD70F037_METHOD_1_E5EF06B7D2A57CD4_OFFSET))(this, a1);
	}

	::Class_1_40118813D113D3D1* Method_1_890F8BA4747733BE(::Struct_2_019938BC9C50B169_2& a1)
	{
		return ((::Class_1_40118813D113D3D1*(*)(::PVOID, ::Struct_2_019938BC9C50B169_2&))((::PBYTE)hIl2Cpp + CLASS_1_10B66F9FBD70F037_METHOD_1_890F8BA4747733BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_07DEE4181DE3C33B(::Struct_2_019938BC9C50B169_1& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_019938BC9C50B169_1&))((::PBYTE)hIl2Cpp + CLASS_1_10B66F9FBD70F037_METHOD_1_07DEE4181DE3C33B_OFFSET))(this, a1);
	}

	::System::Void Method_1_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10B66F9FBD70F037_METHOD_1_B2C0ADBFEA309440_OFFSET))(this);
	}
};

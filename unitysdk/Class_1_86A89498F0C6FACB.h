#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_43BD383C98B4C0C5_90;
class Class_3_3A3A95CA33F5CFBC;
class Class_3_883E597458B91E77;
class Class_3_AA6DF3A878195D3F;
class Class_3_BA709FB56ED5FAC4;
class Class_3_D2084E0C2DD39509;
class Class_3_DFD5D1FDB9D2A4AC;
class Class_3_F33F9DC5F4112336;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_86A89498F0C6FACB_METHOD_1_AE38B1074D0E01B2_OFFSET UNITYSDK_OFFSET(0xDB00F50)
#define CLASS_1_86A89498F0C6FACB_METHOD_1_C35AE33E0FA883E4_OFFSET UNITYSDK_OFFSET(0xDB018D0)
#define CLASS_1_86A89498F0C6FACB_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0xDB018C0)
#define CLASS_1_86A89498F0C6FACB_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xDB01BA0)
#define CLASS_1_86A89498F0C6FACB__CTOR_OFFSET UNITYSDK_OFFSET(0xDB00ED0)

inline static constexpr unsigned int Class_1_86A89498F0C6FACB_TypeDefinitionIndex = 67878;

class Class_1_86A89498F0C6FACB : public ::System::Object
{
public:
	::Class_1_43BD383C98B4C0C5_90* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_3; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Boolean Field_1_0; // 0x24

	::System::Void _ctor(::Class_1_43BD383C98B4C0C5_90* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_90*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_86A89498F0C6FACB__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_AE38B1074D0E01B2(::UnityEngine::Vector3& a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::Class_3_D2084E0C2DD39509* a3)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3&, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::Class_3_D2084E0C2DD39509*))((::PBYTE)hIl2Cpp + CLASS_1_86A89498F0C6FACB_METHOD_1_AE38B1074D0E01B2_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_86A89498F0C6FACB_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_C35AE33E0FA883E4(::Class_3_3A3A95CA33F5CFBC* a1, ::Class_3_F33F9DC5F4112336* a2, ::Class_3_883E597458B91E77* a3, ::Class_3_DFD5D1FDB9D2A4AC* a4, ::Class_3_BA709FB56ED5FAC4* a5, ::Class_3_AA6DF3A878195D3F* a6, ::Class_3_D2084E0C2DD39509* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3A3A95CA33F5CFBC*, ::Class_3_F33F9DC5F4112336*, ::Class_3_883E597458B91E77*, ::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_BA709FB56ED5FAC4*, ::Class_3_AA6DF3A878195D3F*, ::Class_3_D2084E0C2DD39509*))((::PBYTE)hIl2Cpp + CLASS_1_86A89498F0C6FACB_METHOD_1_C35AE33E0FA883E4_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86A89498F0C6FACB_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};

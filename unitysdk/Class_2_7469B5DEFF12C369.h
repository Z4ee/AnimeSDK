#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D5D147579CBDAF3E.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_7469B5DEFF12C369_CLEAR_OFFSET UNITYSDK_OFFSET(0xABE22B0)
#define CLASS_2_7469B5DEFF12C369_METHOD_2_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0xABE1F40)
#define CLASS_2_7469B5DEFF12C369_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0xABE1C10)
#define CLASS_2_7469B5DEFF12C369_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xABE21E0)
#define CLASS_2_7469B5DEFF12C369_METHOD_2_5B62DAAC1663D204_OFFSET UNITYSDK_OFFSET(0xABE1C50)
#define CLASS_2_7469B5DEFF12C369_METHOD_2_729D817C512DA11F_OFFSET UNITYSDK_OFFSET(0xABE2470)
#define CLASS_2_7469B5DEFF12C369_METHOD_2_7B6BB4667FE9151B_OFFSET UNITYSDK_OFFSET(0xABE2460)
#define CLASS_2_7469B5DEFF12C369_METHOD_2_8723A000853037DA_OFFSET UNITYSDK_OFFSET(0xABE2240)
#define CLASS_2_7469B5DEFF12C369__CTOR_OFFSET UNITYSDK_OFFSET(0xABE2440)
#define CLASS_2_7469B5DEFF12C369___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xABE24E0)

inline static constexpr unsigned int Class_2_7469B5DEFF12C369_TypeDefinitionIndex = 66257;

class Class_2_7469B5DEFF12C369 : public ::Class_1_D5D147579CBDAF3E
{
public:
	::System::Single Field_2_0; // 0x48
	::System::Boolean Field_2_1; // 0x4C
	::System::Boolean Field_2_2; // 0x4D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7469B5DEFF12C369__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7469B5DEFF12C369_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_2_5B62DAAC1663D204(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_7469B5DEFF12C369_METHOD_2_5B62DAAC1663D204_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7469B5DEFF12C369_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_8723A000853037DA(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7469B5DEFF12C369_METHOD_2_8723A000853037DA_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7469B5DEFF12C369_CLEAR_OFFSET))(this);
	}

	::System::Void Method_2_0076C796B2045359()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7469B5DEFF12C369_METHOD_2_0076C796B2045359_OFFSET))(this);
	}

	::System::Void Method_2_7B6BB4667FE9151B(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_7469B5DEFF12C369_METHOD_2_7B6BB4667FE9151B_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_729D817C512DA11F(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7469B5DEFF12C369_METHOD_2_729D817C512DA11F_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7469B5DEFF12C369___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};

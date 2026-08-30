#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_3F1B1DE9D9F51912;
class Class_3_E7D29F43FB80184D;
namespace UnityEngine { class Transform; }

#define CLASS_1_D97B032D25740832_METHOD_1_27EEF2365AEB96A1_OFFSET UNITYSDK_OFFSET(0x179F9280)
#define CLASS_1_D97B032D25740832_METHOD_1_5E72916301E347E2_OFFSET UNITYSDK_OFFSET(0x179F9540)
#define CLASS_1_D97B032D25740832_METHOD_1_8C4AEC0BC1CA0CB4_OFFSET UNITYSDK_OFFSET(0x179F9450)
#define CLASS_1_D97B032D25740832_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x179F9620)
#define CLASS_1_D97B032D25740832__CTOR_OFFSET UNITYSDK_OFFSET(0x179F9250)

inline static constexpr unsigned int Class_1_D97B032D25740832_TypeDefinitionIndex = 78620;

class Class_1_D97B032D25740832 : public ::System::Object
{
public:
	::Class_3_3F1B1DE9D9F51912* EPKIDMNCGAA; // 0x10
	::UnityEngine::Transform* OJAHLJGABMJ; // 0x18
	::System::Single HBDJCFFDGDD; // 0x20
	::System::Single BKMLJMADLGL; // 0x24
	::System::Single JGLKOOAFOBO; // 0x28
	::System::Single AJILPHGIIKO; // 0x2C
	::System::Single MDALIGIMJLE; // 0x30

	::System::Void _ctor(::UnityEngine::Transform* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D97B032D25740832__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_27EEF2365AEB96A1(::Class_3_E7D29F43FB80184D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E7D29F43FB80184D*))((::PBYTE)hIl2Cpp + CLASS_1_D97B032D25740832_METHOD_1_27EEF2365AEB96A1_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C4AEC0BC1CA0CB4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D97B032D25740832_METHOD_1_8C4AEC0BC1CA0CB4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5E72916301E347E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D97B032D25740832_METHOD_1_5E72916301E347E2_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D97B032D25740832_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B4357A1C72BABC6B_1;
class Class_2_921296CE04546AF9;
class Class_3_99BC749707F2A8AC;
namespace Entitas { template <typename T> class IGroup_1; }

#define CLASS_1_A97D91983A382ECC_CLEANUP_OFFSET UNITYSDK_OFFSET(0x932B2A0)
#define CLASS_1_A97D91983A382ECC_EXECUTE_OFFSET UNITYSDK_OFFSET(0x932A7A0)
#define CLASS_1_A97D91983A382ECC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x932A3E0)
#define CLASS_1_A97D91983A382ECC_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x932A380)
#define CLASS_1_A97D91983A382ECC_METHOD_1_1DC46F2F3F7C5302_OFFSET UNITYSDK_OFFSET(0x932A9B0)
#define CLASS_1_A97D91983A382ECC_METHOD_1_3265B427FAD2DFA4_OFFSET UNITYSDK_OFFSET(0x932B490)
#define CLASS_1_A97D91983A382ECC_METHOD_1_3E46DE895F531901_OFFSET UNITYSDK_OFFSET(0x932B030)
#define CLASS_1_A97D91983A382ECC_METHOD_1_C03E344F21EEBDA0_OFFSET UNITYSDK_OFFSET(0x932C0C0)
#define CLASS_1_A97D91983A382ECC_METHOD_1_F02B5B383D593A70_OFFSET UNITYSDK_OFFSET(0x932ADF0)
#define CLASS_1_A97D91983A382ECC__CTOR_OFFSET UNITYSDK_OFFSET(0x932A370)

inline static constexpr unsigned int Class_1_A97D91983A382ECC_TypeDefinitionIndex = 70419;

class Class_1_A97D91983A382ECC : public ::System::Object
{
public:
	::Class_3_99BC749707F2A8AC* Field_1_1; // 0x10
	::Entitas::IGroup_1<::Class_2_921296CE04546AF9*>* Field_1_2; // 0x18
	::Entitas::IGroup_1<::Class_2_921296CE04546AF9*>* Field_1_3; // 0x20
	::Class_1_B4357A1C72BABC6B_1* Field_1_0; // 0x28

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B_1* a1, ::Class_3_99BC749707F2A8AC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B_1*, ::Class_3_99BC749707F2A8AC*))((::PBYTE)hIl2Cpp + CLASS_1_A97D91983A382ECC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A97D91983A382ECC_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A97D91983A382ECC_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A97D91983A382ECC_EXECUTE_OFFSET))(this);
	}

	::System::Void Cleanup()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A97D91983A382ECC_CLEANUP_OFFSET))(this);
	}

	::System::Void Method_1_1DC46F2F3F7C5302(::Class_2_921296CE04546AF9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_921296CE04546AF9*))((::PBYTE)hIl2Cpp + CLASS_1_A97D91983A382ECC_METHOD_1_1DC46F2F3F7C5302_OFFSET))(this, a1);
	}

	::System::Void Method_1_F02B5B383D593A70(::Class_2_921296CE04546AF9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_921296CE04546AF9*))((::PBYTE)hIl2Cpp + CLASS_1_A97D91983A382ECC_METHOD_1_F02B5B383D593A70_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E46DE895F531901(::Class_2_921296CE04546AF9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_921296CE04546AF9*))((::PBYTE)hIl2Cpp + CLASS_1_A97D91983A382ECC_METHOD_1_3E46DE895F531901_OFFSET))(this, a1);
	}

	::System::Void Method_1_3265B427FAD2DFA4(::Class_2_921296CE04546AF9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_921296CE04546AF9*))((::PBYTE)hIl2Cpp + CLASS_1_A97D91983A382ECC_METHOD_1_3265B427FAD2DFA4_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_C03E344F21EEBDA0(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A97D91983A382ECC_METHOD_1_C03E344F21EEBDA0_OFFSET))(this, a1, a2, a3, a4);
	}
};

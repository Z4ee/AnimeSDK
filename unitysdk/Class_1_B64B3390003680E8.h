#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_57BF88AA3D4ADFA2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_04E8A8CB715F95A7_Class_1_F9EEB1063E933248;
class Class_2_049053A9DCD26B56;
class Class_2_31ADA956CBE1875C;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PlayNPCBubbleTalk; }
namespace RPG::GameCore { class SummonUnitChildBillboardHost; }
namespace RPG::GameCore { class SummonUnitChildEffectConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define CLASS_1_B64B3390003680E8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91ED0C0)
#define CLASS_1_B64B3390003680E8_METHOD_1_39CF329C9DA015B1_OFFSET UNITYSDK_OFFSET(0x91ED380)
#define CLASS_1_B64B3390003680E8_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x91ED5B0)
#define CLASS_1_B64B3390003680E8_METHOD_1_9C5FE2400288EFCC_OFFSET UNITYSDK_OFFSET(0x91ED430)
#define CLASS_1_B64B3390003680E8_METHOD_1_9D7FAF6B530F3E98_OFFSET UNITYSDK_OFFSET(0x91ED2D0)
#define CLASS_1_B64B3390003680E8_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x91ED140)
#define CLASS_1_B64B3390003680E8_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x91EE2E0)
#define CLASS_1_B64B3390003680E8_METHOD_1_BF653AC3FD8A315F_OFFSET UNITYSDK_OFFSET(0x91ED640)
#define CLASS_1_B64B3390003680E8_METHOD_1_C45612BCA4006B22_OFFSET UNITYSDK_OFFSET(0x91EDE80)
#define CLASS_1_B64B3390003680E8_METHOD_1_C73CBB2E1F3BBA7B_OFFSET UNITYSDK_OFFSET(0x91ED200)
#define CLASS_1_B64B3390003680E8_METHOD_1_C7D68333A84CD917_1_OFFSET UNITYSDK_OFFSET(0x91ED940)
#define CLASS_1_B64B3390003680E8_METHOD_1_C7D68333A84CD917_OFFSET UNITYSDK_OFFSET(0x91ED3D0)
#define CLASS_1_B64B3390003680E8_METHOD_1_C8B2338885B4A0AD_OFFSET UNITYSDK_OFFSET(0x91EDA50)
#define CLASS_1_B64B3390003680E8_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x91ED9D0)
#define CLASS_1_B64B3390003680E8_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x91EDA10)
#define CLASS_1_B64B3390003680E8_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x91ED990)
#define CLASS_1_B64B3390003680E8_METHOD_1_E44C4B1878F85417_OFFSET UNITYSDK_OFFSET(0x91ED8E0)
#define CLASS_1_B64B3390003680E8_METHOD_1_EC2B405D0723571D_1_OFFSET UNITYSDK_OFFSET(0x91EE290)
#define CLASS_1_B64B3390003680E8_METHOD_1_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x91EDE30)
#define CLASS_1_B64B3390003680E8__CTOR_OFFSET UNITYSDK_OFFSET(0x91ED030)

inline static constexpr unsigned int Class_1_B64B3390003680E8_TypeDefinitionIndex = 52951;

class Class_1_B64B3390003680E8 : public ::System::Object
{
public:
	::RPG::GameCore::SummonUnitChildBillboardHost* Field_1_8; // 0x10
	::System::Collections::Generic::LinkedList_1<::Class_1_04E8A8CB715F95A7_Class_1_F9EEB1063E933248*>* Field_1_9; // 0x18
	::Class_2_31ADA956CBE1875C* Field_1_7; // 0x20
	::RPG::GameCore::GameEntity* Field_1_6; // 0x28
	::RPG::GameCore::SummonUnitChildEffectConfig* Field_1_12; // 0x30
	::RPG::GameCore::SummonUnitChildEffectConfig* Field_1_11; // 0x38
	::System::Boolean Field_1_5; // 0x40
	::UnityEngine::Vector3 Field_1_0; // 0x44
	::UnityEngine::Quaternion Field_1_1; // 0x50
	::System::Single Field_1_2; // 0x60
	::System::Single Field_1_3; // 0x64
	::System::Single Field_1_10; // 0x68
	::System::Single Field_1_4; // 0x6C

	::System::Void _ctor(::Class_2_31ADA956CBE1875C* a1, ::Class_2_049053A9DCD26B56* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_31ADA956CBE1875C*, ::Class_2_049053A9DCD26B56*))((::PBYTE)hIl2Cpp + CLASS_1_B64B3390003680E8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B64B3390003680E8_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_C73CBB2E1F3BBA7B(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_B64B3390003680E8_METHOD_1_C73CBB2E1F3BBA7B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9D7FAF6B530F3E98(::RPG::GameCore::PlayNPCBubbleTalk* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayNPCBubbleTalk*))((::PBYTE)hIl2Cpp + CLASS_1_B64B3390003680E8_METHOD_1_9D7FAF6B530F3E98_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_39CF329C9DA015B1(::System::String* a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B64B3390003680E8_METHOD_1_39CF329C9DA015B1_OFFSET))(this, a1);
	}

	::System::Void Method_1_C7D68333A84CD917(::System::Collections::Generic::IReadOnlyList_1<::Struct_2_57BF88AA3D4ADFA2>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Struct_2_57BF88AA3D4ADFA2>*))((::PBYTE)hIl2Cpp + CLASS_1_B64B3390003680E8_METHOD_1_C7D68333A84CD917_OFFSET))(this, a1);
	}

	::System::Void Method_1_9C5FE2400288EFCC(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B64B3390003680E8_METHOD_1_9C5FE2400288EFCC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B64B3390003680E8_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_1_BF653AC3FD8A315F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B64B3390003680E8_METHOD_1_BF653AC3FD8A315F_OFFSET))(this, a1);
	}

	::System::Void Method_1_E44C4B1878F85417(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B64B3390003680E8_METHOD_1_E44C4B1878F85417_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C7D68333A84CD917_1(::System::Collections::Generic::IReadOnlyList_1<::Struct_2_57BF88AA3D4ADFA2>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Struct_2_57BF88AA3D4ADFA2>*))((::PBYTE)hIl2Cpp + CLASS_1_B64B3390003680E8_METHOD_1_C7D68333A84CD917_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B64B3390003680E8_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B64B3390003680E8_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B64B3390003680E8_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_C8B2338885B4A0AD(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_B64B3390003680E8_METHOD_1_C8B2338885B4A0AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B64B3390003680E8_METHOD_1_EC2B405D0723571D_OFFSET))(this);
	}

	::System::Void Method_1_EC2B405D0723571D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B64B3390003680E8_METHOD_1_EC2B405D0723571D_1_OFFSET))(this);
	}

	::System::Void Method_1_C45612BCA4006B22(::RPG::GameCore::SummonUnitChildEffectConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonUnitChildEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_1_B64B3390003680E8_METHOD_1_C45612BCA4006B22_OFFSET))(this, a1);
	}

	::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B64B3390003680E8_METHOD_1_AA169839CB93802A_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B64B3390003680E8_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}
};

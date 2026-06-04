#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_483ED67B5E0A21FB_Struct_2_0D0A65BC8F0BF9A8.h"
#include "unitysdk/RVO/AsyncAgentParam.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_952;
class Class_1_2BC1F0DE405AE0D4;
class Class_1_3504E309EE87A23B;
class Class_1_C8D1FDF5B7DC671F;
namespace RPG::GameCore { class LevelPedestrianV2RoadMapInfo; }
namespace System { class Action; }
namespace System { class Random; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::AI { class AsyncNavMeshAgent; }
namespace UnityEngine::AI { class AsyncNavMeshSimulator; }

#define CLASS_1_483ED67B5E0A21FB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA76E4A0)
#define CLASS_1_483ED67B5E0A21FB_METHOD_1_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0xA76E740)
#define CLASS_1_483ED67B5E0A21FB_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xA76EBC0)
#define CLASS_1_483ED67B5E0A21FB_METHOD_1_2988E679F8EF6B93_OFFSET UNITYSDK_OFFSET(0xA76EEC0)
#define CLASS_1_483ED67B5E0A21FB_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xA76E8C0)
#define CLASS_1_483ED67B5E0A21FB_METHOD_1_45872D1C931761E1_OFFSET UNITYSDK_OFFSET(0xA76E910)
#define CLASS_1_483ED67B5E0A21FB_METHOD_1_95780ED94B90ED36_1_OFFSET UNITYSDK_OFFSET(0xA76EB60)
#define CLASS_1_483ED67B5E0A21FB_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xA76EB10)
#define CLASS_1_483ED67B5E0A21FB_METHOD_1_969D9516A75501DE_OFFSET UNITYSDK_OFFSET(0xA76EB00)
#define CLASS_1_483ED67B5E0A21FB_METHOD_1_9CA5A80F6B5B9E01_OFFSET UNITYSDK_OFFSET(0xA76EBB0)
#define CLASS_1_483ED67B5E0A21FB_METHOD_1_AC72D0112BCC7BF7_OFFSET UNITYSDK_OFFSET(0xA76E9C0)
#define CLASS_1_483ED67B5E0A21FB_METHOD_1_B2718BCB2720B9B5_OFFSET UNITYSDK_OFFSET(0xA76EBD0)
#define CLASS_1_483ED67B5E0A21FB_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA76EFE0)
#define CLASS_1_483ED67B5E0A21FB_METHOD_1_D95A2ADBCE2EECCE_OFFSET UNITYSDK_OFFSET(0xA76D670)
#define CLASS_1_483ED67B5E0A21FB_METHOD_1_DC8AA765E2AFD1B6_1_OFFSET UNITYSDK_OFFSET(0xA76EA90)
#define CLASS_1_483ED67B5E0A21FB_METHOD_1_DC8AA765E2AFD1B6_OFFSET UNITYSDK_OFFSET(0xA76EA20)
#define CLASS_1_483ED67B5E0A21FB_METHOD_1_ED13C2002FF62AF6_OFFSET UNITYSDK_OFFSET(0xA76EC70)
#define CLASS_1_483ED67B5E0A21FB__CTOR_OFFSET UNITYSDK_OFFSET(0xA76CEB0)

inline static constexpr unsigned int Class_1_483ED67B5E0A21FB_TypeDefinitionIndex = 64830;

class Class_1_483ED67B5E0A21FB : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	::RPG::GameCore::LevelPedestrianV2RoadMapInfo* Field_1_1; // 0x10
	::Il2CppArray<::Class_1_2BC1F0DE405AE0D4*>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_952*>* Field_1_3; // 0x20
	::UnityEngine::GameObject* Field_1_4; // 0x28
	::Il2CppArray<::Class_1_C8D1FDF5B7DC671F*>* Field_1_5; // 0x30
	::System::Action* Field_1_6; // 0x38
	::System::Random* Field_1_7; // 0x40
	::Class_1_3504E309EE87A23B* Field_1_8; // 0x48
	::Il2CppArray<::Class_1_483ED67B5E0A21FB_Struct_2_0D0A65BC8F0BF9A8>* Field_1_9; // 0x50
	::System::Int32 Field_1_10; // 0x58
	::System::Int32 Field_1_11; // 0x5C

	::System::Void _ctor(::Class_1_3504E309EE87A23B* a1, ::RPG::GameCore::LevelPedestrianV2RoadMapInfo* a2, ::System::String* a3, ::Il2CppArray<::System::String*>* a4, ::System::UInt32 a5, ::System::UInt32 a6, ::UnityEngine::Transform* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3504E309EE87A23B*, ::RPG::GameCore::LevelPedestrianV2RoadMapInfo*, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::UInt32, ::System::UInt32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_483ED67B5E0A21FB__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_483ED67B5E0A21FB_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_483ED67B5E0A21FB_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Single Method_1_45872D1C931761E1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_483ED67B5E0A21FB_METHOD_1_45872D1C931761E1_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_AC72D0112BCC7BF7(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_483ED67B5E0A21FB_METHOD_1_AC72D0112BCC7BF7_OFFSET))(this, a1, a2);
	}

	::Class_1_C8D1FDF5B7DC671F* Method_1_DC8AA765E2AFD1B6(::System::Int32 a1)
	{
		return ((::Class_1_C8D1FDF5B7DC671F*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_483ED67B5E0A21FB_METHOD_1_DC8AA765E2AFD1B6_OFFSET))(this, a1);
	}

	::Class_1_2BC1F0DE405AE0D4* Method_1_DC8AA765E2AFD1B6_1(::System::Int32 a1)
	{
		return ((::Class_1_2BC1F0DE405AE0D4*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_483ED67B5E0A21FB_METHOD_1_DC8AA765E2AFD1B6_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_952*>* Method_1_969D9516A75501DE()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_952*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_483ED67B5E0A21FB_METHOD_1_969D9516A75501DE_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_483ED67B5E0A21FB_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_483ED67B5E0A21FB_METHOD_1_95780ED94B90ED36_1_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_9CA5A80F6B5B9E01()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_483ED67B5E0A21FB_METHOD_1_9CA5A80F6B5B9E01_OFFSET))(this);
	}

	::Class_1_3504E309EE87A23B* Method_1_24748FC20F375725()
	{
		return ((::Class_1_3504E309EE87A23B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_483ED67B5E0A21FB_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::UnityEngine::AI::AsyncNavMeshSimulator* Method_1_B2718BCB2720B9B5()
	{
		return ((::UnityEngine::AI::AsyncNavMeshSimulator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_483ED67B5E0A21FB_METHOD_1_B2718BCB2720B9B5_OFFSET))(this);
	}

	::UnityEngine::AI::AsyncNavMeshAgent* Method_1_ED13C2002FF62AF6(::RVO::AsyncAgentParam& a1)
	{
		return ((::UnityEngine::AI::AsyncNavMeshAgent*(*)(::PVOID, ::RVO::AsyncAgentParam&))((::PBYTE)hIl2Cpp + CLASS_1_483ED67B5E0A21FB_METHOD_1_ED13C2002FF62AF6_OFFSET))(this, a1);
	}

	::System::Void Method_1_2988E679F8EF6B93(::UnityEngine::AI::AsyncNavMeshAgent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AsyncNavMeshAgent*))((::PBYTE)hIl2Cpp + CLASS_1_483ED67B5E0A21FB_METHOD_1_2988E679F8EF6B93_OFFSET))(this, a1);
	}

	::System::Void Method_1_092CD57850778EFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_483ED67B5E0A21FB_METHOD_1_092CD57850778EFC_OFFSET))(this);
	}

	::System::Void Method_1_D95A2ADBCE2EECCE(::System::String* a1, ::Il2CppArray<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_483ED67B5E0A21FB_METHOD_1_D95A2ADBCE2EECCE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_483ED67B5E0A21FB_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};

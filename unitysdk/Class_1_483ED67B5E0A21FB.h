#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_483ED67B5E0A21FB_Struct_2_0D0A65BC8F0BF9A8.h"
#include "unitysdk/RVO/AsyncAgentParam.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1046;
class Class_1_2BC1F0DE405AE0D4;
class Class_1_C8D1FDF5B7DC671F;
class Class_1_F8E6AA28A352CA0E;
namespace RPG::GameCore { class LevelPedestrianV2RoadMapInfo; }
namespace System { class Action; }
namespace System { class Random; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::AI { class AsyncNavMeshAgent; }
namespace UnityEngine::AI { class AsyncNavMeshSimulator; }

#define CLASS_1_483ED67B5E0A21FB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA709E0)
#define CLASS_1_483ED67B5E0A21FB_METHOD_1_081D1124449C70CF_OFFSET UNITYSDK_OFFSET(0xBA71050)
#define CLASS_1_483ED67B5E0A21FB_METHOD_1_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0xBA70C20)
#define CLASS_1_483ED67B5E0A21FB_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xBA711C0)
#define CLASS_1_483ED67B5E0A21FB_METHOD_1_2988E679F8EF6B93_OFFSET UNITYSDK_OFFSET(0xBA714C0)
#define CLASS_1_483ED67B5E0A21FB_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xBA70DA0)
#define CLASS_1_483ED67B5E0A21FB_METHOD_1_95780ED94B90ED36_1_OFFSET UNITYSDK_OFFSET(0xBA71160)
#define CLASS_1_483ED67B5E0A21FB_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xBA71110)
#define CLASS_1_483ED67B5E0A21FB_METHOD_1_969D9516A75501DE_OFFSET UNITYSDK_OFFSET(0xBA71100)
#define CLASS_1_483ED67B5E0A21FB_METHOD_1_9CA5A80F6B5B9E01_OFFSET UNITYSDK_OFFSET(0xBA711B0)
#define CLASS_1_483ED67B5E0A21FB_METHOD_1_AAA08DA9AA6317DB_OFFSET UNITYSDK_OFFSET(0xBA70DF0)
#define CLASS_1_483ED67B5E0A21FB_METHOD_1_AC72D0112BCC7BF7_OFFSET UNITYSDK_OFFSET(0xBA70F10)
#define CLASS_1_483ED67B5E0A21FB_METHOD_1_B2718BCB2720B9B5_OFFSET UNITYSDK_OFFSET(0xBA711D0)
#define CLASS_1_483ED67B5E0A21FB_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBA715E0)
#define CLASS_1_483ED67B5E0A21FB_METHOD_1_D95A2ADBCE2EECCE_OFFSET UNITYSDK_OFFSET(0xBA6FBA0)
#define CLASS_1_483ED67B5E0A21FB_METHOD_1_DC8AA765E2AFD1B6_1_OFFSET UNITYSDK_OFFSET(0xBA70FE0)
#define CLASS_1_483ED67B5E0A21FB_METHOD_1_DC8AA765E2AFD1B6_OFFSET UNITYSDK_OFFSET(0xBA70F70)
#define CLASS_1_483ED67B5E0A21FB_METHOD_1_ED13C2002FF62AF6_OFFSET UNITYSDK_OFFSET(0xBA71270)
#define CLASS_1_483ED67B5E0A21FB__CTOR_OFFSET UNITYSDK_OFFSET(0xBA6F300)

inline static constexpr unsigned int Class_1_483ED67B5E0A21FB_TypeDefinitionIndex = 69297;

class Class_1_483ED67B5E0A21FB : public ::System::Object
{
public:
	// static const ::System::Single ODCCFPPEEAG; // 0x0
	::System::Random* OLEEIPHBJKB; // 0x10
	::Class_1_F8E6AA28A352CA0E* FLMODBLFAGD; // 0x18
	::RPG::GameCore::LevelPedestrianV2RoadMapInfo* IGHAHBNLIJA; // 0x20
	::UnityEngine::GameObject* GKNBCPMJHMN; // 0x28
	::System::Action* ADIOMDIEKNM; // 0x30
	::Il2CppArray<::Class_1_483ED67B5E0A21FB_Struct_2_0D0A65BC8F0BF9A8>* EEHEAPIPDMF; // 0x38
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1046*>* JDOMJDMFPGG; // 0x40
	::Il2CppArray<::Class_1_2BC1F0DE405AE0D4*>* IBMMBGIMACO; // 0x48
	::Il2CppArray<::Class_1_C8D1FDF5B7DC671F*>* JABKEGEILAO; // 0x50
	::System::Int32 IKIFIEKPMIG; // 0x58
	::System::Int32 AHFLDAEIFKH; // 0x5C

	::System::Void _ctor(::Class_1_F8E6AA28A352CA0E* a1, ::RPG::GameCore::LevelPedestrianV2RoadMapInfo* a2, ::System::String* a3, ::Il2CppArray<::System::String*>* a4, ::System::UInt32 a5, ::System::UInt32 a6, ::UnityEngine::Transform* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F8E6AA28A352CA0E*, ::RPG::GameCore::LevelPedestrianV2RoadMapInfo*, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::UInt32, ::System::UInt32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_483ED67B5E0A21FB__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_483ED67B5E0A21FB_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_483ED67B5E0A21FB_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Single Method_1_AAA08DA9AA6317DB(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_483ED67B5E0A21FB_METHOD_1_AAA08DA9AA6317DB_OFFSET))(this, a1, a2);
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

	::System::Void Method_1_081D1124449C70CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_483ED67B5E0A21FB_METHOD_1_081D1124449C70CF_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1046*>* Method_1_969D9516A75501DE()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1046*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_483ED67B5E0A21FB_METHOD_1_969D9516A75501DE_OFFSET))(this);
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

	::Class_1_F8E6AA28A352CA0E* Method_1_24748FC20F375725()
	{
		return ((::Class_1_F8E6AA28A352CA0E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_483ED67B5E0A21FB_METHOD_1_24748FC20F375725_OFFSET))(this);
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

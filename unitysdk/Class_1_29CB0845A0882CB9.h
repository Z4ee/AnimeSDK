#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_DA16F6EFFF969A86;
namespace RPG::Client { class MirrormentValleyConfig; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client::Prop { class OpticalIllusionPuzzleBoard; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_29CB0845A0882CB9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1555BF50)
#define CLASS_1_29CB0845A0882CB9_GET_BOARD_OFFSET UNITYSDK_OFFSET(0x1555C7C0)
#define CLASS_1_29CB0845A0882CB9_GET_DESIGNPATHS_OFFSET UNITYSDK_OFFSET(0x1555C7E0)
#define CLASS_1_29CB0845A0882CB9_GET_MIRRORVALLEYCONFIG_OFFSET UNITYSDK_OFFSET(0x1555C7A0)
#define CLASS_1_29CB0845A0882CB9_GET_PATHINDEX_OFFSET UNITYSDK_OFFSET(0x1555C760)
#define CLASS_1_29CB0845A0882CB9_GET_REACHPOINT_OFFSET UNITYSDK_OFFSET(0x1555C780)
#define CLASS_1_29CB0845A0882CB9_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x1555BFF0)
#define CLASS_1_29CB0845A0882CB9_METHOD_1_8664E854FFEDC953_OFFSET UNITYSDK_OFFSET(0x1555C0F0)
#define CLASS_1_29CB0845A0882CB9_METHOD_1_C2F9D63D86AFE0EF_OFFSET UNITYSDK_OFFSET(0x1555C560)
#define CLASS_1_29CB0845A0882CB9_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1555C0B0)
#define CLASS_1_29CB0845A0882CB9_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1555BFA0)
#define CLASS_1_29CB0845A0882CB9_METHOD_1_EBF44BC910948FDA_1_OFFSET UNITYSDK_OFFSET(0x1555C4C0)
#define CLASS_1_29CB0845A0882CB9_METHOD_1_EBF44BC910948FDA_OFFSET UNITYSDK_OFFSET(0x1555C400)
#define CLASS_1_29CB0845A0882CB9_SET_BOARD_OFFSET UNITYSDK_OFFSET(0x1555C7D0)
#define CLASS_1_29CB0845A0882CB9_SET_DESIGNPATHS_OFFSET UNITYSDK_OFFSET(0x1555C7F0)
#define CLASS_1_29CB0845A0882CB9_SET_MIRRORVALLEYCONFIG_OFFSET UNITYSDK_OFFSET(0x1555C7B0)
#define CLASS_1_29CB0845A0882CB9_SET_PATHINDEX_OFFSET UNITYSDK_OFFSET(0x1555C770)
#define CLASS_1_29CB0845A0882CB9_SET_REACHPOINT_OFFSET UNITYSDK_OFFSET(0x1555C790)
#define CLASS_1_29CB0845A0882CB9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1555C800)
#define CLASS_1_29CB0845A0882CB9__CTOR_OFFSET UNITYSDK_OFFSET(0x1555BEB0)

inline static constexpr unsigned int Class_1_29CB0845A0882CB9_TypeDefinitionIndex = 78248;

class Class_1_29CB0845A0882CB9 : public ::System::Object
{
public:
	static ::System::String** StaticGet_OLJCEBKIPFA()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_29CB0845A0882CB9_TypeDefinitionIndex)->GetStaticField(0x7530);
	}
	static ::System::String** StaticGet_IOKLAPPFMNL()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_29CB0845A0882CB9_TypeDefinitionIndex)->GetStaticField(0x7538);
	}
	::Il2CppArray<::UnityEngine::Vector3>* _DesignPaths_k__BackingField; // 0x10
	::RPG::Client::MirrormentValleyConfig* _MirrorValleyConfig_k__BackingField; // 0x18
	::RPG::Client::Prop::OpticalIllusionPuzzleBoard* _Board_k__BackingField; // 0x20
	::System::Collections::Generic::List_1<::Class_1_DA16F6EFFF969A86*>* NBKBBNNBDKP; // 0x28
	::System::Int32 _PathIndex_k__BackingField; // 0x30
	::System::Int32 _ReachPoint_k__BackingField; // 0x34

	::System::Void _ctor(::RPG::Client::Prop::OpticalIllusionPuzzleBoard* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleBoard*))((::PBYTE)hIl2Cpp + CLASS_1_29CB0845A0882CB9__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_29CB0845A0882CB9__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29CB0845A0882CB9_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29CB0845A0882CB9_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29CB0845A0882CB9_METHOD_1_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29CB0845A0882CB9_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_8664E854FFEDC953(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Nullable_1<::UnityEngine::Vector3> a4, ::System::String* a5, ::UnityEngine::Transform* a6, ::System::Boolean a7, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::String*, ::UnityEngine::Transform*, ::System::Boolean, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*))((::PBYTE)hIl2Cpp + CLASS_1_29CB0845A0882CB9_METHOD_1_8664E854FFEDC953_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_1_EBF44BC910948FDA(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_29CB0845A0882CB9_METHOD_1_EBF44BC910948FDA_OFFSET))(this, a1);
	}

	::System::Void Method_1_EBF44BC910948FDA_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_29CB0845A0882CB9_METHOD_1_EBF44BC910948FDA_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_C2F9D63D86AFE0EF(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_29CB0845A0882CB9_METHOD_1_C2F9D63D86AFE0EF_OFFSET))(this, a1, a2);
	}

	::System::Int32 get_PathIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29CB0845A0882CB9_GET_PATHINDEX_OFFSET))(this);
	}

	::System::Void set_PathIndex(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_29CB0845A0882CB9_SET_PATHINDEX_OFFSET))(this, a1);
	}

	::System::Int32 get_ReachPoint()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29CB0845A0882CB9_GET_REACHPOINT_OFFSET))(this);
	}

	::System::Void set_ReachPoint(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_29CB0845A0882CB9_SET_REACHPOINT_OFFSET))(this, a1);
	}

	::RPG::Client::MirrormentValleyConfig* get_MirrorValleyConfig()
	{
		return ((::RPG::Client::MirrormentValleyConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29CB0845A0882CB9_GET_MIRRORVALLEYCONFIG_OFFSET))(this);
	}

	::System::Void set_MirrorValleyConfig(::RPG::Client::MirrormentValleyConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MirrormentValleyConfig*))((::PBYTE)hIl2Cpp + CLASS_1_29CB0845A0882CB9_SET_MIRRORVALLEYCONFIG_OFFSET))(this, a1);
	}

	::RPG::Client::Prop::OpticalIllusionPuzzleBoard* get_Board()
	{
		return ((::RPG::Client::Prop::OpticalIllusionPuzzleBoard*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29CB0845A0882CB9_GET_BOARD_OFFSET))(this);
	}

	::System::Void set_Board(::RPG::Client::Prop::OpticalIllusionPuzzleBoard* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::OpticalIllusionPuzzleBoard*))((::PBYTE)hIl2Cpp + CLASS_1_29CB0845A0882CB9_SET_BOARD_OFFSET))(this, a1);
	}

	::Il2CppArray<::UnityEngine::Vector3>* get_DesignPaths()
	{
		return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29CB0845A0882CB9_GET_DESIGNPATHS_OFFSET))(this);
	}

	::System::Void set_DesignPaths(::Il2CppArray<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_29CB0845A0882CB9_SET_DESIGNPATHS_OFFSET))(this, a1);
	}
};

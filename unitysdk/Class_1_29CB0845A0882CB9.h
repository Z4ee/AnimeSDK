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

#define CLASS_1_29CB0845A0882CB9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1378E850)
#define CLASS_1_29CB0845A0882CB9_GET_BOARD_OFFSET UNITYSDK_OFFSET(0x1378F050)
#define CLASS_1_29CB0845A0882CB9_GET_DESIGNPATHS_OFFSET UNITYSDK_OFFSET(0x1378F070)
#define CLASS_1_29CB0845A0882CB9_GET_MIRRORVALLEYCONFIG_OFFSET UNITYSDK_OFFSET(0x1378F030)
#define CLASS_1_29CB0845A0882CB9_GET_PATHINDEX_OFFSET UNITYSDK_OFFSET(0x1378EFF0)
#define CLASS_1_29CB0845A0882CB9_GET_REACHPOINT_OFFSET UNITYSDK_OFFSET(0x1378F010)
#define CLASS_1_29CB0845A0882CB9_METHOD_1_8664E854FFEDC953_OFFSET UNITYSDK_OFFSET(0x1378E990)
#define CLASS_1_29CB0845A0882CB9_METHOD_1_C2F9D63D86AFE0EF_OFFSET UNITYSDK_OFFSET(0x1378EDF0)
#define CLASS_1_29CB0845A0882CB9_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1378E8F0)
#define CLASS_1_29CB0845A0882CB9_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x1378E950)
#define CLASS_1_29CB0845A0882CB9_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1378E8A0)
#define CLASS_1_29CB0845A0882CB9_METHOD_1_EBF44BC910948FDA_1_OFFSET UNITYSDK_OFFSET(0x1378ED50)
#define CLASS_1_29CB0845A0882CB9_METHOD_1_EBF44BC910948FDA_OFFSET UNITYSDK_OFFSET(0x1378ECA0)
#define CLASS_1_29CB0845A0882CB9_SET_BOARD_OFFSET UNITYSDK_OFFSET(0x1378F060)
#define CLASS_1_29CB0845A0882CB9_SET_DESIGNPATHS_OFFSET UNITYSDK_OFFSET(0x1378F080)
#define CLASS_1_29CB0845A0882CB9_SET_MIRRORVALLEYCONFIG_OFFSET UNITYSDK_OFFSET(0x1378F040)
#define CLASS_1_29CB0845A0882CB9_SET_PATHINDEX_OFFSET UNITYSDK_OFFSET(0x1378F000)
#define CLASS_1_29CB0845A0882CB9_SET_REACHPOINT_OFFSET UNITYSDK_OFFSET(0x1378F020)
#define CLASS_1_29CB0845A0882CB9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1378F090)
#define CLASS_1_29CB0845A0882CB9__CTOR_OFFSET UNITYSDK_OFFSET(0x1378E7B0)

inline static constexpr unsigned int Class_1_29CB0845A0882CB9_TypeDefinitionIndex = 73237;

class Class_1_29CB0845A0882CB9 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_29CB0845A0882CB9_TypeDefinitionIndex)->GetStaticField(0x2C6C0);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_29CB0845A0882CB9_TypeDefinitionIndex)->GetStaticField(0x2C6C8);
	}
	::RPG::Client::MirrormentValleyConfig* _MirrorValleyConfig_k__BackingField; // 0x10
	::Il2CppArray<::UnityEngine::Vector3>* _DesignPaths_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::Class_1_DA16F6EFFF969A86*>* Field_1_4; // 0x20
	::RPG::Client::Prop::OpticalIllusionPuzzleBoard* _Board_k__BackingField; // 0x28
	::System::Int32 _ReachPoint_k__BackingField; // 0x30
	::System::Int32 _PathIndex_k__BackingField; // 0x34

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

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29CB0845A0882CB9_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29CB0845A0882CB9_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
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

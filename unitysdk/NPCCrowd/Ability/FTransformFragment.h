#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/BaseFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x6D9BF0)
#define NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x6D9AF0)
#define NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_CREATEFROMGO_OFFSET UNITYSDK_OFFSET(0x10B3D010)
#define NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_CREATE_OFFSET UNITYSDK_OFFSET(0x10B3D260)
#define NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x6D9AD0)
#define NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_DEFAULT_OFFSET UNITYSDK_OFFSET(0x10B3D140)
#define NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x6D9CE0)
#define NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_GETLOCATION_OFFSET UNITYSDK_OFFSET(0x6D98F0)
#define NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_GETROTATION_OFFSET UNITYSDK_OFFSET(0x6D9960)
#define NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x6D9850)
#define NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x6D9A70)
#define NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x6D9D20)
#define NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x6D9C40)
#define NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x6D9B70)
#define NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_RESET_OFFSET UNITYSDK_OFFSET(0x6D9C90)
#define NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_SETROTATION_OFFSET UNITYSDK_OFFSET(0x6D9980)
#define NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_SETTRANSLATION_OFFSET UNITYSDK_OFFSET(0x6D99F0)
#define NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x6D98D0)
#define NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_FTRANSFORMFRAGMENT__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x6D9D80)
#define NPCCROWD_ABILITY_FTRANSFORMFRAGMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x10B3D650)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FTransformFragment_TypeDefinitionIndex = 43633;

	struct alignas(4) FTransformFragment
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(FTransformFragment_TypeDefinitionIndex)->GetStaticField(0x4C7D0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0xC373BEE7; // 0x0
		::StateTreeCore::BaseFragment Base; // 0x10
		::UnityEngine::Vector3 position; // 0x14
		::UnityEngine::Quaternion _rotation; // 0x20
		::System::Boolean rotationInitialized; // 0x30
		::UnityEngine::Vector3 scale; // 0x34

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FTRANSFORMFRAGMENT__CCTOR_OFFSET))();
		}

		::UnityEngine::Quaternion get_rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_rotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_SET_ROTATION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 GetLocation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_GETLOCATION_OFFSET))(this);
		}

		::UnityEngine::Quaternion GetRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_GETROTATION_OFFSET))(this);
		}

		::System::Void SetRotation(::UnityEngine::Quaternion r)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_SETROTATION_OFFSET))(this, r);
		}

		::System::Void SetTranslation(::UnityEngine::Vector3 newLocation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_SETTRANSLATION_OFFSET))(this, newLocation);
		}

		static ::NPCCrowd::Ability::FTransformFragment CreateFromGo(::UnityEngine::Transform* trans)
		{
			return ((::NPCCrowd::Ability::FTransformFragment(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_CREATEFROMGO_OFFSET))(trans);
		}

		static ::NPCCrowd::Ability::FTransformFragment Default()
		{
			return ((::NPCCrowd::Ability::FTransformFragment(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_DEFAULT_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::NPCCrowd::Ability::FTransformFragment Create()
		{
			return ((::NPCCrowd::Ability::FTransformFragment(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::FTransformFragment DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::FTransformFragment(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::FTransformFragment CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::FTransformFragment(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::FTransformFragment MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::FTransformFragment(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::FTransformFragment& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FTransformFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::FTransformFragment& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FTransformFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_FTransformFragment__CopyAssign(::NPCCrowd::Ability::FTransformFragment& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::FTransformFragment&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FTRANSFORMFRAGMENT_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_FTRANSFORMFRAGMENT__COPYASSIGN_OFFSET))(this, other);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NapMaterialProperty.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color32.h"

namespace MoleMole { class AttachPoint; }
namespace NPCCrowd::Avatar { class NPCAvatarGOReferenceComponentInfo; }
namespace RootMotion::FinalIK { class IKSolverLookAt_LookAtBone; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xEA59120)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__CREATEAVATARBODYPARTSASYNC_B__42_0_OFFSET UNITYSDK_OFFSET(0xEA59220)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xEA59160)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__ENABLEIKCOMPONENT_B__32_1_OFFSET UNITYSDK_OFFSET(0xEA59190)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__ENABLEIKCOMPONENT_B__32_3_OFFSET UNITYSDK_OFFSET(0xEA591A0)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__ENABLEIKCOMPONENT_B__32_4_OFFSET UNITYSDK_OFFSET(0xEA591B0)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__POSTLOADAVATARGOGALGAME_B__31_0_OFFSET UNITYSDK_OFFSET(0xEA59170)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCCrowdAvatarManager___c_TypeDefinitionIndex = 58959;

	class NPCCrowdAvatarManager___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Il2CppArray<::System::ValueTuple_2<::NapMaterialProperty, ::UnityEngine::Color32>>*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::NapMaterialProperty, ::UnityEngine::Color32>>*>** StaticGet___9__42_0()
		{
			return (::System::Func_2<::Il2CppArray<::System::ValueTuple_2<::NapMaterialProperty, ::UnityEngine::Color32>>*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::NapMaterialProperty, ::UnityEngine::Color32>>*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAvatarManager___c_TypeDefinitionIndex)->GetStaticField(0x38720);
		}
		static ::System::Func_2<::MoleMole::AttachPoint*, ::System::Boolean>** StaticGet___9__32_4()
		{
			return (::System::Func_2<::MoleMole::AttachPoint*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAvatarManager___c_TypeDefinitionIndex)->GetStaticField(0x38728);
		}
		static ::System::Func_2<::RootMotion::FinalIK::IKSolverLookAt_LookAtBone*, ::System::Boolean>** StaticGet___9__32_1()
		{
			return (::System::Func_2<::RootMotion::FinalIK::IKSolverLookAt_LookAtBone*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAvatarManager___c_TypeDefinitionIndex)->GetStaticField(0x38730);
		}
		static ::NPCCrowd::Avatar::NPCCrowdAvatarManager___c** StaticGet___9()
		{
			return (::NPCCrowd::Avatar::NPCCrowdAvatarManager___c**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAvatarManager___c_TypeDefinitionIndex)->GetStaticField(0x38738);
		}
		static ::System::Predicate_1<::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo*>** StaticGet___9__31_0()
		{
			return (::System::Predicate_1<::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAvatarManager___c_TypeDefinitionIndex)->GetStaticField(0x38740);
		}
		static ::System::Func_2<::RootMotion::FinalIK::IKSolverLookAt_LookAtBone*, ::System::Boolean>** StaticGet___9__32_3()
		{
			return (::System::Func_2<::RootMotion::FinalIK::IKSolverLookAt_LookAtBone*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAvatarManager___c_TypeDefinitionIndex)->GetStaticField(0x38748);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _PostLoadAvatarGoGalgame_b__31_0(::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo* part)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__POSTLOADAVATARGOGALGAME_B__31_0_OFFSET))(this, part);
		}

		::System::Boolean _EnableIKComponent_b__32_1(::RootMotion::FinalIK::IKSolverLookAt_LookAtBone* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::RootMotion::FinalIK::IKSolverLookAt_LookAtBone*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__ENABLEIKCOMPONENT_B__32_1_OFFSET))(this, item);
		}

		::System::Boolean _EnableIKComponent_b__32_3(::RootMotion::FinalIK::IKSolverLookAt_LookAtBone* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::RootMotion::FinalIK::IKSolverLookAt_LookAtBone*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__ENABLEIKCOMPONENT_B__32_3_OFFSET))(this, item);
		}

		::System::Boolean _EnableIKComponent_b__32_4(::MoleMole::AttachPoint* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AttachPoint*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__ENABLEIKCOMPONENT_B__32_4_OFFSET))(this, item);
		}

		::System::Collections::Generic::List_1<::System::ValueTuple_2<::NapMaterialProperty, ::UnityEngine::Color32>>* _CreateAvatarBodyPartsAsync_b__42_0(::Il2CppArray<::System::ValueTuple_2<::NapMaterialProperty, ::UnityEngine::Color32>>* colors)
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::NapMaterialProperty, ::UnityEngine::Color32>>*(*)(::PVOID, ::Il2CppArray<::System::ValueTuple_2<::NapMaterialProperty, ::UnityEngine::Color32>>*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__CREATEAVATARBODYPARTSASYNC_B__42_0_OFFSET))(this, colors);
		}
	};
}

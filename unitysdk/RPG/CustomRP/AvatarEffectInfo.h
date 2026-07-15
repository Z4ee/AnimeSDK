#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/AvatarEffectInfo_EExecutionOrder.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class AvatarEffectInfo_IAvatarEffect; }
namespace RPG::CustomRP { class AvatarEffectInfo_PerRendererEffect; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CUSTOMRP_AVATAREFFECTINFO_ADD_1_OFFSET UNITYSDK_OFFSET(0x177FBAF0)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_ADD_2_OFFSET UNITYSDK_OFFSET(0x177FBFA0)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_ADD_3_OFFSET UNITYSDK_OFFSET(0x177FC2C0)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_ADD_OFFSET UNITYSDK_OFFSET(0x177FB550)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0x177FCA00)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_COLLECTMATERIALS_OFFSET UNITYSDK_OFFSET(0x177FCC20)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x177FC7A0)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_REMOVE_2_OFFSET UNITYSDK_OFFSET(0x177FC810)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_REMOVE_OFFSET UNITYSDK_OFFSET(0x177FC5B0)
#define RPG_CUSTOMRP_AVATAREFFECTINFO__ADDMATEFFECT_1_OFFSET UNITYSDK_OFFSET(0x177FB5D0)
#define RPG_CUSTOMRP_AVATAREFFECTINFO__ADDMATEFFECT_OFFSET UNITYSDK_OFFSET(0x177FBB40)
#define RPG_CUSTOMRP_AVATAREFFECTINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x177FD490)
#define RPG_CUSTOMRP_AVATAREFFECTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x177FD410)
#define RPG_CUSTOMRP_AVATAREFFECTINFO__REMOVE_OFFSET UNITYSDK_OFFSET(0x177FC620)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int AvatarEffectInfo_TypeDefinitionIndex = 36036;

	class AvatarEffectInfo : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Material*>** StaticGet_sharedMaterials()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarEffectInfo_TypeDefinitionIndex)->GetStaticField(0x5F1F0);
		}
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::CustomRP::AvatarEffectInfo_IAvatarEffect*>* Effects; // 0x10
		::RPG::CustomRP::AvatarEffectInfo_EExecutionOrder ExecutionOrder; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO__CCTOR_OFFSET))();
		}

		::System::Void Add(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::Il2CppArray<::System::Int32>* a3, ::Il2CppArray<::System::Int32>* a4, ::System::Boolean a5, ::RPG::CustomRP::AvatarEffectInfo_EExecutionOrder a6, ::System::UInt32 a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::System::Boolean, ::RPG::CustomRP::AvatarEffectInfo_EExecutionOrder, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_ADD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Add_1(::UnityEngine::GameObject* a1, ::UnityEngine::Material* a2, ::Il2CppArray<::System::Int32>* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Material*, ::Il2CppArray<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_ADD_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Add_2(::UnityEngine::GameObject* a1, ::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_ADD_2_OFFSET))(this, a1, a2);
		}

		::System::Boolean Add_3(::UnityEngine::GameObject* a1, ::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect* a2, ::Il2CppArray<::System::Int32>* a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect*, ::Il2CppArray<::System::Int32>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_ADD_3_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean Remove(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_REMOVE_OFFSET))(this, a1, a2);
		}

		::System::Boolean Remove_1(::UnityEngine::GameObject* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_REMOVE_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean Remove_2(::UnityEngine::GameObject* a1, ::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_REMOVE_2_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_CLEAR_OFFSET))(this);
		}

		static ::System::Boolean CollectMaterials(::Il2CppArray<::UnityEngine::Renderer*>* a1, ::Il2CppArray<::System::Int32>*& a2, ::Il2CppArray<::Il2CppArray<::UnityEngine::Material*>*>*& a3, ::Il2CppArray<::System::UInt32>*& a4)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Renderer*>*, ::Il2CppArray<::System::Int32>*&, ::Il2CppArray<::Il2CppArray<::UnityEngine::Material*>*>*&, ::Il2CppArray<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_COLLECTMATERIALS_OFFSET))(a1, a2, a3, a4);
		}

		::System::Boolean _Remove(::System::Int32 a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO__REMOVE_OFFSET))(this, a1, a2);
		}

		::System::Boolean _AddMatEffect(::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::CustomRP::AvatarEffectInfo_IAvatarEffect*>* a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Material* a3, ::Il2CppArray<::System::Int32>* a4, ::System::Boolean a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::CustomRP::AvatarEffectInfo_IAvatarEffect*>*, ::UnityEngine::GameObject*, ::UnityEngine::Material*, ::Il2CppArray<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO__ADDMATEFFECT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean _AddMatEffect_1(::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::CustomRP::AvatarEffectInfo_IAvatarEffect*>* a1, ::UnityEngine::Renderer* a2, ::UnityEngine::Material* a3, ::Il2CppArray<::System::Int32>* a4, ::Il2CppArray<::System::Int32>* a5, ::System::Boolean a6, ::RPG::CustomRP::AvatarEffectInfo_EExecutionOrder a7, ::System::UInt32 a8, ::System::Boolean a9)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::CustomRP::AvatarEffectInfo_IAvatarEffect*>*, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::System::Boolean, ::RPG::CustomRP::AvatarEffectInfo_EExecutionOrder, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO__ADDMATEFFECT_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
	};
}

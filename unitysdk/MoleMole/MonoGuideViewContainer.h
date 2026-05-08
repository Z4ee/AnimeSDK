#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoGuideViewContainer_Class_1_A679284E19C4A22D; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_AWAKE_OFFSET UNITYSDK_OFFSET(0x15B9A2B0)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15B9A4D0)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_0DC794B6E3A200E7_OFFSET UNITYSDK_OFFSET(0x15B9C9B0)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_11D9E7585BB3F14E_OFFSET UNITYSDK_OFFSET(0x15B9E320)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_2157CED3CDDF8996_OFFSET UNITYSDK_OFFSET(0x15B9A670)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_3C34CB4247CE20D0_OFFSET UNITYSDK_OFFSET(0x15B9B980)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_42E284B79BA71F17_OFFSET UNITYSDK_OFFSET(0x15B9C160)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x15B9A5F0)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_6328E5EADA440195_OFFSET UNITYSDK_OFFSET(0x15B9EAC0)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_66F42CE2EDA79734_OFFSET UNITYSDK_OFFSET(0x15B9B380)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_6CA972FE12DEB101_OFFSET UNITYSDK_OFFSET(0x15B9D470)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_70F807F41F81D824_OFFSET UNITYSDK_OFFSET(0x15B9E220)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_837E000018190079_OFFSET UNITYSDK_OFFSET(0x15B9D7F0)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_8E0BA7B7FC76D039_OFFSET UNITYSDK_OFFSET(0x15B9BD30)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_A3A311326D005F67_OFFSET UNITYSDK_OFFSET(0x15B9B7F0)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_AA1802E1FBE37761_OFFSET UNITYSDK_OFFSET(0x15B9E420)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_B54EC4D992F50245_OFFSET UNITYSDK_OFFSET(0x15B9EA40)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_B891D7F7C53AFC92_OFFSET UNITYSDK_OFFSET(0x15B9D040)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_B89A1E5EB5AAFFCE_OFFSET UNITYSDK_OFFSET(0x15B9D330)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_C99DA86370D1A4C9_OFFSET UNITYSDK_OFFSET(0x15B9DEB0)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15B9A480)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_DAC15E132264A2F6_OFFSET UNITYSDK_OFFSET(0x15B9DD60)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_EBCB76FF27EFDAE1_OFFSET UNITYSDK_OFFSET(0x15B9DF80)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_SETTARGET_1_OFFSET UNITYSDK_OFFSET(0x15B9BFB0)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_SETTARGET_OFFSET UNITYSDK_OFFSET(0x15B9BBF0)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_SETVIEWENABLE_OFFSET UNITYSDK_OFFSET(0x15B9A420)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_SETVIEWVISABLE_OFFSET UNITYSDK_OFFSET(0x15B9BB80)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_STOPALL_OFFSET UNITYSDK_OFFSET(0x15B9B300)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_STOPTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x15B9BA20)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_STOPTARGETPOINT_OFFSET UNITYSDK_OFFSET(0x15B9B680)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_WARNNINGTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x15B9C540)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_WARNNINGTARGET_OFFSET UNITYSDK_OFFSET(0x15B9C3E0)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x15B9C6A0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGuideViewContainer_TypeDefinitionIndex = 53780;

	class MonoGuideViewContainer : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single Field_5_10; // 0x0
		::UnityEngine::GameObject* arrowTemplate; // 0x18
		::UnityEngine::Vector2 BorderRange; // 0x20
		::UnityEngine::Sprite* iconEnemy; // 0x28
		::UnityEngine::Sprite* iconSelf; // 0x30
		::UnityEngine::Sprite* iconNeutral; // 0x38
		::System::Single iconFadeOutTime; // 0x40
		::System::Single tweenScaleSize; // 0x44
		::System::Single tweenScaleTime; // 0x48
		::System::Boolean Field_5_8; // 0x4C
		::System::Single Field_5_9; // 0x50
		::UnityEngine::Transform* Field_5_11; // 0x58
		::UnityEngine::Camera* Field_5_12; // 0x60
		::UnityEngine::RectTransform* Field_5_13; // 0x68
		::System::Single Field_5_14; // 0x70
		::System::Single Field_5_15; // 0x74
		::System::Collections::Generic::Queue_1<::MoleMole::MonoGuideViewContainer_Class_1_A679284E19C4A22D*>* Field_5_16; // 0x78
		::System::Collections::Generic::List_1<::System::UInt32>* Field_5_17; // 0x80
		::System::Collections::Generic::List_1<::System::Int32>* Field_5_18; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector3>* Field_5_19; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::MonoGuideViewContainer_Class_1_A679284E19C4A22D*>* Field_5_20; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoGuideViewContainer_Class_1_A679284E19C4A22D*>* Field_5_21; // 0xA0
		::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_5_22; // 0xA8
		::System::Collections::Generic::HashSet_1<::System::Int32>* Field_5_23; // 0xB0
		::System::Int32 Field_5_24; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_AWAKE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void StopAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_STOPALL_OFFSET))(this);
		}

		::System::Void StopTargetPoint(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_STOPTARGETPOINT_OFFSET))(this, a1);
		}

		::System::Void StopTargetEntity(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_STOPTARGETENTITY_OFFSET))(this, a1);
		}

		::System::Void SetViewEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_SETVIEWENABLE_OFFSET))(this, a1);
		}

		::System::Void SetViewVisable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_SETVIEWVISABLE_OFFSET))(this, a1);
		}

		::System::Int32 SetTarget(::UnityEngine::Vector3 a1, ::System::Single a2, ::MoleMole::Config::CampType a3, ::System::String* a4)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Config::CampType, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_SETTARGET_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 SetTarget_1(::MoleMole::Battle::Entity* a1, ::System::Single a2, ::MoleMole::Config::CampType a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_SETTARGET_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WarnningTarget(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_WARNNINGTARGET_OFFSET))(this, a1, a2);
		}

		::System::Void WarnningTargetEntity(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_WARNNINGTARGETENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_0DC794B6E3A200E7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_0DC794B6E3A200E7_OFFSET))(this);
		}

		::System::Boolean Method_5_B891D7F7C53AFC92(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_B891D7F7C53AFC92_OFFSET))(this, a1);
		}

		::System::Void Method_5_B89A1E5EB5AAFFCE(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::MoleMole::MonoGuideViewContainer_Class_1_A679284E19C4A22D* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::MoleMole::MonoGuideViewContainer_Class_1_A679284E19C4A22D*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_B89A1E5EB5AAFFCE_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 Method_5_A3A311326D005F67(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_A3A311326D005F67_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* Method_5_6CA972FE12DEB101(::MoleMole::Battle::Entity* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_6CA972FE12DEB101_OFFSET))(this, a1);
		}

		::System::Void Method_5_837E000018190079(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::MoleMole::MonoGuideViewContainer_Class_1_A679284E19C4A22D* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::MonoGuideViewContainer_Class_1_A679284E19C4A22D*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_837E000018190079_OFFSET))(this, a1, a2, a3, a4);
		}

		::MoleMole::MonoGuideViewContainer_Class_1_A679284E19C4A22D* Method_5_DAC15E132264A2F6()
		{
			return ((::MoleMole::MonoGuideViewContainer_Class_1_A679284E19C4A22D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_DAC15E132264A2F6_OFFSET))(this);
		}

		::System::Void Method_5_2157CED3CDDF8996()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_2157CED3CDDF8996_OFFSET))(this);
		}

		::System::Boolean Method_5_4DA6D4A624E42CAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_4DA6D4A624E42CAB_OFFSET))(this);
		}

		::System::Single Method_5_11D9E7585BB3F14E(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_11D9E7585BB3F14E_OFFSET))(this, a1);
		}

		::System::Void Method_5_AA1802E1FBE37761(::MoleMole::Battle::Entity* a1, ::MoleMole::MonoGuideViewContainer_Class_1_A679284E19C4A22D* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::MonoGuideViewContainer_Class_1_A679284E19C4A22D*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_AA1802E1FBE37761_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_EBCB76FF27EFDAE1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::MoleMole::MonoGuideViewContainer_Class_1_A679284E19C4A22D* a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::MonoGuideViewContainer_Class_1_A679284E19C4A22D*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_EBCB76FF27EFDAE1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_5_8E0BA7B7FC76D039(::System::Int32 a1, ::System::Single a2, ::MoleMole::Config::CampType a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::MoleMole::Config::CampType, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_8E0BA7B7FC76D039_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_5_C99DA86370D1A4C9(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_C99DA86370D1A4C9_OFFSET))(this, a1);
		}

		::System::Void Method_5_B54EC4D992F50245(::MoleMole::MonoGuideViewContainer_Class_1_A679284E19C4A22D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGuideViewContainer_Class_1_A679284E19C4A22D*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_B54EC4D992F50245_OFFSET))(this, a1);
		}

		::System::Void Method_5_66F42CE2EDA79734()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_66F42CE2EDA79734_OFFSET))(this);
		}

		::System::Void Method_5_42E284B79BA71F17(::MoleMole::Battle::Entity* a1, ::System::Single a2, ::MoleMole::Config::CampType a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_42E284B79BA71F17_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_70F807F41F81D824(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_70F807F41F81D824_OFFSET))(this, a1);
		}

		::System::Void Method_5_6328E5EADA440195(::UnityEngine::Vector3 a1, ::MoleMole::MonoGuideViewContainer_Class_1_A679284E19C4A22D* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::MonoGuideViewContainer_Class_1_A679284E19C4A22D*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_6328E5EADA440195_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_3C34CB4247CE20D0(::MoleMole::MonoGuideViewContainer_Class_1_A679284E19C4A22D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGuideViewContainer_Class_1_A679284E19C4A22D*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_3C34CB4247CE20D0_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}
	};
}

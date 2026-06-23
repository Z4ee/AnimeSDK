#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/MiniGame/MiniGameManifest.h"
#include "unitysdk/Struct_2_E614D3B245F96744_1.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_C93DB23A802B5457;
class Class_3_6F28FFD006F2B451;
class Class_4_06287BFE0A30E0A3;
class Class_4_BB295FBF5DD8DB59_2;
class Class_4_E9A048EC2D3C7A0F;
namespace Foundation { class IRenderElement; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class SpriteRenderer; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class Volume; }

#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1D097DA0)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_CONVERTLOGICPOSTOLAYOUTPOS_OFFSET UNITYSDK_OFFSET(0x1D0998C0)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_CONVERTSCREENPOSTOLOGICPOS_OFFSET UNITYSDK_OFFSET(0x1D099980)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_DESTROYTEMPLATEOBJECT_OFFSET UNITYSDK_OFFSET(0x1D09A970)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1D097D90)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_INSTANTIATETEMPLATE_OFFSET UNITYSDK_OFFSET(0x1D09A1A0)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_METHOD_6_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1D099300)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_METHOD_6_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1D09B0C0)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_METHOD_6_322660C1A07434B2_OFFSET UNITYSDK_OFFSET(0x1D098190)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_METHOD_6_36D70E65FEC0C573_OFFSET UNITYSDK_OFFSET(0x1D098DA0)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_METHOD_6_7998F8CA1E002410_OFFSET UNITYSDK_OFFSET(0x1D099390)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_METHOD_6_8910F56557128EB6_OFFSET UNITYSDK_OFFSET(0x1D09B210)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_METHOD_6_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1D098D40)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_METHOD_6_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x1D097FD0)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_METHOD_6_A666BD4C2D583F89_OFFSET UNITYSDK_OFFSET(0x1D09AF50)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D099E20)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1D09ACE0)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_SETCONFIG_OFFSET UNITYSDK_OFFSET(0x1D098A80)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_START_OFFSET UNITYSDK_OFFSET(0x1D097DF0)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D0991E0)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D09AD20)
#define MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT___BASE_CONVERTLOGICPOSTOLAYOUTPOS_OFFSET UNITYSDK_OFFSET(0x1D09AF20)

namespace MoleMole::Arcade::BallPit
{
	inline static constexpr unsigned int BallPitMapLayout_TypeDefinitionIndex = 89534;

	class BallPitMapLayout : public ::MoleMole::MiniGame::MiniGameManifest
	{
	public:
		static ::MoleMole::Arcade::BallPit::BallPitMapLayout** StaticGet_Field_6_2()
		{
			return (::MoleMole::Arcade::BallPit::BallPitMapLayout**)Il2CppClass::FromTypeDefinitionIndex(BallPitMapLayout_TypeDefinitionIndex)->GetStaticField(0x4DF60);
		}
		// static const ::System::String* Field_6_32; // 0x0
		::System::Single DefaultMapWidth; // 0x50
		::System::Single DefaultMapHeight; // 0x54
		::UnityEngine::GameObject* template_; // 0x58
		::UnityEngine::Transform* EffectRoot; // 0x60
		::UnityEngine::Transform* ObjectPoolRoot; // 0x68
		::UnityEngine::AnimationCurve* CollectItemCurve; // 0x70
		::UnityEngine::Transform* CrosshairTransform; // 0x78
		::UnityEngine::LineRenderer* AimLineRenderer; // 0x80
		::UnityEngine::SpriteRenderer* BGSprite; // 0x88
		::System::Single bgLoopSpeed; // 0x90
		::System::Collections::Generic::Queue_1<::UnityEngine::GameObject*>* Field_6_11; // 0x98
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_6_12; // 0xA0
		::System::Single Field_6_13; // 0xA8
		::System::Single Field_6_14; // 0xAC
		::System::Boolean Field_6_15; // 0xB0
		::UnityEngine::Transform* Field_6_16; // 0xB8
		::UnityEngine::Transform* Field_6_17; // 0xC0
		::UnityEngine::Transform* Field_6_18; // 0xC8
		::System::Single TopPercent; // 0xD0
		::System::Single BottomPercent; // 0xD4
		::UnityEngine::Rendering::Volume* volume; // 0xD8
		::Class_4_BB295FBF5DD8DB59_2* Field_6_22; // 0xE0
		::Class_4_06287BFE0A30E0A3* Field_6_23; // 0xE8
		::System::Single Field_6_24; // 0xF0
		::UnityEngine::Transform* TipsRoot; // 0xF8
		::UnityEngine::GameObject* TipsTemplate; // 0x100
		::UnityEngine::AnimationCurve* TipsAnim; // 0x108
		::System::Single TipsAnimDuration; // 0x110
		::System::Single TipsAnimBaseScale; // 0x114
		::System::Collections::Generic::List_1<::Foundation::IRenderElement*>* Field_6_30; // 0x118
		::Foundation::AssetRequestHandle Field_6_31; // 0x120
		::Class_3_6F28FFD006F2B451* Field_6_33; // 0x140
		::Class_4_E9A048EC2D3C7A0F* Field_6_34; // 0x148
		::Class_1_C93DB23A802B5457* Field_6_35; // 0x150

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT__CTOR_OFFSET))(this);
		}

		static ::MoleMole::Arcade::BallPit::BallPitMapLayout* get_Instance()
		{
			return ((::MoleMole::Arcade::BallPit::BallPitMapLayout*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_GET_INSTANCE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_START_OFFSET))(this);
		}

		::System::Void SetConfig(::System::Int32 a1, ::Class_3_6F28FFD006F2B451* a2, ::Class_4_E9A048EC2D3C7A0F* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_3_6F28FFD006F2B451*, ::Class_4_E9A048EC2D3C7A0F*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_SETCONFIG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_UPDATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 ConvertLogicPosToLayoutPos(::Struct_2_E614D3B245F96744_1 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Struct_2_E614D3B245F96744_1))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_CONVERTLOGICPOSTOLAYOUTPOS_OFFSET))(this, a1);
		}

		::Struct_2_E614D3B245F96744_1 ConvertScreenPosToLogicPos(::UnityEngine::Vector2 a1)
		{
			return ((::Struct_2_E614D3B245F96744_1(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_CONVERTSCREENPOSTOLOGICPOS_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_ONDESTROY_OFFSET))(this);
		}

		::UnityEngine::GameObject* InstantiateTemplate()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_INSTANTIATETEMPLATE_OFFSET))(this);
		}

		::System::Void DestroyTemplateObject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_DESTROYTEMPLATEOBJECT_OFFSET))(this, a1);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_ONDRAWGIZMOS_OFFSET))(this);
		}

		::UnityEngine::Vector3 __base_ConvertLogicPosToLayoutPos(::Struct_2_E614D3B245F96744_1 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Struct_2_E614D3B245F96744_1))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT___BASE_CONVERTLOGICPOSTOLAYOUTPOS_OFFSET))(this, a1);
		}

		::System::Void Method_6_7998F8CA1E002410(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_METHOD_6_7998F8CA1E002410_OFFSET))(this, a1);
		}

		::Class_1_C93DB23A802B5457* Method_6_A666BD4C2D583F89()
		{
			return ((::Class_1_C93DB23A802B5457*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_METHOD_6_A666BD4C2D583F89_OFFSET))(this);
		}

		::System::Void Method_6_322660C1A07434B2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_METHOD_6_322660C1A07434B2_OFFSET))(this);
		}

		::System::Void Method_6_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_METHOD_6_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_6_97D83E4CB3B11935()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_METHOD_6_97D83E4CB3B11935_OFFSET))(this);
		}

		::System::Void Method_6_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_METHOD_6_30D1209326FA87FC_OFFSET))(this);
		}

		::System::Boolean Method_6_1808E1CF7A125519()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_METHOD_6_1808E1CF7A125519_OFFSET))(this);
		}

		::System::Void Method_6_36D70E65FEC0C573(::System::Int32 a1, ::Class_3_6F28FFD006F2B451* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_3_6F28FFD006F2B451*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_METHOD_6_36D70E65FEC0C573_OFFSET))(this, a1, a2);
		}

		static ::System::Void Method_6_8910F56557128EB6(::MoleMole::Arcade::BallPit::BallPitMapLayout* a1)
		{
			return ((::System::Void(*)(::MoleMole::Arcade::BallPit::BallPitMapLayout*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_BALLPIT_BALLPITMAPLAYOUT_METHOD_6_8910F56557128EB6_OFFSET))(a1);
		}
	};
}

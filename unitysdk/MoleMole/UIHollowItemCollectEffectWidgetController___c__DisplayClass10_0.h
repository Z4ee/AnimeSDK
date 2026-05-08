#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ItemCollectEffectType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_4_DA19DD65175B97CF;
namespace DG::Tweening { class TweenCallback; }
namespace MoleMole { class UIHollowItemCollectEffectWidgetController; }
namespace MoleMole::Config { class ConfigHollowChessboard_ItemCollectLayerConfig; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15CBEA40)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__SETPATH_B__0_OFFSET UNITYSDK_OFFSET(0x15CBEA50)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__SETPATH_B__1_OFFSET UNITYSDK_OFFSET(0x15CBEA60)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__SETPATH_B__2_OFFSET UNITYSDK_OFFSET(0x15CBEA70)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__SETPATH_B__3_OFFSET UNITYSDK_OFFSET(0x15CBF470)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__SETPATH_B__4_OFFSET UNITYSDK_OFFSET(0x15CBF5F0)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__SETPATH_B__7_OFFSET UNITYSDK_OFFSET(0x15CBF9B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowItemCollectEffectWidgetController___c__DisplayClass10_0_TypeDefinitionIndex = 42466;

	class UIHollowItemCollectEffectWidgetController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::Func_2<::MoleMole::ItemCollectEffectType, ::UnityEngine::ParticleSystem*>* getFadeOutEffectParticle; // 0x10
		::UnityEngine::RectTransform* rectTrans; // 0x18
		::DG::Tweening::TweenCallback* __9__7; // 0x20
		::System::Action_2<::UnityEngine::ParticleSystem*, ::MoleMole::ItemCollectEffectType>* recycleFadeOutEffectParticle; // 0x28
		::MoleMole::UIHollowItemCollectEffectWidgetController* __4__this; // 0x30
		::MoleMole::Config::ConfigHollowChessboard_ItemCollectLayerConfig* layerConfig; // 0x38
		::System::Func_2<::Class_4_DA19DD65175B97CF*, ::UnityEngine::Vector3>* GetPieceIndexUIPos; // 0x40
		::System::Action* recycleCallback; // 0x48
		::Class_4_DA19DD65175B97CF* localPiece; // 0x50
		::System::Action* finishCallback; // 0x58
		::UnityEngine::Vector3 offset; // 0x60
		::System::Single collectDuration; // 0x6C
		::System::Single currentZ; // 0x70
		::System::Single localBurstDuration; // 0x74
		::System::Single totalTime; // 0x78
		::System::Single lastFrameIndex; // 0x7C
		::System::Single timer; // 0x80
		::UnityEngine::Vector3 initPos; // 0x84
		::UnityEngine::Vector3 midPosition; // 0x90
		::UnityEngine::Vector3 currentOffset; // 0x9C
		::UnityEngine::Color overrideFadeInColor; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Single _SetPath_b__0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__SETPATH_B__0_OFFSET))(this);
		}

		::System::Void _SetPath_b__1(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__SETPATH_B__1_OFFSET))(this, value);
		}

		::System::Void _SetPath_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__SETPATH_B__2_OFFSET))(this);
		}

		::System::Void _SetPath_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__SETPATH_B__3_OFFSET))(this);
		}

		::System::Void _SetPath_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__SETPATH_B__4_OFFSET))(this);
		}

		::System::Void _SetPath_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTEFFECTWIDGETCONTROLLER___C__DISPLAYCLASS10_0__SETPATH_B__7_OFFSET))(this);
		}
	};
}

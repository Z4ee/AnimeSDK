#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Ease.h"
#include "unitysdk/DG/Tweening/Plugins/Options/VectorOptions.h"
#include "unitysdk/MoleMole/TweenCustomMove_Enum_3_AD03798BB65FE7BF.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace DG::Tweening::Core { template <typename T1, typename T2, typename T3> class TweenerCore_3; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_TWEENCUSTOMMOVE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1740DB80)
#define MOLEMOLE_TWEENCUSTOMMOVE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1740E860)
#define MOLEMOLE_TWEENCUSTOMMOVE_METHOD_5_351060D64F7F438E_OFFSET UNITYSDK_OFFSET(0x1740EB20)
#define MOLEMOLE_TWEENCUSTOMMOVE_METHOD_5_3BBB9CF20E8D97ED_OFFSET UNITYSDK_OFFSET(0x1740EBD0)
#define MOLEMOLE_TWEENCUSTOMMOVE_METHOD_5_3BC8B8F2BB08C1C2_OFFSET UNITYSDK_OFFSET(0x1740EA20)
#define MOLEMOLE_TWEENCUSTOMMOVE_METHOD_5_3E586421BA588EFD_OFFSET UNITYSDK_OFFSET(0x1740DBD0)
#define MOLEMOLE_TWEENCUSTOMMOVE_METHOD_5_7889C2BF81803C86_OFFSET UNITYSDK_OFFSET(0x1740E090)
#define MOLEMOLE_TWEENCUSTOMMOVE_METHOD_5_8D61BE16C9463302_1_OFFSET UNITYSDK_OFFSET(0x1740ECC0)
#define MOLEMOLE_TWEENCUSTOMMOVE_METHOD_5_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x1740EAE0)
#define MOLEMOLE_TWEENCUSTOMMOVE_METHOD_5_A7A81E55D90E048E_OFFSET UNITYSDK_OFFSET(0x1740E3C0)
#define MOLEMOLE_TWEENCUSTOMMOVE_METHOD_5_E69F3DFB7CDFE412_OFFSET UNITYSDK_OFFSET(0x1740E940)
#define MOLEMOLE_TWEENCUSTOMMOVE_START_OFFSET UNITYSDK_OFFSET(0x1740DF30)
#define MOLEMOLE_TWEENCUSTOMMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1740E9C0)

namespace MoleMole
{
	inline static constexpr unsigned int TweenCustomMove_TypeDefinitionIndex = 72287;

	class TweenCustomMove : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single duration; // 0x18
		::System::Single delay; // 0x1C
		::DG::Tweening::Ease ease; // 0x20
		::UnityEngine::AnimationCurve* curve; // 0x28
		::UnityEngine::Vector2 from; // 0x30
		::UnityEngine::Vector2 to; // 0x38
		::MoleMole::TweenCustomMove_Enum_3_AD03798BB65FE7BF fromAxisType; // 0x40
		::MoleMole::TweenCustomMove_Enum_3_AD03798BB65FE7BF toAxisType; // 0x44
		::System::Boolean onlyControlX; // 0x48
		::System::Boolean onlyControlY; // 0x49
		::System::Boolean IgnoreStartSet; // 0x4A
		::UnityEngine::RectTransform* Field_5_11; // 0x50
		::UnityEngine::Camera* Field_5_12; // 0x58
		::System::Boolean Field_5_13; // 0x60
		::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::DG::Tweening::Plugins::Options::VectorOptions>* Field_5_14; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE_START_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Method_5_3BC8B8F2BB08C1C2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE_METHOD_5_3BC8B8F2BB08C1C2_OFFSET))(this);
		}

		::System::Void Method_5_A7A81E55D90E048E(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE_METHOD_5_A7A81E55D90E048E_OFFSET))(this, a1);
		}

		::System::Void Method_5_8D61BE16C9463302()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE_METHOD_5_8D61BE16C9463302_OFFSET))(this);
		}

		::System::Boolean Method_5_7889C2BF81803C86(::MoleMole::TweenCustomMove_Enum_3_AD03798BB65FE7BF a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::TweenCustomMove_Enum_3_AD03798BB65FE7BF, ::UnityEngine::Vector2, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE_METHOD_5_7889C2BF81803C86_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_E69F3DFB7CDFE412()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE_METHOD_5_E69F3DFB7CDFE412_OFFSET))(this);
		}

		::System::Void Method_5_8D61BE16C9463302_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE_METHOD_5_8D61BE16C9463302_1_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_5_351060D64F7F438E()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE_METHOD_5_351060D64F7F438E_OFFSET))(this);
		}

		::System::Void Method_5_3E586421BA588EFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE_METHOD_5_3E586421BA588EFD_OFFSET))(this);
		}

		::System::Void Method_5_3BBB9CF20E8D97ED(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENCUSTOMMOVE_METHOD_5_3BBB9CF20E8D97ED_OFFSET))(this, a1);
		}
	};
}

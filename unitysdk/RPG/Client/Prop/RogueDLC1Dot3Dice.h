#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/RogueDLC1Dot3Dice_Phase.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_PROP_ROGUEDLC1DOT3DICE_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x16643410)
#define RPG_CLIENT_PROP_ROGUEDLC1DOT3DICE_METHOD_5_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x166431E0)
#define RPG_CLIENT_PROP_ROGUEDLC1DOT3DICE_METHOD_5_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x166428E0)
#define RPG_CLIENT_PROP_ROGUEDLC1DOT3DICE_METHOD_5_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x16642D10)
#define RPG_CLIENT_PROP_ROGUEDLC1DOT3DICE_RESETDICE_OFFSET UNITYSDK_OFFSET(0x16642C80)
#define RPG_CLIENT_PROP_ROGUEDLC1DOT3DICE_SPAWNED_OFFSET UNITYSDK_OFFSET(0x16643390)
#define RPG_CLIENT_PROP_ROGUEDLC1DOT3DICE_STARTROTATE_1_OFFSET UNITYSDK_OFFSET(0x16643240)
#define RPG_CLIENT_PROP_ROGUEDLC1DOT3DICE_STARTROTATE_OFFSET UNITYSDK_OFFSET(0x16642A30)
#define RPG_CLIENT_PROP_ROGUEDLC1DOT3DICE_UPDATE_OFFSET UNITYSDK_OFFSET(0x16642860)
#define RPG_CLIENT_PROP_ROGUEDLC1DOT3DICE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16644E70)
#define RPG_CLIENT_PROP_ROGUEDLC1DOT3DICE__CTOR_OFFSET UNITYSDK_OFFSET(0x16643480)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RogueDLC1Dot3Dice_TypeDefinitionIndex = 78479;

	class RogueDLC1Dot3Dice : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Single* StaticGet_DCIBODDDBEL()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(RogueDLC1Dot3Dice_TypeDefinitionIndex)->GetStaticField(0x14BB0);
		}
		::System::Int32 RotateRound; // 0x18
		::System::Int32 RerollRotateRound; // 0x1C
		::System::Single RotateTime; // 0x20
		::System::Single RerollRotateTime; // 0x24
		::System::Int32 TargetDice; // 0x28
		::System::Int32 TargetIndex; // 0x2C
		::UnityEngine::AnimationCurve* StretchCurve; // 0x30
		::UnityEngine::AnimationCurve* RerollStretchCurve; // 0x38
		::UnityEngine::Quaternion MJLMPONJALF; // 0x40
		::RPG::Client::Prop::RogueDLC1Dot3Dice_Phase KAEFGGECBDO; // 0x50
		::System::Single DNEAPBILMFH; // 0x54
		::System::Int32 ILLABOABODJ; // 0x58
		::UnityEngine::AnimationCurve* ILAAPIFJEGL; // 0x60
		::System::Int32 AJHCOEBHBKI; // 0x68
		::System::Single MLJHEPFKDOG; // 0x6C
		::System::Single FFGIMFJILCG; // 0x70
		::System::Single KMHPABMAHGG; // 0x74
		::UnityEngine::Vector3 CFMGDONGJNH; // 0x78
		::UnityEngine::Vector3 KHBBEIPDPJL; // 0x84
		::UnityEngine::Vector3 NKJIPJBCAPA; // 0x90
		::UnityEngine::Vector3 BECMDKFMBCP; // 0x9C
		::UnityEngine::Vector3 EGEMNJMINKL; // 0xA8
		::UnityEngine::Vector3 DDCDAGJGLPM; // 0xB4
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* JKJGJHJPFFB; // 0xC0
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* KIMIJDFMFPD; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLC1DOT3DICE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLC1DOT3DICE__CCTOR_OFFSET))();
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLC1DOT3DICE_UPDATE_OFFSET))(this);
		}

		::System::Void StartRotate(::UnityEngine::Vector3 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLC1DOT3DICE_STARTROTATE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void StartRotate_1(::UnityEngine::Vector3 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLC1DOT3DICE_STARTROTATE_1_OFFSET))(this, a1, a2);
		}

		::System::Void ResetDice()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLC1DOT3DICE_RESETDICE_OFFSET))(this);
		}

		::System::Void Method_5_AA169839CB93802A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLC1DOT3DICE_METHOD_5_AA169839CB93802A_OFFSET))(this);
		}

		::System::Void Method_5_B7F8E0B4AF22DEA3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLC1DOT3DICE_METHOD_5_B7F8E0B4AF22DEA3_OFFSET))(this);
		}

		::System::Void Method_5_7646FFE662147970()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLC1DOT3DICE_METHOD_5_7646FFE662147970_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLC1DOT3DICE_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLC1DOT3DICE_DESPAWNED_OFFSET))(this);
		}
	};
}

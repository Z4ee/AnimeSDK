#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_CARTOONTRANSFER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC9ECD00)
#define RPG_CLIENT_CARTOONTRANSFER_PLAY_OFFSET UNITYSDK_OFFSET(0xC9ECCB0)
#define RPG_CLIENT_CARTOONTRANSFER_SETCENTER_OFFSET UNITYSDK_OFFSET(0xC9ECA80)
#define RPG_CLIENT_CARTOONTRANSFER_SETDURATION_OFFSET UNITYSDK_OFFSET(0xC9ECBB0)
#define RPG_CLIENT_CARTOONTRANSFER_SETFINISHACTION_OFFSET UNITYSDK_OFFSET(0xC9ECC60)
#define RPG_CLIENT_CARTOONTRANSFER_SETRADIUSCURVE_OFFSET UNITYSDK_OFFSET(0xC9ECC10)
#define RPG_CLIENT_CARTOONTRANSFER_UPDATE_OFFSET UNITYSDK_OFFSET(0xC9ECDE0)
#define RPG_CLIENT_CARTOONTRANSFER__CCTOR_OFFSET UNITYSDK_OFFSET(0xC9ED080)
#define RPG_CLIENT_CARTOONTRANSFER__CTOR_OFFSET UNITYSDK_OFFSET(0xC9ECFE0)
#define RPG_CLIENT_CARTOONTRANSFER__END_OFFSET UNITYSDK_OFFSET(0xC9ECEC0)
#define RPG_CLIENT_CARTOONTRANSFER__SETCENTERTOSHADER_OFFSET UNITYSDK_OFFSET(0xC9ECAF0)
#define RPG_CLIENT_CARTOONTRANSFER__SETRADIUSTOSHADER_OFFSET UNITYSDK_OFFSET(0xC9ECF20)

namespace RPG::Client
{
	inline static constexpr unsigned int CartoonTransfer_TypeDefinitionIndex = 72441;

	class CartoonTransfer : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet__Center()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CartoonTransfer_TypeDefinitionIndex)->GetStaticField(0x9BE0);
		}
		static ::System::Int32* StaticGet__Radius()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CartoonTransfer_TypeDefinitionIndex)->GetStaticField(0x9BE4);
		}
		::System::Action* _FinishAction; // 0x18
		::System::Boolean _IsPlaying; // 0x20
		::System::Single _Elapsed; // 0x24
		::System::Single _Duration; // 0x28
		::UnityEngine::Material* _Material; // 0x30
		::UnityEngine::AnimationCurve* _Curve; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CARTOONTRANSFER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CARTOONTRANSFER__CCTOR_OFFSET))();
		}

		::System::Void SetCenter(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_CARTOONTRANSFER_SETCENTER_OFFSET))(this, a1);
		}

		::System::Void SetDuration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CARTOONTRANSFER_SETDURATION_OFFSET))(this, a1);
		}

		::System::Void SetRadiusCurve(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CARTOONTRANSFER_SETRADIUSCURVE_OFFSET))(this, a1);
		}

		::System::Void SetFinishAction(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CARTOONTRANSFER_SETFINISHACTION_OFFSET))(this, a1);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CARTOONTRANSFER_PLAY_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CARTOONTRANSFER_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CARTOONTRANSFER_UPDATE_OFFSET))(this);
		}

		::System::Void _End()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CARTOONTRANSFER__END_OFFSET))(this);
		}

		::System::Void _SetRadiusToShader(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CARTOONTRANSFER__SETRADIUSTOSHADER_OFFSET))(this, a1);
		}

		::System::Void _SetCenterToShader(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_CARTOONTRANSFER__SETCENTERTOSHADER_OFFSET))(this, a1);
		}
	};
}

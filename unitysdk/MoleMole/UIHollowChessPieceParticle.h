#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/MoleMole/UIHollowChessPieceParticle_AttachPointType.h"
#include "unitysdk/MoleMole/UIHollowChessPieceParticle_TransformType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5F3ED31AAEDA15B0;
class Class_3_3EB2168D97754EAD;
class Class_5_A6F8D19602712D95;
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x18EEF1B0)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_BINDPROXY_OFFSET UNITYSDK_OFFSET(0x18EEF280)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_CHANGESCALE_OFFSET UNITYSDK_OFFSET(0x18EEF090)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_DESTRUCTOR_OFFSET UNITYSDK_OFFSET(0x18EEF120)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GETANIMATIONTIME_OFFSET UNITYSDK_OFFSET(0x18EF0700)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GETTEXTURESHEETFRAMEINDEX_OFFSET UNITYSDK_OFFSET(0x18EEE260)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GETTIME_OFFSET UNITYSDK_OFFSET(0x18EF0210)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_ATTACHPOINTTYPE_OFFSET UNITYSDK_OFFSET(0x18EEE030)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_DURATIONSECONDS_OFFSET UNITYSDK_OFFSET(0x18EEE450)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_HASTEXTURESHEETANIMATION_OFFSET UNITYSDK_OFFSET(0x18EEE090)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_ISLOOP_OFFSET UNITYSDK_OFFSET(0x18EF0A10)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x18EEE070)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_ORIGINPATH_OFFSET UNITYSDK_OFFSET(0x18EF09E0)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_PARTICLEINSTANCE_OFFSET UNITYSDK_OFFSET(0x18EF0A00)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_PARTICLESYSTEM_OFFSET UNITYSDK_OFFSET(0x18EEE240)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_PARTICLETRANSFORMTYPE_OFFSET UNITYSDK_OFFSET(0x18EEE050)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_PATHHASH_OFFSET UNITYSDK_OFFSET(0x18EF0A70)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_PATH_OFFSET UNITYSDK_OFFSET(0x18EF09D0)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_RAWTRANS_OFFSET UNITYSDK_OFFSET(0x18EEE7D0)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_TRANSFORMADDITIVE_OFFSET UNITYSDK_OFFSET(0x18EF0B00)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_INIT_OFFSET UNITYSDK_OFFSET(0x18EEE7F0)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x18EF03B0)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_PLAY_OFFSET UNITYSDK_OFFSET(0x18EEF2E0)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_RESETLOCALTRANSFORM_OFFSET UNITYSDK_OFFSET(0x18EEE840)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_SET_ATTACHPOINTTYPE_OFFSET UNITYSDK_OFFSET(0x18EEE040)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_SET_ORIGINPATH_OFFSET UNITYSDK_OFFSET(0x18EF09F0)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_SET_PARTICLETRANSFORMTYPE_OFFSET UNITYSDK_OFFSET(0x18EEE060)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_SET_TRANSFORMADDITIVE_OFFSET UNITYSDK_OFFSET(0x18EF0B20)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_SIMULATE_OFFSET UNITYSDK_OFFSET(0x18EF0020)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_STOP_OFFSET UNITYSDK_OFFSET(0x18EEF560)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_TRYCHANGETRANSFORMPARENT_1_OFFSET UNITYSDK_OFFSET(0x18EEF5F0)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_TRYCHANGETRANSFORMPARENT_OFFSET UNITYSDK_OFFSET(0x18EEEDE0)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18EF0B40)
#define MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18EEE610)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowChessPieceParticle_TypeDefinitionIndex = 55736;

	class UIHollowChessPieceParticle : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3* StaticGet_DefAngle()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(UIHollowChessPieceParticle_TypeDefinitionIndex)->GetStaticField(0xDCC0);
		}
		static ::UnityEngine::Vector3* StaticGet_InvalidPos()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(UIHollowChessPieceParticle_TypeDefinitionIndex)->GetStaticField(0xDCCC);
		}
		::System::String* _path; // 0x10
		::Class_3_3EB2168D97754EAD* _particleInstance; // 0x18
		::UnityEngine::Animation* _animation; // 0x20
		::System::String* _OriginPath_k__BackingField; // 0x28
		::System::Nullable_1<::Foundation::Unreal::FTransform> _TransformAdditive_k__BackingField; // 0x30
		::MoleMole::UIHollowChessPieceParticle_AttachPointType _attachPointType_k__BackingField; // 0x54
		::MoleMole::UIHollowChessPieceParticle_TransformType _ParticleTransformType_k__BackingField; // 0x58

		::System::Void _ctor(::Class_3_3EB2168D97754EAD* particleInstance, ::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_3EB2168D97754EAD*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE__CTOR_OFFSET))(this, particleInstance, path);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE__CCTOR_OFFSET))();
		}

		::MoleMole::UIHollowChessPieceParticle_AttachPointType get_attachPointType()
		{
			return ((::MoleMole::UIHollowChessPieceParticle_AttachPointType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_ATTACHPOINTTYPE_OFFSET))(this);
		}

		::System::Void set_attachPointType(::MoleMole::UIHollowChessPieceParticle_AttachPointType value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowChessPieceParticle_AttachPointType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_SET_ATTACHPOINTTYPE_OFFSET))(this, value);
		}

		::MoleMole::UIHollowChessPieceParticle_TransformType get_ParticleTransformType()
		{
			return ((::MoleMole::UIHollowChessPieceParticle_TransformType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_PARTICLETRANSFORMTYPE_OFFSET))(this);
		}

		::System::Void set_ParticleTransformType(::MoleMole::UIHollowChessPieceParticle_TransformType value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowChessPieceParticle_TransformType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_SET_PARTICLETRANSFORMTYPE_OFFSET))(this, value);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Boolean get_HasTextureSheetAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_HASTEXTURESHEETANIMATION_OFFSET))(this);
		}

		::System::Single GetTextureSheetFrameIndex()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GETTEXTURESHEETFRAMEINDEX_OFFSET))(this);
		}

		::System::Single get_durationSeconds()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_DURATIONSECONDS_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::Transform* parent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_INIT_OFFSET))(this, parent);
		}

		::System::Void ResetLocalTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_RESETLOCALTRANSFORM_OFFSET))(this);
		}

		::System::Boolean TryChangeTransformParent(::UnityEngine::Transform* curParent)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_TRYCHANGETRANSFORMPARENT_OFFSET))(this, curParent);
		}

		::System::Void ChangeScale(::UnityEngine::Vector3 scale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_CHANGESCALE_OFFSET))(this, scale);
		}

		::System::Void Destructor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_DESTRUCTOR_OFFSET))(this);
		}

		::System::Void BeforeRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_BEFORERECYCLE_OFFSET))(this);
		}

		::System::Void BindProxy(::Class_5_A6F8D19602712D95* proxy)
		{
			return ((::System::Void(*)(::PVOID, ::Class_5_A6F8D19602712D95*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_BINDPROXY_OFFSET))(this, proxy);
		}

		::System::Boolean Play(::System::Boolean loop, ::System::Single speed)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_PLAY_OFFSET))(this, loop, speed);
		}

		::System::Boolean Stop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_STOP_OFFSET))(this);
		}

		::System::Boolean TryChangeTransformParent_1(::Class_1_5F3ED31AAEDA15B0* parentModel, ::System::Action* afterChangeParent)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_5F3ED31AAEDA15B0*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_TRYCHANGETRANSFORMPARENT_1_OFFSET))(this, parentModel, afterChangeParent);
		}

		::System::Void Simulate(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_SIMULATE_OFFSET))(this, time);
		}

		::System::Single GetTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GETTIME_OFFSET))(this);
		}

		::System::Single PlayAnimation(::System::String* animationName, ::System::Single speed)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_PLAYANIMATION_OFFSET))(this, animationName, speed);
		}

		::System::Single GetAnimationTime(::System::String* animationName)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GETANIMATIONTIME_OFFSET))(this, animationName);
		}

		::UnityEngine::Transform* get_RawTrans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_RAWTRANS_OFFSET))(this);
		}

		::System::String* get_Path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_PATH_OFFSET))(this);
		}

		::System::String* get_OriginPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_ORIGINPATH_OFFSET))(this);
		}

		::System::Void set_OriginPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_SET_ORIGINPATH_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystem* get_ParticleSystem()
		{
			return ((::UnityEngine::ParticleSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_PARTICLESYSTEM_OFFSET))(this);
		}

		::Class_3_3EB2168D97754EAD* get_ParticleInstance()
		{
			return ((::Class_3_3EB2168D97754EAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_PARTICLEINSTANCE_OFFSET))(this);
		}

		::System::Boolean get_IsLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_ISLOOP_OFFSET))(this);
		}

		::System::Int32 get_PathHash()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_PATHHASH_OFFSET))(this);
		}

		::System::Nullable_1<::Foundation::Unreal::FTransform> get_TransformAdditive()
		{
			return ((::System::Nullable_1<::Foundation::Unreal::FTransform>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_GET_TRANSFORMADDITIVE_OFFSET))(this);
		}

		::System::Void set_TransformAdditive(::System::Nullable_1<::Foundation::Unreal::FTransform> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Foundation::Unreal::FTransform>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSPIECEPARTICLE_SET_TRANSFORMADDITIVE_OFFSET))(this, value);
		}
	};
}

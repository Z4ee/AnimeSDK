#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/TeleportGateInfo.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_375;
class Class_1_3919EFEDE4A62579;
class Class_1_DD81253E160EB8B2;
class Class_2_01F4079471966D8C;
class Class_2_1442FB89FB5D457F;
namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace RPG::Client::Prop { class TeleportGatePuzzleBoard; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_TELEPORTGATE_ACTIVEGATE_OFFSET UNITYSDK_OFFSET(0xA165580)
#define RPG_CLIENT_PROP_TELEPORTGATE_DISABLETRIGGER_OFFSET UNITYSDK_OFFSET(0xA165290)
#define RPG_CLIENT_PROP_TELEPORTGATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA164960)
#define RPG_CLIENT_PROP_TELEPORTGATE_DOROTATE_OFFSET UNITYSDK_OFFSET(0xA165690)
#define RPG_CLIENT_PROP_TELEPORTGATE_ENABLETRIGGER_OFFSET UNITYSDK_OFFSET(0xA1652F0)
#define RPG_CLIENT_PROP_TELEPORTGATE_GETPROP_OFFSET UNITYSDK_OFFSET(0xA1658E0)
#define RPG_CLIENT_PROP_TELEPORTGATE_GET_FODBIDAIMROTATION_OFFSET UNITYSDK_OFFSET(0xA166EE0)
#define RPG_CLIENT_PROP_TELEPORTGATE_GET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0xA166EC0)
#define RPG_CLIENT_PROP_TELEPORTGATE_GET_ISGATEACTIVE_OFFSET UNITYSDK_OFFSET(0xA166EA0)
#define RPG_CLIENT_PROP_TELEPORTGATE_INITGATE_OFFSET UNITYSDK_OFFSET(0xA163E00)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xA164E70)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xA165520)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_347F18FA30CEE25E_OFFSET UNITYSDK_OFFSET(0xA166230)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_3D0029931D25E87E_OFFSET UNITYSDK_OFFSET(0xA1657E0)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_5782059EA974C4A1_OFFSET UNITYSDK_OFFSET(0xA165E20)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_58E4F6A5F8FAF17F_OFFSET UNITYSDK_OFFSET(0xA165970)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0xA166970)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_6345BF557E4E4E6A_OFFSET UNITYSDK_OFFSET(0xA1666F0)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0xA165920)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_816ED7FC0A7FCCD1_OFFSET UNITYSDK_OFFSET(0xA166280)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_95FC878EB184D294_OFFSET UNITYSDK_OFFSET(0xA164650)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xA1669F0)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_B0351A8151A472A4_OFFSET UNITYSDK_OFFSET(0xA166630)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xA164570)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_B945ACB0EE6F50D4_OFFSET UNITYSDK_OFFSET(0xA166A40)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_FA58824BA12F6F62_1_OFFSET UNITYSDK_OFFSET(0xA166DA0)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_FA58824BA12F6F62_OFFSET UNITYSDK_OFFSET(0xA166CA0)
#define RPG_CLIENT_PROP_TELEPORTGATE_SETFORBIDAIMROTATION_OFFSET UNITYSDK_OFFSET(0xA165890)
#define RPG_CLIENT_PROP_TELEPORTGATE_SETGATECONNECTED_OFFSET UNITYSDK_OFFSET(0xA165600)
#define RPG_CLIENT_PROP_TELEPORTGATE_SETGATEISOLATED_OFFSET UNITYSDK_OFFSET(0xA165240)
#define RPG_CLIENT_PROP_TELEPORTGATE_SET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0xA166ED0)
#define RPG_CLIENT_PROP_TELEPORTGATE_SET_ISGATEACTIVE_OFFSET UNITYSDK_OFFSET(0xA166EB0)
#define RPG_CLIENT_PROP_TELEPORTGATE_TICK_OFFSET UNITYSDK_OFFSET(0xA165190)
#define RPG_CLIENT_PROP_TELEPORTGATE__CCTOR_OFFSET UNITYSDK_OFFSET(0xA166F70)
#define RPG_CLIENT_PROP_TELEPORTGATE__CTOR_OFFSET UNITYSDK_OFFSET(0xA166EF0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int TeleportGate_TypeDefinitionIndex = 64337;

	class TeleportGate : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_TeleportingSoundEvent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TeleportGate_TypeDefinitionIndex)->GetStaticField(0x7C40);
		}
		static ::System::String** StaticGet_TeleportEndSoundEvent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TeleportGate_TypeDefinitionIndex)->GetStaticField(0x7C48);
		}
		static ::System::String** StaticGet_RotateSoundEvent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TeleportGate_TypeDefinitionIndex)->GetStaticField(0x7C50);
		}
		static ::System::String** StaticGet_StopTeleportingSoundEvent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TeleportGate_TypeDefinitionIndex)->GetStaticField(0x7C58);
		}
		// static const ::System::Single Field_5_38; // 0x0
		::System::Boolean _IsGateActive_k__BackingField; // 0x18
		::System::Boolean _IsConnected_k__BackingField; // 0x19
		::UnityEngine::Transform* TeleportEndPositionObject; // 0x20
		::System::Single Field_5_7; // 0x28
		::Il2CppArray<::System::Single>* Field_5_8; // 0x30
		::RPG::Client::Prop::TeleportGatePuzzleBoard* Field_5_9; // 0x38
		::RPG::GameCore::PropComponent* Field_5_10; // 0x40
		::System::Int32 Field_5_11; // 0x48
		::RPG::GameCore::GameEntity* Field_5_12; // 0x50
		::UnityEngine::Transform* Field_5_13; // 0x58
		::RPG::GameCore::CharacterVisibleComponent* Field_5_14; // 0x60
		::RPG::GameCore::AdventureCharacterController* Field_5_15; // 0x68
		::Class_2_1442FB89FB5D457F* Field_5_16; // 0x70
		::Class_2_1442FB89FB5D457F* Field_5_17; // 0x78
		::Class_1_3919EFEDE4A62579* Field_5_18; // 0x80
		::BansheeGz::BGSpline::Components::BGCcMath* Field_5_19; // 0x88
		::System::Boolean Field_5_20; // 0x90
		::System::Boolean Field_5_21; // 0x91
		::System::Boolean Field_5_22; // 0x92
		::System::Boolean Field_5_23; // 0x93
		::System::Boolean Field_5_24; // 0x94
		::RPG::GameCore::TransformComponent* Field_5_25; // 0x98
		::Class_2_01F4079471966D8C* Field_5_26; // 0xA0
		::System::Boolean Field_5_27; // 0xA8
		::System::String* Field_5_28; // 0xB0
		::System::String* Field_5_29; // 0xB8
		::System::String* Field_5_30; // 0xC0
		::System::Int32 Field_5_31; // 0xC8
		::System::Int32 Field_5_32; // 0xCC
		::System::Boolean Field_5_33; // 0xD0
		::System::Single Field_5_34; // 0xD4
		::Class_1_DD81253E160EB8B2* Field_5_35; // 0xD8
		::System::Boolean Field_5_36; // 0xE0
		::System::Single Field_5_37; // 0xE4
		::UnityEngine::Coroutine* Field_5_39; // 0xE8
		::UnityEngine::Coroutine* Field_5_40; // 0xF0
		::UnityEngine::Vector3 Field_5_41; // 0xF8
		::UnityEngine::Quaternion Field_5_42; // 0x104
		::System::Boolean Field_5_43; // 0x114

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE__CCTOR_OFFSET))();
		}

		::System::Void InitGate(::RPG::Client::Prop::TeleportGatePuzzleBoard* a1, ::RPG::GameCore::PropComponent* a2, ::System::Int32 a3, ::RPG::Client::Prop::TeleportGateInfo a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::TeleportGatePuzzleBoard*, ::RPG::GameCore::PropComponent*, ::System::Int32, ::RPG::Client::Prop::TeleportGateInfo))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_INITGATE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_TICK_OFFSET))(this, a1);
		}

		::System::Void SetGateIsolated(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_SETGATEISOLATED_OFFSET))(this, a1);
		}

		::System::Void DisableTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_DISABLETRIGGER_OFFSET))(this);
		}

		::System::Void EnableTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_ENABLETRIGGER_OFFSET))(this);
		}

		::System::Void ActiveGate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_ACTIVEGATE_OFFSET))(this);
		}

		::System::Void SetGateConnected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_SETGATECONNECTED_OFFSET))(this, a1);
		}

		::System::Void DoRotate(::System::Single a1, ::System::Single a2, ::UnityEngine::AnimationCurve* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_DOROTATE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetForbidAimRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_SETFORBIDAIMROTATION_OFFSET))(this);
		}

		::RPG::GameCore::PropComponent* GetProp()
		{
			return ((::RPG::GameCore::PropComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_GETPROP_OFFSET))(this);
		}

		::System::Void Method_5_7DD84EAFF333A1E4(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_7DD84EAFF333A1E4_OFFSET))(this, a1);
		}

		::System::Void Method_5_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_5_58E4F6A5F8FAF17F(::Class_0_16E4307DCC419505_375* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_58E4F6A5F8FAF17F_OFFSET))(this, a1);
		}

		::System::Void Method_5_5782059EA974C4A1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_5782059EA974C4A1_OFFSET))(this);
		}

		::System::Void Method_5_347F18FA30CEE25E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_347F18FA30CEE25E_OFFSET))(this);
		}

		::System::Void Method_5_95FC878EB184D294()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_95FC878EB184D294_OFFSET))(this);
		}

		::System::Boolean Method_5_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_1D4018D4200358D0_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Method_5_3D0029931D25E87E(::System::Single a1, ::System::Single a2, ::UnityEngine::AnimationCurve* a3)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_3D0029931D25E87E_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_816ED7FC0A7FCCD1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_816ED7FC0A7FCCD1_OFFSET))(this);
		}

		::System::Void Method_5_B0351A8151A472A4(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_B0351A8151A472A4_OFFSET))(this, a1);
		}

		::System::Single Method_5_A36150C5DCC8409E()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_A36150C5DCC8409E_OFFSET))(this);
		}

		::System::Void Method_5_B945ACB0EE6F50D4(::UnityEngine::Transform* a1, ::UnityEngine::Quaternion a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_B945ACB0EE6F50D4_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::IEnumerator* Method_5_627C7524E98F4AC5()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_627C7524E98F4AC5_OFFSET))(this);
		}

		::System::Void Method_5_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_151E25A63D14DDB0_OFFSET))(this);
		}

		::System::Void Method_5_6345BF557E4E4E6A(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_6345BF557E4E4E6A_OFFSET))(this, a1);
		}

		::System::Void Method_5_FA58824BA12F6F62()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_FA58824BA12F6F62_OFFSET))(this);
		}

		::System::Void Method_5_FA58824BA12F6F62_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_FA58824BA12F6F62_1_OFFSET))(this);
		}

		::System::Boolean get_IsGateActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_GET_ISGATEACTIVE_OFFSET))(this);
		}

		::System::Void set_IsGateActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_SET_ISGATEACTIVE_OFFSET))(this, value);
		}

		::System::Boolean get_IsConnected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_GET_ISCONNECTED_OFFSET))(this);
		}

		::System::Void set_IsConnected(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_SET_ISCONNECTED_OFFSET))(this, value);
		}

		::System::Boolean get_FodbidAimRotation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_GET_FODBIDAIMROTATION_OFFSET))(this);
		}
	};
}

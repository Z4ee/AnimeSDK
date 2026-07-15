#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/TeleportGateInfo.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_425;
class Class_1_0D98CBE9A89A1626;
class Class_1_E45C207B1AC948BE;
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

#define RPG_CLIENT_PROP_TELEPORTGATE_ACTIVEGATE_OFFSET UNITYSDK_OFFSET(0x1610FA10)
#define RPG_CLIENT_PROP_TELEPORTGATE_DISABLETRIGGER_OFFSET UNITYSDK_OFFSET(0x1610F810)
#define RPG_CLIENT_PROP_TELEPORTGATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1610EEB0)
#define RPG_CLIENT_PROP_TELEPORTGATE_DOROTATE_OFFSET UNITYSDK_OFFSET(0x1610FB20)
#define RPG_CLIENT_PROP_TELEPORTGATE_ENABLETRIGGER_OFFSET UNITYSDK_OFFSET(0x1610F870)
#define RPG_CLIENT_PROP_TELEPORTGATE_GETPROP_OFFSET UNITYSDK_OFFSET(0x1610FD70)
#define RPG_CLIENT_PROP_TELEPORTGATE_GET_FODBIDAIMROTATION_OFFSET UNITYSDK_OFFSET(0x16111380)
#define RPG_CLIENT_PROP_TELEPORTGATE_GET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0x16111360)
#define RPG_CLIENT_PROP_TELEPORTGATE_GET_ISGATEACTIVE_OFFSET UNITYSDK_OFFSET(0x16111340)
#define RPG_CLIENT_PROP_TELEPORTGATE_INITGATE_OFFSET UNITYSDK_OFFSET(0x1610E4E0)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1610F3E0)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1610F9B0)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_2C825E716CE9F2F9_OFFSET UNITYSDK_OFFSET(0x1610ED40)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_347F18FA30CEE25E_OFFSET UNITYSDK_OFFSET(0x161106D0)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_36F46336ADA62D13_OFFSET UNITYSDK_OFFSET(0x16110230)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_3D0029931D25E87E_OFFSET UNITYSDK_OFFSET(0x1610FC70)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x1610FE00)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x16110E20)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x1610FDB0)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_816ED7FC0A7FCCD1_OFFSET UNITYSDK_OFFSET(0x16110720)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x16110EA0)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_B0351A8151A472A4_OFFSET UNITYSDK_OFFSET(0x16110AD0)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1610EC60)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_B945ACB0EE6F50D4_OFFSET UNITYSDK_OFFSET(0x16110EF0)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_E7AB99EDC5373156_OFFSET UNITYSDK_OFFSET(0x16110B90)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_FA58824BA12F6F62_1_OFFSET UNITYSDK_OFFSET(0x16111240)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_FA58824BA12F6F62_OFFSET UNITYSDK_OFFSET(0x16111140)
#define RPG_CLIENT_PROP_TELEPORTGATE_SETFORBIDAIMROTATION_OFFSET UNITYSDK_OFFSET(0x1610FD20)
#define RPG_CLIENT_PROP_TELEPORTGATE_SETGATECONNECTED_OFFSET UNITYSDK_OFFSET(0x1610FA90)
#define RPG_CLIENT_PROP_TELEPORTGATE_SETGATEISOLATED_OFFSET UNITYSDK_OFFSET(0x1610F7C0)
#define RPG_CLIENT_PROP_TELEPORTGATE_SET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0x16111370)
#define RPG_CLIENT_PROP_TELEPORTGATE_SET_ISGATEACTIVE_OFFSET UNITYSDK_OFFSET(0x16111350)
#define RPG_CLIENT_PROP_TELEPORTGATE_TICK_OFFSET UNITYSDK_OFFSET(0x1610F710)
#define RPG_CLIENT_PROP_TELEPORTGATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16111410)
#define RPG_CLIENT_PROP_TELEPORTGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x16111390)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int TeleportGate_TypeDefinitionIndex = 74931;

	class TeleportGate : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_TeleportEndSoundEvent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TeleportGate_TypeDefinitionIndex)->GetStaticField(0xE100);
		}
		static ::System::String** StaticGet_RotateSoundEvent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TeleportGate_TypeDefinitionIndex)->GetStaticField(0xE108);
		}
		static ::System::String** StaticGet_TeleportingSoundEvent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TeleportGate_TypeDefinitionIndex)->GetStaticField(0xE110);
		}
		static ::System::String** StaticGet_StopTeleportingSoundEvent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TeleportGate_TypeDefinitionIndex)->GetStaticField(0xE118);
		}
		// static const ::System::Single Field_5_4; // 0x0
		::System::Boolean _IsGateActive_k__BackingField; // 0x18
		::System::Boolean _IsConnected_k__BackingField; // 0x19
		::UnityEngine::Transform* TeleportEndPositionObject; // 0x20
		::System::Single Field_5_8; // 0x28
		::Il2CppArray<::System::Single>* Field_5_9; // 0x30
		::RPG::Client::Prop::TeleportGatePuzzleBoard* Field_5_10; // 0x38
		::RPG::GameCore::PropComponent* Field_5_11; // 0x40
		::System::Int32 Field_5_12; // 0x48
		::RPG::GameCore::GameEntity* Field_5_13; // 0x50
		::UnityEngine::Transform* Field_5_14; // 0x58
		::RPG::GameCore::CharacterVisibleComponent* Field_5_15; // 0x60
		::RPG::GameCore::AdventureCharacterController* Field_5_16; // 0x68
		::Class_2_1442FB89FB5D457F* Field_5_17; // 0x70
		::Class_2_1442FB89FB5D457F* Field_5_18; // 0x78
		::Class_1_0D98CBE9A89A1626* Field_5_19; // 0x80
		::BansheeGz::BGSpline::Components::BGCcMath* Field_5_20; // 0x88
		::System::Boolean Field_5_21; // 0x90
		::System::Boolean Field_5_22; // 0x91
		::System::Boolean Field_5_23; // 0x92
		::System::Boolean Field_5_24; // 0x93
		::System::Boolean Field_5_25; // 0x94
		::RPG::GameCore::TransformComponent* Field_5_26; // 0x98
		::Class_2_01F4079471966D8C* Field_5_27; // 0xA0
		::System::Boolean Field_5_28; // 0xA8
		::System::String* Field_5_29; // 0xB0
		::System::String* Field_5_30; // 0xB8
		::System::String* Field_5_31; // 0xC0
		::System::Int32 Field_5_32; // 0xC8
		::System::Int32 Field_5_33; // 0xCC
		::System::Boolean Field_5_34; // 0xD0
		::System::Single Field_5_35; // 0xD4
		::Class_1_E45C207B1AC948BE* Field_5_36; // 0xD8
		::System::Boolean Field_5_37; // 0xE0
		::System::Single Field_5_38; // 0xE4
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

		::System::Void Method_5_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_425* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_5B0531D5B96D6B96_OFFSET))(this, a1);
		}

		::System::Void Method_5_36F46336ADA62D13()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_36F46336ADA62D13_OFFSET))(this);
		}

		::System::Void Method_5_347F18FA30CEE25E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_347F18FA30CEE25E_OFFSET))(this);
		}

		::System::Void Method_5_2C825E716CE9F2F9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_2C825E716CE9F2F9_OFFSET))(this);
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

		::System::Void Method_5_E7AB99EDC5373156(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_E7AB99EDC5373156_OFFSET))(this, a1);
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

		::System::Void set_IsGateActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_SET_ISGATEACTIVE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsConnected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_GET_ISCONNECTED_OFFSET))(this);
		}

		::System::Void set_IsConnected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_SET_ISCONNECTED_OFFSET))(this, a1);
		}

		::System::Boolean get_FodbidAimRotation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_GET_FODBIDAIMROTATION_OFFSET))(this);
		}
	};
}

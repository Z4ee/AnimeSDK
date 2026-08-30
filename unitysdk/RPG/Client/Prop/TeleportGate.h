#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/TeleportGateInfo.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_460;
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

#define RPG_CLIENT_PROP_TELEPORTGATE_ACTIVEGATE_OFFSET UNITYSDK_OFFSET(0x17B0EE70)
#define RPG_CLIENT_PROP_TELEPORTGATE_DISABLETRIGGER_OFFSET UNITYSDK_OFFSET(0x17B0EC70)
#define RPG_CLIENT_PROP_TELEPORTGATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17B0E2C0)
#define RPG_CLIENT_PROP_TELEPORTGATE_DOROTATE_OFFSET UNITYSDK_OFFSET(0x17B0EF80)
#define RPG_CLIENT_PROP_TELEPORTGATE_ENABLETRIGGER_OFFSET UNITYSDK_OFFSET(0x17B0ECD0)
#define RPG_CLIENT_PROP_TELEPORTGATE_GETPROP_OFFSET UNITYSDK_OFFSET(0x17B0F1D0)
#define RPG_CLIENT_PROP_TELEPORTGATE_GET_FODBIDAIMROTATION_OFFSET UNITYSDK_OFFSET(0x17B107C0)
#define RPG_CLIENT_PROP_TELEPORTGATE_GET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0x17B107A0)
#define RPG_CLIENT_PROP_TELEPORTGATE_GET_ISGATEACTIVE_OFFSET UNITYSDK_OFFSET(0x17B10780)
#define RPG_CLIENT_PROP_TELEPORTGATE_INITGATE_OFFSET UNITYSDK_OFFSET(0x17B0D8F0)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x17B0E820)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x17B0EE10)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_2C825E716CE9F2F9_OFFSET UNITYSDK_OFFSET(0x17B0E150)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_347F18FA30CEE25E_OFFSET UNITYSDK_OFFSET(0x17B0FB30)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_36F46336ADA62D13_OFFSET UNITYSDK_OFFSET(0x17B0F690)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_3D0029931D25E87E_OFFSET UNITYSDK_OFFSET(0x17B0F0D0)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_4795F6BF5D7D71FF_OFFSET UNITYSDK_OFFSET(0x17B0FFF0)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x17B0F260)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x17B10250)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x17B0F210)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_816ED7FC0A7FCCD1_OFFSET UNITYSDK_OFFSET(0x17B0FB80)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x17B102D0)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_B0351A8151A472A4_OFFSET UNITYSDK_OFFSET(0x17B0FF30)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x17B0E070)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_B945ACB0EE6F50D4_OFFSET UNITYSDK_OFFSET(0x17B10320)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_FA58824BA12F6F62_1_OFFSET UNITYSDK_OFFSET(0x17B10680)
#define RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_FA58824BA12F6F62_OFFSET UNITYSDK_OFFSET(0x17B10580)
#define RPG_CLIENT_PROP_TELEPORTGATE_SETFORBIDAIMROTATION_OFFSET UNITYSDK_OFFSET(0x17B0F180)
#define RPG_CLIENT_PROP_TELEPORTGATE_SETGATECONNECTED_OFFSET UNITYSDK_OFFSET(0x17B0EEF0)
#define RPG_CLIENT_PROP_TELEPORTGATE_SETGATEISOLATED_OFFSET UNITYSDK_OFFSET(0x17B0EC20)
#define RPG_CLIENT_PROP_TELEPORTGATE_SET_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0x17B107B0)
#define RPG_CLIENT_PROP_TELEPORTGATE_SET_ISGATEACTIVE_OFFSET UNITYSDK_OFFSET(0x17B10790)
#define RPG_CLIENT_PROP_TELEPORTGATE_TICK_OFFSET UNITYSDK_OFFSET(0x17B0EB70)
#define RPG_CLIENT_PROP_TELEPORTGATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B10850)
#define RPG_CLIENT_PROP_TELEPORTGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x17B107D0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int TeleportGate_TypeDefinitionIndex = 78416;

	class TeleportGate : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_RotateSoundEvent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TeleportGate_TypeDefinitionIndex)->GetStaticField(0x650D0);
		}
		static ::System::String** StaticGet_TeleportingSoundEvent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TeleportGate_TypeDefinitionIndex)->GetStaticField(0x650D8);
		}
		static ::System::String** StaticGet_TeleportEndSoundEvent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TeleportGate_TypeDefinitionIndex)->GetStaticField(0x650E0);
		}
		static ::System::String** StaticGet_StopTeleportingSoundEvent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TeleportGate_TypeDefinitionIndex)->GetStaticField(0x650E8);
		}
		// static const ::System::Single MMFGJJKEGPC; // 0x0
		::System::Boolean _IsGateActive_k__BackingField; // 0x18
		::System::Boolean _IsConnected_k__BackingField; // 0x19
		::UnityEngine::Transform* TeleportEndPositionObject; // 0x20
		::System::Single FLHOEGBFPJB; // 0x28
		::Il2CppArray<::System::Single>* PAEPLKIIICL; // 0x30
		::RPG::Client::Prop::TeleportGatePuzzleBoard* COAMCKILKPH; // 0x38
		::RPG::GameCore::PropComponent* NKILIBDMOMC; // 0x40
		::System::Int32 OOJJEAJHBLG; // 0x48
		::RPG::GameCore::GameEntity* CMNJDMKPPIA; // 0x50
		::UnityEngine::Transform* DHDOBALIDKP; // 0x58
		::RPG::GameCore::CharacterVisibleComponent* BILIDIDJJDN; // 0x60
		::RPG::GameCore::AdventureCharacterController* MNBAPCPACFP; // 0x68
		::Class_2_1442FB89FB5D457F* FMBMOLLKDHK; // 0x70
		::Class_2_1442FB89FB5D457F* IJDFGKGOJKJ; // 0x78
		::Class_1_0D98CBE9A89A1626* HKJNGDKDMNN; // 0x80
		::BansheeGz::BGSpline::Components::BGCcMath* GCBACPNDCCP; // 0x88
		::System::Boolean MEKAIIEIDHC; // 0x90
		::System::Boolean CBBNEJAMPDP; // 0x91
		::System::Boolean EGNEMDJGBEM; // 0x92
		::System::Boolean HGABOBEIIGE; // 0x93
		::System::Boolean DNGJBKHIJHK; // 0x94
		::RPG::GameCore::TransformComponent* BALCPGFDOFI; // 0x98
		::Class_2_01F4079471966D8C* LANIADMDJOD; // 0xA0
		::System::Boolean BNBMIBGDDNE; // 0xA8
		::System::String* EIAFFLBFMCL; // 0xB0
		::System::String* APJNCPLNAMJ; // 0xB8
		::System::String* BNPAPLGFBNH; // 0xC0
		::System::Int32 DNOPAFEDOEI; // 0xC8
		::System::Int32 IJCCHHGOCOF; // 0xCC
		::System::Boolean CMILBEKNKPF; // 0xD0
		::System::Single PJJLEJDPNHI; // 0xD4
		::Class_1_E45C207B1AC948BE* GNJNMKMFDPN; // 0xD8
		::System::Boolean HOJMOGKJBCP; // 0xE0
		::System::Single FNFJHLEFNDF; // 0xE4
		::UnityEngine::Coroutine* KLDPBIPCEEP; // 0xE8
		::UnityEngine::Coroutine* JLLAFDIKHLH; // 0xF0
		::UnityEngine::Vector3 MICPOHNHJNL; // 0xF8
		::UnityEngine::Quaternion EPGGMLJOAAA; // 0x104
		::System::Boolean OCPFGIJAKPK; // 0x114

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

		::System::Void Method_5_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_460* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_5B0531D5B96D6B96_OFFSET))(this, a1);
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

		::System::Void Method_5_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_1290EA767C459179_OFFSET))(this);
		}

		::System::Void Method_5_4795F6BF5D7D71FF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE_METHOD_5_4795F6BF5D7D71FF_OFFSET))(this, a1);
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

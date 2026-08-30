#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D5DA62FC7DE2D532.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_64D890C466F37235;
class Class_2_2B9847232031B19F;
namespace EffectPlugin { class Effect_CustomFollowPlugin; }
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class MapRotationInfo; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginPerformEventListener; }
namespace RPG::GameCore { class MapRotationCameraConfig; }
namespace RPG::GameCore { class PlayerEnergyConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_5AC0D8B32AD9BFBE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1559FD10)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_024876544C3FD21D_OFFSET UNITYSDK_OFFSET(0x155A0DF0)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_05385E043E28B03E_OFFSET UNITYSDK_OFFSET(0x155A1EB0)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_1086E351241EDD3B_1_OFFSET UNITYSDK_OFFSET(0x155A1410)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_1086E351241EDD3B_2_OFFSET UNITYSDK_OFFSET(0x155A1460)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_1086E351241EDD3B_3_OFFSET UNITYSDK_OFFSET(0x155A14C0)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_1086E351241EDD3B_OFFSET UNITYSDK_OFFSET(0x155A13C0)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x1559F9F0)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_336976A186FC8B44_OFFSET UNITYSDK_OFFSET(0x155A1090)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_347F18FA30CEE25E_OFFSET UNITYSDK_OFFSET(0x1559FEC0)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_41AA181104E03F2C_OFFSET UNITYSDK_OFFSET(0x1559FB50)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_4450635DBE779CA8_OFFSET UNITYSDK_OFFSET(0x155A1A00)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0x155A0060)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_6F041C96885D24EC_OFFSET UNITYSDK_OFFSET(0x155A1210)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_70437D85C11C5222_OFFSET UNITYSDK_OFFSET(0x1559FC20)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_7352AE24442C691D_OFFSET UNITYSDK_OFFSET(0x155A16C0)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_7E3858055FECC425_OFFSET UNITYSDK_OFFSET(0x155A0EC0)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_870AF3CD1D0A67B1_OFFSET UNITYSDK_OFFSET(0x1559FA50)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_947D2B8B7863EE1B_OFFSET UNITYSDK_OFFSET(0x1559FAE0)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_992B88E0E0E3EDAE_OFFSET UNITYSDK_OFFSET(0x155A1510)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0x155A1150)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_A0BCF6B0C0D36E41_OFFSET UNITYSDK_OFFSET(0x155A0A40)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_A1E867892BDB62CB_1_OFFSET UNITYSDK_OFFSET(0x155A0E50)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_A1E867892BDB62CB_OFFSET UNITYSDK_OFFSET(0x155A09D0)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_B1E62D978A54E884_OFFSET UNITYSDK_OFFSET(0x155A0410)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_E7046C181E996411_OFFSET UNITYSDK_OFFSET(0x155A0BC0)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_ED65AE7582736594_OFFSET UNITYSDK_OFFSET(0x155A10F0)
#define CLASS_2_5AC0D8B32AD9BFBE__CTOR_OFFSET UNITYSDK_OFFSET(0x155A1F90)

inline static constexpr unsigned int Class_2_5AC0D8B32AD9BFBE_TypeDefinitionIndex = 60708;

class Class_2_5AC0D8B32AD9BFBE : public ::Class_1_D5DA62FC7DE2D532
{
public:
	// static const ::System::String* AINADPEEOHH; // 0x0
	::Class_2_2B9847232031B19F* BAMECAHHEKC; // 0x10
	::Class_1_64D890C466F37235* KGCNPIEDOCA; // 0x18
	::RPG::GameCore::PlayerEnergyConfig* LDNOGBHGKOH; // 0x20
	::RPG::Client::MapRotationInfo* OCDIENNPEDA; // 0x28
	::RPG::Client::AdventurePhase* DEIEJIOELMO; // 0x30
	::RPG::GameCore::MapRotationCameraConfig* GGBGBANPMFG; // 0x38
	::System::Boolean BOGHIMFCFMK; // 0x40
	::System::Boolean OLILHCANLJD; // 0x41
	::System::Boolean IPMKNCEPIGC; // 0x42

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_947D2B8B7863EE1B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_947D2B8B7863EE1B_OFFSET))(this, a1);
	}

	::System::Void Method_2_41AA181104E03F2C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_41AA181104E03F2C_OFFSET))(this);
	}

	::System::Void Method_2_870AF3CD1D0A67B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_870AF3CD1D0A67B1_OFFSET))(this);
	}

	::System::Void Method_2_70437D85C11C5222(::Class_1_64D890C466F37235* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_70437D85C11C5222_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_347F18FA30CEE25E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_347F18FA30CEE25E_OFFSET))(this);
	}

	::System::Void Method_2_B1E62D978A54E884(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_B1E62D978A54E884_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A1E867892BDB62CB(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_A1E867892BDB62CB_OFFSET))(this, a1);
	}

	::System::Void Method_2_024876544C3FD21D(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_024876544C3FD21D_OFFSET))(this, a1);
	}

	::System::Void Method_2_A1E867892BDB62CB_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_A1E867892BDB62CB_1_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_2_7E3858055FECC425(::System::UInt32 a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_7E3858055FECC425_OFFSET))(this, a1);
	}

	::System::Void Method_2_336976A186FC8B44(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_336976A186FC8B44_OFFSET))(this, a1);
	}

	::System::Void Method_2_ED65AE7582736594()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_ED65AE7582736594_OFFSET))(this);
	}

	::System::Void Method_2_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_51BBA01F511E6107_OFFSET))(this);
	}

	::System::Void Method_2_6F041C96885D24EC(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_6F041C96885D24EC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9D9CF8F6C2342EE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_9D9CF8F6C2342EE5_OFFSET))(this, a1);
	}

	::System::Void Method_2_1086E351241EDD3B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_1086E351241EDD3B_OFFSET))(this, a1);
	}

	::System::Void Method_2_1086E351241EDD3B_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_1086E351241EDD3B_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_1086E351241EDD3B_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_1086E351241EDD3B_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_1086E351241EDD3B_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_1086E351241EDD3B_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_992B88E0E0E3EDAE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_992B88E0E0E3EDAE_OFFSET))(this, a1);
	}

	::System::Void Method_2_7352AE24442C691D(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_7352AE24442C691D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4450635DBE779CA8(::RPG::Client::MonoEffect* a1, ::RPG::Client::MonoEffect* a2, ::UnityEngine::GameObject* a3, ::UnityEngine::GameObject* a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::MonoEffect*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_4450635DBE779CA8_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_05385E043E28B03E(::EffectPlugin::Effect_CustomFollowPlugin* a1, ::RPG::Client::MonoEffectPluginPerformEventListener* a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::PVOID, ::EffectPlugin::Effect_CustomFollowPlugin*, ::RPG::Client::MonoEffectPluginPerformEventListener*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_05385E043E28B03E_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::MapRotationCameraConfig* Method_2_A0BCF6B0C0D36E41()
	{
		return ((::RPG::GameCore::MapRotationCameraConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_A0BCF6B0C0D36E41_OFFSET))(this);
	}

	::System::Void Method_2_E7046C181E996411(::System::Boolean a1, ::System::Boolean a2, ::RPG::GameCore::MapRotationCameraConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::MapRotationCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_E7046C181E996411_OFFSET))(this, a1, a2, a3);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D5DA62FC7DE2D532.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_64D890C466F37235;
class Class_2_36C95D73718D07B1;
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

#define CLASS_2_5AC0D8B32AD9BFBE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x137CAAF0)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_024876544C3FD21D_OFFSET UNITYSDK_OFFSET(0x137CBB40)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_05385E043E28B03E_OFFSET UNITYSDK_OFFSET(0x137CCC70)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_0A08BEB5A6FF1267_OFFSET UNITYSDK_OFFSET(0x137CACD0)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_1CD1133DC003C11C_OFFSET UNITYSDK_OFFSET(0x137CBEB0)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_4450635DBE779CA8_OFFSET UNITYSDK_OFFSET(0x137CC7C0)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x137CCE20)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_61929A3103595552_OFFSET UNITYSDK_OFFSET(0x137CBE60)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_6456C72D58F785DE_OFFSET UNITYSDK_OFFSET(0x137CBC00)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_6A4DA97832E39276_OFFSET UNITYSDK_OFFSET(0x137CBE00)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_6F041C96885D24EC_OFFSET UNITYSDK_OFFSET(0x137CBFA0)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_70437D85C11C5222_OFFSET UNITYSDK_OFFSET(0x137CAA00)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_7352AE24442C691D_OFFSET UNITYSDK_OFFSET(0x137CC480)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_7D905CC30A55BF61_1_OFFSET UNITYSDK_OFFSET(0x137CC1A0)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_7D905CC30A55BF61_2_OFFSET UNITYSDK_OFFSET(0x137CC1F0)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_7D905CC30A55BF61_3_OFFSET UNITYSDK_OFFSET(0x137CC250)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_7D905CC30A55BF61_OFFSET UNITYSDK_OFFSET(0x137CC150)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_8B05234B876F1D08_OFFSET UNITYSDK_OFFSET(0x137CCE80)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_8CD1A6D1096A6CB7_OFFSET UNITYSDK_OFFSET(0x137CCD60)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_99770A90CCA648B7_OFFSET UNITYSDK_OFFSET(0x137CC2A0)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_A1D868D08A5B8F47_1_OFFSET UNITYSDK_OFFSET(0x137CCF70)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_A1D868D08A5B8F47_2_OFFSET UNITYSDK_OFFSET(0x137CCFD0)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_A1D868D08A5B8F47_OFFSET UNITYSDK_OFFSET(0x137CCF10)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_A37EF40E0E62AE02_1_OFFSET UNITYSDK_OFFSET(0x137CBBA0)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_A37EF40E0E62AE02_OFFSET UNITYSDK_OFFSET(0x137CB840)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_B1E62D978A54E884_OFFSET UNITYSDK_OFFSET(0x137CB280)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_E503D7CA4797F8D1_OFFSET UNITYSDK_OFFSET(0x137CB8A0)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x137CAEA0)
#define CLASS_2_5AC0D8B32AD9BFBE__CTOR_OFFSET UNITYSDK_OFFSET(0x137CCD50)
#define CLASS_2_5AC0D8B32AD9BFBE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x137CCDC0)

inline static constexpr unsigned int Class_2_5AC0D8B32AD9BFBE_TypeDefinitionIndex = 56641;

class Class_2_5AC0D8B32AD9BFBE : public ::Class_1_D5DA62FC7DE2D532
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::GameCore::PlayerEnergyConfig* Field_2_1; // 0x10
	::RPG::Client::AdventurePhase* Field_2_2; // 0x18
	::Class_1_64D890C466F37235* Field_2_3; // 0x20
	::Class_2_36C95D73718D07B1* Field_2_4; // 0x28
	::RPG::GameCore::MapRotationCameraConfig* Field_2_5; // 0x30
	::RPG::Client::MapRotationInfo* Field_2_6; // 0x38
	::System::Boolean Field_2_7; // 0x40
	::System::Boolean Field_2_8; // 0x41

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_70437D85C11C5222(::Class_1_64D890C466F37235* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_70437D85C11C5222_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_0A08BEB5A6FF1267()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_0A08BEB5A6FF1267_OFFSET))(this);
	}

	::System::Void Method_2_B1E62D978A54E884(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_B1E62D978A54E884_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A37EF40E0E62AE02(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_A37EF40E0E62AE02_OFFSET))(this, a1);
	}

	::System::Void Method_2_024876544C3FD21D(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_024876544C3FD21D_OFFSET))(this, a1);
	}

	::System::Void Method_2_A37EF40E0E62AE02_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_A37EF40E0E62AE02_1_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_2_6456C72D58F785DE(::System::UInt32 a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_6456C72D58F785DE_OFFSET))(this, a1);
	}

	::System::Void Method_2_6A4DA97832E39276(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_6A4DA97832E39276_OFFSET))(this, a1);
	}

	::System::Void Method_2_61929A3103595552()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_61929A3103595552_OFFSET))(this);
	}

	::System::Void Method_2_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Void Method_2_6F041C96885D24EC(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_6F041C96885D24EC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1CD1133DC003C11C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_1CD1133DC003C11C_OFFSET))(this, a1);
	}

	::System::Void Method_2_7D905CC30A55BF61(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_7D905CC30A55BF61_OFFSET))(this, a1);
	}

	::System::Void Method_2_7D905CC30A55BF61_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_7D905CC30A55BF61_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_7D905CC30A55BF61_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_7D905CC30A55BF61_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_7D905CC30A55BF61_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_7D905CC30A55BF61_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_99770A90CCA648B7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_99770A90CCA648B7_OFFSET))(this, a1);
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

	::System::Void Method_2_E503D7CA4797F8D1(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_E503D7CA4797F8D1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8CD1A6D1096A6CB7(::Class_1_64D890C466F37235* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_8CD1A6D1096A6CB7_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_8B05234B876F1D08(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_8B05234B876F1D08_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A1D868D08A5B8F47(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_A1D868D08A5B8F47_OFFSET))(this, a1);
	}

	::System::Void Method_2_A1D868D08A5B8F47_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_A1D868D08A5B8F47_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A1D868D08A5B8F47_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_A1D868D08A5B8F47_2_OFFSET))(this, a1);
	}
};

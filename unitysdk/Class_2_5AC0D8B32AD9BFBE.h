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

#define CLASS_2_5AC0D8B32AD9BFBE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11179000)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_1CD1133DC003C11C_OFFSET UNITYSDK_OFFSET(0x1117A300)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_2A0C956B013A2B79_OFFSET UNITYSDK_OFFSET(0x1117A3F0)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_2DDA66E72D33DB14_1_OFFSET UNITYSDK_OFFSET(0x11179F90)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_2DDA66E72D33DB14_2_OFFSET UNITYSDK_OFFSET(0x11179FF0)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_2DDA66E72D33DB14_OFFSET UNITYSDK_OFFSET(0x11179C90)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_4450635DBE779CA8_OFFSET UNITYSDK_OFFSET(0x1117AC60)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1117B2B0)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_61929A3103595552_OFFSET UNITYSDK_OFFSET(0x1117A2B0)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_6456C72D58F785DE_OFFSET UNITYSDK_OFFSET(0x1117A050)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_6A4DA97832E39276_OFFSET UNITYSDK_OFFSET(0x1117A250)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_6E84F2A9745B9B2D_OFFSET UNITYSDK_OFFSET(0x1117B0F0)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_70437D85C11C5222_OFFSET UNITYSDK_OFFSET(0x11178F10)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_7352AE24442C691D_OFFSET UNITYSDK_OFFSET(0x1117A940)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_7D905CC30A55BF61_1_OFFSET UNITYSDK_OFFSET(0x1117A660)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_7D905CC30A55BF61_2_OFFSET UNITYSDK_OFFSET(0x1117A6B0)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_7D905CC30A55BF61_3_OFFSET UNITYSDK_OFFSET(0x1117A710)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_7D905CC30A55BF61_OFFSET UNITYSDK_OFFSET(0x1117A610)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_867FEC4BB85307F1_OFFSET UNITYSDK_OFFSET(0x1117B310)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_992B88E0E0E3EDAE_OFFSET UNITYSDK_OFFSET(0x1117A760)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_AB9E4CB56E834359_OFFSET UNITYSDK_OFFSET(0x11179180)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_B1E62D978A54E884_OFFSET UNITYSDK_OFFSET(0x111796B0)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_C3CC026A96540DAB_1_OFFSET UNITYSDK_OFFSET(0x1117B420)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_C3CC026A96540DAB_2_OFFSET UNITYSDK_OFFSET(0x1117B490)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_C3CC026A96540DAB_OFFSET UNITYSDK_OFFSET(0x1117B3B0)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_E2CDB6B22CCEBA97_OFFSET UNITYSDK_OFFSET(0x1117B1E0)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_E503D7CA4797F8D1_OFFSET UNITYSDK_OFFSET(0x11179CF0)
#define CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x111792F0)
#define CLASS_2_5AC0D8B32AD9BFBE__CTOR_OFFSET UNITYSDK_OFFSET(0x1117B1D0)
#define CLASS_2_5AC0D8B32AD9BFBE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1117B250)

inline static constexpr unsigned int Class_2_5AC0D8B32AD9BFBE_TypeDefinitionIndex = 55886;

class Class_2_5AC0D8B32AD9BFBE : public ::Class_1_D5DA62FC7DE2D532
{
public:
	// static const ::System::String* Field_2_8; // 0x0
	::Class_1_64D890C466F37235* Field_2_0; // 0x10
	::RPG::GameCore::MapRotationCameraConfig* Field_2_4; // 0x18
	::RPG::GameCore::PlayerEnergyConfig* Field_2_2; // 0x20
	::RPG::Client::MapRotationInfo* Field_2_5; // 0x28
	::Class_2_36C95D73718D07B1* Field_2_1; // 0x30
	::RPG::Client::AdventurePhase* Field_2_3; // 0x38
	::System::Boolean Field_2_6; // 0x40
	::System::Boolean Field_2_7; // 0x41

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

	::System::Void Method_2_AB9E4CB56E834359()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_AB9E4CB56E834359_OFFSET))(this);
	}

	::System::Void Method_2_B1E62D978A54E884(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_B1E62D978A54E884_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_2DDA66E72D33DB14(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_2DDA66E72D33DB14_OFFSET))(this, a1);
	}

	::System::Void Method_2_2DDA66E72D33DB14_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_2DDA66E72D33DB14_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_2DDA66E72D33DB14_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_2DDA66E72D33DB14_2_OFFSET))(this, a1);
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

	::System::Void Method_2_2A0C956B013A2B79(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_2A0C956B013A2B79_OFFSET))(this, a1, a2);
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

	::System::Void Method_2_6E84F2A9745B9B2D(::EffectPlugin::Effect_CustomFollowPlugin* a1, ::RPG::Client::MonoEffectPluginPerformEventListener* a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::PVOID, ::EffectPlugin::Effect_CustomFollowPlugin*, ::RPG::Client::MonoEffectPluginPerformEventListener*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_6E84F2A9745B9B2D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E503D7CA4797F8D1(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_E503D7CA4797F8D1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E2CDB6B22CCEBA97(::Class_1_64D890C466F37235* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_E2CDB6B22CCEBA97_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_867FEC4BB85307F1(::UnityEngine::Vector3 P0, ::UnityEngine::Quaternion P1, ::UnityEngine::Quaternion P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_867FEC4BB85307F1_OFFSET))(this, P0, P1, P2);
	}

	::System::Void Method_2_C3CC026A96540DAB(::System::UInt32 P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_C3CC026A96540DAB_OFFSET))(this, P0);
	}

	::System::Void Method_2_C3CC026A96540DAB_1(::System::UInt32 P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_C3CC026A96540DAB_1_OFFSET))(this, P0);
	}

	::System::Void Method_2_C3CC026A96540DAB_2(::System::UInt32 P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_5AC0D8B32AD9BFBE_METHOD_2_C3CC026A96540DAB_2_OFFSET))(this, P0);
	}
};

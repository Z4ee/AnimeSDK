#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_36BDD8A913F3199E.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_C6453D65EC213DF3_METHOD_1_0065F2AC3F830DC8_OFFSET UNITYSDK_OFFSET(0x157E6050)
#define CLASS_1_C6453D65EC213DF3_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x157E6C00)
#define CLASS_1_C6453D65EC213DF3_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x157E5F30)
#define CLASS_1_C6453D65EC213DF3_METHOD_1_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x157E6D70)
#define CLASS_1_C6453D65EC213DF3_METHOD_1_A141318DC09B4911_OFFSET UNITYSDK_OFFSET(0x157E5E40)
#define CLASS_1_C6453D65EC213DF3_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x157E6D90)
#define CLASS_1_C6453D65EC213DF3_ONCANCELSPAWN_OFFSET UNITYSDK_OFFSET(0x157E6CE0)
#define CLASS_1_C6453D65EC213DF3_ONSPAWNASYNC_OFFSET UNITYSDK_OFFSET(0x157E6C50)
#define CLASS_1_C6453D65EC213DF3_USELIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x157E6D30)
#define CLASS_1_C6453D65EC213DF3__CTOR_OFFSET UNITYSDK_OFFSET(0x157E6DA0)

inline static constexpr unsigned int Class_1_C6453D65EC213DF3_TypeDefinitionIndex = 55249;

class Class_1_C6453D65EC213DF3 : public ::System::Object
{
public:
	::Struct_2_36BDD8A913F3199E Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x30
	::RPG::GameCore::GameEntity* Field_1_2; // 0x38
	::System::Action* Field_1_3; // 0x40
	::UnityEngine::GameObject* Field_1_4; // 0x48
	::System::Boolean Field_1_5; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6453D65EC213DF3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A141318DC09B4911(::RPG::GameCore::GameEntity* a1, ::Struct_2_36BDD8A913F3199E a2, ::System::Boolean a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Struct_2_36BDD8A913F3199E, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_C6453D65EC213DF3_METHOD_1_A141318DC09B4911_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6453D65EC213DF3_METHOD_1_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_1_0065F2AC3F830DC8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C6453D65EC213DF3_METHOD_1_0065F2AC3F830DC8_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6453D65EC213DF3_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void OnSpawnAsync(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_C6453D65EC213DF3_ONSPAWNASYNC_OFFSET))(this, a1);
	}

	::System::Void OnCancelSpawn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6453D65EC213DF3_ONCANCELSPAWN_OFFSET))(this);
	}

	::System::Boolean UseLightWeightDeactive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6453D65EC213DF3_USELIGHTWEIGHTDEACTIVE_OFFSET))(this);
	}

	::Struct_2_36BDD8A913F3199E Method_1_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_36BDD8A913F3199E(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6453D65EC213DF3_METHOD_1_3D78D2E0F9F95F07_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6453D65EC213DF3_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};

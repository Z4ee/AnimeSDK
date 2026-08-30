#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_36BDD8A913F3199E.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_C6453D65EC213DF3_METHOD_1_0065F2AC3F830DC8_OFFSET UNITYSDK_OFFSET(0x15A4AE50)
#define CLASS_1_C6453D65EC213DF3_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x15A4BA20)
#define CLASS_1_C6453D65EC213DF3_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x15A4AD30)
#define CLASS_1_C6453D65EC213DF3_METHOD_1_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x15A4BB90)
#define CLASS_1_C6453D65EC213DF3_METHOD_1_A141318DC09B4911_OFFSET UNITYSDK_OFFSET(0x15A4AC40)
#define CLASS_1_C6453D65EC213DF3_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x15A4BBB0)
#define CLASS_1_C6453D65EC213DF3_ONCANCELSPAWN_OFFSET UNITYSDK_OFFSET(0x15A4BB00)
#define CLASS_1_C6453D65EC213DF3_ONSPAWNASYNC_OFFSET UNITYSDK_OFFSET(0x15A4BA70)
#define CLASS_1_C6453D65EC213DF3_USELIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x15A4BB50)
#define CLASS_1_C6453D65EC213DF3__CTOR_OFFSET UNITYSDK_OFFSET(0x15A4BBC0)

inline static constexpr unsigned int Class_1_C6453D65EC213DF3_TypeDefinitionIndex = 57973;

class Class_1_C6453D65EC213DF3 : public ::System::Object
{
public:
	::UnityEngine::GameObject* PEEGKDBDBNO; // 0x10
	::System::Action* CHOOMNGLJHI; // 0x18
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x20
	::Struct_2_36BDD8A913F3199E HBKCICMELMM; // 0x28
	::System::String* CGBLGAHEEKJ; // 0x48
	::System::Boolean CNHKFIINEBD; // 0x50

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

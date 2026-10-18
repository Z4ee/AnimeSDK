#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FF344C9BB7B0D5E2.h"
#include "unitysdk/Class_2_FB5FAC13BADBFA34_ForceKillMarkPanelType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RPG::Client { class DefaultForceKillMarkData; }
namespace RPG::Client { class ForceKillMarkDataProvider; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_5415DE8E6F4BBAF5_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9D16B0)
#define CLASS_2_5415DE8E6F4BBAF5_METHOD_2_487B88132A3888AD_OFFSET UNITYSDK_OFFSET(0xB9D1640)
#define CLASS_2_5415DE8E6F4BBAF5_METHOD_2_78C32A5D10B87936_OFFSET UNITYSDK_OFFSET(0xB9D13C0)
#define CLASS_2_5415DE8E6F4BBAF5_METHOD_2_7A4B90FE6A6D88D7_1_OFFSET UNITYSDK_OFFSET(0xB9D1D10)
#define CLASS_2_5415DE8E6F4BBAF5_METHOD_2_7A4B90FE6A6D88D7_2_OFFSET UNITYSDK_OFFSET(0xB9D1EA0)
#define CLASS_2_5415DE8E6F4BBAF5_METHOD_2_7A4B90FE6A6D88D7_OFFSET UNITYSDK_OFFSET(0xB9D19E0)
#define CLASS_2_5415DE8E6F4BBAF5_METHOD_2_7CB79123E3F0EF3E_OFFSET UNITYSDK_OFFSET(0xB9D1730)
#define CLASS_2_5415DE8E6F4BBAF5_METHOD_2_861970C5F2C21AB2_OFFSET UNITYSDK_OFFSET(0xB9D1470)
#define CLASS_2_5415DE8E6F4BBAF5_METHOD_2_8AE75224602734CE_OFFSET UNITYSDK_OFFSET(0xB9D1B70)
#define CLASS_2_5415DE8E6F4BBAF5_METHOD_2_8E64588F652B046C_OFFSET UNITYSDK_OFFSET(0xB9D1990)
#define CLASS_2_5415DE8E6F4BBAF5_METHOD_2_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0xB9D2030)
#define CLASS_2_5415DE8E6F4BBAF5_METHOD_2_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0xB9D1800)
#define CLASS_2_5415DE8E6F4BBAF5_METHOD_2_BA235EC830FD5AE1_OFFSET UNITYSDK_OFFSET(0xB9D17B0)
#define CLASS_2_5415DE8E6F4BBAF5_METHOD_2_CEE772DE95055C01_OFFSET UNITYSDK_OFFSET(0xB9D1510)
#define CLASS_2_5415DE8E6F4BBAF5__CTOR_OFFSET UNITYSDK_OFFSET(0xB9D1280)

inline static constexpr unsigned int Class_2_5415DE8E6F4BBAF5_TypeDefinitionIndex = 71659;

class Class_2_5415DE8E6F4BBAF5 : public ::Class_1_FF344C9BB7B0D5E2
{
public:
	::System::Action_1<::RPG::Client::ForceKillMarkDataProvider*>* DBFINCLPBKP; // 0x18
	::RPG::Client::ForceKillMarkDataProvider* DILADJDFMFG; // 0x20
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5415DE8E6F4BBAF5__CTOR_OFFSET))(this);
	}

	static ::Struct_2_96F8F0A04B900A9E Method_2_78C32A5D10B87936(::Class_2_FB5FAC13BADBFA34_ForceKillMarkPanelType a1, ::UnityEngine::Transform* a2)
	{
		return ((::Struct_2_96F8F0A04B900A9E(*)(::Class_2_FB5FAC13BADBFA34_ForceKillMarkPanelType, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_5415DE8E6F4BBAF5_METHOD_2_78C32A5D10B87936_OFFSET))(a1, a2);
	}

	::System::Single Method_2_861970C5F2C21AB2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5415DE8E6F4BBAF5_METHOD_2_861970C5F2C21AB2_OFFSET))(this);
	}

	::System::Void Method_2_CEE772DE95055C01(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5415DE8E6F4BBAF5_METHOD_2_CEE772DE95055C01_OFFSET))(this, a1);
	}

	::System::Void Method_2_487B88132A3888AD(::System::Action_1<::RPG::Client::ForceKillMarkDataProvider*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::ForceKillMarkDataProvider*>*))((::PBYTE)hIl2Cpp + CLASS_2_5415DE8E6F4BBAF5_METHOD_2_487B88132A3888AD_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5415DE8E6F4BBAF5_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_7CB79123E3F0EF3E(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_2_5415DE8E6F4BBAF5_METHOD_2_7CB79123E3F0EF3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_BA235EC830FD5AE1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5415DE8E6F4BBAF5_METHOD_2_BA235EC830FD5AE1_OFFSET))(this, a1);
	}

	::System::Void Method_2_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5415DE8E6F4BBAF5_METHOD_2_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_2_7A4B90FE6A6D88D7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5415DE8E6F4BBAF5_METHOD_2_7A4B90FE6A6D88D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_7A4B90FE6A6D88D7_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5415DE8E6F4BBAF5_METHOD_2_7A4B90FE6A6D88D7_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_7A4B90FE6A6D88D7_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5415DE8E6F4BBAF5_METHOD_2_7A4B90FE6A6D88D7_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_8AE75224602734CE(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_5415DE8E6F4BBAF5_METHOD_2_8AE75224602734CE_OFFSET))(this, a1);
	}

	::System::Void Method_2_974A70E8019154E7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5415DE8E6F4BBAF5_METHOD_2_974A70E8019154E7_OFFSET))(this, a1);
	}

	::RPG::Client::DefaultForceKillMarkData* Method_2_8E64588F652B046C()
	{
		return ((::RPG::Client::DefaultForceKillMarkData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5415DE8E6F4BBAF5_METHOD_2_8E64588F652B046C_OFFSET))(this);
	}
};

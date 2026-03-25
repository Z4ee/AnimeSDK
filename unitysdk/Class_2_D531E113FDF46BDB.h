#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FAFFDD6F90685C43.h"
#include "unitysdk/Class_2_0F19373B970769FA_ForceKillMarkType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_2_D531E113FDF46BDB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x891D1C0)
#define CLASS_2_D531E113FDF46BDB_METHOD_2_0133F4A33057251D_OFFSET UNITYSDK_OFFSET(0x891D2C0)
#define CLASS_2_D531E113FDF46BDB_METHOD_2_31B86CF031D1C6B2_1_OFFSET UNITYSDK_OFFSET(0x891D5E0)
#define CLASS_2_D531E113FDF46BDB_METHOD_2_31B86CF031D1C6B2_2_OFFSET UNITYSDK_OFFSET(0x891D7F0)
#define CLASS_2_D531E113FDF46BDB_METHOD_2_31B86CF031D1C6B2_OFFSET UNITYSDK_OFFSET(0x891D3D0)
#define CLASS_2_D531E113FDF46BDB_METHOD_2_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x891CFF0)
#define CLASS_2_D531E113FDF46BDB_METHOD_2_3450A45D66F979C7_OFFSET UNITYSDK_OFFSET(0x891CEB0)
#define CLASS_2_D531E113FDF46BDB_METHOD_2_7CB79123E3F0EF3E_OFFSET UNITYSDK_OFFSET(0x891D240)
#define CLASS_2_D531E113FDF46BDB_METHOD_2_DB658EA6D8B9687E_OFFSET UNITYSDK_OFFSET(0x891D150)
#define CLASS_2_D531E113FDF46BDB_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x891D310)
#define CLASS_2_D531E113FDF46BDB_METHOD_2_FE327FD0760E1514_OFFSET UNITYSDK_OFFSET(0x891D070)
#define CLASS_2_D531E113FDF46BDB__CTOR_OFFSET UNITYSDK_OFFSET(0x891CE00)

inline static constexpr unsigned int Class_2_D531E113FDF46BDB_TypeDefinitionIndex = 58726;

class Class_2_D531E113FDF46BDB : public ::Class_1_FAFFDD6F90685C43
{
public:
	::RPG::GameCore::GameEntity* Field_2_1; // 0x18
	::System::Action_2<::System::Boolean, ::System::Single>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D531E113FDF46BDB__CTOR_OFFSET))(this);
	}

	static ::Struct_2_96F8F0A04B900A9E Method_2_3450A45D66F979C7(::Class_2_0F19373B970769FA_ForceKillMarkType a1)
	{
		return ((::Struct_2_96F8F0A04B900A9E(*)(::Class_2_0F19373B970769FA_ForceKillMarkType))((::PBYTE)hIl2Cpp + CLASS_2_D531E113FDF46BDB_METHOD_2_3450A45D66F979C7_OFFSET))(a1);
	}

	::System::Single Method_2_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D531E113FDF46BDB_METHOD_2_3422201382CE593B_OFFSET))(this);
	}

	::System::Void Method_2_FE327FD0760E1514(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D531E113FDF46BDB_METHOD_2_FE327FD0760E1514_OFFSET))(this, a1);
	}

	::System::Void Method_2_DB658EA6D8B9687E(::System::Action_2<::System::Boolean, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Boolean, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_D531E113FDF46BDB_METHOD_2_DB658EA6D8B9687E_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D531E113FDF46BDB_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_7CB79123E3F0EF3E(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_2_D531E113FDF46BDB_METHOD_2_7CB79123E3F0EF3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_0133F4A33057251D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_D531E113FDF46BDB_METHOD_2_0133F4A33057251D_OFFSET))(this, a1);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D531E113FDF46BDB_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_31B86CF031D1C6B2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D531E113FDF46BDB_METHOD_2_31B86CF031D1C6B2_OFFSET))(this, a1);
	}

	::System::Void Method_2_31B86CF031D1C6B2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D531E113FDF46BDB_METHOD_2_31B86CF031D1C6B2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_31B86CF031D1C6B2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D531E113FDF46BDB_METHOD_2_31B86CF031D1C6B2_2_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6E7CE7203DFFA724.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class IDisposable; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_CF86480F2E4E6546_METHOD_1_149D8037207DA27E_OFFSET UNITYSDK_OFFSET(0x15DEFA60)
#define CLASS_1_CF86480F2E4E6546_METHOD_1_2570544E3E96F60C_OFFSET UNITYSDK_OFFSET(0x15DEF6B0)
#define CLASS_1_CF86480F2E4E6546_METHOD_1_5FB38A1C16645FA0_OFFSET UNITYSDK_OFFSET(0x15DEFC80)
#define CLASS_1_CF86480F2E4E6546_METHOD_1_61C4BFEF8DBA30BD_OFFSET UNITYSDK_OFFSET(0x15DEFD90)
#define CLASS_1_CF86480F2E4E6546_METHOD_1_69FE01D022DC8B66_OFFSET UNITYSDK_OFFSET(0x15DEF800)
#define CLASS_1_CF86480F2E4E6546_METHOD_1_7F0B39539B3B3B89_OFFSET UNITYSDK_OFFSET(0x15DF0490)
#define CLASS_1_CF86480F2E4E6546_METHOD_1_86CAB5953164A81C_OFFSET UNITYSDK_OFFSET(0x15DF0400)
#define CLASS_1_CF86480F2E4E6546_METHOD_1_C0FF32B4D2022F8C_OFFSET UNITYSDK_OFFSET(0x15DEF720)
#define CLASS_1_CF86480F2E4E6546_METHOD_1_C576345BA9F3B38E_1_OFFSET UNITYSDK_OFFSET(0x15DF0170)
#define CLASS_1_CF86480F2E4E6546_METHOD_1_C576345BA9F3B38E_OFFSET UNITYSDK_OFFSET(0x15DF00F0)
#define CLASS_1_CF86480F2E4E6546_METHOD_1_E4D6F2CCA0C60DF4_OFFSET UNITYSDK_OFFSET(0x15DF02C0)
#define CLASS_1_CF86480F2E4E6546_METHOD_1_F2B1D3CE8A43BC36_OFFSET UNITYSDK_OFFSET(0x15DEFEE0)
#define CLASS_1_CF86480F2E4E6546_METHOD_1_FC1EF20274240309_OFFSET UNITYSDK_OFFSET(0x15DEFFC0)
#define CLASS_1_CF86480F2E4E6546_METHOD_1_FF12926C9C9F0B21_OFFSET UNITYSDK_OFFSET(0x15DEFE40)
#define CLASS_1_CF86480F2E4E6546__CTOR_OFFSET UNITYSDK_OFFSET(0x15DF04E0)

inline static constexpr unsigned int Class_1_CF86480F2E4E6546_TypeDefinitionIndex = 80163;

class Class_1_CF86480F2E4E6546 : public ::System::Object
{
public:
	// static const ::System::Single PEIIJCAGDHB; // 0x0
	::Struct_2_6E7CE7203DFFA724 FHOIDIDFFMP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF86480F2E4E6546__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_2570544E3E96F60C(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CF86480F2E4E6546_METHOD_1_2570544E3E96F60C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_C0FF32B4D2022F8C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_CF86480F2E4E6546_METHOD_1_C0FF32B4D2022F8C_OFFSET))(this, a1);
	}

	::System::IDisposable* Method_1_69FE01D022DC8B66(::RPG::GameCore::GameEntity* a1, ::System::Action_2<::RPG::GameCore::GameEntity*, ::System::Boolean>* a2)
	{
		return ((::System::IDisposable*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Action_2<::RPG::GameCore::GameEntity*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_CF86480F2E4E6546_METHOD_1_69FE01D022DC8B66_OFFSET))(this, a1, a2);
	}

	::System::IDisposable* Method_1_149D8037207DA27E(::RPG::GameCore::GameEntity* a1, ::System::Action_1<::RPG::GameCore::GameEntity*>* a2, ::System::Action_1<::RPG::GameCore::GameEntity*>* a3)
	{
		return ((::System::IDisposable*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Action_1<::RPG::GameCore::GameEntity*>*, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_CF86480F2E4E6546_METHOD_1_149D8037207DA27E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5FB38A1C16645FA0(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_CF86480F2E4E6546_METHOD_1_5FB38A1C16645FA0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_61C4BFEF8DBA30BD(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_CF86480F2E4E6546_METHOD_1_61C4BFEF8DBA30BD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FF12926C9C9F0B21(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_CF86480F2E4E6546_METHOD_1_FF12926C9C9F0B21_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F2B1D3CE8A43BC36(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_CF86480F2E4E6546_METHOD_1_F2B1D3CE8A43BC36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FC1EF20274240309(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CF86480F2E4E6546_METHOD_1_FC1EF20274240309_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C576345BA9F3B38E(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CF86480F2E4E6546_METHOD_1_C576345BA9F3B38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C576345BA9F3B38E_1(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CF86480F2E4E6546_METHOD_1_C576345BA9F3B38E_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E4D6F2CCA0C60DF4(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CF86480F2E4E6546_METHOD_1_E4D6F2CCA0C60DF4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_86CAB5953164A81C(::RPG::GameCore::GameEntity* a1, ::Il2CppArray<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_CF86480F2E4E6546_METHOD_1_86CAB5953164A81C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7F0B39539B3B3B89(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CF86480F2E4E6546_METHOD_1_7F0B39539B3B3B89_OFFSET))(this, a1, a2);
	}
};

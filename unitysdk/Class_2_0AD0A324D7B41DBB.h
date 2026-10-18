#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D5DA62FC7DE2D532.h"
#include "unitysdk/Class_2_0AD0A324D7B41DBB_Struct_2_86EDB8070973F6A2.h"
#include "unitysdk/Class_2_0AD0A324D7B41DBB_Struct_2_B7D4427E9D58580D.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_64D890C466F37235;
namespace RPG::Client { class MapDef; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_0AD0A324D7B41DBB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC799E0)
#define CLASS_2_0AD0A324D7B41DBB_METHOD_2_0B945A4B3C62C72E_OFFSET UNITYSDK_OFFSET(0xBC79BC0)
#define CLASS_2_0AD0A324D7B41DBB_METHOD_2_1622EF55C818E85D_OFFSET UNITYSDK_OFFSET(0xBC7A000)
#define CLASS_2_0AD0A324D7B41DBB_METHOD_2_7B411317D337F87A_OFFSET UNITYSDK_OFFSET(0xBC78E10)
#define CLASS_2_0AD0A324D7B41DBB_METHOD_2_9C36AFA140789703_OFFSET UNITYSDK_OFFSET(0xBC78DA0)
#define CLASS_2_0AD0A324D7B41DBB_METHOD_2_ADF4AD3331B4D7AD_1_OFFSET UNITYSDK_OFFSET(0xBC79A80)
#define CLASS_2_0AD0A324D7B41DBB_METHOD_2_ADF4AD3331B4D7AD_2_OFFSET UNITYSDK_OFFSET(0xBC79AD0)
#define CLASS_2_0AD0A324D7B41DBB_METHOD_2_ADF4AD3331B4D7AD_3_OFFSET UNITYSDK_OFFSET(0xBC79B70)
#define CLASS_2_0AD0A324D7B41DBB_METHOD_2_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0xBC79A30)
#define CLASS_2_0AD0A324D7B41DBB_METHOD_2_B917C58B4E14AC1B_OFFSET UNITYSDK_OFFSET(0xBC79C40)
#define CLASS_2_0AD0A324D7B41DBB_METHOD_2_C910C70FFBBA7C58_OFFSET UNITYSDK_OFFSET(0xBC7A140)
#define CLASS_2_0AD0A324D7B41DBB_METHOD_2_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0xBC79B20)
#define CLASS_2_0AD0A324D7B41DBB_METHOD_2_FAADDAEF90CF8A0E_OFFSET UNITYSDK_OFFSET(0xBC79F70)
#define CLASS_2_0AD0A324D7B41DBB__CTOR_OFFSET UNITYSDK_OFFSET(0xBC7A1B0)

inline static constexpr unsigned int Class_2_0AD0A324D7B41DBB_TypeDefinitionIndex = 60598;

class Class_2_0AD0A324D7B41DBB : public ::Class_1_D5DA62FC7DE2D532
{
public:
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_2_0AD0A324D7B41DBB_Struct_2_B7D4427E9D58580D>* FLKGJELMHCO; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_2_0AD0A324D7B41DBB_Struct_2_86EDB8070973F6A2>* DLBGMKACBEH; // 0x18
	::Class_1_64D890C466F37235* KGCNPIEDOCA; // 0x20
	::RPG::Client::MapDef* KKKADHHBMLD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0AD0A324D7B41DBB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9C36AFA140789703(::Class_1_64D890C466F37235* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_0AD0A324D7B41DBB_METHOD_2_9C36AFA140789703_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0AD0A324D7B41DBB_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0AD0A324D7B41DBB_METHOD_2_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0AD0A324D7B41DBB_METHOD_2_ADF4AD3331B4D7AD_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD_2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0AD0A324D7B41DBB_METHOD_2_ADF4AD3331B4D7AD_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D20BF56E36607D54(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0AD0A324D7B41DBB_METHOD_2_D20BF56E36607D54_OFFSET))(this, a1);
	}

	::System::Void Method_2_ADF4AD3331B4D7AD_3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0AD0A324D7B41DBB_METHOD_2_ADF4AD3331B4D7AD_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_0B945A4B3C62C72E(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_0AD0A324D7B41DBB_METHOD_2_0B945A4B3C62C72E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FAADDAEF90CF8A0E(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_0AD0A324D7B41DBB_METHOD_2_FAADDAEF90CF8A0E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_1622EF55C818E85D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_0AD0A324D7B41DBB_METHOD_2_1622EF55C818E85D_OFFSET))(this, a1);
	}

	::System::Void Method_2_C910C70FFBBA7C58(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_0AD0A324D7B41DBB_METHOD_2_C910C70FFBBA7C58_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B411317D337F87A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0AD0A324D7B41DBB_METHOD_2_7B411317D337F87A_OFFSET))(this);
	}

	::System::Void Method_2_B917C58B4E14AC1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0AD0A324D7B41DBB_METHOD_2_B917C58B4E14AC1B_OFFSET))(this);
	}
};

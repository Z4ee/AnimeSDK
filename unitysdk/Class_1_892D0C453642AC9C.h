#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/CommandRobotPuzzleDirection.h"
#include "unitysdk/Struct_2_9FD29C41345F95C8.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client::Prop { class CommandRobotPuzzleBlock; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_892D0C453642AC9C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1255D610)
#define CLASS_1_892D0C453642AC9C_GET_BEGINPOSITION_OFFSET UNITYSDK_OFFSET(0x1255E160)
#define CLASS_1_892D0C453642AC9C_GET_DESTINATIONPOSITION_OFFSET UNITYSDK_OFFSET(0x1255E180)
#define CLASS_1_892D0C453642AC9C_METHOD_1_561A73CC360FE0AB_OFFSET UNITYSDK_OFFSET(0x1255D720)
#define CLASS_1_892D0C453642AC9C_METHOD_1_59FB090BEA43C095_OFFSET UNITYSDK_OFFSET(0x1255E060)
#define CLASS_1_892D0C453642AC9C_METHOD_1_8599237FE4129E81_OFFSET UNITYSDK_OFFSET(0x1255DB20)
#define CLASS_1_892D0C453642AC9C_METHOD_1_A51E2774D1B55326_OFFSET UNITYSDK_OFFSET(0x1255DE20)
#define CLASS_1_892D0C453642AC9C_METHOD_1_BB97A48D5BCE3F55_OFFSET UNITYSDK_OFFSET(0x1255D9E0)
#define CLASS_1_892D0C453642AC9C_METHOD_1_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x1255D820)
#define CLASS_1_892D0C453642AC9C_METHOD_1_F17676F976AEF1D8_OFFSET UNITYSDK_OFFSET(0x1255DEC0)
#define CLASS_1_892D0C453642AC9C_SET_BEGINPOSITION_OFFSET UNITYSDK_OFFSET(0x1255E170)
#define CLASS_1_892D0C453642AC9C_SET_DESTINATIONPOSITION_OFFSET UNITYSDK_OFFSET(0x1255E190)
#define CLASS_1_892D0C453642AC9C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1255E1A0)
#define CLASS_1_892D0C453642AC9C__CTOR_OFFSET UNITYSDK_OFFSET(0x1255D660)

inline static constexpr unsigned int Class_1_892D0C453642AC9C_TypeDefinitionIndex = 72013;

class Class_1_892D0C453642AC9C : public ::System::Object
{
public:
	static ::UnityEngine::Vector2Int* StaticGet_Field_1_10()
	{
		return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Class_1_892D0C453642AC9C_TypeDefinitionIndex)->GetStaticField(0x53B0);
	}
	static ::UnityEngine::Vector2Int* StaticGet_Field_1_8()
	{
		return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Class_1_892D0C453642AC9C_TypeDefinitionIndex)->GetStaticField(0x53B8);
	}
	static ::UnityEngine::Vector2Int* StaticGet_Field_1_11()
	{
		return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Class_1_892D0C453642AC9C_TypeDefinitionIndex)->GetStaticField(0x53C0);
	}
	static ::UnityEngine::Vector2Int* StaticGet_Field_1_9()
	{
		return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Class_1_892D0C453642AC9C_TypeDefinitionIndex)->GetStaticField(0x53C8);
	}
	// static const ::System::Int32 Field_1_0 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* Field_1_5; // 0x10
	::Il2CppArray<::Struct_2_9FD29C41345F95C8>* Field_1_2; // 0x18
	::UnityEngine::Vector2Int _DestinationPosition_k__BackingField; // 0x20
	::System::Int32 Field_1_7; // 0x28
	::System::Int32 Field_1_6; // 0x2C
	::UnityEngine::Vector2Int _BeginPosition_k__BackingField; // 0x30
	::System::Int32 Field_1_12; // 0x38

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_892D0C453642AC9C__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_892D0C453642AC9C__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_892D0C453642AC9C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_561A73CC360FE0AB(::RPG::Client::Prop::CommandRobotPuzzleBlock* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::CommandRobotPuzzleBlock*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_892D0C453642AC9C_METHOD_1_561A73CC360FE0AB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_892D0C453642AC9C_METHOD_1_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Boolean Method_1_BB97A48D5BCE3F55(::System::Collections::Generic::List_1<::RPG::Client::Prop::CommandRobotPuzzleDirection>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CommandRobotPuzzleDirection>*))((::PBYTE)hIl2Cpp + CLASS_1_892D0C453642AC9C_METHOD_1_BB97A48D5BCE3F55_OFFSET))(this, a1);
	}

	::System::Void Method_1_8599237FE4129E81(::UnityEngine::Vector2Int a1, ::RPG::Client::Prop::CommandRobotPuzzleDirection a2, ::UnityEngine::Vector2Int& a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::RPG::Client::Prop::CommandRobotPuzzleDirection, ::UnityEngine::Vector2Int&))((::PBYTE)hIl2Cpp + CLASS_1_892D0C453642AC9C_METHOD_1_8599237FE4129E81_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F17676F976AEF1D8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_892D0C453642AC9C_METHOD_1_F17676F976AEF1D8_OFFSET))(this);
	}

	::System::Int32 Method_1_59FB090BEA43C095(::UnityEngine::Vector2Int a1, ::Struct_2_9FD29C41345F95C8& a2)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2Int, ::Struct_2_9FD29C41345F95C8&))((::PBYTE)hIl2Cpp + CLASS_1_892D0C453642AC9C_METHOD_1_59FB090BEA43C095_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A51E2774D1B55326(::Struct_2_9FD29C41345F95C8& a1, ::UnityEngine::Vector2Int a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_9FD29C41345F95C8&, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_892D0C453642AC9C_METHOD_1_A51E2774D1B55326_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector2Int get_BeginPosition()
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_892D0C453642AC9C_GET_BEGINPOSITION_OFFSET))(this);
	}

	::System::Void set_BeginPosition(::UnityEngine::Vector2Int value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_892D0C453642AC9C_SET_BEGINPOSITION_OFFSET))(this, value);
	}

	::UnityEngine::Vector2Int get_DestinationPosition()
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_892D0C453642AC9C_GET_DESTINATIONPOSITION_OFFSET))(this);
	}

	::System::Void set_DestinationPosition(::UnityEngine::Vector2Int value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_892D0C453642AC9C_SET_DESTINATIONPOSITION_OFFSET))(this, value);
	}
};

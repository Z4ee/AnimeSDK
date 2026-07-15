#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/CommandRobotPuzzleDirection.h"
#include "unitysdk/Struct_2_9FD29C41345F95C8.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client::Prop { class CommandRobotPuzzleBlock; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7F4048AB74B0A21D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16412F30)
#define CLASS_1_7F4048AB74B0A21D_GET_BEGINPOSITION_OFFSET UNITYSDK_OFFSET(0x16413990)
#define CLASS_1_7F4048AB74B0A21D_GET_DESTINATIONPOSITION_OFFSET UNITYSDK_OFFSET(0x164139B0)
#define CLASS_1_7F4048AB74B0A21D_METHOD_1_357DCCDF26F254FB_OFFSET UNITYSDK_OFFSET(0x16413280)
#define CLASS_1_7F4048AB74B0A21D_METHOD_1_561A73CC360FE0AB_OFFSET UNITYSDK_OFFSET(0x16413040)
#define CLASS_1_7F4048AB74B0A21D_METHOD_1_59FB090BEA43C095_OFFSET UNITYSDK_OFFSET(0x164138B0)
#define CLASS_1_7F4048AB74B0A21D_METHOD_1_8599237FE4129E81_OFFSET UNITYSDK_OFFSET(0x16413390)
#define CLASS_1_7F4048AB74B0A21D_METHOD_1_A51E2774D1B55326_OFFSET UNITYSDK_OFFSET(0x16413660)
#define CLASS_1_7F4048AB74B0A21D_METHOD_1_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x16413120)
#define CLASS_1_7F4048AB74B0A21D_METHOD_1_F17676F976AEF1D8_OFFSET UNITYSDK_OFFSET(0x16413730)
#define CLASS_1_7F4048AB74B0A21D_SET_BEGINPOSITION_OFFSET UNITYSDK_OFFSET(0x164139A0)
#define CLASS_1_7F4048AB74B0A21D_SET_DESTINATIONPOSITION_OFFSET UNITYSDK_OFFSET(0x164139C0)
#define CLASS_1_7F4048AB74B0A21D__CCTOR_OFFSET UNITYSDK_OFFSET(0x164139D0)
#define CLASS_1_7F4048AB74B0A21D__CTOR_OFFSET UNITYSDK_OFFSET(0x16412F80)

inline static constexpr unsigned int Class_1_7F4048AB74B0A21D_TypeDefinitionIndex = 74560;

class Class_1_7F4048AB74B0A21D : public ::System::Object
{
public:
	static ::UnityEngine::Vector2Int* StaticGet_Field_1_0()
	{
		return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7F4048AB74B0A21D_TypeDefinitionIndex)->GetStaticField(0x14710);
	}
	static ::UnityEngine::Vector2Int* StaticGet_Field_1_1()
	{
		return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7F4048AB74B0A21D_TypeDefinitionIndex)->GetStaticField(0x14718);
	}
	static ::UnityEngine::Vector2Int* StaticGet_Field_1_2()
	{
		return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7F4048AB74B0A21D_TypeDefinitionIndex)->GetStaticField(0x14720);
	}
	static ::UnityEngine::Vector2Int* StaticGet_Field_1_3()
	{
		return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7F4048AB74B0A21D_TypeDefinitionIndex)->GetStaticField(0x14728);
	}
	// static const ::System::Int32 Field_1_4 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x2; // 0x0
	::Il2CppArray<::Struct_2_9FD29C41345F95C8>* Field_1_6; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* Field_1_7; // 0x18
	::System::Int32 Field_1_8; // 0x20
	::UnityEngine::Vector2Int _BeginPosition_k__BackingField; // 0x24
	::UnityEngine::Vector2Int _DestinationPosition_k__BackingField; // 0x2C
	::System::Int32 Field_1_11; // 0x34
	::System::Int32 Field_1_12; // 0x38

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7F4048AB74B0A21D__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7F4048AB74B0A21D__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F4048AB74B0A21D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_561A73CC360FE0AB(::RPG::Client::Prop::CommandRobotPuzzleBlock* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::CommandRobotPuzzleBlock*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7F4048AB74B0A21D_METHOD_1_561A73CC360FE0AB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F4048AB74B0A21D_METHOD_1_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Boolean Method_1_357DCCDF26F254FB(::System::Collections::Generic::List_1<::RPG::Client::Prop::CommandRobotPuzzleDirection>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CommandRobotPuzzleDirection>*))((::PBYTE)hIl2Cpp + CLASS_1_7F4048AB74B0A21D_METHOD_1_357DCCDF26F254FB_OFFSET))(this, a1);
	}

	::System::Void Method_1_8599237FE4129E81(::UnityEngine::Vector2Int a1, ::RPG::Client::Prop::CommandRobotPuzzleDirection a2, ::UnityEngine::Vector2Int& a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::RPG::Client::Prop::CommandRobotPuzzleDirection, ::UnityEngine::Vector2Int&))((::PBYTE)hIl2Cpp + CLASS_1_7F4048AB74B0A21D_METHOD_1_8599237FE4129E81_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F17676F976AEF1D8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F4048AB74B0A21D_METHOD_1_F17676F976AEF1D8_OFFSET))(this);
	}

	::System::Int32 Method_1_59FB090BEA43C095(::UnityEngine::Vector2Int a1, ::Struct_2_9FD29C41345F95C8& a2)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2Int, ::Struct_2_9FD29C41345F95C8&))((::PBYTE)hIl2Cpp + CLASS_1_7F4048AB74B0A21D_METHOD_1_59FB090BEA43C095_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A51E2774D1B55326(::Struct_2_9FD29C41345F95C8& a1, ::UnityEngine::Vector2Int a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_9FD29C41345F95C8&, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_7F4048AB74B0A21D_METHOD_1_A51E2774D1B55326_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector2Int get_BeginPosition()
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F4048AB74B0A21D_GET_BEGINPOSITION_OFFSET))(this);
	}

	::System::Void set_BeginPosition(::UnityEngine::Vector2Int a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_7F4048AB74B0A21D_SET_BEGINPOSITION_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2Int get_DestinationPosition()
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F4048AB74B0A21D_GET_DESTINATIONPOSITION_OFFSET))(this);
	}

	::System::Void set_DestinationPosition(::UnityEngine::Vector2Int a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_7F4048AB74B0A21D_SET_DESTINATIONPOSITION_OFFSET))(this, a1);
	}
};

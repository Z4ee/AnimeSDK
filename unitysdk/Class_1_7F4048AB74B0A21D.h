#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/CommandRobotPuzzleDirection.h"
#include "unitysdk/Struct_2_9FD29C41345F95C8.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client::Prop { class CommandRobotPuzzleBlock; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7F4048AB74B0A21D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF71EF0)
#define CLASS_1_7F4048AB74B0A21D_GET_BEGINPOSITION_OFFSET UNITYSDK_OFFSET(0xBF72950)
#define CLASS_1_7F4048AB74B0A21D_GET_DESTINATIONPOSITION_OFFSET UNITYSDK_OFFSET(0xBF72970)
#define CLASS_1_7F4048AB74B0A21D_METHOD_1_357DCCDF26F254FB_OFFSET UNITYSDK_OFFSET(0xBF72240)
#define CLASS_1_7F4048AB74B0A21D_METHOD_1_561A73CC360FE0AB_OFFSET UNITYSDK_OFFSET(0xBF72000)
#define CLASS_1_7F4048AB74B0A21D_METHOD_1_59FB090BEA43C095_OFFSET UNITYSDK_OFFSET(0xBF72870)
#define CLASS_1_7F4048AB74B0A21D_METHOD_1_8599237FE4129E81_OFFSET UNITYSDK_OFFSET(0xBF72350)
#define CLASS_1_7F4048AB74B0A21D_METHOD_1_A51E2774D1B55326_OFFSET UNITYSDK_OFFSET(0xBF72620)
#define CLASS_1_7F4048AB74B0A21D_METHOD_1_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0xBF720E0)
#define CLASS_1_7F4048AB74B0A21D_METHOD_1_F17676F976AEF1D8_OFFSET UNITYSDK_OFFSET(0xBF726F0)
#define CLASS_1_7F4048AB74B0A21D_SET_BEGINPOSITION_OFFSET UNITYSDK_OFFSET(0xBF72960)
#define CLASS_1_7F4048AB74B0A21D_SET_DESTINATIONPOSITION_OFFSET UNITYSDK_OFFSET(0xBF72980)
#define CLASS_1_7F4048AB74B0A21D__CCTOR_OFFSET UNITYSDK_OFFSET(0xBF72990)
#define CLASS_1_7F4048AB74B0A21D__CTOR_OFFSET UNITYSDK_OFFSET(0xBF71F40)

inline static constexpr unsigned int Class_1_7F4048AB74B0A21D_TypeDefinitionIndex = 78046;

class Class_1_7F4048AB74B0A21D : public ::System::Object
{
public:
	static ::UnityEngine::Vector2Int* StaticGet_PBPNDAHPKNC()
	{
		return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7F4048AB74B0A21D_TypeDefinitionIndex)->GetStaticField(0x155B0);
	}
	static ::UnityEngine::Vector2Int* StaticGet_DPONCNHGGNA()
	{
		return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7F4048AB74B0A21D_TypeDefinitionIndex)->GetStaticField(0x155B8);
	}
	static ::UnityEngine::Vector2Int* StaticGet_IOEILNAMLFG()
	{
		return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7F4048AB74B0A21D_TypeDefinitionIndex)->GetStaticField(0x155C0);
	}
	static ::UnityEngine::Vector2Int* StaticGet_AJHIHGAINLC()
	{
		return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7F4048AB74B0A21D_TypeDefinitionIndex)->GetStaticField(0x155C8);
	}
	// static const ::System::Int32 OIONKEGECCE = 0x1; // 0x0
	// static const ::System::Int32 GBPGEEAHGHD = 0x2; // 0x0
	::Il2CppArray<::Struct_2_9FD29C41345F95C8>* GLELOFCFBCO; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* EPEGPFJFBOO; // 0x18
	::System::Int32 NLIFGOAGCCG; // 0x20
	::System::Int32 DCBJLCHENHJ; // 0x24
	::UnityEngine::Vector2Int _DestinationPosition_k__BackingField; // 0x28
	::UnityEngine::Vector2Int _BeginPosition_k__BackingField; // 0x30
	::System::Int32 LPFLIFFMJEL; // 0x38

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

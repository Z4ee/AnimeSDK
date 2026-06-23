#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C37C312A50F09D55.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/Struct_2_E614D3B245F96744_1.h"

namespace System { class Action; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering::Universal { class TextureSheetRenderer; }

#define CLASS_2_6392DD18C2F00CDF_METHOD_2_0F7B1BD3C324514D_OFFSET UNITYSDK_OFFSET(0x187AC200)
#define CLASS_2_6392DD18C2F00CDF_METHOD_2_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x187AC7A0)
#define CLASS_2_6392DD18C2F00CDF_METHOD_2_1293CB739F1151A1_OFFSET UNITYSDK_OFFSET(0x187AC800)
#define CLASS_2_6392DD18C2F00CDF_METHOD_2_17D1790373DCF522_OFFSET UNITYSDK_OFFSET(0x187ABF00)
#define CLASS_2_6392DD18C2F00CDF_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x187AC6A0)
#define CLASS_2_6392DD18C2F00CDF_METHOD_2_495A7A1B3363A22D_OFFSET UNITYSDK_OFFSET(0x187AC400)
#define CLASS_2_6392DD18C2F00CDF_METHOD_2_602F6CEA7562C045_OFFSET UNITYSDK_OFFSET(0x187AC2A0)
#define CLASS_2_6392DD18C2F00CDF_METHOD_2_83460EEE2FFB6D32_OFFSET UNITYSDK_OFFSET(0x187ACBF0)
#define CLASS_2_6392DD18C2F00CDF_METHOD_2_86DD3FD32826DA4C_OFFSET UNITYSDK_OFFSET(0x187AC340)
#define CLASS_2_6392DD18C2F00CDF_METHOD_2_ACCB0FE099E9560A_OFFSET UNITYSDK_OFFSET(0x187AC9A0)
#define CLASS_2_6392DD18C2F00CDF_METHOD_2_B732DC7FA82BA621_OFFSET UNITYSDK_OFFSET(0x187AC750)
#define CLASS_2_6392DD18C2F00CDF_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x187AC810)
#define CLASS_2_6392DD18C2F00CDF_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x187ACBD0)
#define CLASS_2_6392DD18C2F00CDF_METHOD_2_E195867FA1C45839_OFFSET UNITYSDK_OFFSET(0x187ACBE0)
#define CLASS_2_6392DD18C2F00CDF_METHOD_2_ED6CF54BFD44815E_OFFSET UNITYSDK_OFFSET(0x187AC9B0)
#define CLASS_2_6392DD18C2F00CDF_METHOD_2_F4F1E7D1CC26024A_1_OFFSET UNITYSDK_OFFSET(0x187ACA50)
#define CLASS_2_6392DD18C2F00CDF_METHOD_2_F4F1E7D1CC26024A_OFFSET UNITYSDK_OFFSET(0x187AC820)
#define CLASS_2_6392DD18C2F00CDF__CTOR_OFFSET UNITYSDK_OFFSET(0x187AC7F0)

inline static constexpr unsigned int Class_2_6392DD18C2F00CDF_TypeDefinitionIndex = 47589;

class Class_2_6392DD18C2F00CDF : public ::Class_1_C37C312A50F09D55
{
public:
	::UnityEngine::Rendering::Universal::TextureSheetRenderer* Field_2_0; // 0x28
	::System::Int32 Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6392DD18C2F00CDF__CTOR_OFFSET))(this);
	}

	::Class_1_C37C312A50F09D55* Method_2_17D1790373DCF522(::UnityEngine::GameObject* a1)
	{
		return ((::Class_1_C37C312A50F09D55*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_6392DD18C2F00CDF_METHOD_2_17D1790373DCF522_OFFSET))(this, a1);
	}

	::System::Void Method_2_0F7B1BD3C324514D(::Struct_2_E614D3B245F96744_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_E614D3B245F96744_1))((::PBYTE)hIl2Cpp + CLASS_2_6392DD18C2F00CDF_METHOD_2_0F7B1BD3C324514D_OFFSET))(this, a1);
	}

	::System::Void Method_2_602F6CEA7562C045(::UnityEngine::Texture2D* a1, ::MoleMole::Vector2Int a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::MoleMole::Vector2Int, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6392DD18C2F00CDF_METHOD_2_602F6CEA7562C045_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_86DD3FD32826DA4C(::System::Int32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_6392DD18C2F00CDF_METHOD_2_86DD3FD32826DA4C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_495A7A1B3363A22D(::UnityEngine::Texture2D* a1, ::MoleMole::Vector2Int a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Action* a8, ::System::Boolean a9)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::MoleMole::Vector2Int, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6392DD18C2F00CDF_METHOD_2_495A7A1B3363A22D_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6392DD18C2F00CDF_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_B732DC7FA82BA621()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6392DD18C2F00CDF_METHOD_2_B732DC7FA82BA621_OFFSET))(this);
	}

	::System::Void Method_2_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6392DD18C2F00CDF_METHOD_2_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Void Method_2_1293CB739F1151A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6392DD18C2F00CDF_METHOD_2_1293CB739F1151A1_OFFSET))(this);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6392DD18C2F00CDF_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_2_F4F1E7D1CC26024A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6392DD18C2F00CDF_METHOD_2_F4F1E7D1CC26024A_OFFSET))(this, a1);
	}

	::Class_1_C37C312A50F09D55* Method_2_ACCB0FE099E9560A(::UnityEngine::GameObject* a1)
	{
		return ((::Class_1_C37C312A50F09D55*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_6392DD18C2F00CDF_METHOD_2_ACCB0FE099E9560A_OFFSET))(this, a1);
	}

	::System::Void Method_2_ED6CF54BFD44815E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6392DD18C2F00CDF_METHOD_2_ED6CF54BFD44815E_OFFSET))(this, a1);
	}

	::System::Void Method_2_F4F1E7D1CC26024A_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6392DD18C2F00CDF_METHOD_2_F4F1E7D1CC26024A_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6392DD18C2F00CDF_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::UnityEngine::Rendering::Universal::TextureSheetRenderer* Method_2_E195867FA1C45839()
	{
		return ((::UnityEngine::Rendering::Universal::TextureSheetRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6392DD18C2F00CDF_METHOD_2_E195867FA1C45839_OFFSET))(this);
	}

	::System::Void Method_2_83460EEE2FFB6D32(::Struct_2_E614D3B245F96744_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_E614D3B245F96744_1))((::PBYTE)hIl2Cpp + CLASS_2_6392DD18C2F00CDF_METHOD_2_83460EEE2FFB6D32_OFFSET))(this, a1);
	}
};

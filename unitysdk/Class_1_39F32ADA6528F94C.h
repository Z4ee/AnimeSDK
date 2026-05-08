#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/GalGame/GalgameFilterType.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define CLASS_1_39F32ADA6528F94C_METHOD_1_1EAB42607ADD6B72_OFFSET UNITYSDK_OFFSET(0x12280A50)
#define CLASS_1_39F32ADA6528F94C_METHOD_1_568AE7A1499723FD_1_OFFSET UNITYSDK_OFFSET(0x12280A80)
#define CLASS_1_39F32ADA6528F94C_METHOD_1_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0x12280930)
#define CLASS_1_39F32ADA6528F94C_METHOD_1_988BFD308A49965D_1_OFFSET UNITYSDK_OFFSET(0x12280A70)
#define CLASS_1_39F32ADA6528F94C_METHOD_1_988BFD308A49965D_OFFSET UNITYSDK_OFFSET(0x12280920)
#define CLASS_1_39F32ADA6528F94C_METHOD_1_B742E1939D14B5D8_1_OFFSET UNITYSDK_OFFSET(0x12280A60)
#define CLASS_1_39F32ADA6528F94C_METHOD_1_B742E1939D14B5D8_OFFSET UNITYSDK_OFFSET(0x12280A40)
#define CLASS_1_39F32ADA6528F94C_METHOD_1_BF69A6B1052A1ED5_OFFSET UNITYSDK_OFFSET(0x12280B90)
#define CLASS_1_39F32ADA6528F94C_METHOD_1_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x12280BA0)
#define CLASS_1_39F32ADA6528F94C__CTOR_OFFSET UNITYSDK_OFFSET(0x122808E0)

inline static constexpr unsigned int Class_1_39F32ADA6528F94C_TypeDefinitionIndex = 77530;

class Class_1_39F32ADA6528F94C : public ::System::Object
{
public:
	::Foundation::AssetRequestHandle Field_1_3; // 0x10
	::UnityEngine::Material* Field_1_2; // 0x30
	::UnityEngine::Material* Field_1_1; // 0x38
	::Foundation::AssetRequestHandle Field_1_4; // 0x40
	::MoleMole::GalGame::GalgameFilterType Field_1_0; // 0x60

	::System::Void _ctor(::MoleMole::GalGame::GalgameFilterType a1, ::UnityEngine::Material* a2, ::Foundation::AssetRequestHandle a3, ::UnityEngine::Material* a4, ::Foundation::AssetRequestHandle a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalgameFilterType, ::UnityEngine::Material*, ::Foundation::AssetRequestHandle, ::UnityEngine::Material*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_39F32ADA6528F94C__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::UnityEngine::Material* Method_1_988BFD308A49965D()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_39F32ADA6528F94C_METHOD_1_988BFD308A49965D_OFFSET))(this);
	}

	::System::Boolean Method_1_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_39F32ADA6528F94C_METHOD_1_568AE7A1499723FD_OFFSET))(this);
	}

	::System::Void Method_1_B742E1939D14B5D8(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_39F32ADA6528F94C_METHOD_1_B742E1939D14B5D8_OFFSET))(this, a1);
	}

	::System::Void Method_1_1EAB42607ADD6B72(::MoleMole::GalGame::GalgameFilterType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalgameFilterType))((::PBYTE)hIl2Cpp + CLASS_1_39F32ADA6528F94C_METHOD_1_1EAB42607ADD6B72_OFFSET))(this, a1);
	}

	::System::Void Method_1_B742E1939D14B5D8_1(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_39F32ADA6528F94C_METHOD_1_B742E1939D14B5D8_1_OFFSET))(this, a1);
	}

	::UnityEngine::Material* Method_1_988BFD308A49965D_1()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_39F32ADA6528F94C_METHOD_1_988BFD308A49965D_1_OFFSET))(this);
	}

	::System::Boolean Method_1_568AE7A1499723FD_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_39F32ADA6528F94C_METHOD_1_568AE7A1499723FD_1_OFFSET))(this);
	}

	::MoleMole::GalGame::GalgameFilterType Method_1_BF69A6B1052A1ED5()
	{
		return ((::MoleMole::GalGame::GalgameFilterType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_39F32ADA6528F94C_METHOD_1_BF69A6B1052A1ED5_OFFSET))(this);
	}

	::System::Void Method_1_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_39F32ADA6528F94C_METHOD_1_E69AA2E64A20143D_OFFSET))(this);
	}
};

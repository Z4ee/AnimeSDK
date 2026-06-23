#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/GalGame/GalgameFilterType.h"
#include "unitysdk/MoleMole/GalGame/GalgameSubFilterType.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define CLASS_1_53DDAF81FA4D5748_METHOD_1_1EAB42607ADD6B72_OFFSET UNITYSDK_OFFSET(0x1A8420F0)
#define CLASS_1_53DDAF81FA4D5748_METHOD_1_568AE7A1499723FD_1_OFFSET UNITYSDK_OFFSET(0x1A842820)
#define CLASS_1_53DDAF81FA4D5748_METHOD_1_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0x1A842710)
#define CLASS_1_53DDAF81FA4D5748_METHOD_1_6E10DBA521A04356_OFFSET UNITYSDK_OFFSET(0x1A842130)
#define CLASS_1_53DDAF81FA4D5748_METHOD_1_988BFD308A49965D_1_OFFSET UNITYSDK_OFFSET(0x1A842100)
#define CLASS_1_53DDAF81FA4D5748_METHOD_1_988BFD308A49965D_OFFSET UNITYSDK_OFFSET(0x1A8420D0)
#define CLASS_1_53DDAF81FA4D5748_METHOD_1_9B530570E8E1F615_OFFSET UNITYSDK_OFFSET(0x1A8420E0)
#define CLASS_1_53DDAF81FA4D5748_METHOD_1_B742E1939D14B5D8_1_OFFSET UNITYSDK_OFFSET(0x1A842700)
#define CLASS_1_53DDAF81FA4D5748_METHOD_1_B742E1939D14B5D8_OFFSET UNITYSDK_OFFSET(0x1A842110)
#define CLASS_1_53DDAF81FA4D5748_METHOD_1_BF69A6B1052A1ED5_OFFSET UNITYSDK_OFFSET(0x1A8426F0)
#define CLASS_1_53DDAF81FA4D5748_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A842090)
#define CLASS_1_53DDAF81FA4D5748_METHOD_1_FA53304230674D32_OFFSET UNITYSDK_OFFSET(0x1A842120)
#define CLASS_1_53DDAF81FA4D5748__CTOR_OFFSET UNITYSDK_OFFSET(0x1A842050)

inline static constexpr unsigned int Class_1_53DDAF81FA4D5748_TypeDefinitionIndex = 71550;

class Class_1_53DDAF81FA4D5748 : public ::System::Object
{
public:
	::Foundation::AssetRequestHandle Field_1_5; // 0x10
	::UnityEngine::Material* Field_1_3; // 0x30
	::UnityEngine::Material* Field_1_2; // 0x38
	::Foundation::AssetRequestHandle Field_1_4; // 0x40
	::MoleMole::GalGame::GalgameSubFilterType Field_1_1; // 0x60
	::MoleMole::GalGame::GalgameFilterType Field_1_0; // 0x64

	::System::Void _ctor(::MoleMole::GalGame::GalgameFilterType a1, ::MoleMole::GalGame::GalgameSubFilterType a2, ::UnityEngine::Material* a3, ::Foundation::AssetRequestHandle a4, ::UnityEngine::Material* a5, ::Foundation::AssetRequestHandle a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalgameFilterType, ::MoleMole::GalGame::GalgameSubFilterType, ::UnityEngine::Material*, ::Foundation::AssetRequestHandle, ::UnityEngine::Material*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_53DDAF81FA4D5748__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53DDAF81FA4D5748_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::UnityEngine::Material* Method_1_988BFD308A49965D()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53DDAF81FA4D5748_METHOD_1_988BFD308A49965D_OFFSET))(this);
	}

	::MoleMole::GalGame::GalgameSubFilterType Method_1_9B530570E8E1F615()
	{
		return ((::MoleMole::GalGame::GalgameSubFilterType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53DDAF81FA4D5748_METHOD_1_9B530570E8E1F615_OFFSET))(this);
	}

	::System::Void Method_1_1EAB42607ADD6B72(::MoleMole::GalGame::GalgameFilterType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalgameFilterType))((::PBYTE)hIl2Cpp + CLASS_1_53DDAF81FA4D5748_METHOD_1_1EAB42607ADD6B72_OFFSET))(this, a1);
	}

	::UnityEngine::Material* Method_1_988BFD308A49965D_1()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53DDAF81FA4D5748_METHOD_1_988BFD308A49965D_1_OFFSET))(this);
	}

	::System::Void Method_1_B742E1939D14B5D8(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_53DDAF81FA4D5748_METHOD_1_B742E1939D14B5D8_OFFSET))(this, a1);
	}

	::System::Void Method_1_FA53304230674D32(::MoleMole::GalGame::GalgameSubFilterType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalgameSubFilterType))((::PBYTE)hIl2Cpp + CLASS_1_53DDAF81FA4D5748_METHOD_1_FA53304230674D32_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E10DBA521A04356()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53DDAF81FA4D5748_METHOD_1_6E10DBA521A04356_OFFSET))(this);
	}

	::MoleMole::GalGame::GalgameFilterType Method_1_BF69A6B1052A1ED5()
	{
		return ((::MoleMole::GalGame::GalgameFilterType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53DDAF81FA4D5748_METHOD_1_BF69A6B1052A1ED5_OFFSET))(this);
	}

	::System::Void Method_1_B742E1939D14B5D8_1(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_53DDAF81FA4D5748_METHOD_1_B742E1939D14B5D8_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53DDAF81FA4D5748_METHOD_1_568AE7A1499723FD_OFFSET))(this);
	}

	::System::Boolean Method_1_568AE7A1499723FD_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53DDAF81FA4D5748_METHOD_1_568AE7A1499723FD_1_OFFSET))(this);
	}
};

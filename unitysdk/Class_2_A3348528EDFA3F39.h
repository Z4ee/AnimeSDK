#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_53DDAF81FA4D5748.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/GalGame/GalgameFilterType.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }

#define CLASS_2_A3348528EDFA3F39_METHOD_2_071850D2764E9D4C_OFFSET UNITYSDK_OFFSET(0x15915D80)
#define CLASS_2_A3348528EDFA3F39_METHOD_2_C0B0DC26F08F2104_OFFSET UNITYSDK_OFFSET(0x15916210)
#define CLASS_2_A3348528EDFA3F39_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x159164E0)
#define CLASS_2_A3348528EDFA3F39__CCTOR_OFFSET UNITYSDK_OFFSET(0x159161D0)
#define CLASS_2_A3348528EDFA3F39__CTOR_OFFSET UNITYSDK_OFFSET(0x15915D10)

inline static constexpr unsigned int Class_2_A3348528EDFA3F39_TypeDefinitionIndex = 40859;

class Class_2_A3348528EDFA3F39 : public ::Class_1_53DDAF81FA4D5748
{
public:
	static ::System::Int32* StaticGet_Field_2_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_A3348528EDFA3F39_TypeDefinitionIndex)->GetStaticField(0xF190);
	}
	::UnityEngine::Texture2D* Field_2_0; // 0x68
	::Foundation::AssetRequestHandle Field_2_1; // 0x70

	::System::Void _ctor(::MoleMole::GalGame::GalgameFilterType a1, ::UnityEngine::Material* a2, ::Foundation::AssetRequestHandle a3, ::UnityEngine::Material* a4, ::Foundation::AssetRequestHandle a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalgameFilterType, ::UnityEngine::Material*, ::Foundation::AssetRequestHandle, ::UnityEngine::Material*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_2_A3348528EDFA3F39__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A3348528EDFA3F39__CCTOR_OFFSET))();
	}

	::System::Void Method_2_071850D2764E9D4C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3348528EDFA3F39_METHOD_2_071850D2764E9D4C_OFFSET))(this);
	}

	::System::Void Method_2_C0B0DC26F08F2104(::UnityEngine::Texture2D* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_2_A3348528EDFA3F39_METHOD_2_C0B0DC26F08F2104_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3348528EDFA3F39_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};

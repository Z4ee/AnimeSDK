#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MusicVisualization_SpectrumEffectElementVisualBase.h"

class Class_1_34601470C357B61B;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define CLASS_2_2D4B313324F496BB_METHOD_2_064020A3A0759DB9_OFFSET UNITYSDK_OFFSET(0x158F2930)
#define CLASS_2_2D4B313324F496BB_METHOD_2_095CC99FF0D58B0C_OFFSET UNITYSDK_OFFSET(0x158F2770)
#define CLASS_2_2D4B313324F496BB_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x158F28B0)
#define CLASS_2_2D4B313324F496BB__CTOR_OFFSET UNITYSDK_OFFSET(0x158F2B20)

inline static constexpr unsigned int Class_2_2D4B313324F496BB_TypeDefinitionIndex = 47935;

class Class_2_2D4B313324F496BB : public ::RPG::Client::MusicVisualization_SpectrumEffectElementVisualBase
{
public:
	::UnityEngine::MaterialPropertyBlock* DNCLJJLAFKA; // 0x20
	::System::String* HMELFPDPCFC; // 0x28
	::System::Int32 ONMOHCJHJPN; // 0x30
	::System::Boolean IDBEBIDMHME; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D4B313324F496BB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_095CC99FF0D58B0C(::Class_1_34601470C357B61B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_34601470C357B61B*))((::PBYTE)hIl2Cpp + CLASS_2_2D4B313324F496BB_METHOD_2_095CC99FF0D58B0C_OFFSET))(this, a1);
	}

	::System::Void Method_2_064020A3A0759DB9(::Class_1_34601470C357B61B* a1, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_34601470C357B61B*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_2_2D4B313324F496BB_METHOD_2_064020A3A0759DB9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D4B313324F496BB_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}
};

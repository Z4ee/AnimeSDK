#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GameplayWaveRenderer_NoiseWaveParams.h"
#include "unitysdk/GameplayWaveRenderer_WaveLayer.h"
#include "unitysdk/GameplayWaveRenderer_WaveType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class GameplayWaveRenderer_WaveObjectEntry;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define GAMEPLAYWAVERENDERER_DISTANCETOCURVE_OFFSET UNITYSDK_OFFSET(0x17A3BE10)
#define GAMEPLAYWAVERENDERER_ISONCURVE_OFFSET UNITYSDK_OFFSET(0x17A3B970)
#define GAMEPLAYWAVERENDERER_METHOD_5_0A0D9CF4F55A5F8A_OFFSET UNITYSDK_OFFSET(0x17A3CBD0)
#define GAMEPLAYWAVERENDERER_METHOD_5_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x17A3AE40)
#define GAMEPLAYWAVERENDERER_METHOD_5_22D0ADB352880F38_OFFSET UNITYSDK_OFFSET(0x17A3C840)
#define GAMEPLAYWAVERENDERER_METHOD_5_23EC84018340F48F_OFFSET UNITYSDK_OFFSET(0x17A3C240)
#define GAMEPLAYWAVERENDERER_METHOD_5_2F1BBD8275DBBFC1_OFFSET UNITYSDK_OFFSET(0x17A3BE80)
#define GAMEPLAYWAVERENDERER_METHOD_5_43E290A0B26B39F6_OFFSET UNITYSDK_OFFSET(0x17A3BD70)
#define GAMEPLAYWAVERENDERER_METHOD_5_53D756D4922CDE85_OFFSET UNITYSDK_OFFSET(0x17A3B860)
#define GAMEPLAYWAVERENDERER_METHOD_5_6E10DBA521A04356_OFFSET UNITYSDK_OFFSET(0x17A3B060)
#define GAMEPLAYWAVERENDERER_METHOD_5_7331A1455F3F12A1_OFFSET UNITYSDK_OFFSET(0x17A3CE40)
#define GAMEPLAYWAVERENDERER_METHOD_5_756EBA0001D7C7DB_OFFSET UNITYSDK_OFFSET(0x17A3CA50)
#define GAMEPLAYWAVERENDERER_METHOD_5_85E657E328490B3B_OFFSET UNITYSDK_OFFSET(0x17A3BD00)
#define GAMEPLAYWAVERENDERER_METHOD_5_87CBD6057B3B766D_OFFSET UNITYSDK_OFFSET(0x17A3C710)
#define GAMEPLAYWAVERENDERER_METHOD_5_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x17A3A900)
#define GAMEPLAYWAVERENDERER_METHOD_5_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x17A3B820)
#define GAMEPLAYWAVERENDERER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17A3AAF0)
#define GAMEPLAYWAVERENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x17A3A8B0)
#define GAMEPLAYWAVERENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x17A3A6C0)
#define GAMEPLAYWAVERENDERER_PLACEATWAVECOORD_OFFSET UNITYSDK_OFFSET(0x17A3BFB0)
#define GAMEPLAYWAVERENDERER_UPDATE_OFFSET UNITYSDK_OFFSET(0x17A3AB40)
#define GAMEPLAYWAVERENDERER_WORLDTOWAVESPACE_OFFSET UNITYSDK_OFFSET(0x17A3B8D0)
#define GAMEPLAYWAVERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x17A3CF10)

inline static constexpr unsigned int GameplayWaveRenderer_TypeDefinitionIndex = 47770;

class GameplayWaveRenderer : public ::UnityEngine::MonoBehaviour
{
public:
	// static const ::System::Int32 FEDCCDBGODG = 0x800; // 0x0
	// static const ::System::Int32 CKEHCDOGPKP = 0x20; // 0x0
	::UnityEngine::Material* material; // 0x18
	::System::Int32 segmentCount; // 0x20
	::System::Single lineLength; // 0x24
	::System::Single lineWidth; // 0x28
	::UnityEngine::Color color; // 0x2C
	::GameplayWaveRenderer_WaveType waveType; // 0x3C
	::GameplayWaveRenderer_WaveLayer layer0; // 0x40
	::GameplayWaveRenderer_WaveLayer layer1; // 0x50
	::GameplayWaveRenderer_WaveLayer layer2; // 0x60
	::GameplayWaveRenderer_NoiseWaveParams noiseWave; // 0x70
	::System::Collections::Generic::List_1<::GameplayWaveRenderer_WaveObjectEntry*>* waveObjects; // 0x90
	::UnityEngine::ComputeShader* waveComputeShader; // 0x98
	::UnityEngine::MaterialPropertyBlock* KFMLGOMBJHG; // 0xA0
	::UnityEngine::ComputeBuffer* HKFJLIDOIJG; // 0xA8
	::UnityEngine::ComputeBuffer* LHKNICEGFFM; // 0xB0
	::UnityEngine::ComputeBuffer* LGDJKBBNDIA; // 0xB8
	::Il2CppArray<::System::Int32>* AJPDHODIJHM; // 0xC0
	::System::Int32 CCPNKHJJBEK; // 0xC8
	::System::Int32 isOnCurveSamples; // 0xCC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_ONDESTROY_OFFSET))(this);
	}

	::System::Void Method_5_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_METHOD_5_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_UPDATE_OFFSET))(this);
	}

	::System::Void Method_5_6E10DBA521A04356()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_METHOD_5_6E10DBA521A04356_OFFSET))(this);
	}

	::System::Void Method_5_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_METHOD_5_1290EA767C459179_OFFSET))(this);
	}

	static ::UnityEngine::Vector4 Method_5_53D756D4922CDE85(::GameplayWaveRenderer_WaveLayer a1)
	{
		return ((::UnityEngine::Vector4(*)(::GameplayWaveRenderer_WaveLayer))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_METHOD_5_53D756D4922CDE85_OFFSET))(a1);
	}

	::UnityEngine::Vector2 WorldToWaveSpace(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_WORLDTOWAVESPACE_OFFSET))(this, a1);
	}

	::System::Boolean IsOnCurve(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_ISONCURVE_OFFSET))(this, a1, a2);
	}

	::System::Single DistanceToCurve(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_DISTANCETOCURVE_OFFSET))(this, a1);
	}

	::System::Void PlaceAtWaveCoord(::System::Int32 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_PLACEATWAVECOORD_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_5_85E657E328490B3B(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_METHOD_5_85E657E328490B3B_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_5_23EC84018340F48F(::UnityEngine::Vector2 a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_METHOD_5_23EC84018340F48F_OFFSET))(this, a1, a2);
	}

	::System::Single Method_5_2F1BBD8275DBBFC1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_METHOD_5_2F1BBD8275DBBFC1_OFFSET))(this, a1);
	}

	::System::Single Method_5_43E290A0B26B39F6(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_METHOD_5_43E290A0B26B39F6_OFFSET))(this, a1, a2);
	}

	::System::Single Method_5_87CBD6057B3B766D(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_METHOD_5_87CBD6057B3B766D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_756EBA0001D7C7DB(::System::Single& a1, ::GameplayWaveRenderer_WaveLayer a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single&, ::GameplayWaveRenderer_WaveLayer, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_METHOD_5_756EBA0001D7C7DB_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Single Method_5_22D0ADB352880F38(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_METHOD_5_22D0ADB352880F38_OFFSET))(this, a1, a2);
	}

	static ::System::Single Method_5_7331A1455F3F12A1(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_METHOD_5_7331A1455F3F12A1_OFFSET))(a1);
	}

	static ::System::Single Method_5_0A0D9CF4F55A5F8A(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_METHOD_5_0A0D9CF4F55A5F8A_OFFSET))(a1);
	}

	static ::System::Single Method_5_FB4BE762B6186C23()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_METHOD_5_FB4BE762B6186C23_OFFSET))();
	}
};

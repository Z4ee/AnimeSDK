#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D70A30D666F20D90;
namespace RPG::GameCore { class LodConfig; }
namespace RPG::GameCore { class StageLodMapConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RPGDensityMapGrassBlock; }
namespace UnityEngine { class RPGDensityMapGrassBlockData; }
namespace UnityEngine { class RPGPointCloudGrassBlock; }
namespace UnityEngine { class RPGPointCloudGrassBlockData; }

#define CLASS_1_76597B0FC8DCAD88_CLEAR_OFFSET UNITYSDK_OFFSET(0x175E2A30)
#define CLASS_1_76597B0FC8DCAD88_METHOD_1_08F72A882964214C_OFFSET UNITYSDK_OFFSET(0x175E2410)
#define CLASS_1_76597B0FC8DCAD88_METHOD_1_0D9C537504984ABB_OFFSET UNITYSDK_OFFSET(0x175E22E0)
#define CLASS_1_76597B0FC8DCAD88_METHOD_1_36AE9DDFA3B84875_OFFSET UNITYSDK_OFFSET(0x175E2060)
#define CLASS_1_76597B0FC8DCAD88_METHOD_1_6F73A40265D5B980_OFFSET UNITYSDK_OFFSET(0x175E25A0)
#define CLASS_1_76597B0FC8DCAD88_METHOD_1_704FAC4600717444_OFFSET UNITYSDK_OFFSET(0x175E2CE0)
#define CLASS_1_76597B0FC8DCAD88_METHOD_1_835D4744C2F66D0D_OFFSET UNITYSDK_OFFSET(0x175E2380)
#define CLASS_1_76597B0FC8DCAD88_METHOD_1_A5809AB80389F7DE_OFFSET UNITYSDK_OFFSET(0x175E28B0)
#define CLASS_1_76597B0FC8DCAD88_METHOD_1_B82A6C005D3ADCE3_OFFSET UNITYSDK_OFFSET(0x175E2460)
#define CLASS_1_76597B0FC8DCAD88_METHOD_1_EC90937CEA9AFCA9_OFFSET UNITYSDK_OFFSET(0x175E2AB0)
#define CLASS_1_76597B0FC8DCAD88_METHOD_1_F77BBFBC56288301_OFFSET UNITYSDK_OFFSET(0x175E2BC0)
#define CLASS_1_76597B0FC8DCAD88__CTOR_OFFSET UNITYSDK_OFFSET(0x175E2070)

inline static constexpr unsigned int Class_1_76597B0FC8DCAD88_TypeDefinitionIndex = 70518;

class Class_1_76597B0FC8DCAD88 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_1; // 0x18
	::UnityEngine::RPGDensityMapGrassBlock* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::System::Single>* Field_1_3; // 0x28
	::UnityEngine::RPGDensityMapGrassBlockData* Field_1_4; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_1_5; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_1_6; // 0x40
	::System::Collections::Generic::List_1<::System::UInt64>* Field_1_7; // 0x48
	::RPG::GameCore::StageLodMapConfig* Field_1_8; // 0x50
	::RPG::GameCore::LodConfig* Field_1_9; // 0x58
	::System::Collections::Generic::List_1<::System::Byte>* Field_1_10; // 0x60
	::UnityEngine::RPGPointCloudGrassBlockData* Field_1_11; // 0x68
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_1_12; // 0x70
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_13; // 0x78
	::System::Collections::Generic::List_1<::System::String*>* Field_1_14; // 0x80
	::UnityEngine::RPGPointCloudGrassBlock* Field_1_15; // 0x88
	::Class_1_D70A30D666F20D90* Field_1_16; // 0x90
	::System::Byte Field_1_17; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76597B0FC8DCAD88__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt64>* Method_1_36AE9DDFA3B84875()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76597B0FC8DCAD88_METHOD_1_36AE9DDFA3B84875_OFFSET))(this);
	}

	::System::Void Method_1_0D9C537504984ABB(::Class_1_D70A30D666F20D90* a1, ::UnityEngine::RPGPointCloudGrassBlock* a2, ::UnityEngine::RPGPointCloudGrassBlockData* a3, ::RPG::GameCore::LodConfig* a4, ::RPG::GameCore::StageLodMapConfig* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D70A30D666F20D90*, ::UnityEngine::RPGPointCloudGrassBlock*, ::UnityEngine::RPGPointCloudGrassBlockData*, ::RPG::GameCore::LodConfig*, ::RPG::GameCore::StageLodMapConfig*))((::PBYTE)hIl2Cpp + CLASS_1_76597B0FC8DCAD88_METHOD_1_0D9C537504984ABB_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_835D4744C2F66D0D(::Class_1_D70A30D666F20D90* a1, ::UnityEngine::RPGDensityMapGrassBlock* a2, ::UnityEngine::RPGDensityMapGrassBlockData* a3, ::RPG::GameCore::LodConfig* a4, ::RPG::GameCore::StageLodMapConfig* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D70A30D666F20D90*, ::UnityEngine::RPGDensityMapGrassBlock*, ::UnityEngine::RPGDensityMapGrassBlockData*, ::RPG::GameCore::LodConfig*, ::RPG::GameCore::StageLodMapConfig*))((::PBYTE)hIl2Cpp + CLASS_1_76597B0FC8DCAD88_METHOD_1_835D4744C2F66D0D_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_08F72A882964214C(::System::Byte a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_76597B0FC8DCAD88_METHOD_1_08F72A882964214C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B82A6C005D3ADCE3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76597B0FC8DCAD88_METHOD_1_B82A6C005D3ADCE3_OFFSET))(this);
	}

	::System::Void Method_1_6F73A40265D5B980()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76597B0FC8DCAD88_METHOD_1_6F73A40265D5B980_OFFSET))(this);
	}

	::System::Void Method_1_A5809AB80389F7DE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76597B0FC8DCAD88_METHOD_1_A5809AB80389F7DE_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76597B0FC8DCAD88_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_EC90937CEA9AFCA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76597B0FC8DCAD88_METHOD_1_EC90937CEA9AFCA9_OFFSET))(this);
	}

	::System::Void Method_1_F77BBFBC56288301()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76597B0FC8DCAD88_METHOD_1_F77BBFBC56288301_OFFSET))(this);
	}

	::System::Void Method_1_704FAC4600717444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76597B0FC8DCAD88_METHOD_1_704FAC4600717444_OFFSET))(this);
	}
};

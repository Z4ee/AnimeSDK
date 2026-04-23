#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_56FF45D7B2C55655;
namespace RPG::GameCore { class LodConfig; }
namespace RPG::GameCore { class StageLodMapConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RPGDensityMapGrassBlock; }
namespace UnityEngine { class RPGDensityMapGrassBlockData; }
namespace UnityEngine { class RPGPointCloudGrassBlock; }
namespace UnityEngine { class RPGPointCloudGrassBlockData; }

#define CLASS_1_76597B0FC8DCAD88_CLEAR_OFFSET UNITYSDK_OFFSET(0x12336700)
#define CLASS_1_76597B0FC8DCAD88_METHOD_1_08F72A882964214C_OFFSET UNITYSDK_OFFSET(0x123360E0)
#define CLASS_1_76597B0FC8DCAD88_METHOD_1_0D9C537504984ABB_OFFSET UNITYSDK_OFFSET(0x12335FC0)
#define CLASS_1_76597B0FC8DCAD88_METHOD_1_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x12336530)
#define CLASS_1_76597B0FC8DCAD88_METHOD_1_36AE9DDFA3B84875_OFFSET UNITYSDK_OFFSET(0x12335D00)
#define CLASS_1_76597B0FC8DCAD88_METHOD_1_3B2051C60621D523_OFFSET UNITYSDK_OFFSET(0x12336860)
#define CLASS_1_76597B0FC8DCAD88_METHOD_1_501509B4B58077AF_OFFSET UNITYSDK_OFFSET(0x12336130)
#define CLASS_1_76597B0FC8DCAD88_METHOD_1_81FEFD1B22CE37A2_OFFSET UNITYSDK_OFFSET(0x12336980)
#define CLASS_1_76597B0FC8DCAD88_METHOD_1_835D4744C2F66D0D_OFFSET UNITYSDK_OFFSET(0x12336050)
#define CLASS_1_76597B0FC8DCAD88_METHOD_1_C6A2F37261C7C003_OFFSET UNITYSDK_OFFSET(0x12336770)
#define CLASS_1_76597B0FC8DCAD88_METHOD_1_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0x12336230)
#define CLASS_1_76597B0FC8DCAD88__CTOR_OFFSET UNITYSDK_OFFSET(0x12335D10)

inline static constexpr unsigned int Class_1_76597B0FC8DCAD88_TypeDefinitionIndex = 68040;

class Class_1_76597B0FC8DCAD88 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Single>* Field_1_5; // 0x10
	::UnityEngine::RPGDensityMapGrassBlock* Field_1_12; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_3; // 0x20
	::Class_1_56FF45D7B2C55655* Field_1_17; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_1_0; // 0x30
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_2; // 0x38
	::UnityEngine::RPGDensityMapGrassBlockData* Field_1_13; // 0x40
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_1_4; // 0x48
	::System::Collections::Generic::List_1<::System::UInt64>* Field_1_9; // 0x50
	::RPG::GameCore::LodConfig* Field_1_14; // 0x58
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_1_8; // 0x60
	::UnityEngine::RPGPointCloudGrassBlock* Field_1_10; // 0x68
	::UnityEngine::RPGPointCloudGrassBlockData* Field_1_11; // 0x70
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_1_1; // 0x78
	::RPG::GameCore::StageLodMapConfig* Field_1_15; // 0x80
	::System::Collections::Generic::List_1<::System::String*>* Field_1_7; // 0x88
	::System::Collections::Generic::List_1<::System::Byte>* Field_1_6; // 0x90
	::System::Byte Field_1_16; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76597B0FC8DCAD88__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt64>* Method_1_36AE9DDFA3B84875()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76597B0FC8DCAD88_METHOD_1_36AE9DDFA3B84875_OFFSET))(this);
	}

	::System::Void Method_1_0D9C537504984ABB(::Class_1_56FF45D7B2C55655* a1, ::UnityEngine::RPGPointCloudGrassBlock* a2, ::UnityEngine::RPGPointCloudGrassBlockData* a3, ::RPG::GameCore::LodConfig* a4, ::RPG::GameCore::StageLodMapConfig* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_56FF45D7B2C55655*, ::UnityEngine::RPGPointCloudGrassBlock*, ::UnityEngine::RPGPointCloudGrassBlockData*, ::RPG::GameCore::LodConfig*, ::RPG::GameCore::StageLodMapConfig*))((::PBYTE)hIl2Cpp + CLASS_1_76597B0FC8DCAD88_METHOD_1_0D9C537504984ABB_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_835D4744C2F66D0D(::Class_1_56FF45D7B2C55655* a1, ::UnityEngine::RPGDensityMapGrassBlock* a2, ::UnityEngine::RPGDensityMapGrassBlockData* a3, ::RPG::GameCore::LodConfig* a4, ::RPG::GameCore::StageLodMapConfig* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_56FF45D7B2C55655*, ::UnityEngine::RPGDensityMapGrassBlock*, ::UnityEngine::RPGDensityMapGrassBlockData*, ::RPG::GameCore::LodConfig*, ::RPG::GameCore::StageLodMapConfig*))((::PBYTE)hIl2Cpp + CLASS_1_76597B0FC8DCAD88_METHOD_1_835D4744C2F66D0D_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_08F72A882964214C(::System::Byte a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_76597B0FC8DCAD88_METHOD_1_08F72A882964214C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_501509B4B58077AF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76597B0FC8DCAD88_METHOD_1_501509B4B58077AF_OFFSET))(this);
	}

	::System::Void Method_1_C7BF9C1E6A78DCAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76597B0FC8DCAD88_METHOD_1_C7BF9C1E6A78DCAB_OFFSET))(this);
	}

	::System::Void Method_1_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76597B0FC8DCAD88_METHOD_1_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76597B0FC8DCAD88_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_C6A2F37261C7C003()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76597B0FC8DCAD88_METHOD_1_C6A2F37261C7C003_OFFSET))(this);
	}

	::System::Void Method_1_3B2051C60621D523()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76597B0FC8DCAD88_METHOD_1_3B2051C60621D523_OFFSET))(this);
	}

	::System::Void Method_1_81FEFD1B22CE37A2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76597B0FC8DCAD88_METHOD_1_81FEFD1B22CE37A2_OFFSET))(this);
	}
};

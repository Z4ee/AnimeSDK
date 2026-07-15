#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/Struct_2_BD1A98EFEDD35816.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
class Class_1_7508481856B4C95F;
namespace RPG::Client { class FMSystem; }
namespace RPG::Client { class LevelStageVisableController; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class AudioStateConfig; }
namespace RPG::GameCore { class DistrictAudioRTPCConfig; }
namespace RPG::GameCore { class LevelBattleAreaInfo; }
namespace RPG::GameCore { class StageGrassOverrideConfig; }
namespace RPG::GameCore { class UnifiedBattleAreaConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_83ABAC4FF8C00500_DISPOSE_OFFSET UNITYSDK_OFFSET(0x146A0A80)
#define CLASS_1_83ABAC4FF8C00500_GET_BLOCKREFS_OFFSET UNITYSDK_OFFSET(0x146A0C60)
#define CLASS_1_83ABAC4FF8C00500_METHOD_1_AC0BA153C6A4D221_OFFSET UNITYSDK_OFFSET(0x146A0C70)
#define CLASS_1_83ABAC4FF8C00500_METHOD_1_BB0632FE727463CD_OFFSET UNITYSDK_OFFSET(0x146A0AE0)
#define CLASS_1_83ABAC4FF8C00500_METHOD_1_C5C746E79A067435_OFFSET UNITYSDK_OFFSET(0x146A0B60)
#define CLASS_1_83ABAC4FF8C00500_METHOD_1_DA1BF2C227DC3D86_1_OFFSET UNITYSDK_OFFSET(0x146A0970)
#define CLASS_1_83ABAC4FF8C00500_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x146A0930)
#define CLASS_1_83ABAC4FF8C00500_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x146A0C50)
#define CLASS_1_83ABAC4FF8C00500__CTOR_OFFSET UNITYSDK_OFFSET(0x146A09B0)

inline static constexpr unsigned int Class_1_83ABAC4FF8C00500_TypeDefinitionIndex = 70473;

class Class_1_83ABAC4FF8C00500 : public ::System::Object
{
public:
	::RPG::Client::FMSystem* Field_1_0; // 0x10
	::RPG::Client::MonoEffect* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::Il2CppArray<::System::String*>* Field_1_3; // 0x28
	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* Field_1_4; // 0x30
	::RPG::GameCore::StageGrassOverrideConfig* Field_1_5; // 0x38
	::Il2CppArray<::RPG::GameCore::DistrictAudioRTPCConfig*>* Field_1_6; // 0x40
	::Struct_2_BD1A98EFEDD35816 Field_1_7; // 0x48
	::Il2CppArray<::RPG::GameCore::AudioStateConfig*>* Field_1_8; // 0x60
	::System::Collections::Generic::List_1<::Class_1_7508481856B4C95F*>* _BlockRefs_k__BackingField; // 0x68
	::RPG::GameCore::UnifiedBattleAreaConfig* Field_1_10; // 0x70
	::System::String* Field_1_11; // 0x78
	::System::String* Field_1_12; // 0x80
	::System::Boolean Field_1_13; // 0x88
	::System::Boolean Field_1_14; // 0x89
	::UnityEngine::Vector3 Field_1_15; // 0x8C
	::UnityEngine::Quaternion Field_1_16; // 0x98
	::System::UInt32 Field_1_17; // 0xA8
	::RPG::GameCore::EnviromentControlPriority Field_1_18; // 0xAC

	::System::Void _ctor(::Struct_2_BD1A98EFEDD35816 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BD1A98EFEDD35816))((::PBYTE)hIl2Cpp + CLASS_1_83ABAC4FF8C00500__CTOR_OFFSET))(this, a1);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83ABAC4FF8C00500_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83ABAC4FF8C00500_METHOD_1_DA1BF2C227DC3D86_1_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83ABAC4FF8C00500_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_BB0632FE727463CD(::RPG::GameCore::LevelBattleAreaInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleAreaInfo*))((::PBYTE)hIl2Cpp + CLASS_1_83ABAC4FF8C00500_METHOD_1_BB0632FE727463CD_OFFSET))(this, a1);
	}

	::System::Void Method_1_C5C746E79A067435(::RPG::GameCore::UnifiedBattleAreaConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UnifiedBattleAreaConfig*))((::PBYTE)hIl2Cpp + CLASS_1_83ABAC4FF8C00500_METHOD_1_C5C746E79A067435_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83ABAC4FF8C00500_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_7508481856B4C95F*>* get_BlockRefs()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_7508481856B4C95F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83ABAC4FF8C00500_GET_BLOCKREFS_OFFSET))(this);
	}

	::RPG::Client::LevelStageVisableController* Method_1_AC0BA153C6A4D221()
	{
		return ((::RPG::Client::LevelStageVisableController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83ABAC4FF8C00500_METHOD_1_AC0BA153C6A4D221_OFFSET))(this);
	}
};

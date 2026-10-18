#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/Struct_2_BD1A98EFEDD35816.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
class Class_1_5EE72B213CC2049A;
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

#define CLASS_1_83ABAC4FF8C00500_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11FE4250)
#define CLASS_1_83ABAC4FF8C00500_GET_BLOCKREFS_OFFSET UNITYSDK_OFFSET(0x11FE4410)
#define CLASS_1_83ABAC4FF8C00500_METHOD_1_AC0BA153C6A4D221_OFFSET UNITYSDK_OFFSET(0x11FE4420)
#define CLASS_1_83ABAC4FF8C00500_METHOD_1_BB0632FE727463CD_OFFSET UNITYSDK_OFFSET(0x11FE42B0)
#define CLASS_1_83ABAC4FF8C00500_METHOD_1_C5C746E79A067435_OFFSET UNITYSDK_OFFSET(0x11FE4320)
#define CLASS_1_83ABAC4FF8C00500_METHOD_1_DA1BF2C227DC3D86_1_OFFSET UNITYSDK_OFFSET(0x11FE4140)
#define CLASS_1_83ABAC4FF8C00500_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x11FE4100)
#define CLASS_1_83ABAC4FF8C00500_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11FE4400)
#define CLASS_1_83ABAC4FF8C00500__CTOR_OFFSET UNITYSDK_OFFSET(0x11FE4180)

inline static constexpr unsigned int Class_1_83ABAC4FF8C00500_TypeDefinitionIndex = 73865;

class Class_1_83ABAC4FF8C00500 : public ::System::Object
{
public:
	::RPG::GameCore::UnifiedBattleAreaConfig* IHKIPAGFBGB; // 0x10
	::Il2CppArray<::RPG::GameCore::AudioStateConfig*>* EADCDAIMHOE; // 0x18
	::Il2CppArray<::RPG::GameCore::DistrictAudioRTPCConfig*>* PHLOALPKEFC; // 0x20
	::RPG::Client::FMSystem* JONFOGGAKHC; // 0x28
	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* GLELOFCFBCO; // 0x30
	::RPG::Client::MonoEffect* OLLHLFNKOLH; // 0x38
	::System::String* KPHGMBFAKDB; // 0x40
	::System::String* OINEOFGIPAA; // 0x48
	::RPG::GameCore::StageGrassOverrideConfig* IGAEFMFMKOM; // 0x50
	::Il2CppArray<::System::String*>* PLHEFECGEGO; // 0x58
	::System::String* GNNLGGOLNIC; // 0x60
	::Struct_2_BD1A98EFEDD35816 BFLIFKBEOPJ; // 0x68
	::System::Collections::Generic::List_1<::Class_1_5EE72B213CC2049A*>* _BlockRefs_k__BackingField; // 0x80
	::RPG::GameCore::EnviromentControlPriority JJCGJLGGEJL; // 0x88
	::System::UInt32 ALPOBFGOLOL; // 0x8C
	::UnityEngine::Vector3 NPNKJAPMINI; // 0x90
	::UnityEngine::Quaternion BLLHKAPFLLO; // 0x9C
	::System::Boolean LJNIEOADLEI; // 0xAC
	::System::Boolean FBAHPEIIGNL; // 0xAD

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

	::System::Collections::Generic::List_1<::Class_1_5EE72B213CC2049A*>* get_BlockRefs()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_5EE72B213CC2049A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83ABAC4FF8C00500_GET_BLOCKREFS_OFFSET))(this);
	}

	::RPG::Client::LevelStageVisableController* Method_1_AC0BA153C6A4D221()
	{
		return ((::RPG::Client::LevelStageVisableController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83ABAC4FF8C00500_METHOD_1_AC0BA153C6A4D221_OFFSET))(this);
	}
};

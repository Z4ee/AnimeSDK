#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/Struct_2_BD1A98EFEDD35816.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
class Class_1_5BD113A5A9B28079;
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

#define CLASS_1_83ABAC4FF8C00500_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11EFD020)
#define CLASS_1_83ABAC4FF8C00500_GET_BLOCKREFS_OFFSET UNITYSDK_OFFSET(0x11EFD1F0)
#define CLASS_1_83ABAC4FF8C00500_METHOD_1_AC0BA153C6A4D221_OFFSET UNITYSDK_OFFSET(0x11EFD200)
#define CLASS_1_83ABAC4FF8C00500_METHOD_1_BB0632FE727463CD_OFFSET UNITYSDK_OFFSET(0x11EFD080)
#define CLASS_1_83ABAC4FF8C00500_METHOD_1_C5C746E79A067435_OFFSET UNITYSDK_OFFSET(0x11EFD0F0)
#define CLASS_1_83ABAC4FF8C00500_METHOD_1_DA1BF2C227DC3D86_1_OFFSET UNITYSDK_OFFSET(0x11EFCF10)
#define CLASS_1_83ABAC4FF8C00500_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x11EFCED0)
#define CLASS_1_83ABAC4FF8C00500_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11EFD1E0)
#define CLASS_1_83ABAC4FF8C00500__CTOR_OFFSET UNITYSDK_OFFSET(0x11EFCF50)

inline static constexpr unsigned int Class_1_83ABAC4FF8C00500_TypeDefinitionIndex = 73758;

class Class_1_83ABAC4FF8C00500 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* GLELOFCFBCO; // 0x10
	::Struct_2_BD1A98EFEDD35816 BFLIFKBEOPJ; // 0x18
	::Il2CppArray<::RPG::GameCore::DistrictAudioRTPCConfig*>* PHLOALPKEFC; // 0x30
	::RPG::GameCore::StageGrassOverrideConfig* IGAEFMFMKOM; // 0x38
	::RPG::Client::MonoEffect* OLLHLFNKOLH; // 0x40
	::System::String* KPHGMBFAKDB; // 0x48
	::System::String* OINEOFGIPAA; // 0x50
	::RPG::GameCore::UnifiedBattleAreaConfig* IHKIPAGFBGB; // 0x58
	::System::String* GNNLGGOLNIC; // 0x60
	::Il2CppArray<::RPG::GameCore::AudioStateConfig*>* EADCDAIMHOE; // 0x68
	::RPG::Client::FMSystem* JONFOGGAKHC; // 0x70
	::Il2CppArray<::System::String*>* PLHEFECGEGO; // 0x78
	::System::Collections::Generic::List_1<::Class_1_5BD113A5A9B28079*>* _BlockRefs_k__BackingField; // 0x80
	::UnityEngine::Vector3 NPNKJAPMINI; // 0x88
	::System::Boolean LJNIEOADLEI; // 0x94
	::System::Boolean FBAHPEIIGNL; // 0x95
	::RPG::GameCore::EnviromentControlPriority JJCGJLGGEJL; // 0x98
	::System::UInt32 ALPOBFGOLOL; // 0x9C
	::UnityEngine::Quaternion BLLHKAPFLLO; // 0xA0

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

	::System::Collections::Generic::List_1<::Class_1_5BD113A5A9B28079*>* get_BlockRefs()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_5BD113A5A9B28079*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83ABAC4FF8C00500_GET_BLOCKREFS_OFFSET))(this);
	}

	::RPG::Client::LevelStageVisableController* Method_1_AC0BA153C6A4D221()
	{
		return ((::RPG::Client::LevelStageVisableController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83ABAC4FF8C00500_METHOD_1_AC0BA153C6A4D221_OFFSET))(this);
	}
};

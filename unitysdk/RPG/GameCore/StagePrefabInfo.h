#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MeshBound; }
namespace RPG::GameCore { class PrefabChildrenInfo; }
namespace RPG::GameCore { class PrefabCustomData; }
namespace RPG::GameCore { class PrefabCustomObjColor; }
namespace RPG::GameCore { class ShadowProxyInfo; }
namespace System { class String; }

#define RPG_GAMECORE_STAGEPREFABINFO_METHOD_2_29195A4AE874DBA1_OFFSET UNITYSDK_OFFSET(0x18E90D50)
#define RPG_GAMECORE_STAGEPREFABINFO_METHOD_2_2B2047CDA46EB222_OFFSET UNITYSDK_OFFSET(0x18E90BD0)
#define RPG_GAMECORE_STAGEPREFABINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18E90D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StagePrefabInfo_TypeDefinitionIndex = 18116;

	class StagePrefabInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 Index; // 0x10
		::System::String* Name; // 0x18
		::System::String* LayerName; // 0x20
		::System::Boolean IsPersistent; // 0x28
		::System::String* AssetPath; // 0x30
		::System::String* TerrainTexPath; // 0x38
		::System::Int32 Active; // 0x40
		::System::Single PosX; // 0x44
		::System::Single PosY; // 0x48
		::System::Single PosZ; // 0x4C
		::System::Single RotX; // 0x50
		::System::Single RotY; // 0x54
		::System::Single RotZ; // 0x58
		::System::Single ScaleX; // 0x5C
		::System::Single ScaleY; // 0x60
		::System::Single ScaleZ; // 0x64
		::System::Single SizeForLod; // 0x68
		::System::String* NormDistanceLodTemplateName; // 0x70
		::RPG::GameCore::MeshBound* Bound; // 0x78
		::System::Boolean HeightBlend; // 0x80
		::RPG::GameCore::PrefabChildrenInfo* ChildrenInfo; // 0x88
		::RPG::GameCore::ShadowProxyInfo* ShadowProxy; // 0x90
		::RPG::GameCore::PrefabCustomObjColor* CustomObjColor; // 0x98
		::RPG::GameCore::PrefabCustomData* CustomData; // 0xA0
		::System::Boolean IsIRIPrefab; // 0xA8
		::System::Int32 FeatureFlag; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPREFABINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2B2047CDA46EB222(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StagePrefabInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StagePrefabInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPREFABINFO_METHOD_2_2B2047CDA46EB222_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_29195A4AE874DBA1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StagePrefabInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StagePrefabInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPREFABINFO_METHOD_2_29195A4AE874DBA1_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MeshBound; }
namespace System { class String; }

#define RPG_GAMECORE_RUNTIMESTAGEPREFABINFO_METHOD_2_3EFD9F5A1E118527_OFFSET UNITYSDK_OFFSET(0x19BF9FC0)
#define RPG_GAMECORE_RUNTIMESTAGEPREFABINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19BFA6E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RuntimeStagePrefabInfo_TypeDefinitionIndex = 18131;

	class RuntimeStagePrefabInfo : public ::RPG::GameCore::JsonConfig
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
		::System::Boolean IsIRIPrefab; // 0x81
		::System::Int32 FeatureFlag; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMESTAGEPREFABINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3EFD9F5A1E118527(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RuntimeStagePrefabInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RuntimeStagePrefabInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUNTIMESTAGEPREFABINFO_METHOD_2_3EFD9F5A1E118527_OFFSET))(a1, a2);
		}
	};
}

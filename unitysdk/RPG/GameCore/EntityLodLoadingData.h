#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityLodLoadingArtData.h"
#include "unitysdk/RPG/GameCore/TickLodTemplateName.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EntitySpawnConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ENTITYLODLOADINGDATA_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x171A0B50)
#define RPG_GAMECORE_ENTITYLODLOADINGDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x171A1060)
#define RPG_GAMECORE_ENTITYLODLOADINGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x171A0B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityLodLoadingData_TypeDefinitionIndex = 17644;

	class EntityLodLoadingData : public ::RPG::GameCore::EntityLodLoadingArtData
	{
	public:
		::System::Int32 DataVersion; // 0x28
		::System::Int32 DataFeature; // 0x2C
		::System::String* RootModelPath; // 0x30
		::System::String* OverrideEntityLodQuality; // 0x38
		::RPG::GameCore::TickLodTemplateName DefaultTickLodTemplate; // 0x40
		::RPG::GameCore::EntitySpawnConfig* EntitySpawnConfig; // 0x48
		::System::Boolean ForbidCameraDither; // 0x50
		::RPG::MVector3 TickLodBoundCenter; // 0x54
		::RPG::MVector3 TickLodBoundSize; // 0x60
		::Il2CppArray<::System::Int32>* ArtReplaceIndex; // 0x70
		::Il2CppArray<::System::String*>* ReplaceMaterialVariantKeyList; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYLODLOADINGDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::EntityLodLoadingData*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EntityLodLoadingData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYLODLOADINGDATA_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::EntityLodLoadingData* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EntityLodLoadingData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYLODLOADINGDATA_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}

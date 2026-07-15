#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityLodTemplateName.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EntityLodModelConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ENTITYLODLOADINGARTDATA_METHOD_2_A9D6D232B2B4A0ED_OFFSET UNITYSDK_OFFSET(0x1C054EB0)
#define RPG_GAMECORE_ENTITYLODLOADINGARTDATA_METHOD_2_BC854F0A6830FEFD_OFFSET UNITYSDK_OFFSET(0x1C054D40)
#define RPG_GAMECORE_ENTITYLODLOADINGARTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C054EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityLodLoadingArtData_TypeDefinitionIndex = 18463;

	class EntityLodLoadingArtData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::EntityLodModelConfig*>* LodModelConfig; // 0x10
		::System::String* EntityLodQuality; // 0x18
		::RPG::GameCore::EntityLodTemplateName EntityLodTemplateName; // 0x20
		::System::Boolean IsUseGameObjectPool; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYLODLOADINGARTDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BC854F0A6830FEFD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EntityLodLoadingArtData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EntityLodLoadingArtData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYLODLOADINGARTDATA_METHOD_2_BC854F0A6830FEFD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_A9D6D232B2B4A0ED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EntityLodLoadingArtData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EntityLodLoadingArtData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYLODLOADINGARTDATA_METHOD_2_A9D6D232B2B4A0ED_OFFSET))(a1, a2);
		}
	};
}

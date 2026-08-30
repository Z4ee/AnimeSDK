#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENTITYMODELASSETINFO_METHOD_2_7B001AC17ECBAF98_OFFSET UNITYSDK_OFFSET(0x1D7C5EB0)
#define RPG_GAMECORE_ENTITYMODELASSETINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C5EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityModelAssetInfo_TypeDefinitionIndex = 18985;

	class EntityModelAssetInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMODELASSETINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7B001AC17ECBAF98(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EntityModelAssetInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EntityModelAssetInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMODELASSETINFO_METHOD_2_7B001AC17ECBAF98_OFFSET))(a1, a2);
		}
	};
}

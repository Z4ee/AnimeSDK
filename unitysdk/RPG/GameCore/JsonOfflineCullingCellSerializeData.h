#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::GameCore { class BoundingBox; }
namespace RPG::GameCore { class JsonOfflineCullingCellSubData; }

#define RPG_GAMECORE_JSONOFFLINECULLINGCELLSERIALIZEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18A38920)
#define RPG_GAMECORE_JSONOFFLINECULLINGCELLSERIALIZEDATA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18A388B0)
#define RPG_GAMECORE_JSONOFFLINECULLINGCELLSERIALIZEDATA_METHOD_2_4EC84823BC0B4E8D_OFFSET UNITYSDK_OFFSET(0x18A38EF0)
#define RPG_GAMECORE_JSONOFFLINECULLINGCELLSERIALIZEDATA_METHOD_2_F411F0A48FC9EDBE_OFFSET UNITYSDK_OFFSET(0x18A38DA0)
#define RPG_GAMECORE_JSONOFFLINECULLINGCELLSERIALIZEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18A38D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int JsonOfflineCullingCellSerializeData_TypeDefinitionIndex = 17368;

	class JsonOfflineCullingCellSerializeData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Collections::Pooled::PooledList_1<::RPG::GameCore::JsonOfflineCullingCellSubData*>* CellSubData; // 0x10
		::System::Single CellSize; // 0x18
		::RPG::GameCore::BoundingBox* CellBound; // 0x20
		::System::Boolean UseCompression; // 0x28
		::System::Int32 Index; // 0x2C
		::Collections::Pooled::PooledList_1<::System::Int32>* LightVisibilityData; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONOFFLINECULLINGCELLSERIALIZEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONOFFLINECULLINGCELLSERIALIZEDATA_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONOFFLINECULLINGCELLSERIALIZEDATA_DISPOSE_OFFSET))(this);
		}

		static ::System::Void Method_2_F411F0A48FC9EDBE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::JsonOfflineCullingCellSerializeData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::JsonOfflineCullingCellSerializeData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONOFFLINECULLINGCELLSERIALIZEDATA_METHOD_2_F411F0A48FC9EDBE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_4EC84823BC0B4E8D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::JsonOfflineCullingCellSerializeData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::JsonOfflineCullingCellSerializeData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONOFFLINECULLINGCELLSERIALIZEDATA_METHOD_2_4EC84823BC0B4E8D_OFFSET))(a1, a2);
		}
	};
}

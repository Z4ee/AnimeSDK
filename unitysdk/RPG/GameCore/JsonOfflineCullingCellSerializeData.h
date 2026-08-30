#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::GameCore { class BoundingBox; }
namespace RPG::GameCore { class JsonOfflineCullingCellSubData; }

#define RPG_GAMECORE_JSONOFFLINECULLINGCELLSERIALIZEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C1099A0)
#define RPG_GAMECORE_JSONOFFLINECULLINGCELLSERIALIZEDATA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C1098D0)
#define RPG_GAMECORE_JSONOFFLINECULLINGCELLSERIALIZEDATA_METHOD_2_2FD3A9739073CBA2_OFFSET UNITYSDK_OFFSET(0x1C109F80)
#define RPG_GAMECORE_JSONOFFLINECULLINGCELLSERIALIZEDATA_METHOD_2_D1A606803BE80A89_OFFSET UNITYSDK_OFFSET(0x1C109E20)
#define RPG_GAMECORE_JSONOFFLINECULLINGCELLSERIALIZEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C109E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int JsonOfflineCullingCellSerializeData_TypeDefinitionIndex = 18064;

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

		static ::System::Void Method_2_D1A606803BE80A89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::JsonOfflineCullingCellSerializeData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::JsonOfflineCullingCellSerializeData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONOFFLINECULLINGCELLSERIALIZEDATA_METHOD_2_D1A606803BE80A89_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_2FD3A9739073CBA2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::JsonOfflineCullingCellSerializeData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::JsonOfflineCullingCellSerializeData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONOFFLINECULLINGCELLSERIALIZEDATA_METHOD_2_2FD3A9739073CBA2_OFFSET))(a1, a2);
		}
	};
}

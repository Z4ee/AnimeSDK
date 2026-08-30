#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonOfflineCullingCellSerializeData.h"

class Class_1_7A22A3DBEEDD1F80;
namespace Collections::Pooled { template <typename T> class PooledList_1; }

#define RPG_GAMECORE_JSONOFFLINECULLINGCELLDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C109750)
#define RPG_GAMECORE_JSONOFFLINECULLINGCELLDATA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C109630)
#define RPG_GAMECORE_JSONOFFLINECULLINGCELLDATA_METHOD_3_36D92A7CB3DAF914_OFFSET UNITYSDK_OFFSET(0x1C109B30)
#define RPG_GAMECORE_JSONOFFLINECULLINGCELLDATA_METHOD_3_62D08FAF71BB9F40_OFFSET UNITYSDK_OFFSET(0x1C109B70)
#define RPG_GAMECORE_JSONOFFLINECULLINGCELLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C109B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int JsonOfflineCullingCellData_TypeDefinitionIndex = 18065;

	class JsonOfflineCullingCellData : public ::RPG::GameCore::JsonOfflineCullingCellSerializeData
	{
	public:
		::Collections::Pooled::PooledList_1<::RPG::GameCore::JsonOfflineCullingCellSerializeData*>* ChildData; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONOFFLINECULLINGCELLDATA__CTOR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONOFFLINECULLINGCELLDATA_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONOFFLINECULLINGCELLDATA_DISPOSE_OFFSET))(this);
		}

		static ::System::Void Method_3_36D92A7CB3DAF914(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::JsonOfflineCullingCellData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::JsonOfflineCullingCellData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONOFFLINECULLINGCELLDATA_METHOD_3_36D92A7CB3DAF914_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_62D08FAF71BB9F40(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::JsonOfflineCullingCellData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::JsonOfflineCullingCellData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONOFFLINECULLINGCELLDATA_METHOD_3_62D08FAF71BB9F40_OFFSET))(a1, a2);
		}
	};
}

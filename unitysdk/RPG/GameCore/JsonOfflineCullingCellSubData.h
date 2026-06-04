#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace Collections::Pooled { template <typename T> class PooledList_1; }

#define RPG_GAMECORE_JSONOFFLINECULLINGCELLSUBDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1986A950)
#define RPG_GAMECORE_JSONOFFLINECULLINGCELLSUBDATA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1986A8E0)
#define RPG_GAMECORE_JSONOFFLINECULLINGCELLSUBDATA_METHOD_2_7818D54B29E61A30_OFFSET UNITYSDK_OFFSET(0x1986AC90)
#define RPG_GAMECORE_JSONOFFLINECULLINGCELLSUBDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1986AED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int JsonOfflineCullingCellSubData_TypeDefinitionIndex = 17371;

	class JsonOfflineCullingCellSubData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean UseCompression; // 0x10
		::Collections::Pooled::PooledList_1<::System::Int32>* CullingCompletelyObjs; // 0x18
		::Collections::Pooled::PooledList_1<::System::Int32>* CullingPartialObjs; // 0x20
		::Collections::Pooled::PooledList_1<::System::Int32>* CullingCompletelyObjsSecondCompress; // 0x28
		::Collections::Pooled::PooledList_1<::System::Int32>* CullingPartialObjsSecondCompress; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONOFFLINECULLINGCELLSUBDATA__CTOR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONOFFLINECULLINGCELLSUBDATA_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONOFFLINECULLINGCELLSUBDATA_DISPOSE_OFFSET))(this);
		}

		static ::System::Void Method_2_7818D54B29E61A30(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::JsonOfflineCullingCellSubData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::JsonOfflineCullingCellSubData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_JSONOFFLINECULLINGCELLSUBDATA_METHOD_2_7818D54B29E61A30_OFFSET))(a1, a2);
		}
	};
}

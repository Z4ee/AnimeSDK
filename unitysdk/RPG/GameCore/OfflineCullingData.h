#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_OFFLINECULLINGDATA_METHOD_2_3BEAB2D3CD3239E9_OFFSET UNITYSDK_OFFSET(0x1D2FC1D0)
#define RPG_GAMECORE_OFFLINECULLINGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2FC3B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OfflineCullingData_TypeDefinitionIndex = 18942;

	class OfflineCullingData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 CullingRangeCenter; // 0x10
		::RPG::MVector3 CullingRangeSize; // 0x1C
		::Il2CppArray<::System::Int32>* CullingCompletelyObjIndex; // 0x28
		::Il2CppArray<::System::Int32>* CullingPartiallyObjIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OFFLINECULLINGDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3BEAB2D3CD3239E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OfflineCullingData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OfflineCullingData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OFFLINECULLINGDATA_METHOD_2_3BEAB2D3CD3239E9_OFFSET))(a1, a2);
		}
	};
}

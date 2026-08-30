#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTSHOWGUIDETALK_METHOD_3_D86C4F8B9D5BB5E6_OFFSET UNITYSDK_OFFSET(0x1D3B9B30)
#define RPG_GAMECORE_GRIDFIGHTSHOWGUIDETALK_METHOD_3_FDB9E6D07E118B25_OFFSET UNITYSDK_OFFSET(0x1D3B9B70)
#define RPG_GAMECORE_GRIDFIGHTSHOWGUIDETALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B9B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightShowGuideTalk_TypeDefinitionIndex = 19742;

	class GridFightShowGuideTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* TalkIDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWGUIDETALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D86C4F8B9D5BB5E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightShowGuideTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightShowGuideTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWGUIDETALK_METHOD_3_D86C4F8B9D5BB5E6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FDB9E6D07E118B25(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightShowGuideTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightShowGuideTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWGUIDETALK_METHOD_3_FDB9E6D07E118B25_OFFSET))(a1, a2);
		}
	};
}

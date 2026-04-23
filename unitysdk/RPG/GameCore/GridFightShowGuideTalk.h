#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTSHOWGUIDETALK_METHOD_3_94BF918AC025CEB4_OFFSET UNITYSDK_OFFSET(0x189D79A0)
#define RPG_GAMECORE_GRIDFIGHTSHOWGUIDETALK_METHOD_3_FDB9E6D07E118B25_OFFSET UNITYSDK_OFFSET(0x189D7A20)
#define RPG_GAMECORE_GRIDFIGHTSHOWGUIDETALK__CTOR_OFFSET UNITYSDK_OFFSET(0x189D79F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightShowGuideTalk_TypeDefinitionIndex = 18891;

	class GridFightShowGuideTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* TalkIDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWGUIDETALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_94BF918AC025CEB4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightShowGuideTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightShowGuideTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWGUIDETALK_METHOD_3_94BF918AC025CEB4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FDB9E6D07E118B25(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightShowGuideTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightShowGuideTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWGUIDETALK_METHOD_3_FDB9E6D07E118B25_OFFSET))(a1, a2);
		}
	};
}

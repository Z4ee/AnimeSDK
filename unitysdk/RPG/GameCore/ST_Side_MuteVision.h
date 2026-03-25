#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_SIDE_MUTEVISION_METHOD_4_73C6CE936AC572B6_OFFSET UNITYSDK_OFFSET(0x1768D9A0)
#define RPG_GAMECORE_ST_SIDE_MUTEVISION_METHOD_4_7DEDA5E1F28728FC_OFFSET UNITYSDK_OFFSET(0x176996D0)
#define RPG_GAMECORE_ST_SIDE_MUTEVISION__CTOR_OFFSET UNITYSDK_OFFSET(0x1768D950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_MuteVision_TypeDefinitionIndex = 18404;

	class ST_Side_MuteVision : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single Duration; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_MUTEVISION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7DEDA5E1F28728FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_MuteVision*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_MuteVision*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_MUTEVISION_METHOD_4_7DEDA5E1F28728FC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_73C6CE936AC572B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_MuteVision* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_MuteVision*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_MUTEVISION_METHOD_4_73C6CE936AC572B6_OFFSET))(a1, a2);
		}
	};
}

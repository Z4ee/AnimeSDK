#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CameraMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_VCAMERAMODECHANGE_METHOD_3_38B9955A54D9B182_OFFSET UNITYSDK_OFFSET(0x1D2B9EA0)
#define RPG_GAMECORE_VCAMERAMODECHANGE_METHOD_3_561256F424EC6811_OFFSET UNITYSDK_OFFSET(0x1D2B9EE0)
#define RPG_GAMECORE_VCAMERAMODECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2B9ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraModeChange_TypeDefinitionIndex = 22210;

	class VCameraModeChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::CameraMode Mode; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERAMODECHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_38B9955A54D9B182(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VCameraModeChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VCameraModeChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERAMODECHANGE_METHOD_3_38B9955A54D9B182_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_561256F424EC6811(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VCameraModeChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VCameraModeChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERAMODECHANGE_METHOD_3_561256F424EC6811_OFFSET))(a1, a2);
		}
	};
}

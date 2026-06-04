#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_STARTSTAGEBGM_METHOD_3_04BBDCD73A351ABB_OFFSET UNITYSDK_OFFSET(0x19CB9080)
#define RPG_GAMECORE_STARTSTAGEBGM_METHOD_3_FBB230053C574B9D_OFFSET UNITYSDK_OFFSET(0x19CB9100)
#define RPG_GAMECORE_STARTSTAGEBGM__CTOR_OFFSET UNITYSDK_OFFSET(0x19CB90D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartStageBGM_TypeDefinitionIndex = 22136;

	class StartStageBGM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* IsEliteStage; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTSTAGEBGM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_04BBDCD73A351ABB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartStageBGM*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartStageBGM*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTSTAGEBGM_METHOD_3_04BBDCD73A351ABB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FBB230053C574B9D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartStageBGM* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartStageBGM*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTSTAGEBGM_METHOD_3_FBB230053C574B9D_OFFSET))(a1, a2);
		}
	};
}

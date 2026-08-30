#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MODIFYGLOBALVISIONPARAMS_METHOD_3_83F9D9D571F5501A_OFFSET UNITYSDK_OFFSET(0x1D1BBD00)
#define RPG_GAMECORE_MODIFYGLOBALVISIONPARAMS_METHOD_3_9B75E516A297B90F_OFFSET UNITYSDK_OFFSET(0x1D1BBCA0)
#define RPG_GAMECORE_MODIFYGLOBALVISIONPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1BBCE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyGlobalVisionParams_TypeDefinitionIndex = 20315;

	class ModifyGlobalVisionParams : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single GlobalVisionDistanceFactor; // 0x18
		::System::Single GlobalVisionDistanceBias; // 0x1C
		::System::Single GlobalVisionAngleFactor; // 0x20
		::System::Single GlobalVisionAngleBias; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYGLOBALVISIONPARAMS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9B75E516A297B90F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyGlobalVisionParams*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyGlobalVisionParams*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYGLOBALVISIONPARAMS_METHOD_3_9B75E516A297B90F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_83F9D9D571F5501A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyGlobalVisionParams* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyGlobalVisionParams*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYGLOBALVISIONPARAMS_METHOD_3_83F9D9D571F5501A_OFFSET))(a1, a2);
		}
	};
}

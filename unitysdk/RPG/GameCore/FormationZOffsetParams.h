#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FORMATIONZOFFSETPARAMS_METHOD_2_4D9C6AB1A60F7004_OFFSET UNITYSDK_OFFSET(0x1892BFC0)
#define RPG_GAMECORE_FORMATIONZOFFSETPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1892C0F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FormationZOffsetParams_TypeDefinitionIndex = 15692;

	class FormationZOffsetParams : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Offset; // 0x10
		::System::Single Yaw; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONZOFFSETPARAMS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4D9C6AB1A60F7004(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FormationZOffsetParams*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FormationZOffsetParams*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONZOFFSETPARAMS_METHOD_2_4D9C6AB1A60F7004_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CONFIRMCHECKPOINTRECOVER_METHOD_3_301468328E22D0DD_OFFSET UNITYSDK_OFFSET(0x1712DA40)
#define RPG_GAMECORE_CONFIRMCHECKPOINTRECOVER_METHOD_3_D469DF410E1C764C_OFFSET UNITYSDK_OFFSET(0x1712DAC0)
#define RPG_GAMECORE_CONFIRMCHECKPOINTRECOVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1712DA90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfirmCheckpointRecover_TypeDefinitionIndex = 19761;

	class ConfirmCheckpointRecover : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancel; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIRMCHECKPOINTRECOVER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_301468328E22D0DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConfirmCheckpointRecover*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConfirmCheckpointRecover*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIRMCHECKPOINTRECOVER_METHOD_3_301468328E22D0DD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D469DF410E1C764C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConfirmCheckpointRecover* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConfirmCheckpointRecover*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIRMCHECKPOINTRECOVER_METHOD_3_D469DF410E1C764C_OFFSET))(a1, a2);
		}
	};
}

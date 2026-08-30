#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_OPENTRAINPARTYENTRANCEPAGE_METHOD_3_1042149A3E6F776C_OFFSET UNITYSDK_OFFSET(0x1D2FEF90)
#define RPG_GAMECORE_OPENTRAINPARTYENTRANCEPAGE_METHOD_3_DE6CED34B05F3129_OFFSET UNITYSDK_OFFSET(0x1D2FEEC0)
#define RPG_GAMECORE_OPENTRAINPARTYENTRANCEPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2FEF80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenTrainPartyEntrancePage_TypeDefinitionIndex = 22107;

	class OpenTrainPartyEntrancePage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTRAINPARTYENTRANCEPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DE6CED34B05F3129(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenTrainPartyEntrancePage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenTrainPartyEntrancePage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTRAINPARTYENTRANCEPAGE_METHOD_3_DE6CED34B05F3129_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1042149A3E6F776C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenTrainPartyEntrancePage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenTrainPartyEntrancePage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTRAINPARTYENTRANCEPAGE_METHOD_3_1042149A3E6F776C_OFFSET))(a1, a2);
		}
	};
}

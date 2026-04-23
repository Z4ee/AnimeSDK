#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_OPENTRAINPARTYENTRANCEPAGE_METHOD_3_1042149A3E6F776C_OFFSET UNITYSDK_OFFSET(0x18BC6E50)
#define RPG_GAMECORE_OPENTRAINPARTYENTRANCEPAGE_METHOD_3_B5419DC51D545160_OFFSET UNITYSDK_OFFSET(0x18BC6D40)
#define RPG_GAMECORE_OPENTRAINPARTYENTRANCEPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18BC6E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenTrainPartyEntrancePage_TypeDefinitionIndex = 21235;

	class OpenTrainPartyEntrancePage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTRAINPARTYENTRANCEPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B5419DC51D545160(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenTrainPartyEntrancePage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenTrainPartyEntrancePage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTRAINPARTYENTRANCEPAGE_METHOD_3_B5419DC51D545160_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1042149A3E6F776C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenTrainPartyEntrancePage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenTrainPartyEntrancePage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTRAINPARTYENTRANCEPAGE_METHOD_3_1042149A3E6F776C_OFFSET))(a1, a2);
		}
	};
}

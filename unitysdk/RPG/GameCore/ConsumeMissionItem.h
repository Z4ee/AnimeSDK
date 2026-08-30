#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SimpleTalkInfo; }

#define RPG_GAMECORE_CONSUMEMISSIONITEM_METHOD_3_E7C3095284A23313_OFFSET UNITYSDK_OFFSET(0x1D9B6560)
#define RPG_GAMECORE_CONSUMEMISSIONITEM_METHOD_3_FF5EAF6ECD843A0A_OFFSET UNITYSDK_OFFSET(0x1D9B65A0)
#define RPG_GAMECORE_CONSUMEMISSIONITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B6590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConsumeMissionItem_TypeDefinitionIndex = 21353;

	class ConsumeMissionItem : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SubMissionID; // 0x18
		::System::Boolean IsAutoConsume; // 0x1C
		::System::Boolean IsShowConsumeFinishTips; // 0x1D
		::RPG::Client::TextID Desc; // 0x20
		::RPG::GameCore::SimpleTalkInfo* SimpleTalk; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSUMEMISSIONITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E7C3095284A23313(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConsumeMissionItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConsumeMissionItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSUMEMISSIONITEM_METHOD_3_E7C3095284A23313_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FF5EAF6ECD843A0A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConsumeMissionItem* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConsumeMissionItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSUMEMISSIONITEM_METHOD_3_FF5EAF6ECD843A0A_OFFSET))(a1, a2);
		}
	};
}

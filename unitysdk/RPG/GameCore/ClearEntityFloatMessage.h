#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FloatMessageType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CLEARENTITYFLOATMESSAGE_METHOD_3_15BFEC2D7E73AAC9_OFFSET UNITYSDK_OFFSET(0x18811610)
#define RPG_GAMECORE_CLEARENTITYFLOATMESSAGE_METHOD_3_73D3A38D13684085_OFFSET UNITYSDK_OFFSET(0x188116A0)
#define RPG_GAMECORE_CLEARENTITYFLOATMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18811670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearEntityFloatMessage_TypeDefinitionIndex = 22166;

	class ClearEntityFloatMessage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::FloatMessageType MessageType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARENTITYFLOATMESSAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_15BFEC2D7E73AAC9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearEntityFloatMessage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearEntityFloatMessage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARENTITYFLOATMESSAGE_METHOD_3_15BFEC2D7E73AAC9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_73D3A38D13684085(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearEntityFloatMessage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearEntityFloatMessage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARENTITYFLOATMESSAGE_METHOD_3_73D3A38D13684085_OFFSET))(a1, a2);
		}
	};
}

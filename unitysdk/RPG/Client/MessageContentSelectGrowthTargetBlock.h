#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"
#include "unitysdk/RPG/Client/PamChatQuickFunctionType.h"

#define RPG_CLIENT_MESSAGECONTENTSELECTGROWTHTARGETBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AA20A40)
#define RPG_CLIENT_MESSAGECONTENTSELECTGROWTHTARGETBLOCK_GET_FUNCTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1AA20AF0)
#define RPG_CLIENT_MESSAGECONTENTSELECTGROWTHTARGETBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1AA209E0)
#define RPG_CLIENT_MESSAGECONTENTSELECTGROWTHTARGETBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA20A30)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentSelectGrowthTargetBlock_TypeDefinitionIndex = 60466;

	class MessageContentSelectGrowthTargetBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::RPG::Client::PamChatQuickFunctionType _FunctionType_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::Client::PamChatQuickFunctionType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PamChatQuickFunctionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTSELECTGROWTHTARGETBLOCK__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTSELECTGROWTHTARGETBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTSELECTGROWTHTARGETBLOCK_EQUALS_OFFSET))(this, a1);
		}

		::RPG::Client::PamChatQuickFunctionType get_FunctionType()
		{
			return ((::RPG::Client::PamChatQuickFunctionType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTSELECTGROWTHTARGETBLOCK_GET_FUNCTIONTYPE_OFFSET))(this);
		}
	};
}

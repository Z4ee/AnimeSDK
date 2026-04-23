#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightAssistantType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTASSISTANTMESSAGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189A1510)
#define RPG_GAMECORE_GRIDFIGHTASSISTANTMESSAGECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189A18A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightAssistantMessageConfigRow_TypeDefinitionIndex = 12710;

	class GridFightAssistantMessageConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* TypePara; // 0x10
		::RPG::Client::TextID Description; // 0x18
		::System::Int32 Interval; // 0x28
		::System::Int32 Priority; // 0x2C
		::System::UInt32 EndDivisionID; // 0x30
		::System::UInt32 ID; // 0x34
		::System::Int32 ExclusiveID; // 0x38
		::RPG::GameCore::GridFightAssistantType AssistantMessageType; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTASSISTANTMESSAGECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightAssistantMessageConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightAssistantMessageConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTASSISTANTMESSAGECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

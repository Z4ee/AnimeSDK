#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightAssistantType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTASSISTANTMESSAGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9609E0)
#define RPG_GAMECORE_GRIDFIGHTASSISTANTMESSAGECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D960D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightAssistantMessageConfigRow_TypeDefinitionIndex = 13328;

	class GridFightAssistantMessageConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* TypePara; // 0x10
		::System::UInt32 ID; // 0x18
		::System::Int32 ExclusiveID; // 0x1C
		::System::Int32 Priority; // 0x20
		::System::Int32 Interval; // 0x24
		::RPG::GameCore::GridFightAssistantType AssistantMessageType; // 0x28
		::System::UInt32 EndDivisionID; // 0x2C
		::RPG::Client::TextID Description; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTASSISTANTMESSAGECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightAssistantMessageConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightAssistantMessageConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTASSISTANTMESSAGECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

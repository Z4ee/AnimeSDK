#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"

#define RPG_GAMECORE_ABILITYSINGLEBLOCKCHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0xE4B0A90)
#define RPG_GAMECORE_ABILITYSINGLEBLOCKCHANGE_GETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xE4B0BD0)
#define RPG_GAMECORE_ABILITYSINGLEBLOCKCHANGE_GETDISPLAYVALUE_OFFSET UNITYSDK_OFFSET(0xE4B0C20)
#define RPG_GAMECORE_ABILITYSINGLEBLOCKCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE4B0B30)
#define RPG_GAMECORE_ABILITYSINGLEBLOCKCHANGE_GETSHOWTEXT_OFFSET UNITYSDK_OFFSET(0xE4B0B80)
#define RPG_GAMECORE_ABILITYSINGLEBLOCKCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE4B0AE0)
#define RPG_GAMECORE_ABILITYSINGLEBLOCKCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xE4B09D0)
#define RPG_GAMECORE_ABILITYSINGLEBLOCKCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xE4B0C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilitySingleBlockChange_TypeDefinitionIndex = 56576;

	class AbilitySingleBlockChange : public ::Class_1_BF7A075734D15E98
	{
	public:
		::Struct_2_5909FD7779934CCA ChangeParams; // 0x18
		::System::Boolean _ShowText; // 0x128
		::System::UInt32 _SourceEntityRuntimeID; // 0x12C
		::RPG::GameCore::FixPoint _ChangeValue; // 0x130

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSINGLEBLOCKCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilitySingleBlockChange* Init(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2, ::System::Boolean a3, ::Struct_2_5909FD7779934CCA a4)
		{
			return ((::RPG::GameCore::AbilitySingleBlockChange*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint, ::System::Boolean, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSINGLEBLOCKCHANGE_INIT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSINGLEBLOCKCHANGE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSINGLEBLOCKCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSINGLEBLOCKCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Boolean GetShowText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSINGLEBLOCKCHANGE_GETSHOWTEXT_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetChangeValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSINGLEBLOCKCHANGE_GETCHANGEVALUE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetDisplayValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSINGLEBLOCKCHANGE_GETDISPLAYVALUE_OFFSET))(this);
		}
	};
}

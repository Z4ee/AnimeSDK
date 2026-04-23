#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTVICTORYCOUNTRULE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA5D1350)
#define RPG_CLIENT_GRIDFIGHTVICTORYCOUNTRULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA5D1340)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightVictoryCountRule_TypeDefinitionIndex = 59916;

	class GridFightVictoryCountRule : public ::System::Object
	{
	public:
		::System::String* Range; // 0x10
		::System::UInt32 Bonus; // 0x18
		::System::UInt32 Up; // 0x1C
		::System::UInt32 Low; // 0x20

		::System::Void _ctor(::System::String* range, ::System::UInt32 bonus)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVICTORYCOUNTRULE__CTOR_OFFSET))(this, range, bonus);
		}

		::System::Void _ctor_1(::System::UInt32 low, ::System::UInt32 up, ::System::UInt32 bonus)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVICTORYCOUNTRULE__CTOR_1_OFFSET))(this, low, up, bonus);
		}
	};
}

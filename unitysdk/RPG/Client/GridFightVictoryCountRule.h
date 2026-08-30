#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTVICTORYCOUNTRULE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xD37E8B0)
#define RPG_CLIENT_GRIDFIGHTVICTORYCOUNTRULE__CTOR_OFFSET UNITYSDK_OFFSET(0xD37E8A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightVictoryCountRule_TypeDefinitionIndex = 65136;

	class GridFightVictoryCountRule : public ::System::Object
	{
	public:
		::System::String* Range; // 0x10
		::System::UInt32 Bonus; // 0x18
		::System::UInt32 Up; // 0x1C
		::System::UInt32 Low; // 0x20

		::System::Void _ctor(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVICTORYCOUNTRULE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVICTORYCOUNTRULE__CTOR_1_OFFSET))(this, a1, a2, a3);
		}
	};
}

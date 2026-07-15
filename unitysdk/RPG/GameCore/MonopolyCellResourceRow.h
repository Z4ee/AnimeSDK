#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonopolyCellPeformanceType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MONOPOLYCELLRESOURCEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B1B03B0)
#define RPG_GAMECORE_MONOPOLYCELLRESOURCEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1B0530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyCellResourceRow_TypeDefinitionIndex = 11615;

	class MonopolyCellResourceRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 ResourceID; // 0x18
		::RPG::GameCore::MonopolyCellPeformanceType Type; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCELLRESOURCEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyCellResourceRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyCellResourceRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCELLRESOURCEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

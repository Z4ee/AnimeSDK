#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ItemRecycleShowType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ITEMRECYCLEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19864030)
#define RPG_GAMECORE_ITEMRECYCLEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19864760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemRecycleRow_TypeDefinitionIndex = 13246;

	class ItemRecycleRow : public ::System::Object
	{
	public:
		::System::String* RecycleTime; // 0x10
		::System::UInt32 ItemID; // 0x18
		::RPG::GameCore::ItemRecycleShowType ShowType; // 0x1C
		::System::Boolean IsShowTime; // 0x20
		::System::Boolean ShowTimeType; // 0x21
		::RPG::Client::TextID Tips; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMRECYCLEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ItemRecycleRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ItemRecycleRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMRECYCLEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SPACEZOOCUSTOMIZEDCATROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19C92980)
#define RPG_GAMECORE_SPACEZOOCUSTOMIZEDCATROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19C92B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooCustomizedCatRow_TypeDefinitionIndex = 11798;

	class SpaceZooCustomizedCatRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ChannelFeature; // 0x10
		::System::Boolean NotShowDialog; // 0x18
		::System::UInt32 AddCatID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOCUSTOMIZEDCATROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SpaceZooCustomizedCatRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpaceZooCustomizedCatRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOCUSTOMIZEDCATROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

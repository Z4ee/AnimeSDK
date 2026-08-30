#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_EXPEDITIONGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D084CF0)
#define RPG_GAMECORE_EXPEDITIONGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D085300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionGroupRow_TypeDefinitionIndex = 13151;

	class ExpeditionGroupRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::Client::TextID Name; // 0x18
		::System::UInt32 GroupID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionGroupRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

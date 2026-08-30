#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GMACCOUNTITEMCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DCC0B20)
#define RPG_GAMECORE_GMACCOUNTITEMCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCC0CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GMAccountItemConfigRow_TypeDefinitionIndex = 13238;

	class GMAccountItemConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ItemID; // 0x10
		::System::UInt32 GroupID; // 0x14
		::System::UInt32 ItemNum; // 0x18
		::System::UInt32 ID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GMACCOUNTITEMCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GMAccountItemConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GMAccountItemConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GMACCOUNTITEMCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

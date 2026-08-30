#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_REPORTTYPECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB90A40)
#define RPG_GAMECORE_REPORTTYPECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB91080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReportTypeConfigRow_TypeDefinitionIndex = 14485;

	class ReportTypeConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Text; // 0x10
		::System::UInt32 TypeID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REPORTTYPECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReportTypeConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReportTypeConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REPORTTYPECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

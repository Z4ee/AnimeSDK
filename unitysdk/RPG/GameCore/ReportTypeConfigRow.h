#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_REPORTTYPECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D0193B0)
#define RPG_GAMECORE_REPORTTYPECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0199F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReportTypeConfigRow_TypeDefinitionIndex = 14065;

	class ReportTypeConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 TypeID; // 0x10
		::RPG::Client::TextID Text; // 0x18

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

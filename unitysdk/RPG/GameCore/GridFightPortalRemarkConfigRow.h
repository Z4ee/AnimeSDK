#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPORTALREMARKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189CF690)
#define RPG_GAMECORE_GRIDFIGHTPORTALREMARKCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189CF810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPortalRemarkConfigRow_TypeDefinitionIndex = 12908;

	class GridFightPortalRemarkConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID PortalRemark; // 0x10
		::System::UInt32 PortalID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPORTALREMARKCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightPortalRemarkConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightPortalRemarkConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPORTALREMARKCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

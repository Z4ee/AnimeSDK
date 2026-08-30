#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTROLEREMARKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D163A10)
#define RPG_GAMECORE_GRIDFIGHTROLEREMARKCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D163B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleRemarkConfigRow_TypeDefinitionIndex = 13437;

	class GridFightRoleRemarkConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID RoleRemark; // 0x10
		::System::UInt32 RoleID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEREMARKCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightRoleRemarkConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightRoleRemarkConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEREMARKCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

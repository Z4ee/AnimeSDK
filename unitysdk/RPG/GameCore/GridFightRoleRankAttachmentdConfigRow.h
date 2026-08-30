#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarPropertyValue; }

#define RPG_GAMECORE_GRIDFIGHTROLERANKATTACHMENTDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D163670)
#define RPG_GAMECORE_GRIDFIGHTROLERANKATTACHMENTDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D163830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleRankAttachmentdConfigRow_TypeDefinitionIndex = 13453;

	class GridFightRoleRankAttachmentdConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* GeneralPropertyModifyList; // 0x10
		::System::UInt32 Star; // 0x18
		::System::UInt32 Rank; // 0x1C
		::System::UInt32 RoleID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLERANKATTACHMENTDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightRoleRankAttachmentdConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightRoleRankAttachmentdConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLERANKATTACHMENTDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

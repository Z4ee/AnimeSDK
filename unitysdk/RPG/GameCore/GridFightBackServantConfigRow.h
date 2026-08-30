#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTBACKSERVANTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9617B0)
#define RPG_GAMECORE_GRIDFIGHTBACKSERVANTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D961970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightBackServantConfigRow_TypeDefinitionIndex = 13402;

	class GridFightBackServantConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BESkillIDList; // 0x10
		::System::UInt32 ServantBEID; // 0x18
		::System::UInt32 RoleID; // 0x1C
		::System::UInt32 Star; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTBACKSERVANTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightBackServantConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightBackServantConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTBACKSERVANTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

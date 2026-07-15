#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTROLEOVERRIDEVOCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D073410)
#define RPG_GAMECORE_GRIDFIGHTROLEOVERRIDEVOCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0735F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleOverrideVOConfigRow_TypeDefinitionIndex = 13053;

	class GridFightRoleOverrideVOConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* ForbidVOTypes; // 0x10
		::System::String* OverrideVOTag; // 0x18
		::Il2CppArray<::System::String*>* OverrideVOTypes; // 0x20
		::System::UInt32 RoleID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEOVERRIDEVOCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightRoleOverrideVOConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightRoleOverrideVOConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEOVERRIDEVOCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

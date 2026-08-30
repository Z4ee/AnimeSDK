#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTROLEGLOBALMODIFIERCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3B5390)
#define RPG_GAMECORE_GRIDFIGHTROLEGLOBALMODIFIERCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B5520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleGlobalModifierConfigRow_TypeDefinitionIndex = 13459;

	class GridFightRoleGlobalModifierConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PerformParamList; // 0x10
		::System::String* SavedValueName; // 0x18
		::System::UInt32 Roleid; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEGLOBALMODIFIERCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightRoleGlobalModifierConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightRoleGlobalModifierConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEGLOBALMODIFIERCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

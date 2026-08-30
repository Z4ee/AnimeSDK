#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SPECIALNPCDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D0B49F0)
#define RPG_GAMECORE_SPECIALNPCDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0B55E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialNPCDataRow_TypeDefinitionIndex = 14961;

	class SpecialNPCDataRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MazeSkillIdList; // 0x10
		::System::String* ConfigEntityPath; // 0x18
		::System::String* PrefabPath; // 0x20
		::System::String* JsonPath; // 0x28
		::System::UInt32 ID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SpecialNPCDataRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpecialNPCDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

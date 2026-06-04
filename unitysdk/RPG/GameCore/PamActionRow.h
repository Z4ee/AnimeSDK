#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PamActionType.h"
#include "unitysdk/RPG/GameCore/PamMoodType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PAMACTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x199E18D0)
#define RPG_GAMECORE_PAMACTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x199E1D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PamActionRow_TypeDefinitionIndex = 13630;

	class PamActionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* Settle; // 0x10
		::System::String* AnimGroupName; // 0x18
		::System::Int32 MinMoodPoint; // 0x20
		::System::Boolean WithoutAnchor; // 0x24
		::System::Boolean AnyDirection; // 0x25
		::RPG::GameCore::PamActionType PamAction; // 0x28
		::RPG::GameCore::PamMoodType PamMood; // 0x2C
		::System::Single Weight; // 0x30
		::System::Int32 MinStrengthPoint; // 0x34
		::System::Int32 MaxStrengthPoint; // 0x38
		::System::UInt32 PerformanceID; // 0x3C
		::System::Int32 MaxMoodPoint; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMACTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PamActionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PamActionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMACTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

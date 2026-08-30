#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVESPINEANIMGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D215430)
#define RPG_GAMECORE_IDLELIVESPINEANIMGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D215660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveSpineAnimGroupRow_TypeDefinitionIndex = 11787;

	class IdleLiveSpineAnimGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* FemaleStateList; // 0x10
		::Il2CppArray<::System::String*>* MaleStateList; // 0x18
		::RPG::Client::TextID BubbleText; // 0x20
		::System::UInt32 AnimGroupID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESPINEANIMGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveSpineAnimGroupRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveSpineAnimGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESPINEANIMGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

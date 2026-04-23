#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGPRIVILEGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x187ED440)
#define RPG_GAMECORE_CHENLINGPRIVILEGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x187ED740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingPrivilegeRow_TypeDefinitionIndex = 10605;

	class ChenLingPrivilegeRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::System::UInt32>* NextIDList; // 0x18
		::System::UInt32 Cost; // 0x20
		::RPG::Client::TextID Name; // 0x28
		::System::UInt32 ID; // 0x38
		::System::UInt32 EffectID; // 0x3C
		::RPG::Client::TextID SkillDesc; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGPRIVILEGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChenLingPrivilegeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingPrivilegeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGPRIVILEGEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

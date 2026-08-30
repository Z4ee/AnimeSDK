#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LIMAONEWSLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DD5B580)
#define RPG_GAMECORE_LIMAONEWSLEVELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD5BD10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LimaoNewsLevelRow_TypeDefinitionIndex = 13844;

	class LimaoNewsLevelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EventFinishConditionIDList; // 0x10
		::RPG::Client::TextID BeforeLevelEvent; // 0x18
		::System::UInt32 Level; // 0x28
		::System::Boolean IsTriggerEvent; // 0x2C
		::RPG::Client::TextID AfterLevelEvent; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMAONEWSLEVELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LimaoNewsLevelRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LimaoNewsLevelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMAONEWSLEVELROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

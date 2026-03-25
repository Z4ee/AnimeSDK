#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LIMAONEWSLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1734E520)
#define RPG_GAMECORE_LIMAONEWSLEVELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1734EC90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LimaoNewsLevelRow_TypeDefinitionIndex = 12759;

	class LimaoNewsLevelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EventFinishConditionIDList; // 0x10
		::System::Boolean IsTriggerEvent; // 0x18
		::System::UInt32 Level; // 0x1C
		::RPG::Client::TextID AfterLevelEvent; // 0x20
		::RPG::Client::TextID BeforeLevelEvent; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMAONEWSLEVELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LimaoNewsLevelRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LimaoNewsLevelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMAONEWSLEVELROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

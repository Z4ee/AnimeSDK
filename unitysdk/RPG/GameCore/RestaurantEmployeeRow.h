#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RestaurantEmployeeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RESTAURANTEMPLOYEEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x175A44D0)
#define RPG_GAMECORE_RESTAURANTEMPLOYEEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x175A49F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantEmployeeRow_TypeDefinitionIndex = 10598;

	class RestaurantEmployeeRow : public ::System::Object
	{
	public:
		::System::String* Model; // 0x10
		::System::String* IMGPath; // 0x18
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x20
		::RPG::Client::TextID FirstTalk; // 0x28
		::RPG::Client::TextID Detail; // 0x38
		::System::UInt32 EmployeeID; // 0x48
		::System::Boolean IsShow; // 0x4C
		::RPG::GameCore::RestaurantEmployeeType Type; // 0x50
		::System::UInt32 BehaviorID; // 0x54
		::RPG::Client::TextID Name; // 0x58
		::System::UInt32 NPCID; // 0x68
		::System::UInt32 ConfigID; // 0x6C
		::System::UInt32 GroupID; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTEMPLOYEEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RestaurantEmployeeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantEmployeeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTEMPLOYEEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

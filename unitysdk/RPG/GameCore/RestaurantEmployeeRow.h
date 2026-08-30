#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RestaurantEmployeeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RESTAURANTEMPLOYEEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3A9F90)
#define RPG_GAMECORE_RESTAURANTEMPLOYEEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3AA4A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantEmployeeRow_TypeDefinitionIndex = 11328;

	class RestaurantEmployeeRow : public ::System::Object
	{
	public:
		::System::String* IMGPath; // 0x10
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x18
		::System::String* Model; // 0x20
		::RPG::Client::TextID Name; // 0x28
		::System::UInt32 GroupID; // 0x38
		::System::UInt32 NPCID; // 0x3C
		::RPG::GameCore::RestaurantEmployeeType Type; // 0x40
		::System::UInt32 BehaviorID; // 0x44
		::System::UInt32 ConfigID; // 0x48
		::System::UInt32 EmployeeID; // 0x4C
		::System::Boolean IsShow; // 0x50
		::RPG::Client::TextID Detail; // 0x58
		::RPG::Client::TextID FirstTalk; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTEMPLOYEEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RestaurantEmployeeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RestaurantEmployeeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTEMPLOYEEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

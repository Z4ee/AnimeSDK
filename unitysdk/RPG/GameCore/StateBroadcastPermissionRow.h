#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STATEBROADCASTPERMISSIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18E9CDD0)
#define RPG_GAMECORE_STATEBROADCASTPERMISSIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18E9CF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StateBroadcastPermissionRow_TypeDefinitionIndex = 12647;

	class StateBroadcastPermissionRow : public ::System::Object
	{
	public:
		::System::String* PackageName; // 0x10
		::Il2CppArray<::System::UInt32>* InfoList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATEBROADCASTPERMISSIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::StateBroadcastPermissionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StateBroadcastPermissionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATEBROADCASTPERMISSIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

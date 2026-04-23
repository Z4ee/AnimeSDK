#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIONOPERATIONSETROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x185FBF60)
#define RPG_GAMECORE_ACTIONOPERATIONSETROW__CTOR_OFFSET UNITYSDK_OFFSET(0x185FC4D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionOperationSetRow_TypeDefinitionIndex = 13086;

	class ActionOperationSetRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* ActionNameList; // 0x10
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONOPERATIONSETROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActionOperationSetRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionOperationSetRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONOPERATIONSETROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

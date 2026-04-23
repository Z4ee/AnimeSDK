#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_INCONTROLACTIONMAPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A18330)
#define RPG_GAMECORE_INCONTROLACTIONMAPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A18A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InControlActionMapRow_TypeDefinitionIndex = 13082;

	class InControlActionMapRow : public ::System::Object
	{
	public:
		::System::String* actionName; // 0x10
		::System::String* defaultMouseType; // 0x18
		::System::String* defaultKey; // 0x20
		::Il2CppArray<::System::UInt32>* FuncGotoIDList; // 0x28
		::Il2CppArray<::System::String*>* defaultInControlTypes; // 0x30
		::Il2CppArray<::System::UInt32>* actionTypeList; // 0x38
		::RPG::Client::TextID actionTextmapID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLACTIONMAPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::InControlActionMapRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InControlActionMapRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLACTIONMAPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

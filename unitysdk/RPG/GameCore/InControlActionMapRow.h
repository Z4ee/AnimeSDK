#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_INCONTROLACTIONMAPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B00A9D0)
#define RPG_GAMECORE_INCONTROLACTIONMAPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B00B120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InControlActionMapRow_TypeDefinitionIndex = 13311;

	class InControlActionMapRow : public ::System::Object
	{
	public:
		::System::String* actionName; // 0x10
		::Il2CppArray<::System::String*>* defaultInControlTypes; // 0x18
		::System::String* defaultMouseType; // 0x20
		::System::String* defaultKey; // 0x28
		::Il2CppArray<::System::UInt32>* actionTypeList; // 0x30
		::Il2CppArray<::System::UInt32>* FuncGotoIDList; // 0x38
		::RPG::Client::TextID actionTextmapID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLACTIONMAPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InControlActionMapRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InControlActionMapRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLACTIONMAPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

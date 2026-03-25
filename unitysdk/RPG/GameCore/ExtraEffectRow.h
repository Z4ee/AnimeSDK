#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_EXTRAEFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x171BB6D0)
#define RPG_GAMECORE_EXTRAEFFECTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x171BBE60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExtraEffectRow_TypeDefinitionIndex = 12107;

	class ExtraEffectRow : public ::System::Object
	{
	public:
		::System::String* ExtraEffectIconPath; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* DescParamList; // 0x18
		::RPG::Client::TextID ExtraEffectName; // 0x20
		::RPG::Client::TextID ExtraEffectDesc; // 0x30
		::System::UInt32 ExtraEffectType; // 0x40
		::System::UInt32 ExtraEffectID; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXTRAEFFECTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ExtraEffectRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExtraEffectRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXTRAEFFECTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

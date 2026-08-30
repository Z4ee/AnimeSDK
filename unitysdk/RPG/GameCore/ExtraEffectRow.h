#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_EXTRAEFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D086F80)
#define RPG_GAMECORE_EXTRAEFFECTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D087720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExtraEffectRow_TypeDefinitionIndex = 13161;

	class ExtraEffectRow : public ::System::Object
	{
	public:
		::System::String* ExtraEffectIconPath; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* DescParamList; // 0x18
		::RPG::Client::TextID ExtraEffectName; // 0x20
		::System::UInt32 ExtraEffectID; // 0x30
		::System::UInt32 ExtraEffectType; // 0x34
		::RPG::Client::TextID ExtraEffectDesc; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXTRAEFFECTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExtraEffectRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExtraEffectRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXTRAEFFECTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

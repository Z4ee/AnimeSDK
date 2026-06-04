#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/VoicePlayType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_VOICECONFIGROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x19E4EA80)
#define RPG_GAMECORE_VOICECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19E4EEB0)
#define RPG_GAMECORE_VOICECONFIGROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x19E4FDB0)
#define RPG_GAMECORE_VOICECONFIGROW_RESET_OFFSET UNITYSDK_OFFSET(0x19E4FE10)
#define RPG_GAMECORE_VOICECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19E4FDA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VoiceConfigRow_TypeDefinitionIndex = 14658;

	class VoiceConfigRow : public ::System::Object
	{
	public:
		::System::String* VoicePath; // 0x10
		::System::UInt32 VoiceID; // 0x18
		::System::Boolean IsPlayerInvolved; // 0x1C
		::RPG::GameCore::VoicePlayType VoiceType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VoiceConfigRow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VoiceConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VoiceConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VoiceConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGROW_RESET_OFFSET))(this);
		}
	};
}

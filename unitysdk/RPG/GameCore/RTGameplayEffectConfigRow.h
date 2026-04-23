#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RTGAMEPLAYEFFECTCONFIGROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x18C83D20)
#define RPG_GAMECORE_RTGAMEPLAYEFFECTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C840A0)
#define RPG_GAMECORE_RTGAMEPLAYEFFECTCONFIGROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x18C83CA0)
#define RPG_GAMECORE_RTGAMEPLAYEFFECTCONFIGROW_RESET_OFFSET UNITYSDK_OFFSET(0x18C83D00)
#define RPG_GAMECORE_RTGAMEPLAYEFFECTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C84470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RTGameplayEffectConfigRow_TypeDefinitionIndex = 13810;

	class RTGameplayEffectConfigRow : public ::System::Object
	{
	public:
		::System::String* GEName; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x18
		::System::String* TargetType; // 0x20
		::System::String* Icon; // 0x28
		::RPG::Client::TextID SimpleDesc; // 0x30
		::RPG::Client::TextID Desc; // 0x40
		::RPG::Client::TextID Title; // 0x50
		::System::UInt32 ID; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTGAMEPLAYEFFECTCONFIGROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTGAMEPLAYEFFECTCONFIGROW_FROMTABLEOFFSET_OFFSET))(this, offsetData);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTGAMEPLAYEFFECTCONFIGROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RTGameplayEffectConfigRow* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RTGameplayEffectConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTGAMEPLAYEFFECTCONFIGROW_FROMBINARYWITHOUTNEW_OFFSET))(array, val);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RTGameplayEffectConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RTGameplayEffectConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTGAMEPLAYEFFECTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

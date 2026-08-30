#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EnumStatusTag.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RTSTATUSROW_CONTAINSTAG_OFFSET UNITYSDK_OFFSET(0x1D4B28C0)
#define RPG_GAMECORE_RTSTATUSROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1D4B1EE0)
#define RPG_GAMECORE_RTSTATUSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D4B23A0)
#define RPG_GAMECORE_RTSTATUSROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D4B1E60)
#define RPG_GAMECORE_RTSTATUSROW_RESET_OFFSET UNITYSDK_OFFSET(0x1D4B1EC0)
#define RPG_GAMECORE_RTSTATUSROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B28B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtStatusRow_TypeDefinitionIndex = 14917;

	class RtStatusRow : public ::System::Object
	{
	public:
		::System::String* ModifierName; // 0x10
		::Il2CppArray<::RPG::GameCore::EnumStatusTag>* TagList; // 0x18
		::System::String* StatusIconPathHighSize; // 0x20
		::System::String* StatusIconPath; // 0x28
		::Il2CppArray<::System::String*>* ReadParamList; // 0x30
		::System::Boolean CanDispel; // 0x38
		::RPG::GameCore::EnumStatusType StatusType; // 0x3C
		::RPG::Client::TextID StatusName; // 0x40
		::RPG::Client::TextID StatusDesc; // 0x50
		::System::UInt32 DisplayPriority; // 0x60
		::System::UInt32 ID; // 0x64
		::RPG::Client::TextID StatusEffect; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSTATUSROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSTATUSROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSTATUSROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtStatusRow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtStatusRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSTATUSROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtStatusRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtStatusRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSTATUSROW_FROMBINARY_OFFSET))(a1, a2);
		}

		::System::Boolean ContainsTag(::RPG::GameCore::EnumStatusTag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EnumStatusTag))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSTATUSROW_CONTAINSTAG_OFFSET))(this, a1);
		}
	};
}

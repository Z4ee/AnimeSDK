#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EnumStatusTag.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STATUSROW_CONTAINSTAG_OFFSET UNITYSDK_OFFSET(0x18EA1F00)
#define RPG_GAMECORE_STATUSROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x18E9F8F0)
#define RPG_GAMECORE_STATUSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18E9FDC0)
#define RPG_GAMECORE_STATUSROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x18EA1E60)
#define RPG_GAMECORE_STATUSROW_RESET_OFFSET UNITYSDK_OFFSET(0x18EA1EC0)
#define RPG_GAMECORE_STATUSROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18EA1EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StatusRow_TypeDefinitionIndex = 14384;

	class StatusRow : public ::System::Object
	{
	public:
		::System::String* StatusIconPath; // 0x10
		::Il2CppArray<::RPG::GameCore::EnumStatusTag>* TagList; // 0x18
		::Il2CppArray<::System::String*>* ReadParamList; // 0x20
		::System::String* ModifierName; // 0x28
		::System::String* StatusIconPathHighSize; // 0x30
		::RPG::Client::TextID StatusName; // 0x38
		::RPG::GameCore::EnumStatusType StatusType; // 0x48
		::System::Boolean CanDispel; // 0x4C
		::RPG::Client::TextID StatusEffect; // 0x50
		::System::UInt32 StatusID; // 0x60
		::RPG::Client::TextID StatusDesc; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSROW_FROMTABLEOFFSET_OFFSET))(this, offsetData);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::StatusRow* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StatusRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSROW_FROMBINARYWITHOUTNEW_OFFSET))(array, val);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::StatusRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StatusRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSROW_FROMBINARY_OFFSET))(array, val);
		}

		::System::Boolean ContainsTag(::RPG::GameCore::EnumStatusTag tag)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EnumStatusTag))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSROW_CONTAINSTAG_OFFSET))(this, tag);
		}
	};
}

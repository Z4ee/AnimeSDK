#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TEXTMAPROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x19096D20)
#define RPG_GAMECORE_TEXTMAPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19096EE0)
#define RPG_GAMECORE_TEXTMAPROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x19097E20)
#define RPG_GAMECORE_TEXTMAPROW_RESET_OFFSET UNITYSDK_OFFSET(0x19097E80)
#define RPG_GAMECORE_TEXTMAPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19097E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TextmapRow_TypeDefinitionIndex = 14490;

	class TextmapRow : public ::System::Object
	{
	public:
		::System::String* Text; // 0x10
		::RPG::Client::TextID ID; // 0x18
		::System::Boolean HasParam; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPROW_FROMTABLEOFFSET_OFFSET))(this, offsetData);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TextmapRow* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TextmapRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPROW_FROMBINARYWITHOUTNEW_OFFSET))(array, val);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TextmapRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TextmapRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

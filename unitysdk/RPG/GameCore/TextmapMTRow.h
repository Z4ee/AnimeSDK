#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TEXTMAPMTROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1789C3C0)
#define RPG_GAMECORE_TEXTMAPMTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1789C580)
#define RPG_GAMECORE_TEXTMAPMTROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1789C340)
#define RPG_GAMECORE_TEXTMAPMTROW_RESET_OFFSET UNITYSDK_OFFSET(0x1789C3A0)
#define RPG_GAMECORE_TEXTMAPMTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1789C770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TextmapMTRow_TypeDefinitionIndex = 14018;

	class TextmapMTRow : public ::System::Object
	{
	public:
		::System::String* Text; // 0x10
		::System::Boolean HasParam; // 0x18
		::RPG::Client::TextID ID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPMTROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPMTROW_FROMTABLEOFFSET_OFFSET))(this, offsetData);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPMTROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TextmapMTRow* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TextmapMTRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPMTROW_FROMBINARYWITHOUTNEW_OFFSET))(array, val);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TextmapMTRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TextmapMTRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPMTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

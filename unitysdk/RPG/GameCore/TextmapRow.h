#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TEXTMAPROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x19DE0FA0)
#define RPG_GAMECORE_TEXTMAPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19DE14D0)
#define RPG_GAMECORE_TEXTMAPROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x19DE2E50)
#define RPG_GAMECORE_TEXTMAPROW_RESET_OFFSET UNITYSDK_OFFSET(0x19DE2EB0)
#define RPG_GAMECORE_TEXTMAPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19DE2E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TextmapRow_TypeDefinitionIndex = 14526;

	class TextmapRow : public ::System::Object
	{
	public:
		::System::String* Text; // 0x10
		::System::Boolean HasParam; // 0x18
		::RPG::Client::TextID ID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TextmapRow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TextmapRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TextmapRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TextmapRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPROW_FROMBINARY_OFFSET))(a1, a2);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPROW_RESET_OFFSET))(this);
		}
	};
}

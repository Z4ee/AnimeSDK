#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TEXTMAPMTROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1E1D50F0)
#define RPG_GAMECORE_TEXTMAPMTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E1D52B0)
#define RPG_GAMECORE_TEXTMAPMTROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1E1D54B0)
#define RPG_GAMECORE_TEXTMAPMTROW_RESET_OFFSET UNITYSDK_OFFSET(0x1E1D5510)
#define RPG_GAMECORE_TEXTMAPMTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D54A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TextmapMTRow_TypeDefinitionIndex = 15121;

	class TextmapMTRow : public ::System::Object
	{
	public:
		::System::String* Text; // 0x10
		::RPG::Client::TextID ID; // 0x18
		::System::Boolean HasParam; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPMTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TextmapMTRow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TextmapMTRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPMTROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TextmapMTRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TextmapMTRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPMTROW_FROMBINARY_OFFSET))(a1, a2);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPMTROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPMTROW_RESET_OFFSET))(this);
		}
	};
}

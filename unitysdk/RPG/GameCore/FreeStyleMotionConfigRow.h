#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FREESTYLEMOTIONCONFIGROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1721FF70)
#define RPG_GAMECORE_FREESTYLEMOTIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x172201B0)
#define RPG_GAMECORE_FREESTYLEMOTIONCONFIGROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1721FEF0)
#define RPG_GAMECORE_FREESTYLEMOTIONCONFIGROW_RESET_OFFSET UNITYSDK_OFFSET(0x1721FF50)
#define RPG_GAMECORE_FREESTYLEMOTIONCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17220410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleMotionConfigRow_TypeDefinitionIndex = 12140;

	class FreeStyleMotionConfigRow : public ::System::Object
	{
	public:
		::System::String* StartMotion; // 0x10
		::System::String* LoopMotionRibbonPath; // 0x18
		::System::String* FreeStyleCharacterID; // 0x20
		::System::String* StartMotionRibbonPath; // 0x28
		::System::String* LoopMotionPath; // 0x30
		::System::String* StartMotionPath; // 0x38
		::System::UInt32 ID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEMOTIONCONFIGROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEMOTIONCONFIGROW_FROMTABLEOFFSET_OFFSET))(this, offsetData);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEMOTIONCONFIGROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::FreeStyleMotionConfigRow* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FreeStyleMotionConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEMOTIONCONFIGROW_FROMBINARYWITHOUTNEW_OFFSET))(array, val);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::FreeStyleMotionConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FreeStyleMotionConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEMOTIONCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

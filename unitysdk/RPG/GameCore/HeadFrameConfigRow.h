#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_HEADFRAMECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189EA9E0)
#define RPG_GAMECORE_HEADFRAMECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189EAAE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeadFrameConfigRow_TypeDefinitionIndex = 12272;

	class HeadFrameConfigRow : public ::System::Object
	{
	public:
		::System::String* PrefabPath; // 0x10
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEADFRAMECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::HeadFrameConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeadFrameConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEADFRAMECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

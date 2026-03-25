#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GuideVideoSizeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GUIDEVIDEOCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17291EE0)
#define RPG_GAMECORE_GUIDEVIDEOCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x172920C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GuideVideoConfigRow_TypeDefinitionIndex = 14160;

	class GuideVideoConfigRow : public ::System::Object
	{
	public:
		::System::String* VideoPath; // 0x10
		::System::UInt32 VideoID; // 0x18
		::System::Boolean IsPlayerInvolved; // 0x1C
		::RPG::GameCore::GuideVideoSizeType SizeType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEVIDEOCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GuideVideoConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GuideVideoConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEVIDEOCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

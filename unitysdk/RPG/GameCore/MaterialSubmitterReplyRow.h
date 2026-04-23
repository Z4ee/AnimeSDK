#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MATERIALSUBMITTERREPLYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18AC8700)
#define RPG_GAMECORE_MATERIALSUBMITTERREPLYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18AC8E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MaterialSubmitterReplyRow_TypeDefinitionIndex = 11406;

	class MaterialSubmitterReplyRow : public ::System::Object
	{
	public:
		::System::String* HeadIconPath; // 0x10
		::RPG::Client::TextID Content; // 0x18
		::RPG::Client::TextID PersonName; // 0x28
		::System::UInt32 ID; // 0x38
		::System::UInt32 Tag; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERREPLYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MaterialSubmitterReplyRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MaterialSubmitterReplyRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERREPLYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

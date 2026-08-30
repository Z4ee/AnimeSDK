#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MATERIALSUBMITTERREPLYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D271B40)
#define RPG_GAMECORE_MATERIALSUBMITTERREPLYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2722A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MaterialSubmitterReplyRow_TypeDefinitionIndex = 11940;

	class MaterialSubmitterReplyRow : public ::System::Object
	{
	public:
		::System::String* HeadIconPath; // 0x10
		::RPG::Client::TextID PersonName; // 0x18
		::System::UInt32 Tag; // 0x28
		::System::UInt32 ID; // 0x2C
		::RPG::Client::TextID Content; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERREPLYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MaterialSubmitterReplyRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MaterialSubmitterReplyRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERREPLYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

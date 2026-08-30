#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChimeraTalkConditionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERAGALLERYTALKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E33F380)
#define RPG_GAMECORE_CHIMERAGALLERYTALKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E33F5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraGalleryTalkRow_TypeDefinitionIndex = 12946;

	class ChimeraGalleryTalkRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Title; // 0x10
		::RPG::Client::TextID NumberedTitle; // 0x20
		::System::Single Sort; // 0x30
		::RPG::GameCore::ChimeraTalkConditionType ConditionType; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAGALLERYTALKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraGalleryTalkRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraGalleryTalkRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAGALLERYTALKROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

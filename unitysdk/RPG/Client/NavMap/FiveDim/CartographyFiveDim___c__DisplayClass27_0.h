#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::NavMap::FiveDim { class Face; }

#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A330A10)
#define RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM___C__DISPLAYCLASS27_0___GETFACEBYID_B__0_OFFSET UNITYSDK_OFFSET(0x1A332060)

namespace RPG::Client::NavMap::FiveDim
{
	inline static constexpr unsigned int CartographyFiveDim___c__DisplayClass27_0_TypeDefinitionIndex = 74520;

	class CartographyFiveDim___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::System::UInt32 faceID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __GetFaceByID_b__0(::RPG::Client::NavMap::FiveDim::Face* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::Face*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_CARTOGRAPHYFIVEDIM___C__DISPLAYCLASS27_0___GETFACEBYID_B__0_OFFSET))(this, a1);
		}
	};
}

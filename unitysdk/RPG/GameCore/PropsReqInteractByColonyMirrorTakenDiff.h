#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROPSREQINTERACTBYCOLONYMIRRORTAKENDIFF_METHOD_3_7A704907CA027127_OFFSET UNITYSDK_OFFSET(0x17573450)
#define RPG_GAMECORE_PROPSREQINTERACTBYCOLONYMIRRORTAKENDIFF_METHOD_3_F8DC775447370393_OFFSET UNITYSDK_OFFSET(0x17573340)
#define RPG_GAMECORE_PROPSREQINTERACTBYCOLONYMIRRORTAKENDIFF__CTOR_OFFSET UNITYSDK_OFFSET(0x17573420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropsReqInteractByColonyMirrorTakenDiff_TypeDefinitionIndex = 20041;

	class PropsReqInteractByColonyMirrorTakenDiff : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSREQINTERACTBYCOLONYMIRRORTAKENDIFF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F8DC775447370393(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropsReqInteractByColonyMirrorTakenDiff*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropsReqInteractByColonyMirrorTakenDiff*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSREQINTERACTBYCOLONYMIRRORTAKENDIFF_METHOD_3_F8DC775447370393_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7A704907CA027127(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropsReqInteractByColonyMirrorTakenDiff* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropsReqInteractByColonyMirrorTakenDiff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSREQINTERACTBYCOLONYMIRRORTAKENDIFF_METHOD_3_7A704907CA027127_OFFSET))(a1, a2);
		}
	};
}

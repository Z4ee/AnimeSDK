#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESETFLOORDEFAULTEMOTION_METHOD_3_CE7F7A93933BD796_OFFSET UNITYSDK_OFFSET(0x18CAA520)
#define RPG_GAMECORE_RESETFLOORDEFAULTEMOTION_METHOD_3_F2288BD80A432842_OFFSET UNITYSDK_OFFSET(0x18CAA630)
#define RPG_GAMECORE_RESETFLOORDEFAULTEMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18CAA600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetFloorDefaultEmotion_TypeDefinitionIndex = 20249;

	class ResetFloorDefaultEmotion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETFLOORDEFAULTEMOTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CE7F7A93933BD796(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetFloorDefaultEmotion*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetFloorDefaultEmotion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETFLOORDEFAULTEMOTION_METHOD_3_CE7F7A93933BD796_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F2288BD80A432842(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetFloorDefaultEmotion* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetFloorDefaultEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETFLOORDEFAULTEMOTION_METHOD_3_F2288BD80A432842_OFFSET))(a1, a2);
		}
	};
}

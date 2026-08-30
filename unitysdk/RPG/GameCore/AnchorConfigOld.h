#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ANCHORCONFIGOLD_METHOD_2_5A90264E9E0C7380_OFFSET UNITYSDK_OFFSET(0x1CE1C170)
#define RPG_GAMECORE_ANCHORCONFIGOLD__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE1C1B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnchorConfigOld_TypeDefinitionIndex = 18106;

	class AnchorConfigOld : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANCHORCONFIGOLD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5A90264E9E0C7380(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AnchorConfigOld*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AnchorConfigOld*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANCHORCONFIGOLD_METHOD_2_5A90264E9E0C7380_OFFSET))(a1, a2);
		}
	};
}

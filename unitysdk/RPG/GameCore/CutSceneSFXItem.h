#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CUTSCENESFXITEM_METHOD_2_65E1DDA7282814E5_OFFSET UNITYSDK_OFFSET(0x1BC406B0)
#define RPG_GAMECORE_CUTSCENESFXITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC40890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CutSceneSFXItem_TypeDefinitionIndex = 16336;

	class CutSceneSFXItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EventName; // 0x10
		::System::Single StartTime; // 0x18
		::System::Single EndTime; // 0x1C
		::System::Boolean IsLoop; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUTSCENESFXITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_65E1DDA7282814E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CutSceneSFXItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CutSceneSFXItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUTSCENESFXITEM_METHOD_2_65E1DDA7282814E5_OFFSET))(a1, a2);
		}
	};
}

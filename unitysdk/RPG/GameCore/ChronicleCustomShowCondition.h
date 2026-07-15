#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChronicleCustomShowConditionType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHRONICLECUSTOMSHOWCONDITION_METHOD_2_E67DD0DD8C0FBBB9_OFFSET UNITYSDK_OFFSET(0x1C24FEE0)
#define RPG_GAMECORE_CHRONICLECUSTOMSHOWCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C24FFF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChronicleCustomShowCondition_TypeDefinitionIndex = 18228;

	class ChronicleCustomShowCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChronicleCustomShowConditionType Type; // 0x10
		::System::String* Param; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHRONICLECUSTOMSHOWCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E67DD0DD8C0FBBB9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChronicleCustomShowCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChronicleCustomShowCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHRONICLECUSTOMSHOWCONDITION_METHOD_2_E67DD0DD8C0FBBB9_OFFSET))(a1, a2);
		}
	};
}

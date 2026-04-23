#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTITYSETEXTANIMLAYERENABLE_METHOD_3_2F96ABD23DC40FFD_OFFSET UNITYSDK_OFFSET(0x18650010)
#define RPG_GAMECORE_ADVENTITYSETEXTANIMLAYERENABLE_METHOD_3_735A29E1BF90BB53_OFFSET UNITYSDK_OFFSET(0x1864FF90)
#define RPG_GAMECORE_ADVENTITYSETEXTANIMLAYERENABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1864FFE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEntitySetExtAnimLayerEnable_TypeDefinitionIndex = 20039;

	class AdvEntitySetExtAnimLayerEnable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* LayerName; // 0x20
		::System::Boolean Enable; // 0x28
		::System::Single Duration; // 0x2C
		::System::String* RequireHoyoTag; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYSETEXTANIMLAYERENABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_735A29E1BF90BB53(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEntitySetExtAnimLayerEnable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEntitySetExtAnimLayerEnable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYSETEXTANIMLAYERENABLE_METHOD_3_735A29E1BF90BB53_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2F96ABD23DC40FFD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEntitySetExtAnimLayerEnable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEntitySetExtAnimLayerEnable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYSETEXTANIMLAYERENABLE_METHOD_3_2F96ABD23DC40FFD_OFFSET))(a1, a2);
		}
	};
}

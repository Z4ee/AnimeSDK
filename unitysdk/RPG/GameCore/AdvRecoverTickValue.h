#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVRECOVERTICKVALUE_METHOD_3_A98B49D3C435101C_OFFSET UNITYSDK_OFFSET(0x16F3CFC0)
#define RPG_GAMECORE_ADVRECOVERTICKVALUE_METHOD_3_FD23F7C422AF9B99_OFFSET UNITYSDK_OFFSET(0x16F3D090)
#define RPG_GAMECORE_ADVRECOVERTICKVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x16F3D040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvRecoverTickValue_TypeDefinitionIndex = 19353;

	class AdvRecoverTickValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x18
		::RPG::GameCore::DynamicString* ConfigName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVRECOVERTICKVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A98B49D3C435101C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvRecoverTickValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvRecoverTickValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVRECOVERTICKVALUE_METHOD_3_A98B49D3C435101C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FD23F7C422AF9B99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvRecoverTickValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvRecoverTickValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVRECOVERTICKVALUE_METHOD_3_FD23F7C422AF9B99_OFFSET))(a1, a2);
		}
	};
}

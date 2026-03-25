#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPSETHP_METHOD_3_A58FAB121CB1344B_OFFSET UNITYSDK_OFFSET(0x17525080)
#define RPG_GAMECORE_PROPSETHP_METHOD_3_C8E1A0CAAC334FEF_OFFSET UNITYSDK_OFFSET(0x17524F40)
#define RPG_GAMECORE_PROPSETHP__CTOR_OFFSET UNITYSDK_OFFSET(0x17524FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSetHP_TypeDefinitionIndex = 20251;

	class PropSetHP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::FixPoint HP; // 0x20
		::RPG::GameCore::FixPoint MaxHP; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETHP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C8E1A0CAAC334FEF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSetHP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSetHP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETHP_METHOD_3_C8E1A0CAAC334FEF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A58FAB121CB1344B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSetHP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSetHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETHP_METHOD_3_A58FAB121CB1344B_OFFSET))(a1, a2);
		}
	};
}

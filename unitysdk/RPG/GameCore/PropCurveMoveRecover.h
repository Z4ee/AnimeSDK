#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPCURVEMOVERECOVER_METHOD_3_DF9B21F8FCDB6978_OFFSET UNITYSDK_OFFSET(0x1D1757F0)
#define RPG_GAMECORE_PROPCURVEMOVERECOVER_METHOD_3_F266E870893F7CD1_OFFSET UNITYSDK_OFFSET(0x1D175890)
#define RPG_GAMECORE_PROPCURVEMOVERECOVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D175850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropCurveMoveRecover_TypeDefinitionIndex = 20773;

	class PropCurveMoveRecover : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVERECOVER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DF9B21F8FCDB6978(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropCurveMoveRecover*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropCurveMoveRecover*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVERECOVER_METHOD_3_DF9B21F8FCDB6978_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F266E870893F7CD1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropCurveMoveRecover* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropCurveMoveRecover*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVERECOVER_METHOD_3_F266E870893F7CD1_OFFSET))(a1, a2);
		}
	};
}

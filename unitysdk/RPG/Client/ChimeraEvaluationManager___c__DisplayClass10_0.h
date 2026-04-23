#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1B7044A592B17773_5;

#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA027DA0)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER___C__DISPLAYCLASS10_0__GETEVALUATIONGROUPDATA_B__0_OFFSET UNITYSDK_OFFSET(0xA028630)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraEvaluationManager___c__DisplayClass10_0_TypeDefinitionIndex = 58499;

	class ChimeraEvaluationManager___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::UInt32 groupID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetEvaluationGroupData_b__0(::Class_1_1B7044A592B17773_5* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_1B7044A592B17773_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER___C__DISPLAYCLASS10_0__GETEVALUATIONGROUPDATA_B__0_OFFSET))(this, data);
		}
	};
}

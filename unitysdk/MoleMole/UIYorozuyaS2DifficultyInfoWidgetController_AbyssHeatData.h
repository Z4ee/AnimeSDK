#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_576;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define MOLEMOLE_UIYOROZUYAS2DIFFICULTYINFOWIDGETCONTROLLER_ABYSSHEATDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1159FF80)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaS2DifficultyInfoWidgetController_AbyssHeatData_TypeDefinitionIndex = 77098;

	class UIYorozuyaS2DifficultyInfoWidgetController_AbyssHeatData : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_576* config; // 0x10
		::System::Action_3<::System::Int32, ::System::Boolean, ::System::Int32>* OnHeatSelectAction; // 0x18
		::System::Int32 questId; // 0x20
		::System::Int32 abyssPoint; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAS2DIFFICULTYINFOWIDGETCONTROLLER_ABYSSHEATDATA__CTOR_OFFSET))(this);
		}
	};
}

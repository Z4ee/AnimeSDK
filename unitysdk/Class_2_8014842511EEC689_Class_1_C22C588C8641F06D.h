#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E3C2BDB2C84479C2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MoleMole { class UIRABLevelBossSkillRowWidgetController_Context; }

#define CLASS_2_8014842511EEC689_CLASS_1_C22C588C8641F06D_METHOD_1_95B38DF9DBB27DF1_OFFSET UNITYSDK_OFFSET(0x163DA070)
#define CLASS_2_8014842511EEC689_CLASS_1_C22C588C8641F06D__CTOR_OFFSET UNITYSDK_OFFSET(0x163DA060)

inline static constexpr unsigned int Class_2_8014842511EEC689_Class_1_C22C588C8641F06D_TypeDefinitionIndex = 59001;

class Class_2_8014842511EEC689_Class_1_C22C588C8641F06D : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8014842511EEC689_CLASS_1_C22C588C8641F06D__CTOR_OFFSET))(this);
	}

	::MoleMole::UIRABLevelBossSkillRowWidgetController_Context* Method_1_95B38DF9DBB27DF1(::System::ValueTuple_2<::System::Int32, ::Enum_3_E3C2BDB2C84479C2> a1)
	{
		return ((::MoleMole::UIRABLevelBossSkillRowWidgetController_Context*(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::Enum_3_E3C2BDB2C84479C2>))((::PBYTE)hIl2Cpp + CLASS_2_8014842511EEC689_CLASS_1_C22C588C8641F06D_METHOD_1_95B38DF9DBB27DF1_OFFSET))(this, a1);
	}
};

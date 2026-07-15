#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_511;
namespace RPG::GameCore { class AIDecisionGroup; }
namespace RPG::GameCore { class AIDecisionUnitConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E58640E6D36FEB1B_METHOD_1_027336881EE2E4ED_OFFSET UNITYSDK_OFFSET(0x1865F760)
#define CLASS_1_E58640E6D36FEB1B_METHOD_1_6E5B23CDD3730329_OFFSET UNITYSDK_OFFSET(0x1865F970)
#define CLASS_1_E58640E6D36FEB1B_METHOD_1_75B7D0E1BDFAD788_OFFSET UNITYSDK_OFFSET(0x1865FA50)
#define CLASS_1_E58640E6D36FEB1B_METHOD_1_97889423B3D78768_OFFSET UNITYSDK_OFFSET(0x1865F990)
#define CLASS_1_E58640E6D36FEB1B__CTOR_OFFSET UNITYSDK_OFFSET(0x1865F750)

inline static constexpr unsigned int Class_1_E58640E6D36FEB1B_TypeDefinitionIndex = 55193;

class Class_1_E58640E6D36FEB1B : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_0; // 0x10
	::RPG::GameCore::AIDecisionGroup* Field_1_1; // 0x18
	::RPG::GameCore::TaskContext* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_511*>* Field_1_3; // 0x28

	::System::Void _ctor(::RPG::GameCore::AIDecisionGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AIDecisionGroup*))((::PBYTE)hIl2Cpp + CLASS_1_E58640E6D36FEB1B__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_027336881EE2E4ED(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_E58640E6D36FEB1B_METHOD_1_027336881EE2E4ED_OFFSET))(this, a1);
	}

	::System::Void Method_1_97889423B3D78768()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E58640E6D36FEB1B_METHOD_1_97889423B3D78768_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_511* Method_1_75B7D0E1BDFAD788()
	{
		return ((::Class_0_16E4307DCC419505_511*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E58640E6D36FEB1B_METHOD_1_75B7D0E1BDFAD788_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::AIDecisionUnitConfig*>* Method_1_6E5B23CDD3730329()
	{
		return ((::Il2CppArray<::RPG::GameCore::AIDecisionUnitConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E58640E6D36FEB1B_METHOD_1_6E5B23CDD3730329_OFFSET))(this);
	}
};

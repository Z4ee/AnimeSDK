#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_634;
namespace RPG::GameCore { class AIDecisionGroup; }
namespace RPG::GameCore { class AIDecisionUnitConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E58640E6D36FEB1B_METHOD_1_027336881EE2E4ED_OFFSET UNITYSDK_OFFSET(0x1640FF40)
#define CLASS_1_E58640E6D36FEB1B_METHOD_1_6E5B23CDD3730329_OFFSET UNITYSDK_OFFSET(0x16410150)
#define CLASS_1_E58640E6D36FEB1B_METHOD_1_75B7D0E1BDFAD788_OFFSET UNITYSDK_OFFSET(0x16410230)
#define CLASS_1_E58640E6D36FEB1B_METHOD_1_97889423B3D78768_OFFSET UNITYSDK_OFFSET(0x16410170)
#define CLASS_1_E58640E6D36FEB1B__CTOR_OFFSET UNITYSDK_OFFSET(0x1640FF30)

inline static constexpr unsigned int Class_1_E58640E6D36FEB1B_TypeDefinitionIndex = 57762;

class Class_1_E58640E6D36FEB1B : public ::System::Object
{
public:
	::RPG::GameCore::AIDecisionGroup* DDKJFDOFGLC; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_634*>* MJEPDDDKCEN; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::Il2CppArray<::RPG::GameCore::FixPoint>* APLHOPPLHBJ; // 0x28

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

	::Class_0_16E4307DCC419505_634* Method_1_75B7D0E1BDFAD788()
	{
		return ((::Class_0_16E4307DCC419505_634*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E58640E6D36FEB1B_METHOD_1_75B7D0E1BDFAD788_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::AIDecisionUnitConfig*>* Method_1_6E5B23CDD3730329()
	{
		return ((::Il2CppArray<::RPG::GameCore::AIDecisionUnitConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E58640E6D36FEB1B_METHOD_1_6E5B23CDD3730329_OFFSET))(this);
	}
};

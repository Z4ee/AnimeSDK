#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_129.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_F9FBCC956DFCF137_5;
namespace RPG::GameCore { class AIDecisionBaseConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_FCFBB0C6F0A2B98B_METHOD_2_6AF4BFA51498F16B_OFFSET UNITYSDK_OFFSET(0x17CD4490)
#define CLASS_2_FCFBB0C6F0A2B98B_METHOD_2_7A37753F2CEC6D53_OFFSET UNITYSDK_OFFSET(0x17CD4400)
#define CLASS_2_FCFBB0C6F0A2B98B__CTOR_OFFSET UNITYSDK_OFFSET(0x17CD4270)

inline static constexpr unsigned int Class_2_FCFBB0C6F0A2B98B_TypeDefinitionIndex = 54605;

class Class_2_FCFBB0C6F0A2B98B : public ::Class_1_43BD383C98B4C0C5_129
{
public:
	::RPG::GameCore::AIDecisionBaseConfig* IGHAHBNLIJA; // 0x10
	::System::Collections::Generic::List_1<::Class_1_F9FBCC956DFCF137_5*>* JGNOCCOBAGF; // 0x18
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20

	::System::Void _ctor(::RPG::GameCore::AIDecisionBaseConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AIDecisionBaseConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_FCFBB0C6F0A2B98B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_7A37753F2CEC6D53(::System::Single a1, ::System::Int32 a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FCFBB0C6F0A2B98B_METHOD_2_7A37753F2CEC6D53_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_6AF4BFA51498F16B()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCFBB0C6F0A2B98B_METHOD_2_6AF4BFA51498F16B_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_107.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_F9FBCC956DFCF137_3;
namespace RPG::GameCore { class AIDecisionBaseConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9AFE44A46B896F4E_METHOD_2_ACB98172DAE54CD6_OFFSET UNITYSDK_OFFSET(0x11966720)
#define CLASS_2_9AFE44A46B896F4E_METHOD_2_B3FDD3B1AE56BD97_OFFSET UNITYSDK_OFFSET(0x11966480)
#define CLASS_2_9AFE44A46B896F4E__CTOR_OFFSET UNITYSDK_OFFSET(0x11966350)

inline static constexpr unsigned int Class_2_9AFE44A46B896F4E_TypeDefinitionIndex = 50168;

class Class_2_9AFE44A46B896F4E : public ::Class_1_43BD383C98B4C0C5_107
{
public:
	::RPG::GameCore::AIDecisionBaseConfig* Field_2_1; // 0x10
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::Class_1_F9FBCC956DFCF137_3*>* Field_2_2; // 0x20

	::System::Void _ctor(::RPG::GameCore::AIDecisionBaseConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AIDecisionBaseConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_9AFE44A46B896F4E__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_B3FDD3B1AE56BD97(::RPG::GameCore::FixPoint a1, ::System::Int32 a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9AFE44A46B896F4E_METHOD_2_B3FDD3B1AE56BD97_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_ACB98172DAE54CD6()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9AFE44A46B896F4E_METHOD_2_ACB98172DAE54CD6_OFFSET))(this);
	}
};

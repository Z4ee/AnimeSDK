#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Project/Config/MonsterGroupTemplateExt_MonsterTypeEnum.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas { class LevelZeroMonsterCreateData; }
namespace MoleMole::FlowCanvas { class LevelZeroRandomPosMonsterCreateData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_345A456E01F0BD3E_CLASS_1_94F781ACA186C306_METHOD_1_2A497E4075D20438_OFFSET UNITYSDK_OFFSET(0x175BEAA0)
#define CLASS_1_345A456E01F0BD3E_CLASS_1_94F781ACA186C306__CTOR_1_OFFSET UNITYSDK_OFFSET(0x175BE930)
#define CLASS_1_345A456E01F0BD3E_CLASS_1_94F781ACA186C306__CTOR_OFFSET UNITYSDK_OFFSET(0x175BE7C0)

inline static constexpr unsigned int Class_1_345A456E01F0BD3E_Class_1_94F781ACA186C306_TypeDefinitionIndex = 76821;

class Class_1_345A456E01F0BD3E_Class_1_94F781ACA186C306 : public ::System::Object
{
public:
	::Il2CppArray<::System::Int32>* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18
	::MoleMole::Project::Config::MonsterGroupTemplateExt_MonsterTypeEnum Field_1_2; // 0x1C

	::System::Void _ctor(::System::Int32 a1, ::MoleMole::Project::Config::MonsterGroupTemplateExt_MonsterTypeEnum a2, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::LevelZeroMonsterCreateData*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Project::Config::MonsterGroupTemplateExt_MonsterTypeEnum, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::LevelZeroMonsterCreateData*>*))((::PBYTE)hIl2Cpp + CLASS_1_345A456E01F0BD3E_CLASS_1_94F781ACA186C306__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::System::Int32 a1, ::MoleMole::Project::Config::MonsterGroupTemplateExt_MonsterTypeEnum a2, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::LevelZeroRandomPosMonsterCreateData*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Project::Config::MonsterGroupTemplateExt_MonsterTypeEnum, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::LevelZeroRandomPosMonsterCreateData*>*))((::PBYTE)hIl2Cpp + CLASS_1_345A456E01F0BD3E_CLASS_1_94F781ACA186C306__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_2A497E4075D20438(::Class_1_345A456E01F0BD3E_Class_1_94F781ACA186C306* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_345A456E01F0BD3E_Class_1_94F781ACA186C306*))((::PBYTE)hIl2Cpp + CLASS_1_345A456E01F0BD3E_CLASS_1_94F781ACA186C306_METHOD_1_2A497E4075D20438_OFFSET))(this, a1);
	}
};

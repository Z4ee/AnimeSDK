#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::GameCore { class BaseChimeraDuelNode; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_5F67435E4D592D31___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x87A82E0)
#define CLASS_2_5F67435E4D592D31___C__DISPLAYCLASS2_0___EVALUATEPARALLEL_B__0_OFFSET UNITYSDK_OFFSET(0x87A91B0)

inline static constexpr unsigned int Class_2_5F67435E4D592D31___c__DisplayClass2_0_TypeDefinitionIndex = 63161;

class Class_2_5F67435E4D592D31___c__DisplayClass2_0 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BaseChimeraDuelNode*, ::System::Int32>* fallbackOrder; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F67435E4D592D31___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
	}

	::System::Int32 __EvaluateParallel_b__0(::System::ValueTuple_2<::System::Single, ::RPG::GameCore::BaseChimeraDuelNode*> a, ::System::ValueTuple_2<::System::Single, ::RPG::GameCore::BaseChimeraDuelNode*> b)
	{
		return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::Single, ::RPG::GameCore::BaseChimeraDuelNode*>, ::System::ValueTuple_2<::System::Single, ::RPG::GameCore::BaseChimeraDuelNode*>))((::PBYTE)hIl2Cpp + CLASS_2_5F67435E4D592D31___C__DISPLAYCLASS2_0___EVALUATEPARALLEL_B__0_OFFSET))(this, a, b);
	}
};

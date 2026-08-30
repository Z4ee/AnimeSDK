#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D33B7D6901AE39E9;
class Class_3_1A9D32B2B1D681B8;
namespace RPG::GameCore { class MatchThreeScoreCurveRow; }

#define CLASS_1_E69D257E5EB85381_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1BAB62F0)
#define CLASS_1_E69D257E5EB85381_METHOD_1_A6657EB260006AA7_OFFSET UNITYSDK_OFFSET(0x1BAB69D0)
#define CLASS_1_E69D257E5EB85381_METHOD_1_E4FD8A243773EAFA_OFFSET UNITYSDK_OFFSET(0x1BAB6760)
#define CLASS_1_E69D257E5EB85381__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAB62E0)

inline static constexpr unsigned int Class_1_E69D257E5EB85381_TypeDefinitionIndex = 41022;

class Class_1_E69D257E5EB85381 : public ::System::Object
{
public:
	::Class_1_D33B7D6901AE39E9* FKINCGODJEP; // 0x10
	::Class_3_1A9D32B2B1D681B8* PDENFEFCAGN; // 0x18
	::System::Single COCJDAKNIAP; // 0x20
	::System::UInt32 EOMLMNOEKDJ; // 0x24

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::Class_3_1A9D32B2B1D681B8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_3_1A9D32B2B1D681B8*))((::PBYTE)hIl2Cpp + CLASS_1_E69D257E5EB85381__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E69D257E5EB85381_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_A6657EB260006AA7(::RPG::GameCore::MatchThreeScoreCurveRow* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MatchThreeScoreCurveRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E69D257E5EB85381_METHOD_1_A6657EB260006AA7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E4FD8A243773EAFA(::System::UInt32 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E69D257E5EB85381_METHOD_1_E4FD8A243773EAFA_OFFSET))(this, a1, a2, a3);
	}
};

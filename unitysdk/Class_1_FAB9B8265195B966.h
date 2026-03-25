#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_867B6CE75953535A;
class Class_3_1A9D32B2B1D681B8;
namespace RPG::GameCore { class MatchThreeScoreCurveRow; }

#define CLASS_1_FAB9B8265195B966_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16952DB0)
#define CLASS_1_FAB9B8265195B966_METHOD_1_3416DA89D93F6D5A_OFFSET UNITYSDK_OFFSET(0x169534E0)
#define CLASS_1_FAB9B8265195B966_METHOD_1_8DB17187C31F430D_OFFSET UNITYSDK_OFFSET(0x16953220)
#define CLASS_1_FAB9B8265195B966__CTOR_OFFSET UNITYSDK_OFFSET(0x16952DA0)

inline static constexpr unsigned int Class_1_FAB9B8265195B966_TypeDefinitionIndex = 32777;

class Class_1_FAB9B8265195B966 : public ::System::Object
{
public:
	::Class_3_1A9D32B2B1D681B8* Field_1_1; // 0x10
	::Class_1_867B6CE75953535A* Field_1_0; // 0x18
	::System::Single Field_1_3; // 0x20
	::System::UInt32 Field_1_2; // 0x24

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::Class_3_1A9D32B2B1D681B8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::Class_3_1A9D32B2B1D681B8*))((::PBYTE)hIl2Cpp + CLASS_1_FAB9B8265195B966__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAB9B8265195B966_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_3416DA89D93F6D5A(::RPG::GameCore::MatchThreeScoreCurveRow* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MatchThreeScoreCurveRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FAB9B8265195B966_METHOD_1_3416DA89D93F6D5A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8DB17187C31F430D(::System::UInt32 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FAB9B8265195B966_METHOD_1_8DB17187C31F430D_OFFSET))(this, a1, a2, a3);
	}
};

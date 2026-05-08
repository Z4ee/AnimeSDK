#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_1_1E79BD1FA24EE173;
class Class_1_1FCBF6F207BFD09E;
namespace MoleMole::HollowChessboard { class RenderSequenceBase; }
namespace System { class Action; }

#define CLASS_1_F770DB0C59960DC2_METHOD_1_11F68E4DD33305CC_OFFSET UNITYSDK_OFFSET(0x18D44E00)
#define CLASS_1_F770DB0C59960DC2_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x18D450C0)
#define CLASS_1_F770DB0C59960DC2_METHOD_1_25C9F225B3F3E301_OFFSET UNITYSDK_OFFSET(0x18D45050)
#define CLASS_1_F770DB0C59960DC2_METHOD_1_5E9A600407DC0D92_OFFSET UNITYSDK_OFFSET(0x18D44DF0)
#define CLASS_1_F770DB0C59960DC2_METHOD_1_65023B0E984198A1_OFFSET UNITYSDK_OFFSET(0x18D44F20)
#define CLASS_1_F770DB0C59960DC2_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x18D44EB0)
#define CLASS_1_F770DB0C59960DC2_METHOD_1_908CDC094010F209_OFFSET UNITYSDK_OFFSET(0x18D44EC0)
#define CLASS_1_F770DB0C59960DC2_METHOD_1_D4F7FEF919A69F61_OFFSET UNITYSDK_OFFSET(0x18D44F10)
#define CLASS_1_F770DB0C59960DC2__CTOR_OFFSET UNITYSDK_OFFSET(0x18D44DE0)

inline static constexpr unsigned int Class_1_F770DB0C59960DC2_TypeDefinitionIndex = 52862;

class Class_1_F770DB0C59960DC2 : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::RenderSequenceBase* Field_1_1; // 0x10
	::Class_1_1E79BD1FA24EE173* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F770DB0C59960DC2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5E9A600407DC0D92(::MoleMole::HollowChessboard::RenderSequenceBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::RenderSequenceBase*))((::PBYTE)hIl2Cpp + CLASS_1_F770DB0C59960DC2_METHOD_1_5E9A600407DC0D92_OFFSET))(this, a1);
	}

	::System::Void Method_1_11F68E4DD33305CC(::MoleMole::HollowChessboard::RenderSequenceBase* a1, ::Class_1_1FCBF6F207BFD09E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::RenderSequenceBase*, ::Class_1_1FCBF6F207BFD09E*))((::PBYTE)hIl2Cpp + CLASS_1_F770DB0C59960DC2_METHOD_1_11F68E4DD33305CC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_1E79BD1FA24EE173* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1E79BD1FA24EE173*))((::PBYTE)hIl2Cpp + CLASS_1_F770DB0C59960DC2_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Void Method_1_908CDC094010F209()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F770DB0C59960DC2_METHOD_1_908CDC094010F209_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::RenderSequenceBase* Method_1_D4F7FEF919A69F61()
	{
		return ((::MoleMole::HollowChessboard::RenderSequenceBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F770DB0C59960DC2_METHOD_1_D4F7FEF919A69F61_OFFSET))(this);
	}

	::System::Boolean Method_1_65023B0E984198A1(::System::Int32 a1, ::System::UInt64 a2, ::MoleMole::HollowChessboard::HollowCell a3, ::System::Action* a4, ::System::Action* a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt64, ::MoleMole::HollowChessboard::HollowCell, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F770DB0C59960DC2_METHOD_1_65023B0E984198A1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_25C9F225B3F3E301(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F770DB0C59960DC2_METHOD_1_25C9F225B3F3E301_OFFSET))(this, a1);
	}

	::Class_1_1E79BD1FA24EE173* Method_1_24748FC20F375725()
	{
		return ((::Class_1_1E79BD1FA24EE173*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F770DB0C59960DC2_METHOD_1_24748FC20F375725_OFFSET))(this);
	}
};

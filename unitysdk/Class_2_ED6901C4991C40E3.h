#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_182.h"

class Class_1_F9FBCC956DFCF137_17;
class Class_1_FD611945730E269E;
namespace RPG::GameCore { class ChimeraDuelPlayAnimationNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_ED6901C4991C40E3_METHOD_2_98FE8344617B99D4_OFFSET UNITYSDK_OFFSET(0x92A0210)
#define CLASS_2_ED6901C4991C40E3__CTOR_OFFSET UNITYSDK_OFFSET(0x92A02B0)

inline static constexpr unsigned int Class_2_ED6901C4991C40E3_TypeDefinitionIndex = 71272;

class Class_2_ED6901C4991C40E3 : public ::Class_1_43BD383C98B4C0C5_182
{
public:
	::RPG::GameCore::ChimeraDuelPlayAnimationNode* Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED6901C4991C40E3__CTOR_OFFSET))(this);
	}

	::Class_1_FD611945730E269E* Method_2_98FE8344617B99D4(::Class_1_F9FBCC956DFCF137_17* a1)
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_17*))((::PBYTE)hIl2Cpp + CLASS_2_ED6901C4991C40E3_METHOD_2_98FE8344617B99D4_OFFSET))(this, a1);
	}
};

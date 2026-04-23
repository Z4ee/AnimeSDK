#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_182.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_F9FBCC956DFCF137_17;
class Class_1_FD611945730E269E;
namespace RPG::GameCore { class ChimeraDuelSwapPositionNode; }

#define CLASS_2_48960C526AFA0F72_METHOD_2_98FE8344617B99D4_OFFSET UNITYSDK_OFFSET(0x11840470)
#define CLASS_2_48960C526AFA0F72__CTOR_OFFSET UNITYSDK_OFFSET(0x11840510)

inline static constexpr unsigned int Class_2_48960C526AFA0F72_TypeDefinitionIndex = 71279;

class Class_2_48960C526AFA0F72 : public ::Class_1_43BD383C98B4C0C5_182
{
public:
	::RPG::GameCore::ChimeraDuelSwapPositionNode* Field_2_2; // 0x10
	::System::Nullable_1<::System::Int32> Field_2_1; // 0x18
	::System::Nullable_1<::System::Int32> Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48960C526AFA0F72__CTOR_OFFSET))(this);
	}

	::Class_1_FD611945730E269E* Method_2_98FE8344617B99D4(::Class_1_F9FBCC956DFCF137_17* a1)
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_17*))((::PBYTE)hIl2Cpp + CLASS_2_48960C526AFA0F72_METHOD_2_98FE8344617B99D4_OFFSET))(this, a1);
	}
};

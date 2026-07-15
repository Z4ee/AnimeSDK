#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_199.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_F9FBCC956DFCF137_25;
class Class_1_FD611945730E269E;
namespace RPG::GameCore { class ChimeraDuelSwapPositionNode; }

#define CLASS_2_48960C526AFA0F72_METHOD_2_98FE8344617B99D4_OFFSET UNITYSDK_OFFSET(0x16B54E60)
#define CLASS_2_48960C526AFA0F72__CTOR_OFFSET UNITYSDK_OFFSET(0x16B54F00)

inline static constexpr unsigned int Class_2_48960C526AFA0F72_TypeDefinitionIndex = 73742;

class Class_2_48960C526AFA0F72 : public ::Class_1_43BD383C98B4C0C5_199
{
public:
	::RPG::GameCore::ChimeraDuelSwapPositionNode* Field_2_0; // 0x10
	::System::Nullable_1<::System::Int32> Field_2_1; // 0x18
	::System::Nullable_1<::System::Int32> Field_2_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_48960C526AFA0F72__CTOR_OFFSET))(this);
	}

	::Class_1_FD611945730E269E* Method_2_98FE8344617B99D4(::Class_1_F9FBCC956DFCF137_25* a1)
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_25*))((::PBYTE)hIl2Cpp + CLASS_2_48960C526AFA0F72_METHOD_2_98FE8344617B99D4_OFFSET))(this, a1);
	}
};

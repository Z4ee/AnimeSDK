#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_182.h"

class Class_1_F9FBCC956DFCF137_17;
class Class_1_FD611945730E269E;
namespace RPG::GameCore { class ChimeraDuelWaitReplaceEffectNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E589B92B72E31228_METHOD_2_3C6CBBFA8E8A125D_OFFSET UNITYSDK_OFFSET(0x9869080)
#define CLASS_2_E589B92B72E31228__CTOR_OFFSET UNITYSDK_OFFSET(0x9869180)

inline static constexpr unsigned int Class_2_E589B92B72E31228_TypeDefinitionIndex = 71282;

class Class_2_E589B92B72E31228 : public ::Class_1_43BD383C98B4C0C5_182
{
public:
	::RPG::GameCore::ChimeraDuelWaitReplaceEffectNode* Field_2_1; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E589B92B72E31228__CTOR_OFFSET))(this);
	}

	::Class_1_FD611945730E269E* Method_2_3C6CBBFA8E8A125D(::Class_1_F9FBCC956DFCF137_17* a1)
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_17*))((::PBYTE)hIl2Cpp + CLASS_2_E589B92B72E31228_METHOD_2_3C6CBBFA8E8A125D_OFFSET))(this, a1);
	}
};

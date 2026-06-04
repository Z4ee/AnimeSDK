#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_191.h"

class Class_1_F9FBCC956DFCF137_25;
class Class_1_FD611945730E269E;
namespace RPG::GameCore { class ChimeraDuelPlayEyeAnimationNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0393BDFE77651A18_METHOD_2_98FE8344617B99D4_OFFSET UNITYSDK_OFFSET(0xA4B2C50)
#define CLASS_2_0393BDFE77651A18__CTOR_OFFSET UNITYSDK_OFFSET(0xA4B2CF0)

inline static constexpr unsigned int Class_2_0393BDFE77651A18_TypeDefinitionIndex = 72211;

class Class_2_0393BDFE77651A18 : public ::Class_1_43BD383C98B4C0C5_191
{
public:
	::RPG::GameCore::ChimeraDuelPlayEyeAnimationNode* Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0393BDFE77651A18__CTOR_OFFSET))(this);
	}

	::Class_1_FD611945730E269E* Method_2_98FE8344617B99D4(::Class_1_F9FBCC956DFCF137_25* a1)
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_25*))((::PBYTE)hIl2Cpp + CLASS_2_0393BDFE77651A18_METHOD_2_98FE8344617B99D4_OFFSET))(this, a1);
	}
};

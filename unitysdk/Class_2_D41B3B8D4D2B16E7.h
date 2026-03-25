#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_176.h"

class Class_1_F9FBCC956DFCF137_14;
class Class_1_FD611945730E269E;
namespace RPG::GameCore { class ChimeraDuelDitherOutNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D41B3B8D4D2B16E7_METHOD_2_98FE8344617B99D4_OFFSET UNITYSDK_OFFSET(0x88B3FF0)
#define CLASS_2_D41B3B8D4D2B16E7__CTOR_OFFSET UNITYSDK_OFFSET(0x88B4090)

inline static constexpr unsigned int Class_2_D41B3B8D4D2B16E7_TypeDefinitionIndex = 63219;

class Class_2_D41B3B8D4D2B16E7 : public ::Class_1_43BD383C98B4C0C5_176
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x10
	::RPG::GameCore::ChimeraDuelDitherOutNode* Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D41B3B8D4D2B16E7__CTOR_OFFSET))(this);
	}

	::Class_1_FD611945730E269E* Method_2_98FE8344617B99D4(::Class_1_F9FBCC956DFCF137_14* a1)
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_14*))((::PBYTE)hIl2Cpp + CLASS_2_D41B3B8D4D2B16E7_METHOD_2_98FE8344617B99D4_OFFSET))(this, a1);
	}
};

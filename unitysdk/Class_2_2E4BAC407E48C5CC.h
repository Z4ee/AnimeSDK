#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_215.h"

class Class_1_F9FBCC956DFCF137_27;
class Class_1_FD611945730E269E;
namespace RPG::GameCore { class ChimeraDuelRepeatNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2E4BAC407E48C5CC_METHOD_2_149813AA398D1620_OFFSET UNITYSDK_OFFSET(0xC47BCB0)
#define CLASS_2_2E4BAC407E48C5CC__CTOR_OFFSET UNITYSDK_OFFSET(0xC47BCA0)

inline static constexpr unsigned int Class_2_2E4BAC407E48C5CC_TypeDefinitionIndex = 77694;

class Class_2_2E4BAC407E48C5CC : public ::Class_1_43BD383C98B4C0C5_215
{
public:
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_215*>*>* HAPEFBKFFOA; // 0x10
	::RPG::GameCore::ChimeraDuelRepeatNode* EABKOHGCHFP; // 0x18

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_215*>*>* a1, ::RPG::GameCore::ChimeraDuelRepeatNode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_215*>*>*, ::RPG::GameCore::ChimeraDuelRepeatNode*))((::PBYTE)hIl2Cpp + CLASS_2_2E4BAC407E48C5CC__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_FD611945730E269E* Method_2_149813AA398D1620(::Class_1_F9FBCC956DFCF137_27* a1)
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_27*))((::PBYTE)hIl2Cpp + CLASS_2_2E4BAC407E48C5CC_METHOD_2_149813AA398D1620_OFFSET))(this, a1);
	}
};

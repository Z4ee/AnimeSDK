#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_182.h"

class Class_1_F9FBCC956DFCF137_17;
class Class_1_FD611945730E269E;
namespace RPG::GameCore { class ChimeraDuelRepeatNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2E4BAC407E48C5CC_METHOD_2_149813AA398D1620_OFFSET UNITYSDK_OFFSET(0x12807FC0)
#define CLASS_2_2E4BAC407E48C5CC__CTOR_OFFSET UNITYSDK_OFFSET(0x12807FB0)

inline static constexpr unsigned int Class_2_2E4BAC407E48C5CC_TypeDefinitionIndex = 71275;

class Class_2_2E4BAC407E48C5CC : public ::Class_1_43BD383C98B4C0C5_182
{
public:
	::RPG::GameCore::ChimeraDuelRepeatNode* Field_2_1; // 0x10
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_182*>*>* Field_2_0; // 0x18

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_182*>*>* a1, ::RPG::GameCore::ChimeraDuelRepeatNode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_182*>*>*, ::RPG::GameCore::ChimeraDuelRepeatNode*))((::PBYTE)hIl2Cpp + CLASS_2_2E4BAC407E48C5CC__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_FD611945730E269E* Method_2_149813AA398D1620(::Class_1_F9FBCC956DFCF137_17* a1)
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_17*))((::PBYTE)hIl2Cpp + CLASS_2_2E4BAC407E48C5CC_METHOD_2_149813AA398D1620_OFFSET))(this, a1);
	}
};

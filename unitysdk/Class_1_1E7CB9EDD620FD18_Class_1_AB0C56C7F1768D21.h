#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MoleMole { class UIInLevelNPCNameWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1E7CB9EDD620FD18_CLASS_1_AB0C56C7F1768D21_METHOD_1_2CEDF7F35FF05E62_OFFSET UNITYSDK_OFFSET(0x175255C0)
#define CLASS_1_1E7CB9EDD620FD18_CLASS_1_AB0C56C7F1768D21__CTOR_OFFSET UNITYSDK_OFFSET(0x175255B0)

inline static constexpr unsigned int Class_1_1E7CB9EDD620FD18_Class_1_AB0C56C7F1768D21_TypeDefinitionIndex = 87376;

class Class_1_1E7CB9EDD620FD18_Class_1_AB0C56C7F1768D21 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::MoleMole::UIInLevelNPCNameWidgetController*>>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E7CB9EDD620FD18_CLASS_1_AB0C56C7F1768D21__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2CEDF7F35FF05E62(::System::UInt32 a1, ::MoleMole::UIInLevelNPCNameWidgetController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::UIInLevelNPCNameWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_1E7CB9EDD620FD18_CLASS_1_AB0C56C7F1768D21_METHOD_1_2CEDF7F35FF05E62_OFFSET))(this, a1, a2);
	}
};

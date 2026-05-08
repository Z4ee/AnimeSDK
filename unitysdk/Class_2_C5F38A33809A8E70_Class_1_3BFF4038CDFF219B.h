#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_C5F38A33809A8E70;
namespace MoleMole { class UIInLevelMainPageController; }
namespace System::Threading::Tasks { template <typename T> class TaskCompletionSource_1; }

#define CLASS_2_C5F38A33809A8E70_CLASS_1_3BFF4038CDFF219B_METHOD_1_5DDFC28E3C30F5A5_OFFSET UNITYSDK_OFFSET(0x156D7DD0)
#define CLASS_2_C5F38A33809A8E70_CLASS_1_3BFF4038CDFF219B__CTOR_OFFSET UNITYSDK_OFFSET(0x156D7DC0)

inline static constexpr unsigned int Class_2_C5F38A33809A8E70_Class_1_3BFF4038CDFF219B_TypeDefinitionIndex = 52371;

class Class_2_C5F38A33809A8E70_Class_1_3BFF4038CDFF219B : public ::System::Object
{
public:
	::System::Threading::Tasks::TaskCompletionSource_1<::System::Boolean>* Field_1_1; // 0x10
	::Class_2_C5F38A33809A8E70* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5F38A33809A8E70_CLASS_1_3BFF4038CDFF219B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5DDFC28E3C30F5A5(::MoleMole::UIInLevelMainPageController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelMainPageController*))((::PBYTE)hIl2Cpp + CLASS_2_C5F38A33809A8E70_CLASS_1_3BFF4038CDFF219B_METHOD_1_5DDFC28E3C30F5A5_OFFSET))(this, a1);
	}
};

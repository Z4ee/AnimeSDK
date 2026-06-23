#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_57525DBC0D6BD3E8;
namespace MoleMole { class UIInLevelMainPageController; }
namespace System::Threading::Tasks { template <typename T> class TaskCompletionSource_1; }

#define CLASS_2_57525DBC0D6BD3E8_CLASS_1_3BFF4038CDFF219B_METHOD_1_5DDFC28E3C30F5A5_OFFSET UNITYSDK_OFFSET(0x1174D4C0)
#define CLASS_2_57525DBC0D6BD3E8_CLASS_1_3BFF4038CDFF219B__CTOR_OFFSET UNITYSDK_OFFSET(0x1174D4B0)

inline static constexpr unsigned int Class_2_57525DBC0D6BD3E8_Class_1_3BFF4038CDFF219B_TypeDefinitionIndex = 41069;

class Class_2_57525DBC0D6BD3E8_Class_1_3BFF4038CDFF219B : public ::System::Object
{
public:
	::Class_2_57525DBC0D6BD3E8* Field_1_0; // 0x10
	::System::Threading::Tasks::TaskCompletionSource_1<::System::Boolean>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57525DBC0D6BD3E8_CLASS_1_3BFF4038CDFF219B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5DDFC28E3C30F5A5(::MoleMole::UIInLevelMainPageController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelMainPageController*))((::PBYTE)hIl2Cpp + CLASS_2_57525DBC0D6BD3E8_CLASS_1_3BFF4038CDFF219B_METHOD_1_5DDFC28E3C30F5A5_OFFSET))(this, a1);
	}
};

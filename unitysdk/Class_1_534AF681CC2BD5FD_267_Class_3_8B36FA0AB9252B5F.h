#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AB4261DB06E3A6BD.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Enum_3_ABCAEFDF06E3479A.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_5_AF65C3A968E836D2;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_534AF681CC2BD5FD_267_CLASS_3_8B36FA0AB9252B5F_METHOD_3_2FA22A822BDD19EE_OFFSET UNITYSDK_OFFSET(0x180B9470)
#define CLASS_1_534AF681CC2BD5FD_267_CLASS_3_8B36FA0AB9252B5F_METHOD_3_FD7FAC254C4EEC84_OFFSET UNITYSDK_OFFSET(0x180B9700)
#define CLASS_1_534AF681CC2BD5FD_267_CLASS_3_8B36FA0AB9252B5F__CTOR_OFFSET UNITYSDK_OFFSET(0x180B96C0)

inline static constexpr unsigned int Class_1_534AF681CC2BD5FD_267_Class_3_8B36FA0AB9252B5F_TypeDefinitionIndex = 41632;

class Class_1_534AF681CC2BD5FD_267_Class_3_8B36FA0AB9252B5F : public ::Class_2_AB4261DB06E3A6BD
{
public:
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_3_1; // 0x40
	::Class_5_AF65C3A968E836D2* Field_3_2; // 0x48
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* Field_3_0; // 0x50
	::System::Boolean Field_3_3; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_267_CLASS_3_8B36FA0AB9252B5F__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_2FA22A822BDD19EE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_267_CLASS_3_8B36FA0AB9252B5F_METHOD_3_2FA22A822BDD19EE_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_3_FD7FAC254C4EEC84(::Class_5_AF65C3A968E836D2* a1, ::MoleMole::HollowChessboard::HollowCell a2, ::Enum_3_ABCAEFDF06E3479A a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_5_AF65C3A968E836D2*, ::MoleMole::HollowChessboard::HollowCell, ::Enum_3_ABCAEFDF06E3479A))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_267_CLASS_3_8B36FA0AB9252B5F_METHOD_3_FD7FAC254C4EEC84_OFFSET))(this, a1, a2, a3);
	}
};

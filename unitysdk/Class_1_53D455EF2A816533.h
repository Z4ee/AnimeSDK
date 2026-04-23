#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_867B6CE75953535A;
class Class_2_9850514C0F89B91A;
class Class_3_7E25C9E6907AC48F;
namespace Entitas { template <typename T> class IMatcher_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_53D455EF2A816533_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18024430)
#define CLASS_1_53D455EF2A816533_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x18025EC0)
#define CLASS_1_53D455EF2A816533_METHOD_1_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0x18026590)
#define CLASS_1_53D455EF2A816533_METHOD_1_6112A1276899AF0F_OFFSET UNITYSDK_OFFSET(0x18025950)
#define CLASS_1_53D455EF2A816533_ONHIT_OFFSET UNITYSDK_OFFSET(0x18025FE0)
#define CLASS_1_53D455EF2A816533__CTOR_OFFSET UNITYSDK_OFFSET(0x180243C0)

inline static constexpr unsigned int Class_1_53D455EF2A816533_TypeDefinitionIndex = 38655;

class Class_1_53D455EF2A816533 : public ::System::Object
{
public:
	::Entitas::IMatcher_1<::Class_2_9850514C0F89B91A*>* Field_1_3; // 0x10
	::Class_1_867B6CE75953535A* Field_1_4; // 0x18
	::System::Collections::Generic::List_1<::Class_2_9850514C0F89B91A*>* Field_1_2; // 0x20
	::Class_3_7E25C9E6907AC48F* Field_1_5; // 0x28
	::System::Boolean Field_1_0; // 0x30
	::System::Boolean Field_1_1; // 0x31

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::Class_3_7E25C9E6907AC48F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::Class_3_7E25C9E6907AC48F*))((::PBYTE)hIl2Cpp + CLASS_1_53D455EF2A816533__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53D455EF2A816533_EXECUTE_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53D455EF2A816533_INITIALIZE_OFFSET))(this);
	}

	::System::Void OnHit(::Class_2_9850514C0F89B91A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9850514C0F89B91A*))((::PBYTE)hIl2Cpp + CLASS_1_53D455EF2A816533_ONHIT_OFFSET))(this, a1);
	}

	::System::Void Method_1_6112A1276899AF0F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53D455EF2A816533_METHOD_1_6112A1276899AF0F_OFFSET))(this);
	}

	::System::Void Method_1_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53D455EF2A816533_METHOD_1_489E0B827662C211_OFFSET))(this);
	}
};

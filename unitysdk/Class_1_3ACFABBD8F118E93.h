#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_3ACFABBD8F118E93_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x129252F0)
#define CLASS_1_3ACFABBD8F118E93_METHOD_1_3EF33FD8BF224359_1_OFFSET UNITYSDK_OFFSET(0x129255E0)
#define CLASS_1_3ACFABBD8F118E93_METHOD_1_3EF33FD8BF224359_OFFSET UNITYSDK_OFFSET(0x129254C0)
#define CLASS_1_3ACFABBD8F118E93_METHOD_1_A9D0098EE09DF11B_OFFSET UNITYSDK_OFFSET(0x129253A0)
#define CLASS_1_3ACFABBD8F118E93__CTOR_OFFSET UNITYSDK_OFFSET(0x12925230)

inline static constexpr unsigned int Class_1_3ACFABBD8F118E93_TypeDefinitionIndex = 43809;

class Class_1_3ACFABBD8F118E93 : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* Field_1_1; // 0x10
	::MoleMole::UIBaseController* Field_1_2; // 0x18
	::System::Boolean Field_1_0; // 0x20
	::System::Boolean Field_1_7; // 0x21

	::System::Void _ctor(::MoleMole::UIBaseController* a1, ::System::Action_1<::System::Int32>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::System::Action_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3ACFABBD8F118E93__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A9D0098EE09DF11B(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3ACFABBD8F118E93_METHOD_1_A9D0098EE09DF11B_OFFSET))(this, a1);
	}

	::System::Void Method_1_3EF33FD8BF224359(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3ACFABBD8F118E93_METHOD_1_3EF33FD8BF224359_OFFSET))(this, a1);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3ACFABBD8F118E93_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_3EF33FD8BF224359_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3ACFABBD8F118E93_METHOD_1_3EF33FD8BF224359_1_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B7E341C5F1A6F199;
namespace MoleMole { class UIWindowController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_82AA482480B2469F_METHOD_1_24875BCD7957A181_OFFSET UNITYSDK_OFFSET(0x15B7DC00)
#define CLASS_1_82AA482480B2469F_METHOD_1_8F059A365E90744C_OFFSET UNITYSDK_OFFSET(0x15B7D920)
#define CLASS_1_82AA482480B2469F_METHOD_1_CA44537EF3464510_OFFSET UNITYSDK_OFFSET(0x15B7D5F0)
#define CLASS_1_82AA482480B2469F_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x15B7DAF0)
#define CLASS_1_82AA482480B2469F__CTOR_OFFSET UNITYSDK_OFFSET(0x15B7D5E0)

inline static constexpr unsigned int Class_1_82AA482480B2469F_TypeDefinitionIndex = 43111;

class Class_1_82AA482480B2469F : public ::System::Object
{
public:
	::System::Action_1<::Class_1_B7E341C5F1A6F199*>* Field_1_1; // 0x10
	::MoleMole::UIWindowController* Field_1_3; // 0x18
	::System::Action* Field_1_0; // 0x20
	::System::Boolean Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82AA482480B2469F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA44537EF3464510(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_1_82AA482480B2469F_METHOD_1_CA44537EF3464510_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82AA482480B2469F_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	static ::System::Boolean Method_1_8F059A365E90744C()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_82AA482480B2469F_METHOD_1_8F059A365E90744C_OFFSET))();
	}

	::System::Void Method_1_24875BCD7957A181(::MoleMole::UIWindowController* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_82AA482480B2469F_METHOD_1_24875BCD7957A181_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5B9C6A6280E9B7AE.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define CLASS_3_E0C84BB1B28B35FB_9_METHOD_3_AE7ACA9431B8342C_OFFSET UNITYSDK_OFFSET(0x1194D7E0)
#define CLASS_3_E0C84BB1B28B35FB_9_METHOD_3_CEE72EAC18ECC163_OFFSET UNITYSDK_OFFSET(0x1194D770)
#define CLASS_3_E0C84BB1B28B35FB_9__CTOR_OFFSET UNITYSDK_OFFSET(0x1194D6C0)

inline static constexpr unsigned int Class_3_E0C84BB1B28B35FB_9_TypeDefinitionIndex = 70057;

class Class_3_E0C84BB1B28B35FB_9 : public ::Class_2_5B9C6A6280E9B7AE
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_E0C84BB1B28B35FB_9__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_CEE72EAC18ECC163(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_E0C84BB1B28B35FB_9_METHOD_3_CEE72EAC18ECC163_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_AE7ACA9431B8342C(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_E0C84BB1B28B35FB_9_METHOD_3_AE7ACA9431B8342C_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5B9C6A6280E9B7AE.h"

namespace MoleMole { class SystemSettingEntryBase; }

#define CLASS_3_E0C84BB1B28B35FB_13_METHOD_3_AE7ACA9431B8342C_1_OFFSET UNITYSDK_OFFSET(0x15C97BA0)
#define CLASS_3_E0C84BB1B28B35FB_13_METHOD_3_AE7ACA9431B8342C_OFFSET UNITYSDK_OFFSET(0x15C97B50)
#define CLASS_3_E0C84BB1B28B35FB_13__CTOR_OFFSET UNITYSDK_OFFSET(0x15C97AA0)

inline static constexpr unsigned int Class_3_E0C84BB1B28B35FB_13_TypeDefinitionIndex = 84156;

class Class_3_E0C84BB1B28B35FB_13 : public ::Class_2_5B9C6A6280E9B7AE
{
public:
	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_E0C84BB1B28B35FB_13__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_3_AE7ACA9431B8342C(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_E0C84BB1B28B35FB_13_METHOD_3_AE7ACA9431B8342C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_AE7ACA9431B8342C_1(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_E0C84BB1B28B35FB_13_METHOD_3_AE7ACA9431B8342C_1_OFFSET))(this, a1, a2);
	}
};

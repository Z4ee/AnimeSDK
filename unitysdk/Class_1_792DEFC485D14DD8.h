#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }

#define CLASS_1_792DEFC485D14DD8_METHOD_1_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0x12ABA760)
#define CLASS_1_792DEFC485D14DD8_METHOD_1_38BA80D7E8940669_OFFSET UNITYSDK_OFFSET(0x12ABAB00)
#define CLASS_1_792DEFC485D14DD8_METHOD_1_3E7178C5ECF017DB_1_OFFSET UNITYSDK_OFFSET(0x12ABACB0)
#define CLASS_1_792DEFC485D14DD8_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x12ABAC60)
#define CLASS_1_792DEFC485D14DD8__CTOR_OFFSET UNITYSDK_OFFSET(0x12ABA750)

inline static constexpr unsigned int Class_1_792DEFC485D14DD8_TypeDefinitionIndex = 73866;

class Class_1_792DEFC485D14DD8 : public ::System::Object
{
public:
	::System::Boolean Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x11

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_792DEFC485D14DD8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0076C796B2045359()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_792DEFC485D14DD8_METHOD_1_0076C796B2045359_OFFSET))(this);
	}

	::System::Void Method_1_38BA80D7E8940669(::MiHoYo::SDK::JSONNode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_792DEFC485D14DD8_METHOD_1_38BA80D7E8940669_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_792DEFC485D14DD8_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_792DEFC485D14DD8_METHOD_1_3E7178C5ECF017DB_1_OFFSET))(this, a1);
	}
};

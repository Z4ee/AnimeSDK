#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }

#define CLASS_1_B2B73EA4894E6E27_METHOD_1_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0x1557FBD0)
#define CLASS_1_B2B73EA4894E6E27_METHOD_1_3E7178C5ECF017DB_1_OFFSET UNITYSDK_OFFSET(0x155800D0)
#define CLASS_1_B2B73EA4894E6E27_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x1557FB80)
#define CLASS_1_B2B73EA4894E6E27_METHOD_1_486F05D6CB334013_OFFSET UNITYSDK_OFFSET(0x1557FF70)
#define CLASS_1_B2B73EA4894E6E27__CTOR_OFFSET UNITYSDK_OFFSET(0x1557FB70)

inline static constexpr unsigned int Class_1_B2B73EA4894E6E27_TypeDefinitionIndex = 50583;

class Class_1_B2B73EA4894E6E27 : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10
	::System::Boolean Field_1_7; // 0x11

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2B73EA4894E6E27__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B2B73EA4894E6E27_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_0076C796B2045359()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2B73EA4894E6E27_METHOD_1_0076C796B2045359_OFFSET))(this);
	}

	::System::Void Method_1_486F05D6CB334013(::MiHoYo::SDK::JSONNode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_B2B73EA4894E6E27_METHOD_1_486F05D6CB334013_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B2B73EA4894E6E27_METHOD_1_3E7178C5ECF017DB_1_OFFSET))(this, a1);
	}
};

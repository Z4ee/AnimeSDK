#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B4357A1C72BABC6B_1;
class Class_3_99BC749707F2A8AC;

#define CLASS_1_8E042314AFF884FB_5_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBACE9A0)
#define CLASS_1_8E042314AFF884FB_5_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xBACE960)
#define CLASS_1_8E042314AFF884FB_5_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xBACE900)
#define CLASS_1_8E042314AFF884FB_5_METHOD_1_7EAA8879197594BA_OFFSET UNITYSDK_OFFSET(0xBACEA30)
#define CLASS_1_8E042314AFF884FB_5__CTOR_OFFSET UNITYSDK_OFFSET(0xBACE8F0)

inline static constexpr unsigned int Class_1_8E042314AFF884FB_5_TypeDefinitionIndex = 70416;

class Class_1_8E042314AFF884FB_5 : public ::System::Object
{
public:
	::Class_1_B4357A1C72BABC6B_1* Field_1_0; // 0x10
	::Class_3_99BC749707F2A8AC* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_B4357A1C72BABC6B_1* a1, ::Class_3_99BC749707F2A8AC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4357A1C72BABC6B_1*, ::Class_3_99BC749707F2A8AC*))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_5_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_5_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_5_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_7EAA8879197594BA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_5_METHOD_1_7EAA8879197594BA_OFFSET))(this);
	}
};

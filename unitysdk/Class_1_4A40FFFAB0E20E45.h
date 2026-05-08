#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1480BFA419A4783B.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_5_A6F8D19602712D95;

#define CLASS_1_4A40FFFAB0E20E45_METHOD_1_50728125711E6890_OFFSET UNITYSDK_OFFSET(0xFF2E760)
#define CLASS_1_4A40FFFAB0E20E45_METHOD_1_E5450F0F4A0D17BE_OFFSET UNITYSDK_OFFSET(0xFF2E440)
#define CLASS_1_4A40FFFAB0E20E45_METHOD_1_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0xFF2E300)
#define CLASS_1_4A40FFFAB0E20E45__CTOR_OFFSET UNITYSDK_OFFSET(0xFF2E2B0)

inline static constexpr unsigned int Class_1_4A40FFFAB0E20E45_TypeDefinitionIndex = 44742;

class Class_1_4A40FFFAB0E20E45 : public ::System::Object
{
public:
	::Il2CppArray<::Struct_2_1480BFA419A4783B>* Field_1_0; // 0x10
	::Class_5_A6F8D19602712D95* Field_1_1; // 0x18

	::System::Void _ctor(::Class_5_A6F8D19602712D95* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_A6F8D19602712D95*))((::PBYTE)hIl2Cpp + CLASS_1_4A40FFFAB0E20E45__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A40FFFAB0E20E45_METHOD_1_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::System::Void Method_1_E5450F0F4A0D17BE(::System::Int32 a1, ::UnityEngine::Vector4 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + CLASS_1_4A40FFFAB0E20E45_METHOD_1_E5450F0F4A0D17BE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_50728125711E6890(::System::Int32 a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_4A40FFFAB0E20E45_METHOD_1_50728125711E6890_OFFSET))(this, a1, a2);
	}
};

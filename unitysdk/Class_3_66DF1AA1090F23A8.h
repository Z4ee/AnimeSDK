#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CEC393DDA7BD65D6.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_E85C6B6436A9E3DA;
class Class_2_1C9B0E3720C0F1AC;
class Class_4_E9A048EC2D3C7A0F;

#define CLASS_3_66DF1AA1090F23A8_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1E294E00)
#define CLASS_3_66DF1AA1090F23A8_METHOD_3_5F796255E2A59008_OFFSET UNITYSDK_OFFSET(0x1E294900)
#define CLASS_3_66DF1AA1090F23A8_METHOD_3_64C4E7CA4310955F_OFFSET UNITYSDK_OFFSET(0x1E2944B0)
#define CLASS_3_66DF1AA1090F23A8_METHOD_3_70437D85C11C5222_OFFSET UNITYSDK_OFFSET(0x1E2943B0)
#define CLASS_3_66DF1AA1090F23A8_METHOD_3_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x1E294EA0)
#define CLASS_3_66DF1AA1090F23A8_METHOD_3_F569E9E3E2552409_OFFSET UNITYSDK_OFFSET(0x1E294B50)
#define CLASS_3_66DF1AA1090F23A8__CTOR_OFFSET UNITYSDK_OFFSET(0x1E294D80)

inline static constexpr unsigned int Class_3_66DF1AA1090F23A8_TypeDefinitionIndex = 89353;

class Class_3_66DF1AA1090F23A8 : public ::Class_2_CEC393DDA7BD65D6
{
public:
	// static const ::System::Single Field_3_2; // 0x0
	::Class_4_E9A048EC2D3C7A0F* Field_3_0; // 0x28
	::Class_2_1C9B0E3720C0F1AC* Field_3_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_66DF1AA1090F23A8__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_70437D85C11C5222(::Class_1_E85C6B6436A9E3DA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E85C6B6436A9E3DA*))((::PBYTE)hIl2Cpp + CLASS_3_66DF1AA1090F23A8_METHOD_3_70437D85C11C5222_OFFSET))(this, a1);
	}

	::System::Void Method_3_64C4E7CA4310955F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_66DF1AA1090F23A8_METHOD_3_64C4E7CA4310955F_OFFSET))(this, a1);
	}

	::System::Void Method_3_5F796255E2A59008(::UnityEngine::Vector2 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_66DF1AA1090F23A8_METHOD_3_5F796255E2A59008_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_66DF1AA1090F23A8_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_3_E9A575D18A0748D9(::Class_1_E85C6B6436A9E3DA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E85C6B6436A9E3DA*))((::PBYTE)hIl2Cpp + CLASS_3_66DF1AA1090F23A8_METHOD_3_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_3_F569E9E3E2552409(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_66DF1AA1090F23A8_METHOD_3_F569E9E3E2552409_OFFSET))(this, a1, a2, a3);
	}
};

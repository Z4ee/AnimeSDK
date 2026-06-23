#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BE235142CB1602BA.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_6378A8AD9A7CDBB8_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x13D225E0)
#define CLASS_1_6378A8AD9A7CDBB8_METHOD_1_552D496EA04A027D_OFFSET UNITYSDK_OFFSET(0x13D224F0)
#define CLASS_1_6378A8AD9A7CDBB8_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x13D226B0)
#define CLASS_1_6378A8AD9A7CDBB8_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13D22650)
#define CLASS_1_6378A8AD9A7CDBB8_METHOD_1_D2038C9A874038B4_OFFSET UNITYSDK_OFFSET(0x13D226C0)
#define CLASS_1_6378A8AD9A7CDBB8_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13D226A0)
#define CLASS_1_6378A8AD9A7CDBB8__CTOR_OFFSET UNITYSDK_OFFSET(0x13D224E0)

inline static constexpr unsigned int Class_1_6378A8AD9A7CDBB8_TypeDefinitionIndex = 77241;

class Class_1_6378A8AD9A7CDBB8 : public ::System::Object
{
public:
	::Struct_2_BE235142CB1602BA Field_1_4; // 0x10
	::System::Boolean Field_1_0; // 0x18
	::System::Single Field_1_3; // 0x1C
	::System::Single Field_1_1; // 0x20
	::System::Single Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6378A8AD9A7CDBB8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_552D496EA04A027D(::System::Single a1, ::System::Single a2, ::UnityEngine::AnimationCurve* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_6378A8AD9A7CDBB8_METHOD_1_552D496EA04A027D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6378A8AD9A7CDBB8_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6378A8AD9A7CDBB8_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6378A8AD9A7CDBB8_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6378A8AD9A7CDBB8_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Single Method_1_D2038C9A874038B4(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6378A8AD9A7CDBB8_METHOD_1_D2038C9A874038B4_OFFSET))(this, a1);
	}
};

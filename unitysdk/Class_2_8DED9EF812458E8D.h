#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0A3B9FD0FE703FDC.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_B9E8C2EEAA5C96EC;

#define CLASS_2_8DED9EF812458E8D_CLEAR_OFFSET UNITYSDK_OFFSET(0x1AE28B80)
#define CLASS_2_8DED9EF812458E8D_METHOD_2_A701DEC73862FAFB_OFFSET UNITYSDK_OFFSET(0x1AE29110)
#define CLASS_2_8DED9EF812458E8D_METHOD_2_FBDF3AC54A4E4976_OFFSET UNITYSDK_OFFSET(0x1AE28D50)
#define CLASS_2_8DED9EF812458E8D__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE29310)

inline static constexpr unsigned int Class_2_8DED9EF812458E8D_TypeDefinitionIndex = 40939;

class Class_2_8DED9EF812458E8D : public ::Class_1_0A3B9FD0FE703FDC
{
public:
	::UnityEngine::Vector3 Field_2_0; // 0x338
	::System::Single Field_2_1; // 0x344
	::System::Boolean Field_2_2; // 0x348
	::System::Boolean Field_2_3; // 0x349
	::System::Boolean Field_2_4; // 0x34A
	::UnityEngine::Vector3 Field_2_5; // 0x34C
	::UnityEngine::Vector3 Field_2_6; // 0x358
	::System::UInt32 Field_2_7; // 0x364

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DED9EF812458E8D__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DED9EF812458E8D_CLEAR_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 Method_2_FBDF3AC54A4E4976(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::Class_2_B9E8C2EEAA5C96EC*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8DED9EF812458E8D_METHOD_2_FBDF3AC54A4E4976_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_2_A701DEC73862FAFB(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::Class_2_B9E8C2EEAA5C96EC*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8DED9EF812458E8D_METHOD_2_A701DEC73862FAFB_OFFSET))(a1, a2, a3);
	}
};

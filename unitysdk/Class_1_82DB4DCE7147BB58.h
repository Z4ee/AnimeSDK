#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_82DB4DCE7147BB58_METHOD_1_07D85B0E6DD64F49_OFFSET UNITYSDK_OFFSET(0xEC27860)
#define CLASS_1_82DB4DCE7147BB58_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xEC27AF0)
#define CLASS_1_82DB4DCE7147BB58__CTOR_OFFSET UNITYSDK_OFFSET(0xEC27850)

inline static constexpr unsigned int Class_1_82DB4DCE7147BB58_TypeDefinitionIndex = 52096;

class Class_1_82DB4DCE7147BB58 : public ::System::Object
{
public:
	::System::Single Field_1_0; // 0x10
	::System::Nullable_1<::UnityEngine::Vector3> Field_1_2; // 0x14
	::System::Single Field_1_1; // 0x24
	::System::Nullable_1<::UnityEngine::Vector3> Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82DB4DCE7147BB58__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_07D85B0E6DD64F49(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_82DB4DCE7147BB58_METHOD_1_07D85B0E6DD64F49_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82DB4DCE7147BB58_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};

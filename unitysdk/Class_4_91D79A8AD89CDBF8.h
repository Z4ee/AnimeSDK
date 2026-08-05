#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_55230CEF110DAF7B_1.h"
#include "unitysdk/Enum_3_4D319CC539272284.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_61A5922E5046F385_2;

#define CLASS_4_91D79A8AD89CDBF8_METHOD_4_8F08AC96A860E38E_OFFSET UNITYSDK_OFFSET(0x18B8AE80)
#define CLASS_4_91D79A8AD89CDBF8_METHOD_4_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x18B8AE40)
#define CLASS_4_91D79A8AD89CDBF8__CTOR_OFFSET UNITYSDK_OFFSET(0x18B8AE50)

inline static constexpr unsigned int Class_4_91D79A8AD89CDBF8_TypeDefinitionIndex = 85579;

class Class_4_91D79A8AD89CDBF8 : public ::Class_3_55230CEF110DAF7B_1
{
public:
	::System::Nullable_1<::UnityEngine::Vector3> Field_4_0; // 0x10
	::System::Single Field_4_1; // 0x20

	::System::Void _ctor(::System::Single a1, ::System::Nullable_1<::UnityEngine::Vector3> a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + CLASS_4_91D79A8AD89CDBF8__CTOR_OFFSET))(this, a1, a2);
	}

	::Enum_3_4D319CC539272284 Method_4_A96DCA30C6927810()
	{
		return ((::Enum_3_4D319CC539272284(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_91D79A8AD89CDBF8_METHOD_4_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Boolean Method_4_8F08AC96A860E38E(::Class_3_61A5922E5046F385_2* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_61A5922E5046F385_2*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_91D79A8AD89CDBF8_METHOD_4_8F08AC96A860E38E_OFFSET))(this, a1, a2);
	}
};

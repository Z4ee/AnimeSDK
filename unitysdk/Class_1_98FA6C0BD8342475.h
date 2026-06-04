#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_98FA6C0BD8342475_DeformMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_98FA6C0BD8342475_ItemData;

#define CLASS_1_98FA6C0BD8342475_METHOD_1_0A437F0E260C4453_OFFSET UNITYSDK_OFFSET(0xAADF4A0)
#define CLASS_1_98FA6C0BD8342475_METHOD_1_13F0FEDB1C58AAEC_OFFSET UNITYSDK_OFFSET(0xAADF7D0)
#define CLASS_1_98FA6C0BD8342475_METHOD_1_2C23AB11F18D0984_OFFSET UNITYSDK_OFFSET(0xAADF850)
#define CLASS_1_98FA6C0BD8342475_METHOD_1_D2F0563CF77B4C21_OFFSET UNITYSDK_OFFSET(0xAAE0200)
#define CLASS_1_98FA6C0BD8342475__CTOR_OFFSET UNITYSDK_OFFSET(0xAAE02B0)

inline static constexpr unsigned int Class_1_98FA6C0BD8342475_TypeDefinitionIndex = 46109;

class Class_1_98FA6C0BD8342475 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98FA6C0BD8342475__CTOR_OFFSET))(this);
	}

	static ::Class_1_98FA6C0BD8342475_ItemData* Method_1_0A437F0E260C4453(::UnityEngine::Vector4 a1, ::Class_1_98FA6C0BD8342475_DeformMode a2)
	{
		return ((::Class_1_98FA6C0BD8342475_ItemData*(*)(::UnityEngine::Vector4, ::Class_1_98FA6C0BD8342475_DeformMode))((::PBYTE)hIl2Cpp + CLASS_1_98FA6C0BD8342475_METHOD_1_0A437F0E260C4453_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector4 Method_1_2C23AB11F18D0984(::Class_1_98FA6C0BD8342475_ItemData* a1, ::Class_1_98FA6C0BD8342475_DeformMode a2)
	{
		return ((::UnityEngine::Vector4(*)(::Class_1_98FA6C0BD8342475_ItemData*, ::Class_1_98FA6C0BD8342475_DeformMode))((::PBYTE)hIl2Cpp + CLASS_1_98FA6C0BD8342475_METHOD_1_2C23AB11F18D0984_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_13F0FEDB1C58AAEC(::System::UInt32 a1)
	{
		return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_98FA6C0BD8342475_METHOD_1_13F0FEDB1C58AAEC_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_D2F0563CF77B4C21(::System::Single a1)
	{
		return ((::System::UInt32(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_98FA6C0BD8342475_METHOD_1_D2F0563CF77B4C21_OFFSET))(a1);
	}
};

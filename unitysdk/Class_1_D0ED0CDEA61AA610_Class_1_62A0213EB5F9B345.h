#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D0ED0CDEA61AA610_Class_1_99864A5AECFC1D07;

#define CLASS_1_D0ED0CDEA61AA610_CLASS_1_62A0213EB5F9B345_EQUALS_OFFSET UNITYSDK_OFFSET(0x143E2590)
#define CLASS_1_D0ED0CDEA61AA610_CLASS_1_62A0213EB5F9B345_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x143E26A0)
#define CLASS_1_D0ED0CDEA61AA610_CLASS_1_62A0213EB5F9B345__CTOR_OFFSET UNITYSDK_OFFSET(0x143E0F80)
#define CLASS_1_D0ED0CDEA61AA610_CLASS_1_62A0213EB5F9B345___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x143E26F0)
#define CLASS_1_D0ED0CDEA61AA610_CLASS_1_62A0213EB5F9B345___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x143E2700)

inline static constexpr unsigned int Class_1_D0ED0CDEA61AA610_Class_1_62A0213EB5F9B345_TypeDefinitionIndex = 66100;

class Class_1_D0ED0CDEA61AA610_Class_1_62A0213EB5F9B345 : public ::System::Object
{
public:
	::Class_1_D0ED0CDEA61AA610_Class_1_99864A5AECFC1D07* Field_1_0; // 0x10
	::Class_1_D0ED0CDEA61AA610_Class_1_62A0213EB5F9B345* Field_1_1; // 0x18
	::Class_1_D0ED0CDEA61AA610_Class_1_62A0213EB5F9B345* Field_1_2; // 0x20
	::UnityEngine::Vector3 Field_1_3; // 0x28
	::UnityEngine::Vector3 Field_1_4; // 0x34
	::UnityEngine::Vector2 Field_1_5; // 0x40
	::UnityEngine::Vector3 Field_1_6; // 0x48
	::System::Int32 Field_1_7; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_CLASS_1_62A0213EB5F9B345__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_CLASS_1_62A0213EB5F9B345_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_CLASS_1_62A0213EB5F9B345_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_CLASS_1_62A0213EB5F9B345___IFIXBASEPROXY_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_CLASS_1_62A0213EB5F9B345___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};

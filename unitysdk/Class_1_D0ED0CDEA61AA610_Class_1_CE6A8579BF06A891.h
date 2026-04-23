#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D0ED0CDEA61AA610_Class_1_B440A32A7B5DD70F;

#define CLASS_1_D0ED0CDEA61AA610_CLASS_1_CE6A8579BF06A891_EQUALS_OFFSET UNITYSDK_OFFSET(0x12854E40)
#define CLASS_1_D0ED0CDEA61AA610_CLASS_1_CE6A8579BF06A891_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x12854F40)
#define CLASS_1_D0ED0CDEA61AA610_CLASS_1_CE6A8579BF06A891__CTOR_OFFSET UNITYSDK_OFFSET(0x128539C0)
#define CLASS_1_D0ED0CDEA61AA610_CLASS_1_CE6A8579BF06A891___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x12854F90)
#define CLASS_1_D0ED0CDEA61AA610_CLASS_1_CE6A8579BF06A891___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x12854FA0)

inline static constexpr unsigned int Class_1_D0ED0CDEA61AA610_Class_1_CE6A8579BF06A891_TypeDefinitionIndex = 65173;

class Class_1_D0ED0CDEA61AA610_Class_1_CE6A8579BF06A891 : public ::System::Object
{
public:
	::Class_1_D0ED0CDEA61AA610_Class_1_B440A32A7B5DD70F* Field_1_2; // 0x10
	::Class_1_D0ED0CDEA61AA610_Class_1_CE6A8579BF06A891* Field_1_6; // 0x18
	::Class_1_D0ED0CDEA61AA610_Class_1_CE6A8579BF06A891* Field_1_7; // 0x20
	::UnityEngine::Vector2 Field_1_3; // 0x28
	::UnityEngine::Vector3 Field_1_1; // 0x30
	::UnityEngine::Vector3 Field_1_4; // 0x3C
	::UnityEngine::Vector3 Field_1_5; // 0x48
	::System::Int32 Field_1_0; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_CLASS_1_CE6A8579BF06A891__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_CLASS_1_CE6A8579BF06A891_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_CLASS_1_CE6A8579BF06A891_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_CLASS_1_CE6A8579BF06A891___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_CLASS_1_CE6A8579BF06A891___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};

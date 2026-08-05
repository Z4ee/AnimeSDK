#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_C93CC3D2C2AC4067;

#define CLASS_1_CB0703BAC6EE574D_METHOD_1_28F815C49D235C59_OFFSET UNITYSDK_OFFSET(0x13EC9EC0)
#define CLASS_1_CB0703BAC6EE574D_METHOD_1_3A7069475F45FB51_OFFSET UNITYSDK_OFFSET(0x13ECA070)
#define CLASS_1_CB0703BAC6EE574D__CCTOR_OFFSET UNITYSDK_OFFSET(0x13ECA030)
#define CLASS_1_CB0703BAC6EE574D__CTOR_OFFSET UNITYSDK_OFFSET(0x13ECA020)

inline static constexpr unsigned int Class_1_CB0703BAC6EE574D_TypeDefinitionIndex = 57532;

class Class_1_CB0703BAC6EE574D : public ::System::Object
{
public:
	static ::Class_1_CB0703BAC6EE574D** StaticGet_Field_1_0()
	{
		return (::Class_1_CB0703BAC6EE574D**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CB0703BAC6EE574D_TypeDefinitionIndex)->GetStaticField(0x3E5F0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB0703BAC6EE574D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CB0703BAC6EE574D__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_28F815C49D235C59(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_CB0703BAC6EE574D_METHOD_1_28F815C49D235C59_OFFSET))(this, a1);
	}

	::Class_3_C93CC3D2C2AC4067* Method_1_3A7069475F45FB51()
	{
		return ((::Class_3_C93CC3D2C2AC4067*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB0703BAC6EE574D_METHOD_1_3A7069475F45FB51_OFFSET))(this);
	}
};

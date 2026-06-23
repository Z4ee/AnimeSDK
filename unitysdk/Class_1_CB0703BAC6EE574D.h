#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_DFD5D1FDB9D2A4AC;

#define CLASS_1_CB0703BAC6EE574D_METHOD_1_28F815C49D235C59_OFFSET UNITYSDK_OFFSET(0x12E0CC90)
#define CLASS_1_CB0703BAC6EE574D_METHOD_1_3A7069475F45FB51_OFFSET UNITYSDK_OFFSET(0x12E0CDF0)
#define CLASS_1_CB0703BAC6EE574D__CCTOR_OFFSET UNITYSDK_OFFSET(0x12E0CFA0)
#define CLASS_1_CB0703BAC6EE574D__CTOR_OFFSET UNITYSDK_OFFSET(0x12E0CF90)

inline static constexpr unsigned int Class_1_CB0703BAC6EE574D_TypeDefinitionIndex = 54514;

class Class_1_CB0703BAC6EE574D : public ::System::Object
{
public:
	static ::Class_1_CB0703BAC6EE574D** StaticGet_Field_1_0()
	{
		return (::Class_1_CB0703BAC6EE574D**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CB0703BAC6EE574D_TypeDefinitionIndex)->GetStaticField(0x48F60);
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

	::Class_3_DFD5D1FDB9D2A4AC* Method_1_3A7069475F45FB51()
	{
		return ((::Class_3_DFD5D1FDB9D2A4AC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB0703BAC6EE574D_METHOD_1_3A7069475F45FB51_OFFSET))(this);
	}
};

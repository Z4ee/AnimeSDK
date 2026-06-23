#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_7AEA12404CD1ADA2.h"
#include "unitysdk/System/Object.h"

namespace System { class Random; }

#define CLASS_1_9CD8B35F3CB71A6C_METHOD_1_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x1D294D30)
#define CLASS_1_9CD8B35F3CB71A6C_METHOD_1_18207F55A2049087_OFFSET UNITYSDK_OFFSET(0x1D294EE0)
#define CLASS_1_9CD8B35F3CB71A6C_METHOD_1_4B6DEDB9FF4B740B_OFFSET UNITYSDK_OFFSET(0x1D28B6A0)
#define CLASS_1_9CD8B35F3CB71A6C_METHOD_1_5800B8C2CE59928F_OFFSET UNITYSDK_OFFSET(0x1D295390)
#define CLASS_1_9CD8B35F3CB71A6C_METHOD_1_979F7368E6160455_OFFSET UNITYSDK_OFFSET(0x1D295220)
#define CLASS_1_9CD8B35F3CB71A6C_METHOD_1_EAE90D9BD7B267CF_OFFSET UNITYSDK_OFFSET(0x1D28B4B0)
#define CLASS_1_9CD8B35F3CB71A6C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D294CE0)
#define CLASS_1_9CD8B35F3CB71A6C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D294ED0)

inline static constexpr unsigned int Class_1_9CD8B35F3CB71A6C_TypeDefinitionIndex = 19253;

class Class_1_9CD8B35F3CB71A6C : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Double>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CD8B35F3CB71A6C_TypeDefinitionIndex)->GetStaticField(0x8EF0);
	}
	::System::Random* Field_1_0; // 0x10

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9CD8B35F3CB71A6C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CD8B35F3CB71A6C__CTOR_OFFSET))(this);
	}

	::Struct_2_7AEA12404CD1ADA2 Method_1_EAE90D9BD7B267CF(::Struct_2_7AEA12404CD1ADA2 a1)
	{
		return ((::Struct_2_7AEA12404CD1ADA2(*)(::PVOID, ::Struct_2_7AEA12404CD1ADA2))((::PBYTE)hIl2Cpp + CLASS_1_9CD8B35F3CB71A6C_METHOD_1_EAE90D9BD7B267CF_OFFSET))(this, a1);
	}

	static ::System::Double Method_1_18207F55A2049087(::System::Double a1)
	{
		return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_9CD8B35F3CB71A6C_METHOD_1_18207F55A2049087_OFFSET))(a1);
	}

	static ::System::Double Method_1_979F7368E6160455(::System::Double a1)
	{
		return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_9CD8B35F3CB71A6C_METHOD_1_979F7368E6160455_OFFSET))(a1);
	}

	::System::Boolean Method_1_4B6DEDB9FF4B740B(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9CD8B35F3CB71A6C_METHOD_1_4B6DEDB9FF4B740B_OFFSET))(this, a1);
	}

	::System::Void Method_1_5800B8C2CE59928F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9CD8B35F3CB71A6C_METHOD_1_5800B8C2CE59928F_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_0D7638DBC93E5002()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9CD8B35F3CB71A6C_METHOD_1_0D7638DBC93E5002_OFFSET))();
	}
};

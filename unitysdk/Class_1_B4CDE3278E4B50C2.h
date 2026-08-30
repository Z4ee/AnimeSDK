#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DDDB57AA67C3A9EA;

#define CLASS_1_B4CDE3278E4B50C2_METHOD_1_4E2BCE3C8705DF5E_OFFSET UNITYSDK_OFFSET(0x114D79A0)
#define CLASS_1_B4CDE3278E4B50C2_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x114D7A30)
#define CLASS_1_B4CDE3278E4B50C2__CCTOR_OFFSET UNITYSDK_OFFSET(0x114D7AA0)
#define CLASS_1_B4CDE3278E4B50C2__CTOR_OFFSET UNITYSDK_OFFSET(0x114D78F0)

inline static constexpr unsigned int Class_1_B4CDE3278E4B50C2_TypeDefinitionIndex = 71172;

class Class_1_B4CDE3278E4B50C2 : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_KKGGDACLCAE()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4CDE3278E4B50C2_TypeDefinitionIndex)->GetStaticField(0xE390);
	}
	::Class_1_DDDB57AA67C3A9EA* IOJNCJMDDOD; // 0x10
	::System::UInt32 LCHLDHNIILN; // 0x18
	::System::Boolean JMBIGPPGCEK; // 0x1C
	::System::Boolean HIGNCPLFPCK; // 0x1D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4CDE3278E4B50C2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B4CDE3278E4B50C2__CCTOR_OFFSET))();
	}

	static ::System::UInt32 Method_1_4E2BCE3C8705DF5E()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_B4CDE3278E4B50C2_METHOD_1_4E2BCE3C8705DF5E_OFFSET))();
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B4CDE3278E4B50C2_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}
};

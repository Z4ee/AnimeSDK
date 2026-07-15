#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DDDB57AA67C3A9EA;

#define CLASS_1_B4CDE3278E4B50C2_METHOD_1_4E2BCE3C8705DF5E_OFFSET UNITYSDK_OFFSET(0x17674B90)
#define CLASS_1_B4CDE3278E4B50C2_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x17674C20)
#define CLASS_1_B4CDE3278E4B50C2__CCTOR_OFFSET UNITYSDK_OFFSET(0x17674C90)
#define CLASS_1_B4CDE3278E4B50C2__CTOR_OFFSET UNITYSDK_OFFSET(0x17674AE0)

inline static constexpr unsigned int Class_1_B4CDE3278E4B50C2_TypeDefinitionIndex = 67998;

class Class_1_B4CDE3278E4B50C2 : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_Field_1_0()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4CDE3278E4B50C2_TypeDefinitionIndex)->GetStaticField(0x14A60);
	}
	::Class_1_DDDB57AA67C3A9EA* Field_1_1; // 0x10
	::System::UInt32 Field_1_2; // 0x18
	::System::Boolean Field_1_3; // 0x1C
	::System::Boolean Field_1_4; // 0x1D

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

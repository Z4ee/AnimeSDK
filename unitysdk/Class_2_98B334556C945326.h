#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_98B334556C945326_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1BB744B0)
#define CLASS_2_98B334556C945326_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x1BB74660)
#define CLASS_2_98B334556C945326_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1BB74780)
#define CLASS_2_98B334556C945326_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1BB746F0)
#define CLASS_2_98B334556C945326_METHOD_2_E81F721E66002CD7_OFFSET UNITYSDK_OFFSET(0x1BB74820)
#define CLASS_2_98B334556C945326__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB745E0)
#define CLASS_2_98B334556C945326__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB74650)

inline static constexpr unsigned int Class_2_98B334556C945326_TypeDefinitionIndex = 52257;

class Class_2_98B334556C945326 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_7 = 0x1C; // 0x0
	::MoleMole::EntityHandle Field_2_1; // 0x20
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Field_2_0; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_98B334556C945326__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98B334556C945326__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98B334556C945326_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98B334556C945326_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98B334556C945326_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98B334556C945326_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_E81F721E66002CD7(::MoleMole::EntityHandle a1, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*))((::PBYTE)hIl2Cpp + CLASS_2_98B334556C945326_METHOD_2_E81F721E66002CD7_OFFSET))(this, a1, a2);
	}
};

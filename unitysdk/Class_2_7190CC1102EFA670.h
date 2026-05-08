#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7190CC1102EFA670_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xFD57A60)
#define CLASS_2_7190CC1102EFA670_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0xFD57C10)
#define CLASS_2_7190CC1102EFA670_METHOD_2_64CF17CD790F4315_OFFSET UNITYSDK_OFFSET(0xFD57DD0)
#define CLASS_2_7190CC1102EFA670_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xFD57D30)
#define CLASS_2_7190CC1102EFA670_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xFD57CA0)
#define CLASS_2_7190CC1102EFA670__CCTOR_OFFSET UNITYSDK_OFFSET(0xFD57B90)
#define CLASS_2_7190CC1102EFA670__CTOR_OFFSET UNITYSDK_OFFSET(0xFD57C00)

inline static constexpr unsigned int Class_2_7190CC1102EFA670_TypeDefinitionIndex = 61954;

class Class_2_7190CC1102EFA670 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0x19; // 0x0
	::MoleMole::EntityHandle Field_2_0; // 0x20
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Field_2_1; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7190CC1102EFA670__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7190CC1102EFA670__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7190CC1102EFA670_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7190CC1102EFA670_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7190CC1102EFA670_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7190CC1102EFA670_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_64CF17CD790F4315(::MoleMole::EntityHandle a1, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*))((::PBYTE)hIl2Cpp + CLASS_2_7190CC1102EFA670_METHOD_2_64CF17CD790F4315_OFFSET))(this, a1, a2);
	}
};

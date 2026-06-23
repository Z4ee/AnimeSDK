#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_BECDD56EBD7261C8_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x1A0C17E0)
#define CLASS_2_BECDD56EBD7261C8_METHOD_2_6B3FF83ECBC6B398_OFFSET UNITYSDK_OFFSET(0x1A0C1900)
#define CLASS_2_BECDD56EBD7261C8_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A0C1870)
#define CLASS_2_BECDD56EBD7261C8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0C1760)
#define CLASS_2_BECDD56EBD7261C8__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0C17D0)

inline static constexpr unsigned int Class_2_BECDD56EBD7261C8_TypeDefinitionIndex = 67474;

class Class_2_BECDD56EBD7261C8 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0x17; // 0x0
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_BECDD56EBD7261C8__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BECDD56EBD7261C8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BECDD56EBD7261C8_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BECDD56EBD7261C8_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_6B3FF83ECBC6B398(::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*))((::PBYTE)hIl2Cpp + CLASS_2_BECDD56EBD7261C8_METHOD_2_6B3FF83ECBC6B398_OFFSET))(this, a1);
	}
};

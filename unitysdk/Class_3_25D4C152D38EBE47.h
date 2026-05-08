#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BCA32DB678A03168.h"
#include "unitysdk/Enum_3_316FC8E376D95053.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_25D4C152D38EBE47_METHOD_3_06A3B74574E752BD_OFFSET UNITYSDK_OFFSET(0x120821B0)
#define CLASS_3_25D4C152D38EBE47_METHOD_3_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0x12081AF0)
#define CLASS_3_25D4C152D38EBE47_METHOD_3_6E2967F25D7AC8E5_OFFSET UNITYSDK_OFFSET(0x12082260)
#define CLASS_3_25D4C152D38EBE47_METHOD_3_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x12081DC0)
#define CLASS_3_25D4C152D38EBE47_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x12082120)
#define CLASS_3_25D4C152D38EBE47_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12082090)
#define CLASS_3_25D4C152D38EBE47__CTOR_OFFSET UNITYSDK_OFFSET(0x12081A30)

inline static constexpr unsigned int Class_3_25D4C152D38EBE47_TypeDefinitionIndex = 38459;

class Class_3_25D4C152D38EBE47 : public ::Class_2_BCA32DB678A03168
{
public:
	::System::Int32 Field_3_0; // 0x38

	::System::Void _ctor(::System::Int32 a1, ::Enum_3_316FC8E376D95053 a2, ::System::Int32 a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_316FC8E376D95053, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_25D4C152D38EBE47__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_25D4C152D38EBE47_METHOD_3_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Void Method_3_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_25D4C152D38EBE47_METHOD_3_739DB9F245C7FAD0_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_25D4C152D38EBE47_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_25D4C152D38EBE47_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_3_06A3B74574E752BD(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_25D4C152D38EBE47_METHOD_3_06A3B74574E752BD_OFFSET))(this, a1);
	}

	::System::Void Method_3_6E2967F25D7AC8E5(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_25D4C152D38EBE47_METHOD_3_6E2967F25D7AC8E5_OFFSET))(this, a1);
	}
};

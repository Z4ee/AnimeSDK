#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Class_2_E39C36FBA306E1C1_Enum_3_8767FBC4C6EBBF34.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_E39C36FBA306E1C1_METHOD_2_43828421E4FACBAB_OFFSET UNITYSDK_OFFSET(0x16B17C50)
#define CLASS_2_E39C36FBA306E1C1_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x16B17BC0)
#define CLASS_2_E39C36FBA306E1C1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16B17D00)
#define CLASS_2_E39C36FBA306E1C1__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B17B40)
#define CLASS_2_E39C36FBA306E1C1__CTOR_OFFSET UNITYSDK_OFFSET(0x16B17BB0)

inline static constexpr unsigned int Class_2_E39C36FBA306E1C1_TypeDefinitionIndex = 46724;

class Class_2_E39C36FBA306E1C1 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_6 = 0x5; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_2_0; // 0x20
	::System::String* Field_2_1; // 0x28
	::Class_2_E39C36FBA306E1C1_Enum_3_8767FBC4C6EBBF34 Field_2_7; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E39C36FBA306E1C1__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E39C36FBA306E1C1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E39C36FBA306E1C1_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_43828421E4FACBAB(::System::UInt32 a1, ::Class_2_E39C36FBA306E1C1_Enum_3_8767FBC4C6EBBF34 a2, ::System::String* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_2_E39C36FBA306E1C1_Enum_3_8767FBC4C6EBBF34, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_E39C36FBA306E1C1_METHOD_2_43828421E4FACBAB_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E39C36FBA306E1C1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};

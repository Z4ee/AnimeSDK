#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BCA32DB678A03168.h"
#include "unitysdk/Enum_3_316FC8E376D95053.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_EC5B095AD026823D_METHOD_3_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0x14A23FB0)
#define CLASS_3_EC5B095AD026823D_METHOD_3_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x14A24280)
#define CLASS_3_EC5B095AD026823D_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x14A247A0)
#define CLASS_3_EC5B095AD026823D_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14A24710)
#define CLASS_3_EC5B095AD026823D_METHOD_3_CEDF6BBCD5E80888_1_OFFSET UNITYSDK_OFFSET(0x14A24630)
#define CLASS_3_EC5B095AD026823D_METHOD_3_CEDF6BBCD5E80888_OFFSET UNITYSDK_OFFSET(0x14A24550)
#define CLASS_3_EC5B095AD026823D__CTOR_OFFSET UNITYSDK_OFFSET(0x14A23E70)

inline static constexpr unsigned int Class_3_EC5B095AD026823D_TypeDefinitionIndex = 68233;

class Class_3_EC5B095AD026823D : public ::Class_2_BCA32DB678A03168
{
public:
	::System::Int32 Field_3_0; // 0x38

	::System::Void _ctor(::System::Int32 a1, ::Enum_3_316FC8E376D95053 a2, ::System::Int32 a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_316FC8E376D95053, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_EC5B095AD026823D__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EC5B095AD026823D_METHOD_3_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Void Method_3_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EC5B095AD026823D_METHOD_3_739DB9F245C7FAD0_OFFSET))(this);
	}

	::System::Void Method_3_CEDF6BBCD5E80888(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_EC5B095AD026823D_METHOD_3_CEDF6BBCD5E80888_OFFSET))(this, a1);
	}

	::System::Void Method_3_CEDF6BBCD5E80888_1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_EC5B095AD026823D_METHOD_3_CEDF6BBCD5E80888_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EC5B095AD026823D_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EC5B095AD026823D_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}
};

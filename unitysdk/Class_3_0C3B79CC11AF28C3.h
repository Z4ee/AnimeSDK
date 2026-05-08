#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BCA32DB678A03168.h"
#include "unitysdk/Enum_3_316FC8E376D95053.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_0C3B79CC11AF28C3_METHOD_3_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x154DBCB0)
#define CLASS_3_0C3B79CC11AF28C3_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x154DBE30)
#define CLASS_3_0C3B79CC11AF28C3__CTOR_OFFSET UNITYSDK_OFFSET(0x154DBB80)

inline static constexpr unsigned int Class_3_0C3B79CC11AF28C3_TypeDefinitionIndex = 45568;

class Class_3_0C3B79CC11AF28C3 : public ::Class_2_BCA32DB678A03168
{
public:
	::System::Int32 Field_3_1; // 0x38
	::System::Int32 Field_3_0; // 0x3C
	::System::Int32 Field_3_2; // 0x40

	::System::Void _ctor(::System::Int32 a1, ::Enum_3_316FC8E376D95053 a2, ::System::Int32 a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_316FC8E376D95053, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_0C3B79CC11AF28C3__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0C3B79CC11AF28C3_METHOD_3_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0C3B79CC11AF28C3_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};

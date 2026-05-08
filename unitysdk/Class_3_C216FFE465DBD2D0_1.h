#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BCA32DB678A03168.h"
#include "unitysdk/Enum_3_316FC8E376D95053.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"

class Class_2_73836654F8931C75;
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_C216FFE465DBD2D0_1_METHOD_3_245950D4F0985AD9_OFFSET UNITYSDK_OFFSET(0xFEB7770)
#define CLASS_3_C216FFE465DBD2D0_1_METHOD_3_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0xFEB72C0)
#define CLASS_3_C216FFE465DBD2D0_1_METHOD_3_C8D6B29192F288ED_OFFSET UNITYSDK_OFFSET(0xFEB7080)
#define CLASS_3_C216FFE465DBD2D0_1_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xFEB79D0)
#define CLASS_3_C216FFE465DBD2D0_1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xFEB7940)
#define CLASS_3_C216FFE465DBD2D0_1_METHOD_3_FA58824BA12F6F62_OFFSET UNITYSDK_OFFSET(0xFEB7600)
#define CLASS_3_C216FFE465DBD2D0_1__CTOR_OFFSET UNITYSDK_OFFSET(0xFEB6E20)

inline static constexpr unsigned int Class_3_C216FFE465DBD2D0_1_TypeDefinitionIndex = 63770;

class Class_3_C216FFE465DBD2D0_1 : public ::Class_2_BCA32DB678A03168
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* Field_3_0; // 0x38
	::Class_2_73836654F8931C75* Field_3_1; // 0x40
	::MoleMole::Config::ValueCompareType Field_3_3; // 0x48
	::System::Single Field_3_2; // 0x4C

	::System::Void _ctor(::System::Int32 a1, ::Enum_3_316FC8E376D95053 a2, ::System::Int32 a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_316FC8E376D95053, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_C216FFE465DBD2D0_1__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_C8D6B29192F288ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C216FFE465DBD2D0_1_METHOD_3_C8D6B29192F288ED_OFFSET))(this);
	}

	::System::Void Method_3_FA58824BA12F6F62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C216FFE465DBD2D0_1_METHOD_3_FA58824BA12F6F62_OFFSET))(this);
	}

	::System::Void Method_3_245950D4F0985AD9(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_C216FFE465DBD2D0_1_METHOD_3_245950D4F0985AD9_OFFSET))(this, a1);
	}

	::System::Void Method_3_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C216FFE465DBD2D0_1_METHOD_3_8C704EC832EDEFC8_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C216FFE465DBD2D0_1_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C216FFE465DBD2D0_1_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}
};

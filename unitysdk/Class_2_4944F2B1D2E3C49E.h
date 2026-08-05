#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_13.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class Class_0_16E4307DCC419505_291;
class Class_3_793BFD6B897F5A49_1;
class Class_3_BE75AAF0F7C40C75;
class Class_3_F6C28A889504BEF6;
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_4944F2B1D2E3C49E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13D085B0)
#define CLASS_2_4944F2B1D2E3C49E_METHOD_2_BFC2FEB384A5D04E_OFFSET UNITYSDK_OFFSET(0x13D08860)
#define CLASS_2_4944F2B1D2E3C49E_METHOD_2_D8345BBB9C996CA0_OFFSET UNITYSDK_OFFSET(0x13D08B90)
#define CLASS_2_4944F2B1D2E3C49E_ONCREATE_OFFSET UNITYSDK_OFFSET(0x13D08380)
#define CLASS_2_4944F2B1D2E3C49E__CCTOR_OFFSET UNITYSDK_OFFSET(0x13D08850)
#define CLASS_2_4944F2B1D2E3C49E__CTOR_OFFSET UNITYSDK_OFFSET(0x13D08740)

inline static constexpr unsigned int Class_2_4944F2B1D2E3C49E_TypeDefinitionIndex = 44016;

class Class_2_4944F2B1D2E3C49E : public ::Foundation::SingletonDisposable_1<::Class_2_4944F2B1D2E3C49E*>
{
public:
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4944F2B1D2E3C49E_TypeDefinitionIndex)->GetStaticField(0xFC40);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_291*>* Field_2_7; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4944F2B1D2E3C49E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4944F2B1D2E3C49E__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4944F2B1D2E3C49E_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4944F2B1D2E3C49E_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_BFC2FEB384A5D04E(::System::Int32 a1, ::Enum_3_96F6662CA3713095_13 a2, ::Class_3_793BFD6B897F5A49_1* a3, ::Class_3_F6C28A889504BEF6* a4, ::Class_3_BE75AAF0F7C40C75* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_96F6662CA3713095_13, ::Class_3_793BFD6B897F5A49_1*, ::Class_3_F6C28A889504BEF6*, ::Class_3_BE75AAF0F7C40C75*))((::PBYTE)hIl2Cpp + CLASS_2_4944F2B1D2E3C49E_METHOD_2_BFC2FEB384A5D04E_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_D8345BBB9C996CA0(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_4944F2B1D2E3C49E_METHOD_2_D8345BBB9C996CA0_OFFSET))(this, a1);
	}
};

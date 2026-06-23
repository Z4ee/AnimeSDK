#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ResourceFileType.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class Class_0_16E4307DCC419505_356;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_F611562DD59BAE82_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A210000)
#define CLASS_2_F611562DD59BAE82_METHOD_2_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x1A210250)
#define CLASS_2_F611562DD59BAE82_METHOD_2_107FD70DCCEDAA2A_OFFSET UNITYSDK_OFFSET(0x1A210980)
#define CLASS_2_F611562DD59BAE82_METHOD_2_178812F674E8B05A_OFFSET UNITYSDK_OFFSET(0x1A210550)
#define CLASS_2_F611562DD59BAE82_METHOD_2_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x1A2107A0)
#define CLASS_2_F611562DD59BAE82_METHOD_2_6D001287547E6CEE_OFFSET UNITYSDK_OFFSET(0x1A2103D0)
#define CLASS_2_F611562DD59BAE82_METHOD_2_8A0E311F234E3F89_OFFSET UNITYSDK_OFFSET(0x1A210670)
#define CLASS_2_F611562DD59BAE82_METHOD_2_A986EA79BC4DCC4E_OFFSET UNITYSDK_OFFSET(0x1A210450)
#define CLASS_2_F611562DD59BAE82_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1A210100)
#define CLASS_2_F611562DD59BAE82__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2103B0)

inline static constexpr unsigned int Class_2_F611562DD59BAE82_TypeDefinitionIndex = 45089;

class Class_2_F611562DD59BAE82 : public ::Foundation::SingletonDisposable_1<::Class_2_F611562DD59BAE82*>
{
public:
	::Class_0_16E4307DCC419505_356* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F611562DD59BAE82__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F611562DD59BAE82_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F611562DD59BAE82_ONCREATE_OFFSET))(this);
	}

	static ::System::Void Method_2_6D001287547E6CEE(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_F611562DD59BAE82_METHOD_2_6D001287547E6CEE_OFFSET))(a1);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt64>* Method_2_A986EA79BC4DCC4E()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F611562DD59BAE82_METHOD_2_A986EA79BC4DCC4E_OFFSET))(this);
	}

	::System::Void Method_2_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F611562DD59BAE82_METHOD_2_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::System::Void Method_2_178812F674E8B05A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F611562DD59BAE82_METHOD_2_178812F674E8B05A_OFFSET))(this);
	}

	::System::Void Method_2_8A0E311F234E3F89(::Foundation::ResourceFileType a1, ::System::Boolean a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ResourceFileType, ::System::Boolean, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_F611562DD59BAE82_METHOD_2_8A0E311F234E3F89_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F611562DD59BAE82_METHOD_2_60E1F7F58CCF739F_OFFSET))(this);
	}

	static ::System::Boolean Method_2_107FD70DCCEDAA2A()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_F611562DD59BAE82_METHOD_2_107FD70DCCEDAA2A_OFFSET))();
	}
};

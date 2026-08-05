#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ResourceFileType.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class Class_0_16E4307DCC419505_376;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_E67944C848F9CA75_DISPOSE_OFFSET UNITYSDK_OFFSET(0x174CDD40)
#define CLASS_2_E67944C848F9CA75_METHOD_2_0E142E3463F30350_OFFSET UNITYSDK_OFFSET(0x174CDF80)
#define CLASS_2_E67944C848F9CA75_METHOD_2_107FD70DCCEDAA2A_OFFSET UNITYSDK_OFFSET(0x174CE180)
#define CLASS_2_E67944C848F9CA75_METHOD_2_178812F674E8B05A_OFFSET UNITYSDK_OFFSET(0x174CE510)
#define CLASS_2_E67944C848F9CA75_METHOD_2_3FC4278AC4FF5BAC_OFFSET UNITYSDK_OFFSET(0x174CE910)
#define CLASS_2_E67944C848F9CA75_METHOD_2_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x174CE630)
#define CLASS_2_E67944C848F9CA75_METHOD_2_6D001287547E6CEE_OFFSET UNITYSDK_OFFSET(0x174CE100)
#define CLASS_2_E67944C848F9CA75_METHOD_2_A61DBF7B189F2DC5_OFFSET UNITYSDK_OFFSET(0x174CE810)
#define CLASS_2_E67944C848F9CA75_ONCREATE_OFFSET UNITYSDK_OFFSET(0x174CDE40)
#define CLASS_2_E67944C848F9CA75__CTOR_OFFSET UNITYSDK_OFFSET(0x174CE0E0)

inline static constexpr unsigned int Class_2_E67944C848F9CA75_TypeDefinitionIndex = 47055;

class Class_2_E67944C848F9CA75 : public ::Foundation::SingletonDisposable_1<::Class_2_E67944C848F9CA75*>
{
public:
	::Class_0_16E4307DCC419505_376* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E67944C848F9CA75__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E67944C848F9CA75_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E67944C848F9CA75_ONCREATE_OFFSET))(this);
	}

	static ::System::Void Method_2_6D001287547E6CEE(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_E67944C848F9CA75_METHOD_2_6D001287547E6CEE_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_107FD70DCCEDAA2A()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_E67944C848F9CA75_METHOD_2_107FD70DCCEDAA2A_OFFSET))();
	}

	::System::Void Method_2_178812F674E8B05A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E67944C848F9CA75_METHOD_2_178812F674E8B05A_OFFSET))(this);
	}

	::System::Void Method_2_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E67944C848F9CA75_METHOD_2_60E1F7F58CCF739F_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt64>* Method_2_A61DBF7B189F2DC5()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E67944C848F9CA75_METHOD_2_A61DBF7B189F2DC5_OFFSET))(this);
	}

	::System::Void Method_2_0E142E3463F30350()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E67944C848F9CA75_METHOD_2_0E142E3463F30350_OFFSET))(this);
	}

	::System::Void Method_2_3FC4278AC4FF5BAC(::Foundation::ResourceFileType a1, ::System::Boolean a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ResourceFileType, ::System::Boolean, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_E67944C848F9CA75_METHOD_2_3FC4278AC4FF5BAC_OFFSET))(this, a1, a2, a3);
	}
};

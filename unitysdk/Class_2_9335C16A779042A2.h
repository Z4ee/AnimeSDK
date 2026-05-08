#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

class Class_1_2AC45833F3CC8C86;
namespace MoleMole { class MonoBuddyStairAnimCorrector; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9335C16A779042A2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16C48C20)
#define CLASS_2_9335C16A779042A2_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x16C499D0)
#define CLASS_2_9335C16A779042A2_METHOD_2_20487879979618C8_OFFSET UNITYSDK_OFFSET(0x16C4A740)
#define CLASS_2_9335C16A779042A2_METHOD_2_33A9F09579262689_OFFSET UNITYSDK_OFFSET(0x16C49430)
#define CLASS_2_9335C16A779042A2_METHOD_2_428BD246F5FAAA99_OFFSET UNITYSDK_OFFSET(0x16C49020)
#define CLASS_2_9335C16A779042A2_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x16C4A300)
#define CLASS_2_9335C16A779042A2_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x16C4A8F0)
#define CLASS_2_9335C16A779042A2_METHOD_2_5F2F6A30819705FF_1_OFFSET UNITYSDK_OFFSET(0x16C4AEB0)
#define CLASS_2_9335C16A779042A2_METHOD_2_5F2F6A30819705FF_OFFSET UNITYSDK_OFFSET(0x16C4AE00)
#define CLASS_2_9335C16A779042A2_METHOD_2_93F04DBA5673B102_OFFSET UNITYSDK_OFFSET(0x16C496E0)
#define CLASS_2_9335C16A779042A2_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x16C4A570)
#define CLASS_2_9335C16A779042A2_METHOD_2_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16C4A6E0)
#define CLASS_2_9335C16A779042A2_METHOD_2_DB3BAA461746FC0B_OFFSET UNITYSDK_OFFSET(0x16C4AB30)
#define CLASS_2_9335C16A779042A2_METHOD_2_DDFCBBB54CA12CE0_OFFSET UNITYSDK_OFFSET(0x16C49B70)
#define CLASS_2_9335C16A779042A2_ONCREATE_OFFSET UNITYSDK_OFFSET(0x16C48B20)
#define CLASS_2_9335C16A779042A2__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C49010)
#define CLASS_2_9335C16A779042A2__CTOR_OFFSET UNITYSDK_OFFSET(0x16C48FF0)

inline static constexpr unsigned int Class_2_9335C16A779042A2_TypeDefinitionIndex = 73541;

class Class_2_9335C16A779042A2 : public ::Foundation::SingletonDisposable_1<::Class_2_9335C16A779042A2*>
{
public:
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_9335C16A779042A2_TypeDefinitionIndex)->GetStaticField(0x10BC0);
	}
	::System::Collections::Generic::List_1<::Class_1_2AC45833F3CC8C86*>* Field_2_3; // 0x10
	::System::Collections::Generic::HashSet_1<::MoleMole::MonoBuddyStairAnimCorrector*>* Field_2_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_4; // 0x20
	::System::Collections::Generic::HashSet_1<::MoleMole::MonoBuddyStairAnimCorrector*>* Field_2_1; // 0x28
	::Unity::Jobs::JobHandle Field_2_5; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9335C16A779042A2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9335C16A779042A2__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9335C16A779042A2_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9335C16A779042A2_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_428BD246F5FAAA99()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9335C16A779042A2_METHOD_2_428BD246F5FAAA99_OFFSET))(this);
	}

	::System::Void Method_2_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9335C16A779042A2_METHOD_2_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9335C16A779042A2_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_2_93F04DBA5673B102(::MoleMole::MonoBuddyStairAnimCorrector* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoBuddyStairAnimCorrector*))((::PBYTE)hIl2Cpp + CLASS_2_9335C16A779042A2_METHOD_2_93F04DBA5673B102_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_9335C16A779042A2_METHOD_2_CE34EA208837238D_OFFSET))();
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9335C16A779042A2_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	static ::System::Void Method_2_20487879979618C8(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9335C16A779042A2_METHOD_2_20487879979618C8_OFFSET))(a1);
	}

	::System::Void Method_2_DDFCBBB54CA12CE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9335C16A779042A2_METHOD_2_DDFCBBB54CA12CE0_OFFSET))(this);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9335C16A779042A2_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_DB3BAA461746FC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9335C16A779042A2_METHOD_2_DB3BAA461746FC0B_OFFSET))(this);
	}

	::System::Void Method_2_5F2F6A30819705FF(::MoleMole::MonoBuddyStairAnimCorrector* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoBuddyStairAnimCorrector*))((::PBYTE)hIl2Cpp + CLASS_2_9335C16A779042A2_METHOD_2_5F2F6A30819705FF_OFFSET))(this, a1);
	}

	::System::Void Method_2_33A9F09579262689(::MoleMole::MonoBuddyStairAnimCorrector* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoBuddyStairAnimCorrector*))((::PBYTE)hIl2Cpp + CLASS_2_9335C16A779042A2_METHOD_2_33A9F09579262689_OFFSET))(this, a1);
	}

	::System::Void Method_2_5F2F6A30819705FF_1(::MoleMole::MonoBuddyStairAnimCorrector* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoBuddyStairAnimCorrector*))((::PBYTE)hIl2Cpp + CLASS_2_9335C16A779042A2_METHOD_2_5F2F6A30819705FF_1_OFFSET))(this, a1);
	}
};

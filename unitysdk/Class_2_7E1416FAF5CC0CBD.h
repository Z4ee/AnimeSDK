#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class Class_2_208CC9941471731A_796;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T1, typename T2> class Class_1_516A565475879095;

#define CLASS_2_7E1416FAF5CC0CBD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1008AB10)
#define CLASS_2_7E1416FAF5CC0CBD_METHOD_2_218124418542E081_OFFSET UNITYSDK_OFFSET(0x1008AD70)
#define CLASS_2_7E1416FAF5CC0CBD_METHOD_2_3EA9DCA91F2FB684_OFFSET UNITYSDK_OFFSET(0x1008B320)
#define CLASS_2_7E1416FAF5CC0CBD_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1008B1D0)
#define CLASS_2_7E1416FAF5CC0CBD_METHOD_2_736CDB7664610313_OFFSET UNITYSDK_OFFSET(0x1008B220)
#define CLASS_2_7E1416FAF5CC0CBD_METHOD_2_7D9C7CE03C4C2C10_OFFSET UNITYSDK_OFFSET(0x1008B630)
#define CLASS_2_7E1416FAF5CC0CBD_METHOD_2_9C899007B686E15F_OFFSET UNITYSDK_OFFSET(0x1008B4A0)
#define CLASS_2_7E1416FAF5CC0CBD_METHOD_2_AA457928CDE4BCD4_OFFSET UNITYSDK_OFFSET(0x1008B750)
#define CLASS_2_7E1416FAF5CC0CBD_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1008AAD0)
#define CLASS_2_7E1416FAF5CC0CBD__CTOR_OFFSET UNITYSDK_OFFSET(0x1008AC30)

inline static constexpr unsigned int Class_2_7E1416FAF5CC0CBD_TypeDefinitionIndex = 71542;

class Class_2_7E1416FAF5CC0CBD : public ::Foundation::SingletonDisposable_1<::Class_2_7E1416FAF5CC0CBD*>
{
public:
	// static const ::System::UInt64 Field_2_0 = 0xCC6E0ACE28621F8C; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_208CC9941471731A_796*>* Field_2_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt64>* Field_2_1; // 0x18
	::System::Boolean Field_2_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E1416FAF5CC0CBD__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E1416FAF5CC0CBD_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E1416FAF5CC0CBD_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E1416FAF5CC0CBD_METHOD_2_218124418542E081_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E1416FAF5CC0CBD_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_2_736CDB7664610313(::System::String* a1, ::System::UInt64& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::UInt64&))((::PBYTE)hIl2Cpp + CLASS_2_7E1416FAF5CC0CBD_METHOD_2_736CDB7664610313_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9C899007B686E15F(::Class_1_516A565475879095<::System::UInt32, ::System::UInt64>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_516A565475879095<::System::UInt32, ::System::UInt64>*))((::PBYTE)hIl2Cpp + CLASS_2_7E1416FAF5CC0CBD_METHOD_2_9C899007B686E15F_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_3EA9DCA91F2FB684(::System::String* a1, ::System::UInt64& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::UInt64&))((::PBYTE)hIl2Cpp + CLASS_2_7E1416FAF5CC0CBD_METHOD_2_3EA9DCA91F2FB684_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_7D9C7CE03C4C2C10(::System::String* a1, ::Class_2_208CC9941471731A_796*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_2_208CC9941471731A_796*&))((::PBYTE)hIl2Cpp + CLASS_2_7E1416FAF5CC0CBD_METHOD_2_7D9C7CE03C4C2C10_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_AA457928CDE4BCD4(::System::UInt32 a1, ::System::UInt64& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt64&))((::PBYTE)hIl2Cpp + CLASS_2_7E1416FAF5CC0CBD_METHOD_2_AA457928CDE4BCD4_OFFSET))(this, a1, a2);
	}
};

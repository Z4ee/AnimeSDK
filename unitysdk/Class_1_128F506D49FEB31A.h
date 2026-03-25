#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A8FB7EDAFC5C8F4;
namespace RPG::Client { class PerformanceManager; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_128F506D49FEB31A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8DD5CA0)
#define CLASS_1_128F506D49FEB31A_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x8DD67B0)
#define CLASS_1_128F506D49FEB31A_METHOD_1_403F9746A5C8AE1C_OFFSET UNITYSDK_OFFSET(0x8DD6120)
#define CLASS_1_128F506D49FEB31A_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x8DD6480)
#define CLASS_1_128F506D49FEB31A_METHOD_1_57DC8A2150C8FBBB_OFFSET UNITYSDK_OFFSET(0x8DD5FE0)
#define CLASS_1_128F506D49FEB31A_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x8DD6660)
#define CLASS_1_128F506D49FEB31A_METHOD_1_A56385E6706FA723_OFFSET UNITYSDK_OFFSET(0x8DD66F0)
#define CLASS_1_128F506D49FEB31A_METHOD_1_EC1B27BDAC59929D_OFFSET UNITYSDK_OFFSET(0x8DD6530)
#define CLASS_1_128F506D49FEB31A_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x8DD67A0)
#define CLASS_1_128F506D49FEB31A_METHOD_1_F4AC2F73B2036484_OFFSET UNITYSDK_OFFSET(0x8DD5CF0)
#define CLASS_1_128F506D49FEB31A_METHOD_1_FD7514C64FB1B043_OFFSET UNITYSDK_OFFSET(0x8DD5E70)
#define CLASS_1_128F506D49FEB31A_TICK_OFFSET UNITYSDK_OFFSET(0x8DD5E10)
#define CLASS_1_128F506D49FEB31A__CCTOR_OFFSET UNITYSDK_OFFSET(0x8DD67C0)
#define CLASS_1_128F506D49FEB31A__CTOR_OFFSET UNITYSDK_OFFSET(0x8DD5C60)

inline static constexpr unsigned int Class_1_128F506D49FEB31A_TypeDefinitionIndex = 49218;

class Class_1_128F506D49FEB31A : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_7()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_128F506D49FEB31A_TypeDefinitionIndex)->GetStaticField(0x6BD0);
	}
	::Class_1_7A8FB7EDAFC5C8F4* Field_1_4; // 0x10
	::System::Collections::Generic::List_1<::Class_1_7A8FB7EDAFC5C8F4*>* Field_1_3; // 0x18
	::RPG::Client::PerformanceManager* Field_1_0; // 0x20
	::System::UInt32 Field_1_2; // 0x28
	::System::Single Field_1_6; // 0x2C
	::System::Boolean Field_1_5; // 0x30
	::System::Boolean Field_1_1; // 0x31

	::System::Void _ctor(::RPG::Client::PerformanceManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PerformanceManager*))((::PBYTE)hIl2Cpp + CLASS_1_128F506D49FEB31A__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_128F506D49FEB31A__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_128F506D49FEB31A_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_128F506D49FEB31A_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_57DC8A2150C8FBBB(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_128F506D49FEB31A_METHOD_1_57DC8A2150C8FBBB_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_403F9746A5C8AE1C(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_128F506D49FEB31A_METHOD_1_403F9746A5C8AE1C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_EC1B27BDAC59929D(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_128F506D49FEB31A_METHOD_1_EC1B27BDAC59929D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F4AC2F73B2036484()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_128F506D49FEB31A_METHOD_1_F4AC2F73B2036484_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_128F506D49FEB31A_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_FD7514C64FB1B043(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_128F506D49FEB31A_METHOD_1_FD7514C64FB1B043_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_128F506D49FEB31A_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_A56385E6706FA723()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_128F506D49FEB31A_METHOD_1_A56385E6706FA723_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_128F506D49FEB31A_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_128F506D49FEB31A_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}
};

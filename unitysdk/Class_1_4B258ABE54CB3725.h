#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

class Class_0_16E4307DCC419505_265;
namespace RPG::Client { class RPGProfilerMarker; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4B258ABE54CB3725_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18E93FB0)
#define CLASS_1_4B258ABE54CB3725_METHOD_1_04309940D97A325F_OFFSET UNITYSDK_OFFSET(0x18E93FF0)
#define CLASS_1_4B258ABE54CB3725_METHOD_1_04DCB188D8AA3458_OFFSET UNITYSDK_OFFSET(0x18E940C0)
#define CLASS_1_4B258ABE54CB3725_METHOD_1_0DEE3BE769EAC0EB_OFFSET UNITYSDK_OFFSET(0x18E92630)
#define CLASS_1_4B258ABE54CB3725_METHOD_1_37D3D9A3F3244B90_OFFSET UNITYSDK_OFFSET(0x18E93BE0)
#define CLASS_1_4B258ABE54CB3725_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x18E92840)
#define CLASS_1_4B258ABE54CB3725_METHOD_1_C796A0B42720FBD3_OFFSET UNITYSDK_OFFSET(0x18E93E00)
#define CLASS_1_4B258ABE54CB3725_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x18E93810)
#define CLASS_1_4B258ABE54CB3725_METHOD_1_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x18E93830)
#define CLASS_1_4B258ABE54CB3725__CCTOR_OFFSET UNITYSDK_OFFSET(0x18E942D0)
#define CLASS_1_4B258ABE54CB3725__CTOR_OFFSET UNITYSDK_OFFSET(0x18E93440)

inline static constexpr unsigned int Class_1_4B258ABE54CB3725_TypeDefinitionIndex = 40406;

class Class_1_4B258ABE54CB3725 : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_0()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B258ABE54CB3725_TypeDefinitionIndex)->GetStaticField(0x12C0);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_1()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B258ABE54CB3725_TypeDefinitionIndex)->GetStaticField(0x12C8);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_2()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B258ABE54CB3725_TypeDefinitionIndex)->GetStaticField(0x12D0);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_3()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B258ABE54CB3725_TypeDefinitionIndex)->GetStaticField(0x12D8);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_4()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B258ABE54CB3725_TypeDefinitionIndex)->GetStaticField(0x12E0);
	}
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_265*>* Field_1_5; // 0x10
	::System::Boolean Field_1_6; // 0x18
	::System::Boolean Field_1_7; // 0x19

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4B258ABE54CB3725__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4B258ABE54CB3725__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B258ABE54CB3725_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_04309940D97A325F(::Class_0_16E4307DCC419505_265* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_265*))((::PBYTE)hIl2Cpp + CLASS_1_4B258ABE54CB3725_METHOD_1_04309940D97A325F_OFFSET))(this, a1);
	}

	::System::Void Method_1_0DEE3BE769EAC0EB(::Class_0_16E4307DCC419505_265* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_265*))((::PBYTE)hIl2Cpp + CLASS_1_4B258ABE54CB3725_METHOD_1_0DEE3BE769EAC0EB_OFFSET))(this, a1);
	}

	::System::Void Method_1_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B258ABE54CB3725_METHOD_1_F7BA13C72A6B3F58_OFFSET))(this);
	}

	::System::Void Method_1_37D3D9A3F3244B90()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B258ABE54CB3725_METHOD_1_37D3D9A3F3244B90_OFFSET))(this);
	}

	::System::Void Method_1_C796A0B42720FBD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B258ABE54CB3725_METHOD_1_C796A0B42720FBD3_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B258ABE54CB3725_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Nullable_1<::Unity::Jobs::JobHandle> Method_1_04DCB188D8AA3458(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_265*>* a1)
	{
		return ((::System::Nullable_1<::Unity::Jobs::JobHandle>(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_265*>*))((::PBYTE)hIl2Cpp + CLASS_1_4B258ABE54CB3725_METHOD_1_04DCB188D8AA3458_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B258ABE54CB3725_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}
};

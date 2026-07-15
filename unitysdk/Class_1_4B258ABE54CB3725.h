#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

class Class_0_16E4307DCC419505_285;
namespace RPG::Client { class RPGProfilerMarker; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4B258ABE54CB3725_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D2F8DE0)
#define CLASS_1_4B258ABE54CB3725_METHOD_1_04309940D97A325F_OFFSET UNITYSDK_OFFSET(0x1D2F8E20)
#define CLASS_1_4B258ABE54CB3725_METHOD_1_0DEE3BE769EAC0EB_OFFSET UNITYSDK_OFFSET(0x1D2F72C0)
#define CLASS_1_4B258ABE54CB3725_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1D2F74D0)
#define CLASS_1_4B258ABE54CB3725_METHOD_1_8FA87810B2A772C2_OFFSET UNITYSDK_OFFSET(0x1D2F8EF0)
#define CLASS_1_4B258ABE54CB3725_METHOD_1_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0x1D2F8920)
#define CLASS_1_4B258ABE54CB3725_METHOD_1_D339EFAB24ED44B0_OFFSET UNITYSDK_OFFSET(0x1D2F8B80)
#define CLASS_1_4B258ABE54CB3725_METHOD_1_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0x1D2F8CF0)
#define CLASS_1_4B258ABE54CB3725_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x1D2F8900)
#define CLASS_1_4B258ABE54CB3725__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2F9060)
#define CLASS_1_4B258ABE54CB3725__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2F85A0)

inline static constexpr unsigned int Class_1_4B258ABE54CB3725_TypeDefinitionIndex = 41221;

class Class_1_4B258ABE54CB3725 : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_0()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B258ABE54CB3725_TypeDefinitionIndex)->GetStaticField(0x1020);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_1()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B258ABE54CB3725_TypeDefinitionIndex)->GetStaticField(0x1028);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_2()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B258ABE54CB3725_TypeDefinitionIndex)->GetStaticField(0x1030);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_3()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B258ABE54CB3725_TypeDefinitionIndex)->GetStaticField(0x1038);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_4()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B258ABE54CB3725_TypeDefinitionIndex)->GetStaticField(0x1040);
	}
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_285*>* Field_1_5; // 0x10
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

	::System::Void Method_1_04309940D97A325F(::Class_0_16E4307DCC419505_285* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_285*))((::PBYTE)hIl2Cpp + CLASS_1_4B258ABE54CB3725_METHOD_1_04309940D97A325F_OFFSET))(this, a1);
	}

	::System::Void Method_1_0DEE3BE769EAC0EB(::Class_0_16E4307DCC419505_285* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_285*))((::PBYTE)hIl2Cpp + CLASS_1_4B258ABE54CB3725_METHOD_1_0DEE3BE769EAC0EB_OFFSET))(this, a1);
	}

	::System::Void Method_1_ABE7715DB28B2DD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B258ABE54CB3725_METHOD_1_ABE7715DB28B2DD1_OFFSET))(this);
	}

	::System::Void Method_1_D339EFAB24ED44B0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B258ABE54CB3725_METHOD_1_D339EFAB24ED44B0_OFFSET))(this);
	}

	::System::Void Method_1_E52129E82CD2D7F8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B258ABE54CB3725_METHOD_1_E52129E82CD2D7F8_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B258ABE54CB3725_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Nullable_1<::Unity::Jobs::JobHandle> Method_1_8FA87810B2A772C2(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_285*>* a1)
	{
		return ((::System::Nullable_1<::Unity::Jobs::JobHandle>(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_285*>*))((::PBYTE)hIl2Cpp + CLASS_1_4B258ABE54CB3725_METHOD_1_8FA87810B2A772C2_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B258ABE54CB3725_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

class Class_0_16E4307DCC419505_252;
namespace RPG::Client { class RPGProfilerMarker; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1DFC6D2E621A7EE8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x180F03D0)
#define CLASS_1_1DFC6D2E621A7EE8_METHOD_1_07E567B3C6C3D7D7_OFFSET UNITYSDK_OFFSET(0x180F0AA0)
#define CLASS_1_1DFC6D2E621A7EE8_METHOD_1_10CAB4D76B69F3F3_OFFSET UNITYSDK_OFFSET(0x180F0C90)
#define CLASS_1_1DFC6D2E621A7EE8_METHOD_1_218124418542E081_OFFSET UNITYSDK_OFFSET(0x180F05E0)
#define CLASS_1_1DFC6D2E621A7EE8_METHOD_1_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0x180F1230)
#define CLASS_1_1DFC6D2E621A7EE8_METHOD_1_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x180F0410)
#define CLASS_1_1DFC6D2E621A7EE8_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x180F0490)
#define CLASS_1_1DFC6D2E621A7EE8_METHOD_1_C35045E747B0FBCA_OFFSET UNITYSDK_OFFSET(0x180F04A0)
#define CLASS_1_1DFC6D2E621A7EE8_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x180F16F0)
#define CLASS_1_1DFC6D2E621A7EE8__CCTOR_OFFSET UNITYSDK_OFFSET(0x180F1710)
#define CLASS_1_1DFC6D2E621A7EE8__CTOR_OFFSET UNITYSDK_OFFSET(0x180F0390)

inline static constexpr unsigned int Class_1_1DFC6D2E621A7EE8_TypeDefinitionIndex = 39583;

class Class_1_1DFC6D2E621A7EE8 : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_3()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DFC6D2E621A7EE8_TypeDefinitionIndex)->GetStaticField(0x1370);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_6()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DFC6D2E621A7EE8_TypeDefinitionIndex)->GetStaticField(0x1378);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_7()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DFC6D2E621A7EE8_TypeDefinitionIndex)->GetStaticField(0x1380);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_5()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DFC6D2E621A7EE8_TypeDefinitionIndex)->GetStaticField(0x1388);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_4()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DFC6D2E621A7EE8_TypeDefinitionIndex)->GetStaticField(0x1390);
	}
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_252*>* Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x18
	::System::Boolean Field_1_2; // 0x19

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1DFC6D2E621A7EE8__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1DFC6D2E621A7EE8__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DFC6D2E621A7EE8_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_252* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_252*))((::PBYTE)hIl2Cpp + CLASS_1_1DFC6D2E621A7EE8_METHOD_1_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_1_C35045E747B0FBCA(::Class_0_16E4307DCC419505_252* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_252*))((::PBYTE)hIl2Cpp + CLASS_1_1DFC6D2E621A7EE8_METHOD_1_C35045E747B0FBCA_OFFSET))(this, a1);
	}

	::System::Void Method_1_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DFC6D2E621A7EE8_METHOD_1_218124418542E081_OFFSET))(this);
	}

	::System::Void Method_1_07E567B3C6C3D7D7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DFC6D2E621A7EE8_METHOD_1_07E567B3C6C3D7D7_OFFSET))(this);
	}

	::System::Void Method_1_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DFC6D2E621A7EE8_METHOD_1_29352E75304CF2A0_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DFC6D2E621A7EE8_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Nullable_1<::Unity::Jobs::JobHandle> Method_1_10CAB4D76B69F3F3(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_252*>* a1)
	{
		return ((::System::Nullable_1<::Unity::Jobs::JobHandle>(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_252*>*))((::PBYTE)hIl2Cpp + CLASS_1_1DFC6D2E621A7EE8_METHOD_1_10CAB4D76B69F3F3_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DFC6D2E621A7EE8_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}
};

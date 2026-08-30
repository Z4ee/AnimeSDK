#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

class Class_0_16E4307DCC419505_292;
namespace RPG::Client { class RPGProfilerMarker; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4B258ABE54CB3725_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C659060)
#define CLASS_1_4B258ABE54CB3725_METHOD_1_04309940D97A325F_OFFSET UNITYSDK_OFFSET(0x1C6590A0)
#define CLASS_1_4B258ABE54CB3725_METHOD_1_0DEE3BE769EAC0EB_OFFSET UNITYSDK_OFFSET(0x1C657540)
#define CLASS_1_4B258ABE54CB3725_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1C657750)
#define CLASS_1_4B258ABE54CB3725_METHOD_1_8FA87810B2A772C2_OFFSET UNITYSDK_OFFSET(0x1C659170)
#define CLASS_1_4B258ABE54CB3725_METHOD_1_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0x1C658BA0)
#define CLASS_1_4B258ABE54CB3725_METHOD_1_D339EFAB24ED44B0_OFFSET UNITYSDK_OFFSET(0x1C658E00)
#define CLASS_1_4B258ABE54CB3725_METHOD_1_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0x1C658F70)
#define CLASS_1_4B258ABE54CB3725_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x1C658B80)
#define CLASS_1_4B258ABE54CB3725__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6592E0)
#define CLASS_1_4B258ABE54CB3725__CTOR_OFFSET UNITYSDK_OFFSET(0x1C658820)

inline static constexpr unsigned int Class_1_4B258ABE54CB3725_TypeDefinitionIndex = 42181;

class Class_1_4B258ABE54CB3725 : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_DHENEGNOJBE()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B258ABE54CB3725_TypeDefinitionIndex)->GetStaticField(0x11D0);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_CADCEEPBCDC()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B258ABE54CB3725_TypeDefinitionIndex)->GetStaticField(0x11D8);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_EOPGCINLMOA()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B258ABE54CB3725_TypeDefinitionIndex)->GetStaticField(0x11E0);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_ACGJKBIKNMN()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B258ABE54CB3725_TypeDefinitionIndex)->GetStaticField(0x11E8);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_BLEGGAFMDAJ()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B258ABE54CB3725_TypeDefinitionIndex)->GetStaticField(0x11F0);
	}
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_292*>* FBHMMHICDDG; // 0x10
	::System::Boolean LINBEGOFFLB; // 0x18
	::System::Boolean MOEIOHNLLBF; // 0x19

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

	::System::Void Method_1_04309940D97A325F(::Class_0_16E4307DCC419505_292* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_292*))((::PBYTE)hIl2Cpp + CLASS_1_4B258ABE54CB3725_METHOD_1_04309940D97A325F_OFFSET))(this, a1);
	}

	::System::Void Method_1_0DEE3BE769EAC0EB(::Class_0_16E4307DCC419505_292* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_292*))((::PBYTE)hIl2Cpp + CLASS_1_4B258ABE54CB3725_METHOD_1_0DEE3BE769EAC0EB_OFFSET))(this, a1);
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

	::System::Nullable_1<::Unity::Jobs::JobHandle> Method_1_8FA87810B2A772C2(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_292*>* a1)
	{
		return ((::System::Nullable_1<::Unity::Jobs::JobHandle>(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_292*>*))((::PBYTE)hIl2Cpp + CLASS_1_4B258ABE54CB3725_METHOD_1_8FA87810B2A772C2_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B258ABE54CB3725_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}
};

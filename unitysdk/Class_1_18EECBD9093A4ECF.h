#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

class Class_1_6BB3CCD14C3350D4;
class Class_2_602372D0AB20C657;
namespace System { class String; }
namespace System::Diagnostics { class StackTrace; }
namespace UnityEngine { class RenderTexture; }

#define CLASS_1_18EECBD9093A4ECF_METHOD_1_2F8EE4CE9D104762_OFFSET UNITYSDK_OFFSET(0xBB5AA50)
#define CLASS_1_18EECBD9093A4ECF_METHOD_1_8E9E3E0D1D6E6E24_OFFSET UNITYSDK_OFFSET(0xBB59890)
#define CLASS_1_18EECBD9093A4ECF__CTOR_OFFSET UNITYSDK_OFFSET(0xBB597B0)

inline static constexpr unsigned int Class_1_18EECBD9093A4ECF_TypeDefinitionIndex = 49980;

class Class_1_18EECBD9093A4ECF : public ::System::Object
{
public:
	static ::Class_1_6BB3CCD14C3350D4** StaticGet_EPPGCNDBKFJ()
	{
		return (::Class_1_6BB3CCD14C3350D4**)Il2CppClass::FromTypeDefinitionIndex(Class_1_18EECBD9093A4ECF_TypeDefinitionIndex)->GetStaticField(0x615F0);
	}
	::System::String* IONNPDPCMGI; // 0x10
	::System::String* DENGBGDGPBG; // 0x18
	::System::String* EKBDBADONEE; // 0x20
	::System::String* OEBGKDJBDLN; // 0x28
	::UnityEngine::RenderTexture* DCPECKHILNI; // 0x30
	::UnityEngine::RenderTexture* DEKLBEOICNL; // 0x38
	::System::String* AIPJJDNLPOG; // 0x40
	::System::String* MOEMBHDMKHG; // 0x48
	::System::String* LFLPOOCDHDP; // 0x50
	::System::Diagnostics::StackTrace* CLOEFAODPDB; // 0x58
	::UnityEngine::RenderTexture* MDFJOFDPLMC; // 0x60
	::System::String* KHIONDCCOHN; // 0x68
	::System::Single AEIPCPIMHGK; // 0x70
	::System::Boolean EPLHEEKHGLC; // 0x74
	::System::Boolean JDPFBBHGMBH; // 0x75
	::System::Boolean EOPJAADKJML; // 0x76
	::System::Int32 LFDIFAAKEBC; // 0x78
	::System::Int32 LMFANJLBAGN; // 0x7C
	::System::DateTime LLICGDGPMJL; // 0x80
	::System::Int32 JGGJCANEGGK; // 0x88

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_18EECBD9093A4ECF__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_2F8EE4CE9D104762(::Class_2_602372D0AB20C657* a1, ::UnityEngine::RenderTexture* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_602372D0AB20C657*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + CLASS_1_18EECBD9093A4ECF_METHOD_1_2F8EE4CE9D104762_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8E9E3E0D1D6E6E24()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18EECBD9093A4ECF_METHOD_1_8E9E3E0D1D6E6E24_OFFSET))(this);
	}
};

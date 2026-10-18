#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

class Class_1_6BB3CCD14C3350D4;
class Class_2_602372D0AB20C657;
namespace System { class String; }
namespace System::Diagnostics { class StackTrace; }
namespace UnityEngine { class RenderTexture; }

#define CLASS_1_18EECBD9093A4ECF_METHOD_1_2F8EE4CE9D104762_OFFSET UNITYSDK_OFFSET(0xB9DEA10)
#define CLASS_1_18EECBD9093A4ECF_METHOD_1_8E9E3E0D1D6E6E24_OFFSET UNITYSDK_OFFSET(0xB9DD830)
#define CLASS_1_18EECBD9093A4ECF__CTOR_OFFSET UNITYSDK_OFFSET(0xB9DD750)

inline static constexpr unsigned int Class_1_18EECBD9093A4ECF_TypeDefinitionIndex = 49555;

class Class_1_18EECBD9093A4ECF : public ::System::Object
{
public:
	static ::Class_1_6BB3CCD14C3350D4** StaticGet_EPPGCNDBKFJ()
	{
		return (::Class_1_6BB3CCD14C3350D4**)Il2CppClass::FromTypeDefinitionIndex(Class_1_18EECBD9093A4ECF_TypeDefinitionIndex)->GetStaticField(0x11740);
	}
	::System::String* MOEMBHDMKHG; // 0x10
	::System::String* LFLPOOCDHDP; // 0x18
	::System::String* EKBDBADONEE; // 0x20
	::UnityEngine::RenderTexture* DEKLBEOICNL; // 0x28
	::System::String* IONNPDPCMGI; // 0x30
	::System::String* KHIONDCCOHN; // 0x38
	::System::String* OEBGKDJBDLN; // 0x40
	::System::Diagnostics::StackTrace* CLOEFAODPDB; // 0x48
	::System::String* DENGBGDGPBG; // 0x50
	::System::String* AIPJJDNLPOG; // 0x58
	::UnityEngine::RenderTexture* MDFJOFDPLMC; // 0x60
	::UnityEngine::RenderTexture* DCPECKHILNI; // 0x68
	::System::Int32 LFDIFAAKEBC; // 0x70
	::System::DateTime LLICGDGPMJL; // 0x78
	::System::Int32 LMFANJLBAGN; // 0x80
	::System::Single AEIPCPIMHGK; // 0x84
	::System::Int32 JGGJCANEGGK; // 0x88
	::System::Boolean JDPFBBHGMBH; // 0x8C
	::System::Boolean EOPJAADKJML; // 0x8D
	::System::Boolean EPLHEEKHGLC; // 0x8E

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

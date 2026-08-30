#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0AF9A5CCF0C0D579;
class Class_1_1B9BBF1B9A8CC806;
namespace RPG::Client { template <typename T> class ScopeUser_1; }
namespace System { class String; }
namespace System::IO { class BinaryWriter; }

#define CLASS_1_1A40254A4ADFCDE0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14070330)
#define CLASS_1_1A40254A4ADFCDE0_METHOD_1_11A5396029C33A57_OFFSET UNITYSDK_OFFSET(0x140A12D0)
#define CLASS_1_1A40254A4ADFCDE0_METHOD_1_1DBEE8E0DBE75B4A_OFFSET UNITYSDK_OFFSET(0x1406FD80)
#define CLASS_1_1A40254A4ADFCDE0_METHOD_1_1ECC242658BCEB1C_OFFSET UNITYSDK_OFFSET(0x140A0BA0)
#define CLASS_1_1A40254A4ADFCDE0_METHOD_1_2A62584A54EE40E0_OFFSET UNITYSDK_OFFSET(0x1409E9E0)
#define CLASS_1_1A40254A4ADFCDE0_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x140A0AE0)
#define CLASS_1_1A40254A4ADFCDE0_METHOD_1_DC8AA765E2AFD1B6_OFFSET UNITYSDK_OFFSET(0x140A0B30)
#define CLASS_1_1A40254A4ADFCDE0_METHOD_1_FE2CB6F4268D5D2D_OFFSET UNITYSDK_OFFSET(0x140A0CC0)
#define CLASS_1_1A40254A4ADFCDE0__CTOR_OFFSET UNITYSDK_OFFSET(0x1406FA50)

inline static constexpr unsigned int Class_1_1A40254A4ADFCDE0_TypeDefinitionIndex = 40264;

class Class_1_1A40254A4ADFCDE0 : public ::System::Object
{
public:
	// static const ::System::UInt32 PAMJFKMFGDG = 0x10; // 0x0
	// static const ::System::UInt32 ADLIHHPHHLG = 0xC; // 0x0
	::Il2CppArray<::Class_1_0AF9A5CCF0C0D579*>* ONKAMPHIMKH; // 0x10
	::Il2CppArray<::System::Byte>* HDKHKBDEMJK; // 0x18
	::Class_1_0AF9A5CCF0C0D579* HLBJOOPGBOI; // 0x20
	::Class_1_1B9BBF1B9A8CC806* DFNBPMDNOKF; // 0x28
	::System::String* BEPENCIBLDA; // 0x30
	::System::Boolean HANLIJNLAPI; // 0x38

	::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::UInt16 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_1A40254A4ADFCDE0__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A40254A4ADFCDE0_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::Class_1_0AF9A5CCF0C0D579* Method_1_DC8AA765E2AFD1B6(::System::Int32 a1)
	{
		return ((::Class_1_0AF9A5CCF0C0D579*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1A40254A4ADFCDE0_METHOD_1_DC8AA765E2AFD1B6_OFFSET))(this, a1);
	}

	::RPG::Client::ScopeUser_1<::Class_1_0AF9A5CCF0C0D579*>* Method_1_2A62584A54EE40E0()
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_0AF9A5CCF0C0D579*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A40254A4ADFCDE0_METHOD_1_2A62584A54EE40E0_OFFSET))(this);
	}

	::RPG::Client::ScopeUser_1<::Class_1_0AF9A5CCF0C0D579*>* Method_1_1DBEE8E0DBE75B4A(::System::Int32 a1)
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_0AF9A5CCF0C0D579*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1A40254A4ADFCDE0_METHOD_1_1DBEE8E0DBE75B4A_OFFSET))(this, a1);
	}

	::System::Void Method_1_1ECC242658BCEB1C(::System::IO::BinaryWriter* a1, ::System::UInt16 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_1A40254A4ADFCDE0_METHOD_1_1ECC242658BCEB1C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FE2CB6F4268D5D2D(::System::IO::BinaryWriter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + CLASS_1_1A40254A4ADFCDE0_METHOD_1_FE2CB6F4268D5D2D_OFFSET))(this, a1);
	}

	::System::Void Method_1_11A5396029C33A57()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A40254A4ADFCDE0_METHOD_1_11A5396029C33A57_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A40254A4ADFCDE0_DISPOSE_OFFSET))(this);
	}
};

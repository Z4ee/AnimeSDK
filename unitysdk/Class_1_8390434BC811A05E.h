#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournDifficulty; }

#define CLASS_1_8390434BC811A05E_COMPARE_OFFSET UNITYSDK_OFFSET(0x17E846A0)
#define CLASS_1_8390434BC811A05E_METHOD_1_818878082546D86F_OFFSET UNITYSDK_OFFSET(0x17E84790)
#define CLASS_1_8390434BC811A05E_METHOD_1_CE264D3D1A8EFDF3_OFFSET UNITYSDK_OFFSET(0x17E84890)
#define CLASS_1_8390434BC811A05E__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E84AD0)
#define CLASS_1_8390434BC811A05E__CTOR_OFFSET UNITYSDK_OFFSET(0x17E84AC0)

inline static constexpr unsigned int Class_1_8390434BC811A05E_TypeDefinitionIndex = 64589;

class Class_1_8390434BC811A05E : public ::System::Object
{
public:
	static ::Class_1_8390434BC811A05E** StaticGet_Field_1_0()
	{
		return (::Class_1_8390434BC811A05E**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8390434BC811A05E_TypeDefinitionIndex)->GetStaticField(0x2A8A0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8390434BC811A05E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8390434BC811A05E__CCTOR_OFFSET))();
	}

	::System::Int32 Compare(::RPG::Client::IRogueTournDifficulty* a1, ::RPG::Client::IRogueTournDifficulty* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*, ::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + CLASS_1_8390434BC811A05E_COMPARE_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_818878082546D86F(::RPG::Client::IRogueTournDifficulty* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + CLASS_1_8390434BC811A05E_METHOD_1_818878082546D86F_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_CE264D3D1A8EFDF3(::RPG::Client::IRogueTournDifficulty* a1, ::RPG::Client::IRogueTournDifficulty* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*, ::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + CLASS_1_8390434BC811A05E_METHOD_1_CE264D3D1A8EFDF3_OFFSET))(this, a1, a2);
	}
};

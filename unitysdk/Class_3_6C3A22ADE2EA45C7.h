#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesCointFormulaTerm.h"
#include "unitysdk/RPG/GameCore/ChenLingFesItemFilterType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_6C3A22ADE2EA45C7_METHOD_3_28DFC52A1206DD2C_OFFSET UNITYSDK_OFFSET(0x1D1F88D0)
#define CLASS_3_6C3A22ADE2EA45C7_METHOD_3_7DC061678298D63E_OFFSET UNITYSDK_OFFSET(0x1D1F8910)
#define CLASS_3_6C3A22ADE2EA45C7__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1F8900)

inline static constexpr unsigned int Class_3_6C3A22ADE2EA45C7_TypeDefinitionIndex = 21255;

class Class_3_6C3A22ADE2EA45C7 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* BPLDECIIJBE; // 0x18
	::System::String* BJALGDJKGFP; // 0x20
	::System::String* LGCAAFFFBHJ; // 0x28
	::System::String* MLMILNIODBB; // 0x30
	::RPG::GameCore::ChenLingFesCointFormulaTerm MLAKOIDJHJF; // 0x38
	::System::UInt32 BADKEABAEMP; // 0x3C
	::System::Boolean MHGBOBLCBIB; // 0x40
	::System::Boolean OIAKOCEKFAH; // 0x41
	::System::Boolean CEAPGCBPBCK; // 0x42
	::System::UInt32 CMNOEFFFNPE; // 0x44
	::RPG::GameCore::ChenLingFesCointFormulaTerm GEPGCCLFKCF; // 0x48
	::RPG::GameCore::ChenLingFesItemFilterType CADEJOOMKOI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C3A22ADE2EA45C7__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_28DFC52A1206DD2C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6C3A22ADE2EA45C7*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6C3A22ADE2EA45C7*&))((::PBYTE)hIl2Cpp + CLASS_3_6C3A22ADE2EA45C7_METHOD_3_28DFC52A1206DD2C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7DC061678298D63E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6C3A22ADE2EA45C7* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6C3A22ADE2EA45C7*))((::PBYTE)hIl2Cpp + CLASS_3_6C3A22ADE2EA45C7_METHOD_3_7DC061678298D63E_OFFSET))(a1, a2);
	}
};

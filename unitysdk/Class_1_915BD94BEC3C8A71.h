#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BossHeadEffType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_915BD94BEC3C8A71_METHOD_1_E73D4D13761A4928_OFFSET UNITYSDK_OFFSET(0xBDC6030)
#define CLASS_1_915BD94BEC3C8A71__CCTOR_OFFSET UNITYSDK_OFFSET(0xBDC6150)
#define CLASS_1_915BD94BEC3C8A71__CTOR_OFFSET UNITYSDK_OFFSET(0xBDC6140)

inline static constexpr unsigned int Class_1_915BD94BEC3C8A71_TypeDefinitionIndex = 71696;

class Class_1_915BD94BEC3C8A71 : public ::System::Object
{
public:
	static ::Class_1_915BD94BEC3C8A71** StaticGet_NGFGMAKPKPD()
	{
		return (::Class_1_915BD94BEC3C8A71**)Il2CppClass::FromTypeDefinitionIndex(Class_1_915BD94BEC3C8A71_TypeDefinitionIndex)->GetStaticField(0x64FF0);
	}
	static ::Class_1_915BD94BEC3C8A71** StaticGet_MOKKBFKOBFH()
	{
		return (::Class_1_915BD94BEC3C8A71**)Il2CppClass::FromTypeDefinitionIndex(Class_1_915BD94BEC3C8A71_TypeDefinitionIndex)->GetStaticField(0x64FF8);
	}
	static ::Class_1_915BD94BEC3C8A71** StaticGet_IBHILJLAEDC()
	{
		return (::Class_1_915BD94BEC3C8A71**)Il2CppClass::FromTypeDefinitionIndex(Class_1_915BD94BEC3C8A71_TypeDefinitionIndex)->GetStaticField(0x65000);
	}
	::System::String* INJJNCAGKKG; // 0x10
	::System::String* BDACPPLKLGL; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_915BD94BEC3C8A71__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_915BD94BEC3C8A71__CCTOR_OFFSET))();
	}

	static ::Class_1_915BD94BEC3C8A71* Method_1_E73D4D13761A4928(::RPG::GameCore::BossHeadEffType a1)
	{
		return ((::Class_1_915BD94BEC3C8A71*(*)(::RPG::GameCore::BossHeadEffType))((::PBYTE)hIl2Cpp + CLASS_1_915BD94BEC3C8A71_METHOD_1_E73D4D13761A4928_OFFSET))(a1);
	}
};

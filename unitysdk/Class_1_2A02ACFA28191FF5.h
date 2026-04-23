#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTeam; }

#define CLASS_1_2A02ACFA28191FF5_METHOD_1_B7FF5F38F7BA9731_1_OFFSET UNITYSDK_OFFSET(0x92333A0)
#define CLASS_1_2A02ACFA28191FF5_METHOD_1_B7FF5F38F7BA9731_2_OFFSET UNITYSDK_OFFSET(0x9233490)
#define CLASS_1_2A02ACFA28191FF5_METHOD_1_B7FF5F38F7BA9731_OFFSET UNITYSDK_OFFSET(0x92332B0)
#define CLASS_1_2A02ACFA28191FF5_METHOD_1_C4BFBB1BE6C0430A_OFFSET UNITYSDK_OFFSET(0x9233210)
#define CLASS_1_2A02ACFA28191FF5_METHOD_1_DA023B03FB2C7224_OFFSET UNITYSDK_OFFSET(0x9233580)
#define CLASS_1_2A02ACFA28191FF5__CTOR_OFFSET UNITYSDK_OFFSET(0x92332A0)

inline static constexpr unsigned int Class_1_2A02ACFA28191FF5_TypeDefinitionIndex = 59970;

class Class_1_2A02ACFA28191FF5 : public ::System::Object
{
public:
	static ::Class_1_2A02ACFA28191FF5** StaticGet_Field_1_0()
	{
		return (::Class_1_2A02ACFA28191FF5**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2A02ACFA28191FF5_TypeDefinitionIndex)->GetStaticField(0x69DA0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A02ACFA28191FF5__CTOR_OFFSET))(this);
	}

	static ::Class_1_2A02ACFA28191FF5* Method_1_C4BFBB1BE6C0430A()
	{
		return ((::Class_1_2A02ACFA28191FF5*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2A02ACFA28191FF5_METHOD_1_C4BFBB1BE6C0430A_OFFSET))();
	}

	::System::Void Method_1_B7FF5F38F7BA9731(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_2A02ACFA28191FF5_METHOD_1_B7FF5F38F7BA9731_OFFSET))(this, a1);
	}

	::System::Void Method_1_B7FF5F38F7BA9731_1(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_2A02ACFA28191FF5_METHOD_1_B7FF5F38F7BA9731_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_B7FF5F38F7BA9731_2(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_2A02ACFA28191FF5_METHOD_1_B7FF5F38F7BA9731_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_DA023B03FB2C7224(::RPG::Client::GridFightTeam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTeam*))((::PBYTE)hIl2Cpp + CLASS_1_2A02ACFA28191FF5_METHOD_1_DA023B03FB2C7224_OFFSET))(this, a1);
	}
};

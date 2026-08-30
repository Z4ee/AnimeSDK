#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTeam; }

#define CLASS_1_A144045181AEDD23_METHOD_1_5FCB2EE315521408_1_OFFSET UNITYSDK_OFFSET(0x15603BA0)
#define CLASS_1_A144045181AEDD23_METHOD_1_5FCB2EE315521408_2_OFFSET UNITYSDK_OFFSET(0x15603C90)
#define CLASS_1_A144045181AEDD23_METHOD_1_5FCB2EE315521408_OFFSET UNITYSDK_OFFSET(0x15603AB0)
#define CLASS_1_A144045181AEDD23_METHOD_1_C4BFBB1BE6C0430A_OFFSET UNITYSDK_OFFSET(0x15603A10)
#define CLASS_1_A144045181AEDD23_METHOD_1_E53524BC9E187933_OFFSET UNITYSDK_OFFSET(0x15603D80)
#define CLASS_1_A144045181AEDD23__CTOR_OFFSET UNITYSDK_OFFSET(0x15603AA0)

inline static constexpr unsigned int Class_1_A144045181AEDD23_TypeDefinitionIndex = 65203;

class Class_1_A144045181AEDD23 : public ::System::Object
{
public:
	static ::Class_1_A144045181AEDD23** StaticGet_FLMODBLFAGD()
	{
		return (::Class_1_A144045181AEDD23**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A144045181AEDD23_TypeDefinitionIndex)->GetStaticField(0x17860);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A144045181AEDD23__CTOR_OFFSET))(this);
	}

	static ::Class_1_A144045181AEDD23* Method_1_C4BFBB1BE6C0430A()
	{
		return ((::Class_1_A144045181AEDD23*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A144045181AEDD23_METHOD_1_C4BFBB1BE6C0430A_OFFSET))();
	}

	::System::Void Method_1_5FCB2EE315521408(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_A144045181AEDD23_METHOD_1_5FCB2EE315521408_OFFSET))(this, a1);
	}

	::System::Void Method_1_5FCB2EE315521408_1(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_A144045181AEDD23_METHOD_1_5FCB2EE315521408_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_5FCB2EE315521408_2(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_A144045181AEDD23_METHOD_1_5FCB2EE315521408_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_E53524BC9E187933(::RPG::Client::GridFightTeam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTeam*))((::PBYTE)hIl2Cpp + CLASS_1_A144045181AEDD23_METHOD_1_E53524BC9E187933_OFFSET))(this, a1);
	}
};

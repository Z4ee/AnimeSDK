#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTeam; }

#define CLASS_1_A144045181AEDD23_METHOD_1_5FCB2EE315521408_1_OFFSET UNITYSDK_OFFSET(0x160603D0)
#define CLASS_1_A144045181AEDD23_METHOD_1_5FCB2EE315521408_2_OFFSET UNITYSDK_OFFSET(0x160604C0)
#define CLASS_1_A144045181AEDD23_METHOD_1_5FCB2EE315521408_OFFSET UNITYSDK_OFFSET(0x160602E0)
#define CLASS_1_A144045181AEDD23_METHOD_1_C4BFBB1BE6C0430A_OFFSET UNITYSDK_OFFSET(0x16060240)
#define CLASS_1_A144045181AEDD23_METHOD_1_E53524BC9E187933_OFFSET UNITYSDK_OFFSET(0x160605B0)
#define CLASS_1_A144045181AEDD23__CTOR_OFFSET UNITYSDK_OFFSET(0x160602D0)

inline static constexpr unsigned int Class_1_A144045181AEDD23_TypeDefinitionIndex = 62218;

class Class_1_A144045181AEDD23 : public ::System::Object
{
public:
	static ::Class_1_A144045181AEDD23** StaticGet_Field_1_0()
	{
		return (::Class_1_A144045181AEDD23**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A144045181AEDD23_TypeDefinitionIndex)->GetStaticField(0x545E0);
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

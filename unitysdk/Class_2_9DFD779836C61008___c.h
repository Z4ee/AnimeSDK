#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGridMember; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_9DFD779836C61008___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x150580B0)
#define CLASS_2_9DFD779836C61008___C__CTOR_OFFSET UNITYSDK_OFFSET(0x150580F0)
#define CLASS_2_9DFD779836C61008___C___ISROLEAFFECTEDBYTRAIT_B__4_0_OFFSET UNITYSDK_OFFSET(0x15058100)

inline static constexpr unsigned int Class_2_9DFD779836C61008___c_TypeDefinitionIndex = 62214;

class Class_2_9DFD779836C61008___c : public ::System::Object
{
public:
	static ::Class_2_9DFD779836C61008___c** StaticGet___9()
	{
		return (::Class_2_9DFD779836C61008___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9DFD779836C61008___c_TypeDefinitionIndex)->GetStaticField(0x68DE0);
	}
	static ::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9DFD779836C61008___c_TypeDefinitionIndex)->GetStaticField(0x68DE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9DFD779836C61008___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9DFD779836C61008___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __IsRoleAffectedByTrait_b__4_0(::RPG::Client::GridFightGridMember* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + CLASS_2_9DFD779836C61008___C___ISROLEAFFECTEDBYTRAIT_B__4_0_OFFSET))(this, a1);
	}
};

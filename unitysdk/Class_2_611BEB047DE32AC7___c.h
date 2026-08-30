#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FollowByPlayerCustomRoutePoint; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_611BEB047DE32AC7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A0F180)
#define CLASS_2_611BEB047DE32AC7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18A0F1C0)
#define CLASS_2_611BEB047DE32AC7___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x18A0F1D0)

inline static constexpr unsigned int Class_2_611BEB047DE32AC7___c_TypeDefinitionIndex = 52683;

class Class_2_611BEB047DE32AC7___c : public ::System::Object
{
public:
	static ::Class_2_611BEB047DE32AC7___c** StaticGet___9()
	{
		return (::Class_2_611BEB047DE32AC7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_611BEB047DE32AC7___c_TypeDefinitionIndex)->GetStaticField(0x62900);
	}
	static ::System::Comparison_1<::RPG::GameCore::FollowByPlayerCustomRoutePoint*>** StaticGet___9__0_0()
	{
		return (::System::Comparison_1<::RPG::GameCore::FollowByPlayerCustomRoutePoint*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_611BEB047DE32AC7___c_TypeDefinitionIndex)->GetStaticField(0x62908);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_611BEB047DE32AC7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_611BEB047DE32AC7___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __ctor_b__0_0(::RPG::GameCore::FollowByPlayerCustomRoutePoint* a1, ::RPG::GameCore::FollowByPlayerCustomRoutePoint* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::FollowByPlayerCustomRoutePoint*, ::RPG::GameCore::FollowByPlayerCustomRoutePoint*))((::PBYTE)hIl2Cpp + CLASS_2_611BEB047DE32AC7___C___CTOR_B__0_0_OFFSET))(this, a1, a2);
	}
};

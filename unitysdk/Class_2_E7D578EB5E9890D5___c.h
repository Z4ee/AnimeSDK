#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FollowByPlayerCustomRoutePoint; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_E7D578EB5E9890D5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x129E3390)
#define CLASS_2_E7D578EB5E9890D5___C__CTOR_OFFSET UNITYSDK_OFFSET(0x129E33D0)
#define CLASS_2_E7D578EB5E9890D5___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x129E33E0)

inline static constexpr unsigned int Class_2_E7D578EB5E9890D5___c_TypeDefinitionIndex = 48383;

class Class_2_E7D578EB5E9890D5___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::RPG::GameCore::FollowByPlayerCustomRoutePoint*>** StaticGet___9__0_0()
	{
		return (::System::Comparison_1<::RPG::GameCore::FollowByPlayerCustomRoutePoint*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E7D578EB5E9890D5___c_TypeDefinitionIndex)->GetStaticField(0x350B0);
	}
	static ::Class_2_E7D578EB5E9890D5___c** StaticGet___9()
	{
		return (::Class_2_E7D578EB5E9890D5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E7D578EB5E9890D5___c_TypeDefinitionIndex)->GetStaticField(0x350B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E7D578EB5E9890D5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7D578EB5E9890D5___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __ctor_b__0_0(::RPG::GameCore::FollowByPlayerCustomRoutePoint* x, ::RPG::GameCore::FollowByPlayerCustomRoutePoint* y)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::FollowByPlayerCustomRoutePoint*, ::RPG::GameCore::FollowByPlayerCustomRoutePoint*))((::PBYTE)hIl2Cpp + CLASS_2_E7D578EB5E9890D5___C___CTOR_B__0_0_OFFSET))(this, x, y);
	}
};

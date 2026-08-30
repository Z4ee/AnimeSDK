#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_3DE83D320AD4AA4D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1766C6E0)
#define CLASS_1_3DE83D320AD4AA4D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1766C710)
#define CLASS_1_3DE83D320AD4AA4D___C__SORTDARKTEAMMULTIROWMEMBER_B__11_0_OFFSET UNITYSDK_OFFSET(0x1766C720)

inline static constexpr unsigned int Class_1_3DE83D320AD4AA4D___c_TypeDefinitionIndex = 59194;

class Class_1_3DE83D320AD4AA4D___c : public ::System::Object
{
public:
	static ::Class_1_3DE83D320AD4AA4D___c** StaticGet___9()
	{
		return (::Class_1_3DE83D320AD4AA4D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3DE83D320AD4AA4D___c_TypeDefinitionIndex)->GetStaticField(0x28380);
	}
	static ::System::Comparison_1<::RPG::GameCore::GameEntity*>** StaticGet___9__11_0()
	{
		return (::System::Comparison_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3DE83D320AD4AA4D___c_TypeDefinitionIndex)->GetStaticField(0x28388);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3DE83D320AD4AA4D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE83D320AD4AA4D___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _SortDarkTeamMultiRowMember_b__11_0(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_3DE83D320AD4AA4D___C__SORTDARKTEAMMULTIROWMEMBER_B__11_0_OFFSET))(this, a1, a2);
	}
};

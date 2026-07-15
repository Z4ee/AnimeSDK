#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_847F2D2749D675A7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x191047E0)
#define CLASS_1_847F2D2749D675A7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19104820)
#define CLASS_1_847F2D2749D675A7___C___UPDATEPREVIEW_SKILL_B__13_0_OFFSET UNITYSDK_OFFSET(0x19104830)

inline static constexpr unsigned int Class_1_847F2D2749D675A7___c_TypeDefinitionIndex = 34953;

class Class_1_847F2D2749D675A7___c : public ::System::Object
{
public:
	static ::Class_1_847F2D2749D675A7___c** StaticGet___9()
	{
		return (::Class_1_847F2D2749D675A7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_847F2D2749D675A7___c_TypeDefinitionIndex)->GetStaticField(0x54760);
	}
	static ::System::Func_2<::System::UInt32, ::RPG::GameCore::FixPoint>** StaticGet___9__13_0()
	{
		return (::System::Func_2<::System::UInt32, ::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_847F2D2749D675A7___c_TypeDefinitionIndex)->GetStaticField(0x54768);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_847F2D2749D675A7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_847F2D2749D675A7___C__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint __UpdatePreview_Skill_b__13_0(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_847F2D2749D675A7___C___UPDATEPREVIEW_SKILL_B__13_0_OFFSET))(this, a1);
	}
};

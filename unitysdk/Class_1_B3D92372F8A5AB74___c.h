#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_B3D92372F8A5AB74___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x145C1240)
#define CLASS_1_B3D92372F8A5AB74___C__CTOR_OFFSET UNITYSDK_OFFSET(0x145C1270)
#define CLASS_1_B3D92372F8A5AB74___C___BUILD_B__13_0_OFFSET UNITYSDK_OFFSET(0x145C1280)
#define CLASS_1_B3D92372F8A5AB74___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x145C12B0)
#define CLASS_1_B3D92372F8A5AB74___C___CCTOR_B__43_1_OFFSET UNITYSDK_OFFSET(0x145C1310)

inline static constexpr unsigned int Class_1_B3D92372F8A5AB74___c_TypeDefinitionIndex = 52475;

class Class_1_B3D92372F8A5AB74___c : public ::System::Object
{
public:
	static ::Class_1_B3D92372F8A5AB74___c** StaticGet___9()
	{
		return (::Class_1_B3D92372F8A5AB74___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B3D92372F8A5AB74___c_TypeDefinitionIndex)->GetStaticField(0x51E80);
	}
	static ::System::Func_2<::RPG::GameCore::JsonEnum*, ::System::String*>** StaticGet___9__13_0()
	{
		return (::System::Func_2<::RPG::GameCore::JsonEnum*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B3D92372F8A5AB74___c_TypeDefinitionIndex)->GetStaticField(0x51E88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74___C__CTOR_OFFSET))(this);
	}

	::System::String* __Build_b__13_0(::RPG::GameCore::JsonEnum* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74___C___BUILD_B__13_0_OFFSET))(this, a1);
	}

	::System::String* __cctor_b__43_0(::RPG::GameCore::AbilityProperty a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74___C___CCTOR_B__43_0_OFFSET))(this, a1);
	}

	::System::String* __cctor_b__43_1(::RPG::GameCore::AbilityProperty a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74___C___CCTOR_B__43_1_OFFSET))(this, a1);
	}
};

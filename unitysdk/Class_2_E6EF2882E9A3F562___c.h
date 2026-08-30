#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PlanetFesAnimComposite; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_E6EF2882E9A3F562___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x162AC860)
#define CLASS_2_E6EF2882E9A3F562___C__CTOR_OFFSET UNITYSDK_OFFSET(0x162AC8A0)
#define CLASS_2_E6EF2882E9A3F562___C___GETRANDOMANIMCOMPOSITE_B__3_0_OFFSET UNITYSDK_OFFSET(0x162AC8B0)

inline static constexpr unsigned int Class_2_E6EF2882E9A3F562___c_TypeDefinitionIndex = 66694;

class Class_2_E6EF2882E9A3F562___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::GameCore::PlanetFesAnimComposite*, ::System::Int32>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::RPG::GameCore::PlanetFesAnimComposite*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E6EF2882E9A3F562___c_TypeDefinitionIndex)->GetStaticField(0x5ED90);
	}
	static ::Class_2_E6EF2882E9A3F562___c** StaticGet___9()
	{
		return (::Class_2_E6EF2882E9A3F562___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E6EF2882E9A3F562___c_TypeDefinitionIndex)->GetStaticField(0x5ED98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E6EF2882E9A3F562___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6EF2882E9A3F562___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __GetRandomAnimComposite_b__3_0(::RPG::GameCore::PlanetFesAnimComposite* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::PlanetFesAnimComposite*))((::PBYTE)hIl2Cpp + CLASS_2_E6EF2882E9A3F562___C___GETRANDOMANIMCOMPOSITE_B__3_0_OFFSET))(this, a1);
	}
};

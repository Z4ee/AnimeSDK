#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesMiniGameBetUp; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_62C26F9109370A5E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8942E20)
#define CLASS_1_62C26F9109370A5E___C__CREATEBETUPS_B__1_0_OFFSET UNITYSDK_OFFSET(0x8942E60)
#define CLASS_1_62C26F9109370A5E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8942E50)

inline static constexpr unsigned int Class_1_62C26F9109370A5E___c_TypeDefinitionIndex = 54206;

class Class_1_62C26F9109370A5E___c : public ::System::Object
{
public:
	static ::Class_1_62C26F9109370A5E___c** StaticGet___9()
	{
		return (::Class_1_62C26F9109370A5E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_62C26F9109370A5E___c_TypeDefinitionIndex)->GetStaticField(0x49050);
	}
	static ::System::Comparison_1<::RPG::Client::PlanetFesMiniGameBetUp*>** StaticGet___9__1_0()
	{
		return (::System::Comparison_1<::RPG::Client::PlanetFesMiniGameBetUp*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_62C26F9109370A5E___c_TypeDefinitionIndex)->GetStaticField(0x49058);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_62C26F9109370A5E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62C26F9109370A5E___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _CreateBetUps_b__1_0(::RPG::Client::PlanetFesMiniGameBetUp* a, ::RPG::Client::PlanetFesMiniGameBetUp* b)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesMiniGameBetUp*, ::RPG::Client::PlanetFesMiniGameBetUp*))((::PBYTE)hIl2Cpp + CLASS_1_62C26F9109370A5E___C__CREATEBETUPS_B__1_0_OFFSET))(this, a, b);
	}
};

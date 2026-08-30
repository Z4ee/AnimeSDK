#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace RPG::Client { class PlanetFesAvatarMoveController; }
namespace System { class String; }

#define CLASS_2_A242A0C731C1829F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1613EDC0)
#define CLASS_2_A242A0C731C1829F_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1613ED50)
#define CLASS_2_A242A0C731C1829F_METHOD_2_2091F34306E68C88_OFFSET UNITYSDK_OFFSET(0x1613EC00)
#define CLASS_2_A242A0C731C1829F_METHOD_2_551569491841B9E7_OFFSET UNITYSDK_OFFSET(0x1613EAC0)
#define CLASS_2_A242A0C731C1829F_METHOD_2_BB39DFE1EF4C1B0D_OFFSET UNITYSDK_OFFSET(0x1613EB20)
#define CLASS_2_A242A0C731C1829F_METHOD_2_D2C3E503AE36B9C3_OFFSET UNITYSDK_OFFSET(0x1613EBA0)
#define CLASS_2_A242A0C731C1829F__CTOR_OFFSET UNITYSDK_OFFSET(0x1613EE20)

inline static constexpr unsigned int Class_2_A242A0C731C1829F_TypeDefinitionIndex = 66696;

class Class_2_A242A0C731C1829F : public ::RPG::GameCore::GameComponentBase
{
public:
	// static const ::System::String* HHNDOOAICDE; // 0x0
	// static const ::System::String* LDLMMCFDHHE; // 0x0
	::RPG::Client::PlanetFesAvatarMoveController* NJMJBABGLFJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A242A0C731C1829F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_551569491841B9E7(::RPG::Client::PlanetFesAvatarMoveController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesAvatarMoveController*))((::PBYTE)hIl2Cpp + CLASS_2_A242A0C731C1829F_METHOD_2_551569491841B9E7_OFFSET))(this, a1);
	}

	::System::Void Method_2_BB39DFE1EF4C1B0D(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A242A0C731C1829F_METHOD_2_BB39DFE1EF4C1B0D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D2C3E503AE36B9C3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A242A0C731C1829F_METHOD_2_D2C3E503AE36B9C3_OFFSET))(this, a1);
	}

	::System::Void Method_2_2091F34306E68C88()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A242A0C731C1829F_METHOD_2_2091F34306E68C88_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A242A0C731C1829F_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A242A0C731C1829F_DISPOSE_OFFSET))(this);
	}
};

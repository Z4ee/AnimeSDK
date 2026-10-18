#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace RPG::Client { class PlanetFesAvatarMoveController; }
namespace System { class String; }

#define CLASS_2_9974A325DA255FDF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB163000)
#define CLASS_2_9974A325DA255FDF_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xB162F90)
#define CLASS_2_9974A325DA255FDF_METHOD_2_551569491841B9E7_OFFSET UNITYSDK_OFFSET(0xB162D00)
#define CLASS_2_9974A325DA255FDF_METHOD_2_78C62398E94F0FB1_OFFSET UNITYSDK_OFFSET(0xB162E40)
#define CLASS_2_9974A325DA255FDF_METHOD_2_B7797AF42220DD8F_OFFSET UNITYSDK_OFFSET(0xB162DE0)
#define CLASS_2_9974A325DA255FDF_METHOD_2_D023CA2AF3DEB8D3_OFFSET UNITYSDK_OFFSET(0xB162D60)
#define CLASS_2_9974A325DA255FDF__CTOR_OFFSET UNITYSDK_OFFSET(0xB163060)

inline static constexpr unsigned int Class_2_9974A325DA255FDF_TypeDefinitionIndex = 66664;

class Class_2_9974A325DA255FDF : public ::RPG::GameCore::GameComponentBase
{
public:
	// static const ::System::String* HHNDOOAICDE; // 0x0
	// static const ::System::String* LDLMMCFDHHE; // 0x0
	::RPG::Client::PlanetFesAvatarMoveController* NJMJBABGLFJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9974A325DA255FDF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_551569491841B9E7(::RPG::Client::PlanetFesAvatarMoveController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesAvatarMoveController*))((::PBYTE)hIl2Cpp + CLASS_2_9974A325DA255FDF_METHOD_2_551569491841B9E7_OFFSET))(this, a1);
	}

	::System::Void Method_2_D023CA2AF3DEB8D3(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9974A325DA255FDF_METHOD_2_D023CA2AF3DEB8D3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B7797AF42220DD8F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9974A325DA255FDF_METHOD_2_B7797AF42220DD8F_OFFSET))(this, a1);
	}

	::System::Void Method_2_78C62398E94F0FB1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9974A325DA255FDF_METHOD_2_78C62398E94F0FB1_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9974A325DA255FDF_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9974A325DA255FDF_DISPOSE_OFFSET))(this);
	}
};

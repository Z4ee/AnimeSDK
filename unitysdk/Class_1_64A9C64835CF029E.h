#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParkourGame/EffectConfig.h"
#include "unitysdk/Struct_2_0B84ADD7815498A2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_64A9C64835CF029E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCED5210)
#define CLASS_1_64A9C64835CF029E_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xCED5380)
#define CLASS_1_64A9C64835CF029E_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xCED53E0)
#define CLASS_1_64A9C64835CF029E_METHOD_1_B9B71AEDC43C03F6_OFFSET UNITYSDK_OFFSET(0xCED51D0)
#define CLASS_1_64A9C64835CF029E__CTOR_OFFSET UNITYSDK_OFFSET(0xCED4E00)

inline static constexpr unsigned int Class_1_64A9C64835CF029E_TypeDefinitionIndex = 69270;

class Class_1_64A9C64835CF029E : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::Client::ParkourGame::EffectConfig Field_1_1; // 0x18
	::Struct_2_0B84ADD7815498A2 Field_1_2; // 0x40
	::System::Func_1<::System::Boolean>* Field_1_3; // 0x50

	::System::Void _ctor(::UnityEngine::Transform* a1, ::System::String* a2, ::RPG::Client::ParkourGame::EffectConfig a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::RPG::Client::ParkourGame::EffectConfig))((::PBYTE)hIl2Cpp + CLASS_1_64A9C64835CF029E__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::MonoEffect* Method_1_B9B71AEDC43C03F6()
	{
		return ((::RPG::Client::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64A9C64835CF029E_METHOD_1_B9B71AEDC43C03F6_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64A9C64835CF029E_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64A9C64835CF029E_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64A9C64835CF029E_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}
};

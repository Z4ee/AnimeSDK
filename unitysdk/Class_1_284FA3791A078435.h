#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoEntityModelModifier; }
namespace System { class String; }

#define CLASS_1_284FA3791A078435_METHOD_1_1DF6DADB298ACC54_OFFSET UNITYSDK_OFFSET(0x12E96320)
#define CLASS_1_284FA3791A078435_METHOD_1_70F563968CE387D0_OFFSET UNITYSDK_OFFSET(0x12E961B0)

inline static constexpr unsigned int Class_1_284FA3791A078435_TypeDefinitionIndex = 74324;

class Class_1_284FA3791A078435 : public ::System::Object
{
public:
	static ::MoleMole::Config::EntityType Method_1_70F563968CE387D0(::System::Int32 a1)
	{
		return ((::MoleMole::Config::EntityType(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_284FA3791A078435_METHOD_1_70F563968CE387D0_OFFSET))(a1);
	}

	static ::MoleMole::EntityHandle Method_1_1DF6DADB298ACC54(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Boolean a4, ::System::String* a5, ::System::UInt64 a6, ::MoleMole::MonoEntityModelModifier* a7)
	{
		return ((::MoleMole::EntityHandle(*)(::System::Int32, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::String*, ::System::UInt64, ::MoleMole::MonoEntityModelModifier*))((::PBYTE)hIl2Cpp + CLASS_1_284FA3791A078435_METHOD_1_1DF6DADB298ACC54_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}
};

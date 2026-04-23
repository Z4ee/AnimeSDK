#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7E61104234A02BD7;
class Class_1_9869F38A47970354;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define CLASS_1_EFD812FA582E2CD3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9581340)
#define CLASS_1_EFD812FA582E2CD3_GET_CURRENTQTEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9581480)
#define CLASS_1_EFD812FA582E2CD3_METHOD_1_230E4ECF40B59202_OFFSET UNITYSDK_OFFSET(0x9581390)
#define CLASS_1_EFD812FA582E2CD3_METHOD_1_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x9581230)
#define CLASS_1_EFD812FA582E2CD3_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x95812E0)
#define CLASS_1_EFD812FA582E2CD3_SET_CURRENTQTEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9581490)
#define CLASS_1_EFD812FA582E2CD3__CTOR_OFFSET UNITYSDK_OFFSET(0x9581220)

inline static constexpr unsigned int Class_1_EFD812FA582E2CD3_TypeDefinitionIndex = 51781;

class Class_1_EFD812FA582E2CD3 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedGameMode* Field_1_1; // 0x10
	::Class_1_9869F38A47970354* _CurrentQTEInstance_k__BackingField; // 0x18

	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + CLASS_1_EFD812FA582E2CD3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EFD812FA582E2CD3_METHOD_1_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFD812FA582E2CD3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_230E4ECF40B59202(::Class_1_7E61104234A02BD7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7E61104234A02BD7*))((::PBYTE)hIl2Cpp + CLASS_1_EFD812FA582E2CD3_METHOD_1_230E4ECF40B59202_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFD812FA582E2CD3_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::Class_1_9869F38A47970354* get_CurrentQTEInstance()
	{
		return ((::Class_1_9869F38A47970354*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFD812FA582E2CD3_GET_CURRENTQTEINSTANCE_OFFSET))(this);
	}

	::System::Void set_CurrentQTEInstance(::Class_1_9869F38A47970354* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9869F38A47970354*))((::PBYTE)hIl2Cpp + CLASS_1_EFD812FA582E2CD3_SET_CURRENTQTEINSTANCE_OFFSET))(this, value);
	}
};

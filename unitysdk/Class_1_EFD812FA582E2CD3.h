#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7E61104234A02BD7;
class Class_1_96263E1A4F8BD5D5;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define CLASS_1_EFD812FA582E2CD3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15467220)
#define CLASS_1_EFD812FA582E2CD3_GET_CURRENTQTEINSTANCE_OFFSET UNITYSDK_OFFSET(0x15467360)
#define CLASS_1_EFD812FA582E2CD3_METHOD_1_230E4ECF40B59202_OFFSET UNITYSDK_OFFSET(0x15467270)
#define CLASS_1_EFD812FA582E2CD3_METHOD_1_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x15467110)
#define CLASS_1_EFD812FA582E2CD3_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x154671C0)
#define CLASS_1_EFD812FA582E2CD3_SET_CURRENTQTEINSTANCE_OFFSET UNITYSDK_OFFSET(0x15467370)
#define CLASS_1_EFD812FA582E2CD3__CTOR_OFFSET UNITYSDK_OFFSET(0x15467100)

inline static constexpr unsigned int Class_1_EFD812FA582E2CD3_TypeDefinitionIndex = 56378;

class Class_1_EFD812FA582E2CD3 : public ::System::Object
{
public:
	::Class_1_96263E1A4F8BD5D5* _CurrentQTEInstance_k__BackingField; // 0x10
	::RPG::GameCore::TurnBasedGameMode* GICHGNGMBGD; // 0x18

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

	::Class_1_96263E1A4F8BD5D5* get_CurrentQTEInstance()
	{
		return ((::Class_1_96263E1A4F8BD5D5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFD812FA582E2CD3_GET_CURRENTQTEINSTANCE_OFFSET))(this);
	}

	::System::Void set_CurrentQTEInstance(::Class_1_96263E1A4F8BD5D5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_96263E1A4F8BD5D5*))((::PBYTE)hIl2Cpp + CLASS_1_EFD812FA582E2CD3_SET_CURRENTQTEINSTANCE_OFFSET))(this, a1);
	}
};

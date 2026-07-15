#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7E61104234A02BD7;
class Class_1_96263E1A4F8BD5D5;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define CLASS_1_EFD812FA582E2CD3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17016330)
#define CLASS_1_EFD812FA582E2CD3_GET_CURRENTQTEINSTANCE_OFFSET UNITYSDK_OFFSET(0x17016440)
#define CLASS_1_EFD812FA582E2CD3_METHOD_1_2177C24A5E2E46CB_OFFSET UNITYSDK_OFFSET(0x17016380)
#define CLASS_1_EFD812FA582E2CD3_METHOD_1_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x17016220)
#define CLASS_1_EFD812FA582E2CD3_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x170162D0)
#define CLASS_1_EFD812FA582E2CD3_SET_CURRENTQTEINSTANCE_OFFSET UNITYSDK_OFFSET(0x17016450)
#define CLASS_1_EFD812FA582E2CD3__CTOR_OFFSET UNITYSDK_OFFSET(0x17016210)

inline static constexpr unsigned int Class_1_EFD812FA582E2CD3_TypeDefinitionIndex = 53659;

class Class_1_EFD812FA582E2CD3 : public ::System::Object
{
public:
	::Class_1_96263E1A4F8BD5D5* _CurrentQTEInstance_k__BackingField; // 0x10
	::RPG::GameCore::TurnBasedGameMode* Field_1_1; // 0x18

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

	::System::Void Method_1_2177C24A5E2E46CB(::Class_1_7E61104234A02BD7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7E61104234A02BD7*))((::PBYTE)hIl2Cpp + CLASS_1_EFD812FA582E2CD3_METHOD_1_2177C24A5E2E46CB_OFFSET))(this, a1);
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

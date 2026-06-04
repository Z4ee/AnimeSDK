#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_76ED9B246ED58A54;
class Class_1_D8BECDCE48063EC7;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig; }

#define CLASS_1_E176408ED692AE52_METHOD_1_4F0400E543F3D04F_OFFSET UNITYSDK_OFFSET(0x18AC3A90)
#define CLASS_1_E176408ED692AE52__CTOR_OFFSET UNITYSDK_OFFSET(0x18AF77A0)

inline static constexpr unsigned int Class_1_E176408ED692AE52_TypeDefinitionIndex = 34443;

class Class_1_E176408ED692AE52 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E176408ED692AE52__CTOR_OFFSET))(this);
	}

	static ::Class_1_76ED9B246ED58A54* Method_1_4F0400E543F3D04F(::RPG::GameCore::DiceCombatDiceSelectorConfig* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::Class_1_76ED9B246ED58A54*(*)(::RPG::GameCore::DiceCombatDiceSelectorConfig*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_1_E176408ED692AE52_METHOD_1_4F0400E543F3D04F_OFFSET))(a1, a2);
	}
};

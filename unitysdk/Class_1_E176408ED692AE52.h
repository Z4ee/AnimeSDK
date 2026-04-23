#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A79874B455F34F7D;
class Class_1_EA5232D6CAD71030;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig; }

#define CLASS_1_E176408ED692AE52_METHOD_1_4F0400E543F3D04F_OFFSET UNITYSDK_OFFSET(0x17C260D0)
#define CLASS_1_E176408ED692AE52__CTOR_OFFSET UNITYSDK_OFFSET(0x17C26760)

inline static constexpr unsigned int Class_1_E176408ED692AE52_TypeDefinitionIndex = 34161;

class Class_1_E176408ED692AE52 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E176408ED692AE52__CTOR_OFFSET))(this);
	}

	static ::Class_1_A79874B455F34F7D* Method_1_4F0400E543F3D04F(::RPG::GameCore::DiceCombatDiceSelectorConfig* a1, ::Class_1_EA5232D6CAD71030* a2)
	{
		return ((::Class_1_A79874B455F34F7D*(*)(::RPG::GameCore::DiceCombatDiceSelectorConfig*, ::Class_1_EA5232D6CAD71030*))((::PBYTE)hIl2Cpp + CLASS_1_E176408ED692AE52_METHOD_1_4F0400E543F3D04F_OFFSET))(a1, a2);
	}
};

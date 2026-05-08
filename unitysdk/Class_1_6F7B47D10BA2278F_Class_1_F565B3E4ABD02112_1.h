#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_07CA62829CC497EC;
namespace MoleMole { class UIHollowTvSelect3DModelController; }
namespace MoleMole { class UIWindowController; }
namespace UnityEngine { class Transform; }

#define CLASS_1_6F7B47D10BA2278F_CLASS_1_F565B3E4ABD02112_1_METHOD_1_E0AD28C556B362FE_OFFSET UNITYSDK_OFFSET(0x112CCA70)
#define CLASS_1_6F7B47D10BA2278F_CLASS_1_F565B3E4ABD02112_1_SPAWN_OFFSET UNITYSDK_OFFSET(0x112CC9B0)
#define CLASS_1_6F7B47D10BA2278F_CLASS_1_F565B3E4ABD02112_1__CTOR_OFFSET UNITYSDK_OFFSET(0x112CC510)

inline static constexpr unsigned int Class_1_6F7B47D10BA2278F_Class_1_F565B3E4ABD02112_1_TypeDefinitionIndex = 76400;

class Class_1_6F7B47D10BA2278F_Class_1_F565B3E4ABD02112_1 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_1; // 0x10
	::MoleMole::UIWindowController* Field_1_0; // 0x18

	::System::Void _ctor(::MoleMole::UIWindowController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_6F7B47D10BA2278F_CLASS_1_F565B3E4ABD02112_1__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_2_07CA62829CC497EC* Spawn()
	{
		return ((::Class_2_07CA62829CC497EC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F7B47D10BA2278F_CLASS_1_F565B3E4ABD02112_1_SPAWN_OFFSET))(this);
	}

	::MoleMole::UIHollowTvSelect3DModelController* Method_1_E0AD28C556B362FE()
	{
		return ((::MoleMole::UIHollowTvSelect3DModelController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F7B47D10BA2278F_CLASS_1_F565B3E4ABD02112_1_METHOD_1_E0AD28C556B362FE_OFFSET))(this);
	}
};

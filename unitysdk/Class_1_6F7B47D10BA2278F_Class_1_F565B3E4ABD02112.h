#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_07CA62829CC497EC;
namespace MoleMole { class UIHollowTvSelect3DModelController; }
namespace MoleMole { class UIWindowController; }
namespace UnityEngine { class Transform; }

#define CLASS_1_6F7B47D10BA2278F_CLASS_1_F565B3E4ABD02112_METHOD_1_752F66E101ED9C61_OFFSET UNITYSDK_OFFSET(0x14E30030)
#define CLASS_1_6F7B47D10BA2278F_CLASS_1_F565B3E4ABD02112_METHOD_1_E0AD28C556B362FE_OFFSET UNITYSDK_OFFSET(0x14E300F0)
#define CLASS_1_6F7B47D10BA2278F_CLASS_1_F565B3E4ABD02112_SPAWN_OFFSET UNITYSDK_OFFSET(0x14E2FFE0)
#define CLASS_1_6F7B47D10BA2278F_CLASS_1_F565B3E4ABD02112__CTOR_OFFSET UNITYSDK_OFFSET(0x14E2FFD0)

inline static constexpr unsigned int Class_1_6F7B47D10BA2278F_Class_1_F565B3E4ABD02112_TypeDefinitionIndex = 41393;

class Class_1_6F7B47D10BA2278F_Class_1_F565B3E4ABD02112 : public ::System::Object
{
public:
	::MoleMole::UIWindowController* Field_1_0; // 0x10
	::UnityEngine::Transform* Field_1_1; // 0x18

	::System::Void _ctor(::MoleMole::UIWindowController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_6F7B47D10BA2278F_CLASS_1_F565B3E4ABD02112__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_2_07CA62829CC497EC* Spawn()
	{
		return ((::Class_2_07CA62829CC497EC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F7B47D10BA2278F_CLASS_1_F565B3E4ABD02112_SPAWN_OFFSET))(this);
	}

	::Class_2_07CA62829CC497EC* Method_1_752F66E101ED9C61()
	{
		return ((::Class_2_07CA62829CC497EC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F7B47D10BA2278F_CLASS_1_F565B3E4ABD02112_METHOD_1_752F66E101ED9C61_OFFSET))(this);
	}

	::MoleMole::UIHollowTvSelect3DModelController* Method_1_E0AD28C556B362FE()
	{
		return ((::MoleMole::UIHollowTvSelect3DModelController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F7B47D10BA2278F_CLASS_1_F565B3E4ABD02112_METHOD_1_E0AD28C556B362FE_OFFSET))(this);
	}
};

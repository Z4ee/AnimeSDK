#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/UI/FlowerShop/EFinishJudge.h"
#include "unitysdk/MoleMole/UI/FlowerShop/ESlotType.h"
#include "unitysdk/System/Object.h"

class Class_2_C56CB8B84EE1D94E;
namespace UnityEngine { class Animation; }
namespace UnityEngine::Rendering::Universal::Internal { class OutlineObjectRenderer; }

#define CLASS_1_2545374876B596DC_METHOD_1_3060CA0F6EA23F2E_OFFSET UNITYSDK_OFFSET(0x12783EC0)
#define CLASS_1_2545374876B596DC_METHOD_1_68B15EF333825B28_OFFSET UNITYSDK_OFFSET(0x12784080)
#define CLASS_1_2545374876B596DC_METHOD_1_A160852F61E7742F_OFFSET UNITYSDK_OFFSET(0x127849F0)
#define CLASS_1_2545374876B596DC_METHOD_1_D57604E1F489653E_OFFSET UNITYSDK_OFFSET(0x12785120)
#define CLASS_1_2545374876B596DC__CTOR_OFFSET UNITYSDK_OFFSET(0x12783EB0)

inline static constexpr unsigned int Class_1_2545374876B596DC_TypeDefinitionIndex = 81985;

class Class_1_2545374876B596DC : public ::System::Object
{
public:
	::Class_2_C56CB8B84EE1D94E* Field_1_0; // 0x10

	::System::Void _ctor(::Class_2_C56CB8B84EE1D94E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C56CB8B84EE1D94E*))((::PBYTE)hIl2Cpp + CLASS_1_2545374876B596DC__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_3060CA0F6EA23F2E(::MoleMole::EntityHandle a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2545374876B596DC_METHOD_1_3060CA0F6EA23F2E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_68B15EF333825B28(::MoleMole::EntityHandle a1, ::UnityEngine::Animation*& a2, ::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::UnityEngine::Animation*&, ::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer*&))((::PBYTE)hIl2Cpp + CLASS_1_2545374876B596DC_METHOD_1_68B15EF333825B28_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A160852F61E7742F(::MoleMole::UI::FlowerShop::ESlotType a1, ::MoleMole::EntityHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UI::FlowerShop::ESlotType, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_2545374876B596DC_METHOD_1_A160852F61E7742F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D57604E1F489653E(::MoleMole::UI::FlowerShop::EFinishJudge a1, ::MoleMole::EntityHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UI::FlowerShop::EFinishJudge, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_2545374876B596DC_METHOD_1_D57604E1F489653E_OFFSET))(this, a1, a2);
	}
};

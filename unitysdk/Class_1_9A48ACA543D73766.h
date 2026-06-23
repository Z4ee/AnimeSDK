#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/UI/FlowerShop/EFinishJudge.h"
#include "unitysdk/MoleMole/UI/FlowerShop/ESlotType.h"
#include "unitysdk/System/Object.h"

class Class_2_4C0064B3F317EAB1;
namespace UnityEngine { class Animation; }
namespace UnityEngine::Rendering::Universal::Internal { class OutlineObjectRenderer; }

#define CLASS_1_9A48ACA543D73766_METHOD_1_3060CA0F6EA23F2E_OFFSET UNITYSDK_OFFSET(0x1624AD00)
#define CLASS_1_9A48ACA543D73766_METHOD_1_47ABE15F59BF9FA6_OFFSET UNITYSDK_OFFSET(0x1624AEC0)
#define CLASS_1_9A48ACA543D73766_METHOD_1_A160852F61E7742F_OFFSET UNITYSDK_OFFSET(0x1624BDF0)
#define CLASS_1_9A48ACA543D73766_METHOD_1_D57604E1F489653E_OFFSET UNITYSDK_OFFSET(0x1624B840)
#define CLASS_1_9A48ACA543D73766__CTOR_OFFSET UNITYSDK_OFFSET(0x1624ACF0)

inline static constexpr unsigned int Class_1_9A48ACA543D73766_TypeDefinitionIndex = 43139;

class Class_1_9A48ACA543D73766 : public ::System::Object
{
public:
	::Class_2_4C0064B3F317EAB1* Field_1_0; // 0x10

	::System::Void _ctor(::Class_2_4C0064B3F317EAB1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4C0064B3F317EAB1*))((::PBYTE)hIl2Cpp + CLASS_1_9A48ACA543D73766__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_3060CA0F6EA23F2E(::MoleMole::EntityHandle a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9A48ACA543D73766_METHOD_1_3060CA0F6EA23F2E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D57604E1F489653E(::MoleMole::UI::FlowerShop::EFinishJudge a1, ::MoleMole::EntityHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UI::FlowerShop::EFinishJudge, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_9A48ACA543D73766_METHOD_1_D57604E1F489653E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A160852F61E7742F(::MoleMole::UI::FlowerShop::ESlotType a1, ::MoleMole::EntityHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UI::FlowerShop::ESlotType, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_9A48ACA543D73766_METHOD_1_A160852F61E7742F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_47ABE15F59BF9FA6(::MoleMole::EntityHandle a1, ::UnityEngine::Animation*& a2, ::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::UnityEngine::Animation*&, ::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer*&))((::PBYTE)hIl2Cpp + CLASS_1_9A48ACA543D73766_METHOD_1_47ABE15F59BF9FA6_OFFSET))(this, a1, a2, a3);
	}
};

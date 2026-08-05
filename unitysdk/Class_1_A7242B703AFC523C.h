#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_257976400FD1B345;
class Class_1_E49938F4BFE74407;
class Class_2_41CBD738F97E429F;
class Class_2_AB2EF02AB0EB9012_1;
namespace MoleMole { class UIAbyssMapIconBaseController; }
namespace MoleMole { class UIAbyssMapLayerWidgetController; }
namespace MoleMole { class UIBaseController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_A7242B703AFC523C_METHOD_1_03A2D62567C98A94_OFFSET UNITYSDK_OFFSET(0x14674D50)
#define CLASS_1_A7242B703AFC523C_METHOD_1_2EC4AFA592FBC765_OFFSET UNITYSDK_OFFSET(0x14674E30)
#define CLASS_1_A7242B703AFC523C_METHOD_1_3957639C1EE088F6_OFFSET UNITYSDK_OFFSET(0x14673E40)
#define CLASS_1_A7242B703AFC523C_METHOD_1_64EF42884BA83F5B_OFFSET UNITYSDK_OFFSET(0x14674700)
#define CLASS_1_A7242B703AFC523C_METHOD_1_714BFE874ADE12C5_OFFSET UNITYSDK_OFFSET(0x146741F0)
#define CLASS_1_A7242B703AFC523C_METHOD_1_C425EC4D982E0925_OFFSET UNITYSDK_OFFSET(0x146752D0)
#define CLASS_1_A7242B703AFC523C_METHOD_1_D0CCE0289FEBAD32_OFFSET UNITYSDK_OFFSET(0x14673CC0)
#define CLASS_1_A7242B703AFC523C_METHOD_1_E80DE8789DD405D5_OFFSET UNITYSDK_OFFSET(0x14675430)
#define CLASS_1_A7242B703AFC523C_METHOD_1_E97AC7B8F06B8C3E_OFFSET UNITYSDK_OFFSET(0x14674600)
#define CLASS_1_A7242B703AFC523C__CTOR_OFFSET UNITYSDK_OFFSET(0x14673C30)

inline static constexpr unsigned int Class_1_A7242B703AFC523C_TypeDefinitionIndex = 76080;

class Class_1_A7242B703AFC523C : public ::System::Object
{
public:
	::MoleMole::UIAbyssMapLayerWidgetController* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::MoleMole::Vector2Int, ::Class_1_257976400FD1B345*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7242B703AFC523C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D0CCE0289FEBAD32(::MoleMole::UIBaseController* a1, ::UnityEngine::Transform* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A7242B703AFC523C_METHOD_1_D0CCE0289FEBAD32_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::GameObject* Method_1_3957639C1EE088F6()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7242B703AFC523C_METHOD_1_3957639C1EE088F6_OFFSET))(this);
	}

	::System::Void Method_1_714BFE874ADE12C5(::System::ValueTuple_2<::MoleMole::Vector2Int, ::Class_1_E49938F4BFE74407*> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::MoleMole::Vector2Int, ::Class_1_E49938F4BFE74407*>))((::PBYTE)hIl2Cpp + CLASS_1_A7242B703AFC523C_METHOD_1_714BFE874ADE12C5_OFFSET))(this, a1);
	}

	::Class_2_AB2EF02AB0EB9012_1* Method_1_E97AC7B8F06B8C3E()
	{
		return ((::Class_2_AB2EF02AB0EB9012_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7242B703AFC523C_METHOD_1_E97AC7B8F06B8C3E_OFFSET))(this);
	}

	::System::Void Method_1_64EF42884BA83F5B(::Class_2_41CBD738F97E429F* a1, ::MoleMole::UIAbyssMapIconBaseController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_41CBD738F97E429F*, ::MoleMole::UIAbyssMapIconBaseController*))((::PBYTE)hIl2Cpp + CLASS_1_A7242B703AFC523C_METHOD_1_64EF42884BA83F5B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_03A2D62567C98A94(::System::ValueTuple_2<::MoleMole::Vector2Int, ::Class_1_E49938F4BFE74407*> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::MoleMole::Vector2Int, ::Class_1_E49938F4BFE74407*>))((::PBYTE)hIl2Cpp + CLASS_1_A7242B703AFC523C_METHOD_1_03A2D62567C98A94_OFFSET))(this, a1);
	}

	::System::Void Method_1_C425EC4D982E0925(::System::Collections::Generic::List_1<::System::ValueTuple_2<::MoleMole::Vector2Int, ::Class_1_E49938F4BFE74407*>>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::MoleMole::Vector2Int, ::Class_1_E49938F4BFE74407*>>*))((::PBYTE)hIl2Cpp + CLASS_1_A7242B703AFC523C_METHOD_1_C425EC4D982E0925_OFFSET))(this, a1);
	}

	::System::Void Method_1_E80DE8789DD405D5(::Class_1_E49938F4BFE74407* a1, ::MoleMole::UIAbyssMapIconBaseController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E49938F4BFE74407*, ::MoleMole::UIAbyssMapIconBaseController*))((::PBYTE)hIl2Cpp + CLASS_1_A7242B703AFC523C_METHOD_1_E80DE8789DD405D5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2EC4AFA592FBC765(::Class_1_E49938F4BFE74407* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E49938F4BFE74407*))((::PBYTE)hIl2Cpp + CLASS_1_A7242B703AFC523C_METHOD_1_2EC4AFA592FBC765_OFFSET))(this, a1);
	}
};

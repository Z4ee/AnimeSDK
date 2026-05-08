#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AC9FD4BF1AF061DA.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/MonoTowerHolderObject_Enum_3_A194B73A82D9E1B3.h"
#include "unitysdk/Struct_2_61D95EB9B5A93E74.h"

namespace MoleMole { class UITowerDefenseMainPageController; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_58DDBAFC56C73DE5_METHOD_3_025C10A50003DFAB_OFFSET UNITYSDK_OFFSET(0x10B0C370)
#define CLASS_3_58DDBAFC56C73DE5_METHOD_3_0F537B140AF2BB09_OFFSET UNITYSDK_OFFSET(0x10B0BDF0)
#define CLASS_3_58DDBAFC56C73DE5_METHOD_3_43A478BA01FE29B7_OFFSET UNITYSDK_OFFSET(0x10B0C710)
#define CLASS_3_58DDBAFC56C73DE5_METHOD_3_7F58674897F4E0D0_OFFSET UNITYSDK_OFFSET(0x10B0BF30)
#define CLASS_3_58DDBAFC56C73DE5_METHOD_3_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x10B0C770)
#define CLASS_3_58DDBAFC56C73DE5_METHOD_3_AA6AC38756233BD0_OFFSET UNITYSDK_OFFSET(0x10B0C6C0)
#define CLASS_3_58DDBAFC56C73DE5_METHOD_3_C3F08C89377DF8A5_OFFSET UNITYSDK_OFFSET(0x10B0C0F0)
#define CLASS_3_58DDBAFC56C73DE5_METHOD_3_E77CA4C70AE3A427_OFFSET UNITYSDK_OFFSET(0x10B0C830)
#define CLASS_3_58DDBAFC56C73DE5__CTOR_OFFSET UNITYSDK_OFFSET(0x10B0BDA0)

inline static constexpr unsigned int Class_3_58DDBAFC56C73DE5_TypeDefinitionIndex = 55877;

class Class_3_58DDBAFC56C73DE5 : public ::Class_2_AC9FD4BF1AF061DA
{
public:
	::UnityEngine::GameObject* Field_3_0; // 0x30
	::System::Int32 Field_3_1; // 0x38
	::System::Int32 Field_3_2; // 0x3C

	::System::Void _ctor(::MoleMole::UITowerDefenseMainPageController* a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UITowerDefenseMainPageController*, ::UnityEngine::GameObject*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_58DDBAFC56C73DE5__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::Struct_2_61D95EB9B5A93E74 Method_3_7F58674897F4E0D0(::MoleMole::InputActionEvent a1)
	{
		return ((::Struct_2_61D95EB9B5A93E74(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + CLASS_3_58DDBAFC56C73DE5_METHOD_3_7F58674897F4E0D0_OFFSET))(this, a1);
	}

	::System::Void Method_3_025C10A50003DFAB(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_58DDBAFC56C73DE5_METHOD_3_025C10A50003DFAB_OFFSET))(this, a1);
	}

	::System::Void Method_3_AA6AC38756233BD0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_58DDBAFC56C73DE5_METHOD_3_AA6AC38756233BD0_OFFSET))(this, a1);
	}

	::System::Void Method_3_43A478BA01FE29B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_58DDBAFC56C73DE5_METHOD_3_43A478BA01FE29B7_OFFSET))(this);
	}

	::System::Void Method_3_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_58DDBAFC56C73DE5_METHOD_3_805C56F44231AEF9_OFFSET))(this);
	}

	::Struct_2_61D95EB9B5A93E74 Method_3_C3F08C89377DF8A5()
	{
		return ((::Struct_2_61D95EB9B5A93E74(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_58DDBAFC56C73DE5_METHOD_3_C3F08C89377DF8A5_OFFSET))(this);
	}

	static ::System::Boolean Method_3_E77CA4C70AE3A427(::MoleMole::Battle::Entity* a1, ::MoleMole::MonoTowerHolderObject_Enum_3_A194B73A82D9E1B3 a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::MonoTowerHolderObject_Enum_3_A194B73A82D9E1B3))((::PBYTE)hIl2Cpp + CLASS_3_58DDBAFC56C73DE5_METHOD_3_E77CA4C70AE3A427_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Method_3_0F537B140AF2BB09(::MoleMole::UITowerDefenseMainPageController* a1, ::System::Int32 a2)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::MoleMole::UITowerDefenseMainPageController*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_58DDBAFC56C73DE5_METHOD_3_0F537B140AF2BB09_OFFSET))(a1, a2);
	}
};

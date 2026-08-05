#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AAD2B1B6FB741157.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_EAB4763E81E4045B;
namespace MoleMole { class UIHollowChessboard3DModelController; }

#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS93_0__CTOR_OFFSET UNITYSDK_OFFSET(0x164CBAE0)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS93_0__TRYRETURN2PERSISTFOCUSCAMERA_B__0_OFFSET UNITYSDK_OFFSET(0x164CBAF0)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS93_0__TRYRETURN2PERSISTFOCUSCAMERA_G__ONREACHTARGETPOS_1_OFFSET UNITYSDK_OFFSET(0x164CBDC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowChessboard3DModelController___c__DisplayClass93_0_TypeDefinitionIndex = 63279;

	class UIHollowChessboard3DModelController___c__DisplayClass93_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowChessboard3DModelController* __4__this; // 0x10
		::Class_3_EAB4763E81E4045B* focusStateNet; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS93_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryReturn2PersistFocusCamera_b__0(::Struct_2_AAD2B1B6FB741157 v)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_AAD2B1B6FB741157))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS93_0__TRYRETURN2PERSISTFOCUSCAMERA_B__0_OFFSET))(this, v);
		}

		::System::Void _TryReturn2PersistFocusCamera_g__OnReachTargetPos_1(::UnityEngine::Vector3 targetPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DISPLAYCLASS93_0__TRYRETURN2PERSISTFOCUSCAMERA_G__ONREACHTARGETPOS_1_OFFSET))(this, targetPos);
		}
	};
}

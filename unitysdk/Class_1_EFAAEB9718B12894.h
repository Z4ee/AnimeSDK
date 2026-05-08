#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LayerMaskStatic_Enum_3_C3BBA2B066959E6E.h"
#include "unitysdk/Struct_2_B76C9DBDAECC6C19.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1CDA382D823F8E80;
class Class_1_560B23058CA4940C;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityAttackPattern; }
namespace MoleMole::Config { class FanCollisionWithHeightDetect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EFAAEB9718B12894_METHOD_1_46DEBD887E0E5B2C_OFFSET UNITYSDK_OFFSET(0x14BD2CF0)
#define CLASS_1_EFAAEB9718B12894_METHOD_1_60C4B9EA1B9BE7AF_OFFSET UNITYSDK_OFFSET(0x14BD3D70)
#define CLASS_1_EFAAEB9718B12894_METHOD_1_E9860236C46577CD_OFFSET UNITYSDK_OFFSET(0x14BD3F00)
#define CLASS_1_EFAAEB9718B12894_METHOD_1_EAC7E1DCD7856A0F_OFFSET UNITYSDK_OFFSET(0x14BD3800)

inline static constexpr unsigned int Class_1_EFAAEB9718B12894_TypeDefinitionIndex = 66967;

class Class_1_EFAAEB9718B12894 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_46DEBD887E0E5B2C(::Class_1_1CDA382D823F8E80* a1, ::MoleMole::Config::ConfigEntityAttackPattern* a2, ::MoleMole::Battle::Entity* a3, ::UnityEngine::LayerMask a4, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E a5, ::System::Boolean a6, ::Il2CppArray<::System::String*>* a7, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a8, ::System::Boolean a9, ::UnityEngine::Vector3 a10, ::UnityEngine::Quaternion a11, ::Struct_2_B76C9DBDAECC6C19 a12)
	{
		return ((::System::Boolean(*)(::Class_1_1CDA382D823F8E80*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Struct_2_B76C9DBDAECC6C19))((::PBYTE)hIl2Cpp + CLASS_1_EFAAEB9718B12894_METHOD_1_46DEBD887E0E5B2C_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	static ::System::Boolean Method_1_60C4B9EA1B9BE7AF(::Class_1_1CDA382D823F8E80* a1, ::MoleMole::Config::ConfigEntityAttackPattern* a2, ::MoleMole::Battle::Entity* a3, ::UnityEngine::LayerMask a4, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Quaternion a7, ::System::UInt32 a8, ::System::Boolean a9, ::Il2CppArray<::System::String*>* a10, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a11, ::Struct_2_B76C9DBDAECC6C19 a12, ::System::Boolean a13)
	{
		return ((::System::Boolean(*)(::Class_1_1CDA382D823F8E80*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::UInt32, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::Struct_2_B76C9DBDAECC6C19, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EFAAEB9718B12894_METHOD_1_60C4B9EA1B9BE7AF_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
	}

	static ::System::Boolean Method_1_E9860236C46577CD(::Class_1_1CDA382D823F8E80* a1, ::MoleMole::Config::ConfigEntityAttackPattern* a2, ::MoleMole::Battle::Entity* a3, ::UnityEngine::LayerMask a4, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E a5, ::System::Boolean a6, ::Il2CppArray<::System::String*>* a7, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a8, ::Struct_2_B76C9DBDAECC6C19 a9, ::System::Boolean a10)
	{
		return ((::System::Boolean(*)(::Class_1_1CDA382D823F8E80*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::Struct_2_B76C9DBDAECC6C19, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EFAAEB9718B12894_METHOD_1_E9860236C46577CD_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	static ::System::Void Method_1_EAC7E1DCD7856A0F(::Class_1_1CDA382D823F8E80* a1, ::MoleMole::Config::FanCollisionWithHeightDetect* a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Battle::Entity* a4, ::UnityEngine::LayerMask a5, ::Il2CppArray<::System::String*>* a6, ::System::Single a7, ::System::Single a8, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a9, ::System::Boolean a10, ::UnityEngine::Vector3 a11, ::UnityEngine::Quaternion a12, ::Struct_2_B76C9DBDAECC6C19 a13, ::System::Boolean a14, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a15)
	{
		return ((::System::Void(*)(::Class_1_1CDA382D823F8E80*, ::MoleMole::Config::FanCollisionWithHeightDetect*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::Il2CppArray<::System::String*>*, ::System::Single, ::System::Single, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Struct_2_B76C9DBDAECC6C19, ::System::Boolean, ::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*))((::PBYTE)hIl2Cpp + CLASS_1_EFAAEB9718B12894_METHOD_1_EAC7E1DCD7856A0F_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
	}
};

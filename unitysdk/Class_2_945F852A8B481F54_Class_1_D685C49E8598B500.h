#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_10EF7FB9B576FF14;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define CLASS_2_945F852A8B481F54_CLASS_1_D685C49E8598B500_METHOD_1_04152106C1654E73_OFFSET UNITYSDK_OFFSET(0x15443430)
#define CLASS_2_945F852A8B481F54_CLASS_1_D685C49E8598B500_METHOD_1_1A2B74FFFDE5AE7B_OFFSET UNITYSDK_OFFSET(0x15442D60)
#define CLASS_2_945F852A8B481F54_CLASS_1_D685C49E8598B500_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x154432A0)
#define CLASS_2_945F852A8B481F54_CLASS_1_D685C49E8598B500_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15443200)
#define CLASS_2_945F852A8B481F54_CLASS_1_D685C49E8598B500_METHOD_1_E927692B031A578A_OFFSET UNITYSDK_OFFSET(0x15442F10)
#define CLASS_2_945F852A8B481F54_CLASS_1_D685C49E8598B500_METHOD_1_F092FF715BB29096_OFFSET UNITYSDK_OFFSET(0x154439C0)
#define CLASS_2_945F852A8B481F54_CLASS_1_D685C49E8598B500__CTOR_OFFSET UNITYSDK_OFFSET(0x15442D50)

inline static constexpr unsigned int Class_2_945F852A8B481F54_Class_1_D685C49E8598B500_TypeDefinitionIndex = 48537;

class Class_2_945F852A8B481F54_Class_1_D685C49E8598B500 : public ::System::Object
{
public:
	::Class_1_10EF7FB9B576FF14* Field_1_10; // 0x10
	::Foundation::AssetPath Field_1_6; // 0x18
	::System::String* Field_1_9; // 0x28
	::MoleMole::Config::ConfigPosRot* Field_1_0; // 0x30
	::System::String* Field_1_1; // 0x38
	::System::String* Field_1_7; // 0x40
	::MoleMole::Battle::Entity* Field_1_4; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>* Field_1_8; // 0x50
	::System::UInt32 Field_1_15; // 0x58
	::UnityEngine::Vector3 Field_1_5; // 0x5C
	::System::Boolean Field_1_11; // 0x68
	::System::Boolean Field_1_14; // 0x69

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_945F852A8B481F54_CLASS_1_D685C49E8598B500__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1A2B74FFFDE5AE7B(::System::String* a1, ::System::String* a2, ::MoleMole::Config::ConfigPosRot* a3, ::System::String* a4, ::UnityEngine::Vector3 a5, ::MoleMole::Battle::Entity* a6, ::System::Boolean a7, ::Class_1_10EF7FB9B576FF14* a8, ::System::String* a9, ::System::Boolean a10)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::String*, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::System::Boolean, ::Class_1_10EF7FB9B576FF14*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_945F852A8B481F54_CLASS_1_D685C49E8598B500_METHOD_1_1A2B74FFFDE5AE7B_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_945F852A8B481F54_CLASS_1_D685C49E8598B500_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_945F852A8B481F54_CLASS_1_D685C49E8598B500_METHOD_1_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_1_04152106C1654E73(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_945F852A8B481F54_CLASS_1_D685C49E8598B500_METHOD_1_04152106C1654E73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F092FF715BB29096(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_2_945F852A8B481F54_CLASS_1_D685C49E8598B500_METHOD_1_F092FF715BB29096_OFFSET))(this, a1);
	}

	::System::Void Method_1_E927692B031A578A(::System::String* a1, ::Foundation::AssetPath a2, ::MoleMole::Config::ConfigPosRot* a3, ::System::String* a4, ::UnityEngine::Vector3 a5, ::MoleMole::Battle::Entity* a6, ::System::Boolean a7, ::Class_1_10EF7FB9B576FF14* a8, ::System::String* a9, ::MoleMole::Battle::Entity* a10, ::System::Boolean a11)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::AssetPath, ::MoleMole::Config::ConfigPosRot*, ::System::String*, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::System::Boolean, ::Class_1_10EF7FB9B576FF14*, ::System::String*, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_945F852A8B481F54_CLASS_1_D685C49E8598B500_METHOD_1_E927692B031A578A_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}
};

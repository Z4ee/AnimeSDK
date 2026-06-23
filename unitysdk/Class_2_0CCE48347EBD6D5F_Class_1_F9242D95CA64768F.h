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

#define CLASS_2_0CCE48347EBD6D5F_CLASS_1_F9242D95CA64768F_METHOD_1_1A2B74FFFDE5AE7B_OFFSET UNITYSDK_OFFSET(0x15021B00)
#define CLASS_2_0CCE48347EBD6D5F_CLASS_1_F9242D95CA64768F_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x10A208F0)
#define CLASS_2_0CCE48347EBD6D5F_CLASS_1_F9242D95CA64768F_METHOD_1_48DC3DD12B916BA5_OFFSET UNITYSDK_OFFSET(0x10A21060)
#define CLASS_2_0CCE48347EBD6D5F_CLASS_1_F9242D95CA64768F_METHOD_1_4B90B3D58DCF8D2D_OFFSET UNITYSDK_OFFSET(0x10A202B0)
#define CLASS_2_0CCE48347EBD6D5F_CLASS_1_F9242D95CA64768F_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10A20850)
#define CLASS_2_0CCE48347EBD6D5F_CLASS_1_F9242D95CA64768F_METHOD_1_D8304CFCED4B4FB3_OFFSET UNITYSDK_OFFSET(0x10A20A80)
#define CLASS_2_0CCE48347EBD6D5F_CLASS_1_F9242D95CA64768F__CTOR_OFFSET UNITYSDK_OFFSET(0x10A202A0)

inline static constexpr unsigned int Class_2_0CCE48347EBD6D5F_Class_1_F9242D95CA64768F_TypeDefinitionIndex = 56497;

class Class_2_0CCE48347EBD6D5F_Class_1_F9242D95CA64768F : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_3; // 0x10
	::MoleMole::Battle::Entity* Field_1_5; // 0x20
	::System::String* Field_1_0; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>* Field_1_9; // 0x30
	::System::String* Field_1_2; // 0x38
	::MoleMole::Config::ConfigPosRot* Field_1_1; // 0x40
	::System::String* Field_1_8; // 0x48
	::Class_1_10EF7FB9B576FF14* Field_1_7; // 0x50
	::UnityEngine::Vector3 Field_1_4; // 0x58
	::System::UInt32 Field_1_10; // 0x64
	::System::Boolean Field_1_11; // 0x68
	::System::Boolean Field_1_6; // 0x69

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CCE48347EBD6D5F_CLASS_1_F9242D95CA64768F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4B90B3D58DCF8D2D(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_0CCE48347EBD6D5F_CLASS_1_F9242D95CA64768F_METHOD_1_4B90B3D58DCF8D2D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CCE48347EBD6D5F_CLASS_1_F9242D95CA64768F_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CCE48347EBD6D5F_CLASS_1_F9242D95CA64768F_METHOD_1_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_1_D8304CFCED4B4FB3(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0CCE48347EBD6D5F_CLASS_1_F9242D95CA64768F_METHOD_1_D8304CFCED4B4FB3_OFFSET))(this, a1);
	}

	::System::Void Method_1_48DC3DD12B916BA5(::System::String* a1, ::Foundation::AssetPath a2, ::MoleMole::Config::ConfigPosRot* a3, ::System::String* a4, ::UnityEngine::Vector3 a5, ::MoleMole::Battle::Entity* a6, ::System::Boolean a7, ::Class_1_10EF7FB9B576FF14* a8, ::System::String* a9, ::MoleMole::Battle::Entity* a10, ::System::Boolean a11)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::AssetPath, ::MoleMole::Config::ConfigPosRot*, ::System::String*, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::System::Boolean, ::Class_1_10EF7FB9B576FF14*, ::System::String*, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0CCE48347EBD6D5F_CLASS_1_F9242D95CA64768F_METHOD_1_48DC3DD12B916BA5_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}

	::System::Void Method_1_1A2B74FFFDE5AE7B(::System::String* a1, ::System::String* a2, ::MoleMole::Config::ConfigPosRot* a3, ::System::String* a4, ::UnityEngine::Vector3 a5, ::MoleMole::Battle::Entity* a6, ::System::Boolean a7, ::Class_1_10EF7FB9B576FF14* a8, ::System::String* a9, ::System::Boolean a10)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::String*, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*, ::System::Boolean, ::Class_1_10EF7FB9B576FF14*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0CCE48347EBD6D5F_CLASS_1_F9242D95CA64768F_METHOD_1_1A2B74FFFDE5AE7B_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}
};

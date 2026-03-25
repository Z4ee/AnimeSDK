#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_36A4EB0E077FE274_Struct_2_75164EB0A6079289.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_004034A1FAAF468A;
class Class_1_9CBC71DC5240DC00;
class Class_2_36A4EB0E077FE274;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelNPCPossessionInfo; }
namespace RPG::GameCore { class PossessionConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_DISPOSE_OFFSET UNITYSDK_OFFSET(0x106A82A0)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x106AA6C0)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_1EE97A58991B4F85_OFFSET UNITYSDK_OFFSET(0x106A9FC0)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_2D9E314F7B5D88F0_OFFSET UNITYSDK_OFFSET(0x106AAE40)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_3574512695A597AB_OFFSET UNITYSDK_OFFSET(0x106AA6E0)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_472E9805B297BD58_OFFSET UNITYSDK_OFFSET(0x106AAA70)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x106A23F0)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_4A2CD9C4812B863C_OFFSET UNITYSDK_OFFSET(0x106AB630)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x106AAAF0)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_5A977EF3A154BDA6_OFFSET UNITYSDK_OFFSET(0x106AB410)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_8641B6BFDC192F46_OFFSET UNITYSDK_OFFSET(0x106AAEA0)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_A814306820B9ED13_1_OFFSET UNITYSDK_OFFSET(0x106AB800)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_A814306820B9ED13_OFFSET UNITYSDK_OFFSET(0x106AB720)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_B7D959C8B7C0AE2F_OFFSET UNITYSDK_OFFSET(0x106AAFB0)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x106AB6C0)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x106A28D0)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_E1159787734BD959_OFFSET UNITYSDK_OFFSET(0x106A8BB0)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_E21AC6EE08DC160A_OFFSET UNITYSDK_OFFSET(0x106AB030)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x106AA6D0)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96__CTOR_OFFSET UNITYSDK_OFFSET(0x106A32F0)

inline static constexpr unsigned int Class_2_36A4EB0E077FE274_Class_1_172781B57C58AF96_TypeDefinitionIndex = 46012;

class Class_2_36A4EB0E077FE274_Class_1_172781B57C58AF96 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_10; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_1_16; // 0x18
	::System::Action_1<::UnityEngine::GameObject*>* Field_1_12; // 0x20
	::RPG::GameCore::PossessionConfigRow* Field_1_4; // 0x28
	::UnityEngine::Transform* Field_1_19; // 0x30
	::RPG::GameCore::LevelNPCPossessionInfo* Field_1_3; // 0x38
	::Class_2_36A4EB0E077FE274* Field_1_2; // 0x40
	::System::String* Field_1_6; // 0x48
	::Class_2_36A4EB0E077FE274_Struct_2_75164EB0A6079289 Field_1_5; // 0x50
	::Class_1_9CBC71DC5240DC00* Field_1_13; // 0x60
	::Class_1_004034A1FAAF468A* Field_1_11; // 0x68
	::System::String* Field_1_14; // 0x70
	::RPG::GameCore::GameEntity* Field_1_1; // 0x78
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_1_17; // 0x80
	::System::String* Field_1_15; // 0x88
	::UnityEngine::Animator* Field_1_18; // 0x90
	::System::String* _Category_k__BackingField; // 0x98
	::System::Boolean Field_1_20; // 0xA0
	::System::Boolean Field_1_21; // 0xA1
	::UnityEngine::Quaternion Field_1_8; // 0xA4
	::UnityEngine::Vector3 Field_1_9; // 0xB4
	::UnityEngine::Vector3 Field_1_7; // 0xC0

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Class_2_36A4EB0E077FE274* a2, ::RPG::GameCore::LevelNPCPossessionInfo* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_2_36A4EB0E077FE274*, ::RPG::GameCore::LevelNPCPossessionInfo*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* get_Category()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_GET_CATEGORY_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_472E9805B297BD58(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_472E9805B297BD58_OFFSET))(this, a1);
	}

	::System::Void Method_1_E1159787734BD959()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_E1159787734BD959_OFFSET))(this);
	}

	::System::Void Method_1_3574512695A597AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_3574512695A597AB_OFFSET))(this);
	}

	::System::Void Method_1_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_D7852DE078ACC1F1_OFFSET))(this);
	}

	::System::Void Method_1_1EE97A58991B4F85(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_1EE97A58991B4F85_OFFSET))(this, a1);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_1_8641B6BFDC192F46(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_8641B6BFDC192F46_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_1_B7D959C8B7C0AE2F(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_B7D959C8B7C0AE2F_OFFSET))(this, a1);
	}

	::System::Void Method_1_5A977EF3A154BDA6(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_5A977EF3A154BDA6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E21AC6EE08DC160A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_E21AC6EE08DC160A_OFFSET))(this);
	}

	::System::Void Method_1_4A2CD9C4812B863C(::RPG::GameCore::CharacterModelComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterModelComponent*))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_4A2CD9C4812B863C_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_2D9E314F7B5D88F0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_2D9E314F7B5D88F0_OFFSET))(this);
	}

	::System::Void Method_1_A814306820B9ED13(::UnityEngine::Renderer* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_A814306820B9ED13_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A814306820B9ED13_1(::UnityEngine::Renderer* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_A814306820B9ED13_1_OFFSET))(this, a1, a2);
	}
};

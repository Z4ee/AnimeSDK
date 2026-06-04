#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_36A4EB0E077FE274_Struct_2_75164EB0A6079289.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_004034A1FAAF468A;
class Class_1_1342B57709FD7AC5;
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

#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14193E00)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x141962E0)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_1EE97A58991B4F85_OFFSET UNITYSDK_OFFSET(0x14195BC0)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_3574512695A597AB_OFFSET UNITYSDK_OFFSET(0x14196300)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_472E9805B297BD58_OFFSET UNITYSDK_OFFSET(0x14196680)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x1418DC80)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_4A2CD9C4812B863C_OFFSET UNITYSDK_OFFSET(0x14197270)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x14196700)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_5A977EF3A154BDA6_OFFSET UNITYSDK_OFFSET(0x14197050)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_5C091B708B35682F_OFFSET UNITYSDK_OFFSET(0x14196A70)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_A814306820B9ED13_1_OFFSET UNITYSDK_OFFSET(0x14197430)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_A814306820B9ED13_OFFSET UNITYSDK_OFFSET(0x14197350)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_B7D959C8B7C0AE2F_OFFSET UNITYSDK_OFFSET(0x14196B90)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_BD658202BB4C4431_OFFSET UNITYSDK_OFFSET(0x14196A10)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x141972F0)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x1418E150)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_E1159787734BD959_OFFSET UNITYSDK_OFFSET(0x14194720)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_E21AC6EE08DC160A_OFFSET UNITYSDK_OFFSET(0x14196C10)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x141962F0)
#define CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96__CTOR_OFFSET UNITYSDK_OFFSET(0x1418EBC0)

inline static constexpr unsigned int Class_2_36A4EB0E077FE274_Class_1_172781B57C58AF96_TypeDefinitionIndex = 53373;

class Class_2_36A4EB0E077FE274_Class_1_172781B57C58AF96 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Action_1<::UnityEngine::GameObject*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_1_2; // 0x20
	::RPG::GameCore::LevelNPCPossessionInfo* Field_1_3; // 0x28
	::UnityEngine::GameObject* Field_1_4; // 0x30
	::UnityEngine::Animator* Field_1_5; // 0x38
	::UnityEngine::Transform* Field_1_6; // 0x40
	::System::String* Field_1_7; // 0x48
	::Class_1_004034A1FAAF468A* Field_1_8; // 0x50
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_1_9; // 0x58
	::RPG::GameCore::GameEntity* Field_1_10; // 0x60
	::Class_2_36A4EB0E077FE274_Struct_2_75164EB0A6079289 Field_1_11; // 0x68
	::System::String* Field_1_12; // 0x78
	::Class_2_36A4EB0E077FE274* Field_1_13; // 0x80
	::RPG::GameCore::PossessionConfigRow* Field_1_14; // 0x88
	::System::String* _Category_k__BackingField; // 0x90
	::Class_1_1342B57709FD7AC5* Field_1_16; // 0x98
	::UnityEngine::Vector3 Field_1_17; // 0xA0
	::UnityEngine::Vector3 Field_1_18; // 0xAC
	::System::Boolean Field_1_19; // 0xB8
	::System::Boolean Field_1_20; // 0xB9
	::UnityEngine::Quaternion Field_1_21; // 0xBC

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

	::System::Void Method_1_5C091B708B35682F(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_5C091B708B35682F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_56CE4AFC5339F746_OFFSET))(this);
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

	::System::Void Method_1_BD658202BB4C4431()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274_CLASS_1_172781B57C58AF96_METHOD_1_BD658202BB4C4431_OFFSET))(this);
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

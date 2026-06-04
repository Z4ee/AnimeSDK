#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4B1AB04F7469D57D_Struct_2_75164EB0A6079289_1.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_004034A1FAAF468A;
class Class_1_1342B57709FD7AC5;
class Class_2_4B1AB04F7469D57D;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelNPCPossessionInfo; }
namespace RPG::GameCore { class NpcPossessionEffectConfig; }
namespace RPG::GameCore { class PossessionConfigRow; }
namespace RPG::GameCore { class TriggerEffect; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A04A90)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x13A06000)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_METHOD_1_0219AF05B10FD13A_OFFSET UNITYSDK_OFFSET(0x13A070D0)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_METHOD_1_0960CAEE01038065_OFFSET UNITYSDK_OFFSET(0x13A06380)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_METHOD_1_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x13A05D20)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_METHOD_1_34E5D4FA2FBF65F7_OFFSET UNITYSDK_OFFSET(0x13A06CF0)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_METHOD_1_3574512695A597AB_OFFSET UNITYSDK_OFFSET(0x13A04FE0)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_METHOD_1_46CCAEAA5904FCD2_OFFSET UNITYSDK_OFFSET(0x13A05610)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_METHOD_1_472E9805B297BD58_OFFSET UNITYSDK_OFFSET(0x13A04A10)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_METHOD_1_4A2CD9C4812B863C_OFFSET UNITYSDK_OFFSET(0x13A06FE0)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_METHOD_1_5B2F46C5CFD6B7FE_OFFSET UNITYSDK_OFFSET(0x13A07610)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_METHOD_1_5C091B708B35682F_OFFSET UNITYSDK_OFFSET(0x13A04D90)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_METHOD_1_870AF3CD1D0A67B1_OFFSET UNITYSDK_OFFSET(0x13A06010)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_METHOD_1_A52062643A2DBAD8_OFFSET UNITYSDK_OFFSET(0x13A03D20)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_METHOD_1_B7D959C8B7C0AE2F_OFFSET UNITYSDK_OFFSET(0x13A06790)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_METHOD_1_BD658202BB4C4431_OFFSET UNITYSDK_OFFSET(0x13A064D0)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13A07070)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_METHOD_1_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x13A05A30)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_METHOD_1_E1159787734BD959_OFFSET UNITYSDK_OFFSET(0x13A041D0)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_METHOD_1_E21AC6EE08DC160A_OFFSET UNITYSDK_OFFSET(0x13A06810)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_METHOD_1_FE268EA0D7E91617_OFFSET UNITYSDK_OFFSET(0x13A06630)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13A04120)

inline static constexpr unsigned int Class_2_4B1AB04F7469D57D_Class_1_172781B57C58AF96_1_TypeDefinitionIndex = 53562;

class Class_2_4B1AB04F7469D57D_Class_1_172781B57C58AF96_1 : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_Field_1_0()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4B1AB04F7469D57D_Class_1_172781B57C58AF96_1_TypeDefinitionIndex)->GetStaticField(0x13EA0);
	}
	::UnityEngine::GameObject* Field_1_1; // 0x10
	::Class_1_1342B57709FD7AC5* Field_1_2; // 0x18
	::System::String* Field_1_3; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_1_4; // 0x28
	::UnityEngine::Transform* Field_1_5; // 0x30
	::UnityEngine::Animator* Field_1_6; // 0x38
	::System::String* _Category_k__BackingField; // 0x40
	::RPG::GameCore::LevelNPCPossessionInfo* Field_1_8; // 0x48
	::Class_1_004034A1FAAF468A* Field_1_9; // 0x50
	::System::String* Field_1_10; // 0x58
	::Class_2_4B1AB04F7469D57D_Struct_2_75164EB0A6079289_1 Field_1_11; // 0x60
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_1_12; // 0x70
	::System::Action_1<::UnityEngine::GameObject*>* Field_1_13; // 0x78
	::Class_2_4B1AB04F7469D57D* Field_1_14; // 0x80
	::System::String* Field_1_15; // 0x88
	::RPG::GameCore::NpcPossessionEffectConfig* Field_1_16; // 0x90
	::RPG::GameCore::PossessionConfigRow* Field_1_17; // 0x98
	::System::String* Field_1_18; // 0xA0
	::RPG::GameCore::GameEntity* Field_1_19; // 0xA8
	::UnityEngine::Vector3 Field_1_20; // 0xB0
	::UnityEngine::Vector3 Field_1_21; // 0xBC
	::System::Boolean Field_1_22; // 0xC8
	::UnityEngine::Quaternion Field_1_23; // 0xCC

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Class_2_4B1AB04F7469D57D* a2, ::RPG::GameCore::LevelNPCPossessionInfo* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_2_4B1AB04F7469D57D*, ::RPG::GameCore::LevelNPCPossessionInfo*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* get_Category()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_GET_CATEGORY_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_472E9805B297BD58(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_METHOD_1_472E9805B297BD58_OFFSET))(this, a1);
	}

	::System::Void Method_1_E1159787734BD959()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_METHOD_1_E1159787734BD959_OFFSET))(this);
	}

	::System::Void Method_1_3574512695A597AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_METHOD_1_3574512695A597AB_OFFSET))(this);
	}

	::System::Void Method_1_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_METHOD_1_D7852DE078ACC1F1_OFFSET))(this);
	}

	::System::Void Method_1_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_METHOD_1_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Void Method_1_A52062643A2DBAD8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_METHOD_1_A52062643A2DBAD8_OFFSET))(this, a1);
	}

	::System::Void Method_1_5C091B708B35682F(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_METHOD_1_5C091B708B35682F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_46CCAEAA5904FCD2(::RPG::GameCore::NpcPossessionEffectConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NpcPossessionEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_METHOD_1_46CCAEAA5904FCD2_OFFSET))(this, a1);
	}

	::System::Void Method_1_870AF3CD1D0A67B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_METHOD_1_870AF3CD1D0A67B1_OFFSET))(this);
	}

	::System::Void Method_1_B7D959C8B7C0AE2F(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_METHOD_1_B7D959C8B7C0AE2F_OFFSET))(this, a1);
	}

	::System::Void Method_1_34E5D4FA2FBF65F7(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_METHOD_1_34E5D4FA2FBF65F7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E21AC6EE08DC160A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_METHOD_1_E21AC6EE08DC160A_OFFSET))(this);
	}

	::System::Void Method_1_4A2CD9C4812B863C(::RPG::GameCore::CharacterModelComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterModelComponent*))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_METHOD_1_4A2CD9C4812B863C_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_BD658202BB4C4431()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_METHOD_1_BD658202BB4C4431_OFFSET))(this);
	}

	::System::Void Method_1_0960CAEE01038065()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_METHOD_1_0960CAEE01038065_OFFSET))(this);
	}

	::System::Void Method_1_FE268EA0D7E91617()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_METHOD_1_FE268EA0D7E91617_OFFSET))(this);
	}

	::System::Void Method_1_0219AF05B10FD13A(::RPG::GameCore::TriggerEffect* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TriggerEffect*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_METHOD_1_0219AF05B10FD13A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5B2F46C5CFD6B7FE(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_1_METHOD_1_5B2F46C5CFD6B7FE_OFFSET))(this, a1, a2);
	}
};

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

#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158171F0)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x15818710)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_0219AF05B10FD13A_OFFSET UNITYSDK_OFFSET(0x15819760)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_0960CAEE01038065_OFFSET UNITYSDK_OFFSET(0x15818B20)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x15818440)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_3574512695A597AB_OFFSET UNITYSDK_OFFSET(0x15817730)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_3F1469804B03B41B_OFFSET UNITYSDK_OFFSET(0x15819C90)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_46CCAEAA5904FCD2_OFFSET UNITYSDK_OFFSET(0x15817D40)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_472E9805B297BD58_OFFSET UNITYSDK_OFFSET(0x15817170)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_4A2CD9C4812B863C_OFFSET UNITYSDK_OFFSET(0x15819670)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_5C091B708B35682F_OFFSET UNITYSDK_OFFSET(0x158174E0)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_5D23BB0A96E7AA13_OFFSET UNITYSDK_OFFSET(0x15816460)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_870AF3CD1D0A67B1_OFFSET UNITYSDK_OFFSET(0x158187C0)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_8D57FB06965E0F09_OFFSET UNITYSDK_OFFSET(0x158193E0)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_A52062643A2DBAD8_OFFSET UNITYSDK_OFFSET(0x15816110)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_B7D959C8B7C0AE2F_OFFSET UNITYSDK_OFFSET(0x15818E80)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_BD658202BB4C4431_OFFSET UNITYSDK_OFFSET(0x15818C70)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15819700)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x15818150)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_E1159787734BD959_OFFSET UNITYSDK_OFFSET(0x158168D0)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_E21AC6EE08DC160A_OFFSET UNITYSDK_OFFSET(0x15818F00)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_FE268EA0D7E91617_OFFSET UNITYSDK_OFFSET(0x15818D30)
#define CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96__CTOR_OFFSET UNITYSDK_OFFSET(0x15816830)

inline static constexpr unsigned int Class_2_4B1AB04F7469D57D_Class_1_172781B57C58AF96_TypeDefinitionIndex = 57499;

class Class_2_4B1AB04F7469D57D_Class_1_172781B57C58AF96 : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_NNPENLPKCFG()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4B1AB04F7469D57D_Class_1_172781B57C58AF96_TypeDefinitionIndex)->GetStaticField(0x11590);
	}
	::RPG::GameCore::NpcPossessionEffectConfig* HECGJKBHOMI; // 0x10
	::UnityEngine::Transform* LLKDMBLKFPM; // 0x18
	::Class_2_4B1AB04F7469D57D* JHFKOHNKLMH; // 0x20
	::RPG::GameCore::GameEntity* JOIPPIKNILC; // 0x28
	::System::Action_1<::UnityEngine::GameObject*>* LMONILAPCFA; // 0x30
	::System::String* ODHMHECLFCO; // 0x38
	::Class_1_004034A1FAAF468A* FMMGLEKLHML; // 0x40
	::RPG::GameCore::PossessionConfigRow* LGECLNIGGFH; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* POLGHOLICMA; // 0x50
	::UnityEngine::GameObject* AFGEEDIJOJF; // 0x58
	::Class_2_4B1AB04F7469D57D_Struct_2_75164EB0A6079289_1 DHNLFNGPPHE; // 0x60
	::Class_1_1342B57709FD7AC5* OIDAGBPPNBJ; // 0x70
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* IBIHAHMDJOG; // 0x78
	::System::String* CLHGDEDCNKK; // 0x80
	::System::String* KHHGBMCHGPL; // 0x88
	::System::String* GEJIJFFILEB; // 0x90
	::UnityEngine::Animator* APPGGMLEPLN; // 0x98
	::RPG::GameCore::LevelNPCPossessionInfo* OOLIBINJNHI; // 0xA0
	::System::String* _Category_k__BackingField; // 0xA8
	::UnityEngine::Vector3 MFMKGEIJFNF; // 0xB0
	::UnityEngine::Vector3 EDHPDNPMDFC; // 0xBC
	::UnityEngine::Quaternion CHKMEHAGLJL; // 0xC8
	::System::Boolean OCFKLDHGPHA; // 0xD8

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Class_2_4B1AB04F7469D57D* a2, ::RPG::GameCore::LevelNPCPossessionInfo* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_2_4B1AB04F7469D57D*, ::RPG::GameCore::LevelNPCPossessionInfo*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* get_Category()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_GET_CATEGORY_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_472E9805B297BD58(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_472E9805B297BD58_OFFSET))(this, a1);
	}

	::System::Void Method_1_5D23BB0A96E7AA13(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_5D23BB0A96E7AA13_OFFSET))(this, a1);
	}

	::System::Void Method_1_E1159787734BD959()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_E1159787734BD959_OFFSET))(this);
	}

	::System::Void Method_1_3574512695A597AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_3574512695A597AB_OFFSET))(this);
	}

	::System::Void Method_1_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_D7852DE078ACC1F1_OFFSET))(this);
	}

	::System::Void Method_1_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Void Method_1_A52062643A2DBAD8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_A52062643A2DBAD8_OFFSET))(this, a1);
	}

	::System::Void Method_1_5C091B708B35682F(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_5C091B708B35682F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_46CCAEAA5904FCD2(::RPG::GameCore::NpcPossessionEffectConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NpcPossessionEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_46CCAEAA5904FCD2_OFFSET))(this, a1);
	}

	::System::Void Method_1_870AF3CD1D0A67B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_870AF3CD1D0A67B1_OFFSET))(this);
	}

	::System::Void Method_1_B7D959C8B7C0AE2F(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_B7D959C8B7C0AE2F_OFFSET))(this, a1);
	}

	::System::Void Method_1_8D57FB06965E0F09(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_8D57FB06965E0F09_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E21AC6EE08DC160A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_E21AC6EE08DC160A_OFFSET))(this);
	}

	::System::Void Method_1_4A2CD9C4812B863C(::RPG::GameCore::CharacterModelComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterModelComponent*))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_4A2CD9C4812B863C_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_BD658202BB4C4431()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_BD658202BB4C4431_OFFSET))(this);
	}

	::System::Void Method_1_0960CAEE01038065()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_0960CAEE01038065_OFFSET))(this);
	}

	::System::Void Method_1_FE268EA0D7E91617()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_FE268EA0D7E91617_OFFSET))(this);
	}

	::System::Void Method_1_0219AF05B10FD13A(::RPG::GameCore::TriggerEffect* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TriggerEffect*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_0219AF05B10FD13A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_3F1469804B03B41B(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_4B1AB04F7469D57D_CLASS_1_172781B57C58AF96_METHOD_1_3F1469804B03B41B_OFFSET))(this, a1, a2);
	}
};

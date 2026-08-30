#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityLoadState.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/Struct_2_2AE38597B7CA5E0B.h"

class Class_1_004034A1FAAF468A;
class Class_1_B68CA618BEA3A2C8;
class Class_1_C7618451F544DC60;
namespace RPG::Client { class CharacterEffect; }
namespace RPG::Client { class CharacterShaderPropertyTransition; }
namespace RPG::Client { class EntityGameObjectConnection; }
namespace RPG::Client { class MockAnimator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_2_752CDE15938131E8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1704FE80)
#define CLASS_2_752CDE15938131E8_GETMODELART_OFFSET UNITYSDK_OFFSET(0x170512A0)
#define CLASS_2_752CDE15938131E8_GETMODELGO_OFFSET UNITYSDK_OFFSET(0x17051250)
#define CLASS_2_752CDE15938131E8_GET_LOADSTATE_OFFSET UNITYSDK_OFFSET(0x17051820)
#define CLASS_2_752CDE15938131E8_GET_MOCKANIMATOR_OFFSET UNITYSDK_OFFSET(0x17051880)
#define CLASS_2_752CDE15938131E8_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x17051580)
#define CLASS_2_752CDE15938131E8_METHOD_2_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0x170512E0)
#define CLASS_2_752CDE15938131E8_METHOD_2_0EFCBA53C598C7C9_OFFSET UNITYSDK_OFFSET(0x17050A30)
#define CLASS_2_752CDE15938131E8_METHOD_2_2439B52C953E2E46_OFFSET UNITYSDK_OFFSET(0x17050240)
#define CLASS_2_752CDE15938131E8_METHOD_2_27F188339A8C2F5D_OFFSET UNITYSDK_OFFSET(0x17051680)
#define CLASS_2_752CDE15938131E8_METHOD_2_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x17050850)
#define CLASS_2_752CDE15938131E8_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x17051760)
#define CLASS_2_752CDE15938131E8_METHOD_2_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x17051410)
#define CLASS_2_752CDE15938131E8_METHOD_2_74B606B7F04F3BC3_OFFSET UNITYSDK_OFFSET(0x17050790)
#define CLASS_2_752CDE15938131E8_METHOD_2_8CA05BCD86E125DF_OFFSET UNITYSDK_OFFSET(0x17050E30)
#define CLASS_2_752CDE15938131E8_METHOD_2_97889423B3D78768_OFFSET UNITYSDK_OFFSET(0x17050160)
#define CLASS_2_752CDE15938131E8_METHOD_2_AFB1E2212A58AB3C_OFFSET UNITYSDK_OFFSET(0x170502A0)
#define CLASS_2_752CDE15938131E8_METHOD_2_B235E757922104A8_OFFSET UNITYSDK_OFFSET(0x17050F70)
#define CLASS_2_752CDE15938131E8_METHOD_2_C15B130A690A8315_OFFSET UNITYSDK_OFFSET(0x170516D0)
#define CLASS_2_752CDE15938131E8_TICK_OFFSET UNITYSDK_OFFSET(0x17051470)
#define CLASS_2_752CDE15938131E8__CTOR_OFFSET UNITYSDK_OFFSET(0x1704FE40)

inline static constexpr unsigned int Class_2_752CDE15938131E8_TypeDefinitionIndex = 57153;

class Class_2_752CDE15938131E8 : public ::RPG::GameCore::GameComponentBase
{
public:
	::UnityEngine::GameObject* IMAKLOCDJGL; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Object*>* FBFAAAABPPM; // 0x20
	::RPG::Client::MockAnimator* CBPLANOPAPP; // 0x28
	::UnityEngine::GameObject* BPPKOHFDGON; // 0x30
	::RPG::Client::CharacterEffect* HJBEGIDAMBP; // 0x38
	::Class_1_B68CA618BEA3A2C8* MFEGCLCFBBI; // 0x40
	::UnityEngine::Transform* CEFPLCJBPLB; // 0x48
	::System::Collections::Generic::List_1<::Class_1_C7618451F544DC60*>* ABLEHIJPLLG; // 0x50
	::UnityEngine::Animator* APPGGMLEPLN; // 0x58
	::RPG::Client::CharacterShaderPropertyTransition* EPOBIDJNGOL; // 0x60
	::System::Boolean FOIGIGFDDLK; // 0x68
	::System::Boolean LBFCOHCHIOP; // 0x69
	::Struct_2_2AE38597B7CA5E0B GGCMOIJPNIF; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_752CDE15938131E8__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_752CDE15938131E8_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_AFB1E2212A58AB3C(::System::String* a1, ::Class_1_004034A1FAAF468A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_004034A1FAAF468A*))((::PBYTE)hIl2Cpp + CLASS_2_752CDE15938131E8_METHOD_2_AFB1E2212A58AB3C_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* GetModelGO()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_752CDE15938131E8_GETMODELGO_OFFSET))(this);
	}

	::UnityEngine::GameObject* GetModelArt()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_752CDE15938131E8_GETMODELART_OFFSET))(this);
	}

	::System::Void Method_2_0869E1192F8E01DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_752CDE15938131E8_METHOD_2_0869E1192F8E01DF_OFFSET))(this);
	}

	::System::Void Method_2_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_752CDE15938131E8_METHOD_2_6B72D4EE8C6E907F_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_752CDE15938131E8_TICK_OFFSET))(this, a1);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_752CDE15938131E8_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_74B606B7F04F3BC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_752CDE15938131E8_METHOD_2_74B606B7F04F3BC3_OFFSET))(this);
	}

	::System::Void Method_2_B235E757922104A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_752CDE15938131E8_METHOD_2_B235E757922104A8_OFFSET))(this);
	}

	::System::Void Method_2_27F188339A8C2F5D(::RPG::Client::EntityGameObjectConnection* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EntityGameObjectConnection*))((::PBYTE)hIl2Cpp + CLASS_2_752CDE15938131E8_METHOD_2_27F188339A8C2F5D_OFFSET))(this, a1);
	}

	::System::Void Method_2_C15B130A690A8315(::RPG::Client::EntityGameObjectConnection* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EntityGameObjectConnection*))((::PBYTE)hIl2Cpp + CLASS_2_752CDE15938131E8_METHOD_2_C15B130A690A8315_OFFSET))(this, a1);
	}

	::System::Void Method_2_8CA05BCD86E125DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_752CDE15938131E8_METHOD_2_8CA05BCD86E125DF_OFFSET))(this);
	}

	::System::Void Method_2_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_752CDE15938131E8_METHOD_2_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Void Method_2_2439B52C953E2E46()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_752CDE15938131E8_METHOD_2_2439B52C953E2E46_OFFSET))(this);
	}

	::System::Void Method_2_0EFCBA53C598C7C9(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_752CDE15938131E8_METHOD_2_0EFCBA53C598C7C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_97889423B3D78768()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_752CDE15938131E8_METHOD_2_97889423B3D78768_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_752CDE15938131E8_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::RPG::GameCore::EntityLoadState get_LoadState()
	{
		return ((::RPG::GameCore::EntityLoadState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_752CDE15938131E8_GET_LOADSTATE_OFFSET))(this);
	}

	::RPG::Client::MockAnimator* get_MockAnimator()
	{
		return ((::RPG::Client::MockAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_752CDE15938131E8_GET_MOCKANIMATOR_OFFSET))(this);
	}
};

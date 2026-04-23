#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityLoadState.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/Struct_2_2AE38597B7CA5E0B.h"

class Class_1_004034A1FAAF468A;
class Class_1_216735A54A4616E6;
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

#define CLASS_2_752CDE15938131E8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8F92E40)
#define CLASS_2_752CDE15938131E8_GETMODELART_OFFSET UNITYSDK_OFFSET(0x8F94160)
#define CLASS_2_752CDE15938131E8_GETMODELGO_OFFSET UNITYSDK_OFFSET(0x8F94110)
#define CLASS_2_752CDE15938131E8_GET_LOADSTATE_OFFSET UNITYSDK_OFFSET(0x8F946B0)
#define CLASS_2_752CDE15938131E8_GET_MOCKANIMATOR_OFFSET UNITYSDK_OFFSET(0x8F94710)
#define CLASS_2_752CDE15938131E8_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x8F94440)
#define CLASS_2_752CDE15938131E8_METHOD_2_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0x8F941A0)
#define CLASS_2_752CDE15938131E8_METHOD_2_0EFCBA53C598C7C9_OFFSET UNITYSDK_OFFSET(0x8F93940)
#define CLASS_2_752CDE15938131E8_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x8F94610)
#define CLASS_2_752CDE15938131E8_METHOD_2_2439B52C953E2E46_OFFSET UNITYSDK_OFFSET(0x8F931B0)
#define CLASS_2_752CDE15938131E8_METHOD_2_27F188339A8C2F5D_OFFSET UNITYSDK_OFFSET(0x8F94530)
#define CLASS_2_752CDE15938131E8_METHOD_2_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x8F93760)
#define CLASS_2_752CDE15938131E8_METHOD_2_3306F24AC967FE79_OFFSET UNITYSDK_OFFSET(0x8F93E50)
#define CLASS_2_752CDE15938131E8_METHOD_2_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x8F942D0)
#define CLASS_2_752CDE15938131E8_METHOD_2_74B606B7F04F3BC3_OFFSET UNITYSDK_OFFSET(0x8F936A0)
#define CLASS_2_752CDE15938131E8_METHOD_2_8CA05BCD86E125DF_OFFSET UNITYSDK_OFFSET(0x8F93D10)
#define CLASS_2_752CDE15938131E8_METHOD_2_AFB1E2212A58AB3C_OFFSET UNITYSDK_OFFSET(0x8F93210)
#define CLASS_2_752CDE15938131E8_METHOD_2_C15B130A690A8315_OFFSET UNITYSDK_OFFSET(0x8F94580)
#define CLASS_2_752CDE15938131E8_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x8F93100)
#define CLASS_2_752CDE15938131E8_TICK_OFFSET UNITYSDK_OFFSET(0x8F94330)
#define CLASS_2_752CDE15938131E8__CTOR_OFFSET UNITYSDK_OFFSET(0x8F92E00)
#define CLASS_2_752CDE15938131E8___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x8F947B0)
#define CLASS_2_752CDE15938131E8___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x8F947A0)

inline static constexpr unsigned int Class_2_752CDE15938131E8_TypeDefinitionIndex = 52517;

class Class_2_752CDE15938131E8 : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Object*>* Field_2_5; // 0x18
	::UnityEngine::Animator* Field_2_11; // 0x20
	::UnityEngine::GameObject* Field_2_2; // 0x28
	::RPG::Client::CharacterShaderPropertyTransition* Field_2_9; // 0x30
	::RPG::Client::CharacterEffect* Field_2_3; // 0x38
	::RPG::Client::MockAnimator* Field_2_12; // 0x40
	::UnityEngine::Transform* Field_2_7; // 0x48
	::System::Collections::Generic::List_1<::Class_1_C7618451F544DC60*>* Field_2_10; // 0x50
	::UnityEngine::GameObject* Field_2_1; // 0x58
	::Class_1_216735A54A4616E6* Field_2_6; // 0x60
	::System::Boolean Field_2_8; // 0x68
	::System::Boolean Field_2_0; // 0x69
	::Struct_2_2AE38597B7CA5E0B Field_2_4; // 0x6C

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

	::System::Void Method_2_3306F24AC967FE79()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_752CDE15938131E8_METHOD_2_3306F24AC967FE79_OFFSET))(this);
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

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_752CDE15938131E8_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_752CDE15938131E8_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::RPG::GameCore::EntityLoadState get_LoadState()
	{
		return ((::RPG::GameCore::EntityLoadState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_752CDE15938131E8_GET_LOADSTATE_OFFSET))(this);
	}

	::RPG::Client::MockAnimator* get_MockAnimator()
	{
		return ((::RPG::Client::MockAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_752CDE15938131E8_GET_MOCKANIMATOR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_752CDE15938131E8___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_LateUpdate(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_752CDE15938131E8___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this, P0);
	}
};

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

#define CLASS_2_752CDE15938131E8_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA8F1E70)
#define CLASS_2_752CDE15938131E8_GETMODELART_OFFSET UNITYSDK_OFFSET(0xA8F3290)
#define CLASS_2_752CDE15938131E8_GETMODELGO_OFFSET UNITYSDK_OFFSET(0xA8F3240)
#define CLASS_2_752CDE15938131E8_GET_LOADSTATE_OFFSET UNITYSDK_OFFSET(0xA8F3810)
#define CLASS_2_752CDE15938131E8_GET_MOCKANIMATOR_OFFSET UNITYSDK_OFFSET(0xA8F3870)
#define CLASS_2_752CDE15938131E8_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA8F3570)
#define CLASS_2_752CDE15938131E8_METHOD_2_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0xA8F32D0)
#define CLASS_2_752CDE15938131E8_METHOD_2_0EFCBA53C598C7C9_OFFSET UNITYSDK_OFFSET(0xA8F2A20)
#define CLASS_2_752CDE15938131E8_METHOD_2_2439B52C953E2E46_OFFSET UNITYSDK_OFFSET(0xA8F2230)
#define CLASS_2_752CDE15938131E8_METHOD_2_27F188339A8C2F5D_OFFSET UNITYSDK_OFFSET(0xA8F3670)
#define CLASS_2_752CDE15938131E8_METHOD_2_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0xA8F2840)
#define CLASS_2_752CDE15938131E8_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xA8F3750)
#define CLASS_2_752CDE15938131E8_METHOD_2_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0xA8F3400)
#define CLASS_2_752CDE15938131E8_METHOD_2_74B606B7F04F3BC3_OFFSET UNITYSDK_OFFSET(0xA8F2780)
#define CLASS_2_752CDE15938131E8_METHOD_2_8CA05BCD86E125DF_OFFSET UNITYSDK_OFFSET(0xA8F2E20)
#define CLASS_2_752CDE15938131E8_METHOD_2_97889423B3D78768_OFFSET UNITYSDK_OFFSET(0xA8F2150)
#define CLASS_2_752CDE15938131E8_METHOD_2_AFB1E2212A58AB3C_OFFSET UNITYSDK_OFFSET(0xA8F2290)
#define CLASS_2_752CDE15938131E8_METHOD_2_B235E757922104A8_OFFSET UNITYSDK_OFFSET(0xA8F2F60)
#define CLASS_2_752CDE15938131E8_METHOD_2_C15B130A690A8315_OFFSET UNITYSDK_OFFSET(0xA8F36C0)
#define CLASS_2_752CDE15938131E8_TICK_OFFSET UNITYSDK_OFFSET(0xA8F3460)
#define CLASS_2_752CDE15938131E8__CTOR_OFFSET UNITYSDK_OFFSET(0xA8F1E30)
#define CLASS_2_752CDE15938131E8___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA8F3910)
#define CLASS_2_752CDE15938131E8___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xA8F3900)

inline static constexpr unsigned int Class_2_752CDE15938131E8_TypeDefinitionIndex = 53217;

class Class_2_752CDE15938131E8 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::Client::CharacterEffect* Field_2_0; // 0x18
	::UnityEngine::GameObject* Field_2_1; // 0x20
	::Class_1_B68CA618BEA3A2C8* Field_2_2; // 0x28
	::UnityEngine::Animator* Field_2_3; // 0x30
	::RPG::Client::CharacterShaderPropertyTransition* Field_2_4; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::Object*>* Field_2_5; // 0x40
	::RPG::Client::MockAnimator* Field_2_6; // 0x48
	::UnityEngine::GameObject* Field_2_7; // 0x50
	::UnityEngine::Transform* Field_2_8; // 0x58
	::System::Collections::Generic::List_1<::Class_1_C7618451F544DC60*>* Field_2_9; // 0x60
	::Struct_2_2AE38597B7CA5E0B Field_2_10; // 0x68
	::System::Boolean Field_2_11; // 0x78
	::System::Boolean Field_2_12; // 0x79

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

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_752CDE15938131E8___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_752CDE15938131E8___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this, a1);
	}
};

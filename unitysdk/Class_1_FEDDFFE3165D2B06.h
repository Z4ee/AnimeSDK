#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FEDDFFE3165D2B06_State.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class BlockNodeConfig; }
namespace RPG::GameCore { class StageCaptureAliasData; }
namespace RPG::GameCore { class StagePrefabInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_1_FEDDFFE3165D2B06_METHOD_1_063ADB01C44981A7_OFFSET UNITYSDK_OFFSET(0xF943130)
#define CLASS_1_FEDDFFE3165D2B06_METHOD_1_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0xF940EC0)
#define CLASS_1_FEDDFFE3165D2B06_METHOD_1_3C5C7383D4817E73_OFFSET UNITYSDK_OFFSET(0xF941070)
#define CLASS_1_FEDDFFE3165D2B06_METHOD_1_4C370B6228E98CF3_OFFSET UNITYSDK_OFFSET(0xF940E30)
#define CLASS_1_FEDDFFE3165D2B06_METHOD_1_6F73A40265D5B980_OFFSET UNITYSDK_OFFSET(0xF9431F0)
#define CLASS_1_FEDDFFE3165D2B06_METHOD_1_8D9042F58AECE7F2_OFFSET UNITYSDK_OFFSET(0xF943550)
#define CLASS_1_FEDDFFE3165D2B06_METHOD_1_A75BB98B71A1A8E4_OFFSET UNITYSDK_OFFSET(0xF941350)
#define CLASS_1_FEDDFFE3165D2B06_METHOD_1_A812CC4BFADC7216_OFFSET UNITYSDK_OFFSET(0xF943510)
#define CLASS_1_FEDDFFE3165D2B06_METHOD_1_C101CD8C5CF89A5A_OFFSET UNITYSDK_OFFSET(0xF943070)
#define CLASS_1_FEDDFFE3165D2B06_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF9434B0)
#define CLASS_1_FEDDFFE3165D2B06_METHOD_1_EF6A17F558E67853_OFFSET UNITYSDK_OFFSET(0xF9433F0)
#define CLASS_1_FEDDFFE3165D2B06__CTOR_OFFSET UNITYSDK_OFFSET(0xF940D10)

inline static constexpr unsigned int Class_1_FEDDFFE3165D2B06_TypeDefinitionIndex = 64045;

class Class_1_FEDDFFE3165D2B06 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::StageCaptureAliasData*>*>* Field_1_12; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Object*>* Field_1_6; // 0x18
	::UnityEngine::Transform* Field_1_10; // 0x20
	::RPG::GameCore::BlockNodeConfig* Field_1_11; // 0x28
	::UnityEngine::GameObject* Field_1_3; // 0x30
	::System::String* Field_1_1; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_1_5; // 0x40
	::RPG::Client::Stage* Field_1_9; // 0x48
	::UnityEngine::Object* Field_1_14; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* Field_1_13; // 0x58
	::UnityEngine::GameObject* Field_1_7; // 0x60
	::System::Int32 Field_1_2; // 0x68
	::UnityEngine::Bounds Field_1_8; // 0x6C
	::Class_1_FEDDFFE3165D2B06_State Field_1_4; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEDDFFE3165D2B06__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4C370B6228E98CF3(::RPG::GameCore::BlockNodeConfig* a1, ::RPG::Client::Stage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BlockNodeConfig*, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + CLASS_1_FEDDFFE3165D2B06_METHOD_1_4C370B6228E98CF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEDDFFE3165D2B06_METHOD_1_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_1_3C5C7383D4817E73(::RPG::GameCore::StagePrefabInfo* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StagePrefabInfo*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_FEDDFFE3165D2B06_METHOD_1_3C5C7383D4817E73_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Method_1_A75BB98B71A1A8E4(::UnityEngine::GameObject* a1)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_FEDDFFE3165D2B06_METHOD_1_A75BB98B71A1A8E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_063ADB01C44981A7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FEDDFFE3165D2B06_METHOD_1_063ADB01C44981A7_OFFSET))(this, a1);
	}

	::System::Void Method_1_6F73A40265D5B980()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEDDFFE3165D2B06_METHOD_1_6F73A40265D5B980_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_EF6A17F558E67853(::System::String* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FEDDFFE3165D2B06_METHOD_1_EF6A17F558E67853_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEDDFFE3165D2B06_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::RPG::GameCore::BlockNodeConfig* Method_1_A812CC4BFADC7216()
	{
		return ((::RPG::GameCore::BlockNodeConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEDDFFE3165D2B06_METHOD_1_A812CC4BFADC7216_OFFSET))(this);
	}

	::System::String* Method_1_C101CD8C5CF89A5A()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEDDFFE3165D2B06_METHOD_1_C101CD8C5CF89A5A_OFFSET))(this);
	}

	::RPG::GameCore::BlockNodeConfig* Method_1_8D9042F58AECE7F2()
	{
		return ((::RPG::GameCore::BlockNodeConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEDDFFE3165D2B06_METHOD_1_8D9042F58AECE7F2_OFFSET))(this);
	}
};

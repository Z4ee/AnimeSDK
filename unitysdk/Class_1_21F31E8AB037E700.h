#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_21F31E8AB037E700_State.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_5.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class BlockNodeConfig; }
namespace RPG::GameCore { class StageCaptureAliasData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_1_21F31E8AB037E700_METHOD_1_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x13A58B50)
#define CLASS_1_21F31E8AB037E700_METHOD_1_2265FB819D2579B2_OFFSET UNITYSDK_OFFSET(0x13A58D00)
#define CLASS_1_21F31E8AB037E700_METHOD_1_4C370B6228E98CF3_OFFSET UNITYSDK_OFFSET(0x13A58AB0)
#define CLASS_1_21F31E8AB037E700_METHOD_1_64F3965CE4C4DB47_OFFSET UNITYSDK_OFFSET(0x13A5C510)
#define CLASS_1_21F31E8AB037E700_METHOD_1_8D9042F58AECE7F2_OFFSET UNITYSDK_OFFSET(0x13A5C880)
#define CLASS_1_21F31E8AB037E700_METHOD_1_A812CC4BFADC7216_OFFSET UNITYSDK_OFFSET(0x13A5C840)
#define CLASS_1_21F31E8AB037E700_METHOD_1_C101CD8C5CF89A5A_OFFSET UNITYSDK_OFFSET(0x13A5C360)
#define CLASS_1_21F31E8AB037E700_METHOD_1_C433909FE52EEB24_OFFSET UNITYSDK_OFFSET(0x13A590C0)
#define CLASS_1_21F31E8AB037E700_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13A5C7E0)
#define CLASS_1_21F31E8AB037E700_METHOD_1_EF6A17F558E67853_OFFSET UNITYSDK_OFFSET(0x13A5C730)
#define CLASS_1_21F31E8AB037E700_METHOD_1_F4F1E7D1CC26024A_OFFSET UNITYSDK_OFFSET(0x13A5C420)
#define CLASS_1_21F31E8AB037E700__CTOR_OFFSET UNITYSDK_OFFSET(0x13A58990)

inline static constexpr unsigned int Class_1_21F31E8AB037E700_TypeDefinitionIndex = 66371;

class Class_1_21F31E8AB037E700 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* Field_1_1; // 0x10
	::UnityEngine::GameObject* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Object*>* Field_1_3; // 0x20
	::UnityEngine::Object* Field_1_4; // 0x28
	::RPG::Client::Stage* Field_1_5; // 0x30
	::UnityEngine::GameObject* Field_1_6; // 0x38
	::UnityEngine::Transform* Field_1_7; // 0x40
	::System::String* Field_1_8; // 0x48
	::RPG::GameCore::BlockNodeConfig* Field_1_9; // 0x50
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_1_10; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::StageCaptureAliasData*>*>* Field_1_11; // 0x60
	::UnityEngine::Bounds Field_1_12; // 0x68
	::System::Int32 Field_1_13; // 0x80
	::Class_1_21F31E8AB037E700_State Field_1_14; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21F31E8AB037E700__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4C370B6228E98CF3(::RPG::GameCore::BlockNodeConfig* a1, ::RPG::Client::Stage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BlockNodeConfig*, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + CLASS_1_21F31E8AB037E700_METHOD_1_4C370B6228E98CF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21F31E8AB037E700_METHOD_1_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_1_2265FB819D2579B2(::Struct_2_CC45B4503679E14E_5 a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_CC45B4503679E14E_5, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_21F31E8AB037E700_METHOD_1_2265FB819D2579B2_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Method_1_C433909FE52EEB24(::UnityEngine::GameObject* a1)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_21F31E8AB037E700_METHOD_1_C433909FE52EEB24_OFFSET))(this, a1);
	}

	::System::Void Method_1_F4F1E7D1CC26024A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21F31E8AB037E700_METHOD_1_F4F1E7D1CC26024A_OFFSET))(this, a1);
	}

	::System::Void Method_1_64F3965CE4C4DB47()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21F31E8AB037E700_METHOD_1_64F3965CE4C4DB47_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_EF6A17F558E67853(::System::String* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21F31E8AB037E700_METHOD_1_EF6A17F558E67853_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21F31E8AB037E700_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::RPG::GameCore::BlockNodeConfig* Method_1_A812CC4BFADC7216()
	{
		return ((::RPG::GameCore::BlockNodeConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21F31E8AB037E700_METHOD_1_A812CC4BFADC7216_OFFSET))(this);
	}

	::System::String* Method_1_C101CD8C5CF89A5A()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21F31E8AB037E700_METHOD_1_C101CD8C5CF89A5A_OFFSET))(this);
	}

	::RPG::GameCore::BlockNodeConfig* Method_1_8D9042F58AECE7F2()
	{
		return ((::RPG::GameCore::BlockNodeConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21F31E8AB037E700_METHOD_1_8D9042F58AECE7F2_OFFSET))(this);
	}
};

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

#define CLASS_1_21F31E8AB037E700_METHOD_1_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0xBCDC0F0)
#define CLASS_1_21F31E8AB037E700_METHOD_1_2265FB819D2579B2_OFFSET UNITYSDK_OFFSET(0xBCDC2A0)
#define CLASS_1_21F31E8AB037E700_METHOD_1_4C370B6228E98CF3_OFFSET UNITYSDK_OFFSET(0xBCDC050)
#define CLASS_1_21F31E8AB037E700_METHOD_1_64F3965CE4C4DB47_OFFSET UNITYSDK_OFFSET(0xBCE0230)
#define CLASS_1_21F31E8AB037E700_METHOD_1_8D9042F58AECE7F2_OFFSET UNITYSDK_OFFSET(0xBCE05A0)
#define CLASS_1_21F31E8AB037E700_METHOD_1_994271937832B660_OFFSET UNITYSDK_OFFSET(0xBCDC660)
#define CLASS_1_21F31E8AB037E700_METHOD_1_A812CC4BFADC7216_OFFSET UNITYSDK_OFFSET(0xBCE0560)
#define CLASS_1_21F31E8AB037E700_METHOD_1_C101CD8C5CF89A5A_OFFSET UNITYSDK_OFFSET(0xBCE0080)
#define CLASS_1_21F31E8AB037E700_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBCE0500)
#define CLASS_1_21F31E8AB037E700_METHOD_1_EF6A17F558E67853_OFFSET UNITYSDK_OFFSET(0xBCE0450)
#define CLASS_1_21F31E8AB037E700_METHOD_1_F4F1E7D1CC26024A_OFFSET UNITYSDK_OFFSET(0xBCE0140)
#define CLASS_1_21F31E8AB037E700__CTOR_OFFSET UNITYSDK_OFFSET(0xBCDBF30)

inline static constexpr unsigned int Class_1_21F31E8AB037E700_TypeDefinitionIndex = 69463;

class Class_1_21F31E8AB037E700 : public ::System::Object
{
public:
	// static const ::System::Single BLDDLJCACAE; // 0x0
	::UnityEngine::Object* NBOLCONKFKG; // 0x10
	::RPG::Client::Stage* FODBAAPMJNJ; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* HAMLLHEKAPA; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Object*>* NPENGFBHFJN; // 0x28
	::UnityEngine::Transform* KJMDDAHEODL; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::StageCaptureAliasData*>*>* NDENELAPDLF; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* BCHJDKAMFCG; // 0x40
	::System::String* OENAMINOLLF; // 0x48
	::UnityEngine::GameObject* LIPOLMIEDOH; // 0x50
	::RPG::GameCore::BlockNodeConfig* EPNIOAKAJGJ; // 0x58
	::UnityEngine::GameObject* MKDBPGHLNJJ; // 0x60
	::UnityEngine::Bounds KILJOCNJLPC; // 0x68
	::Class_1_21F31E8AB037E700_State CNOFAABNBEG; // 0x80
	::System::Int32 GMDBHJKEAEI; // 0x84

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

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Method_1_994271937832B660(::UnityEngine::GameObject* a1)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_21F31E8AB037E700_METHOD_1_994271937832B660_OFFSET))(this, a1);
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

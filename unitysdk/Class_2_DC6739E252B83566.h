#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_3A335394524C9E44.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"

class Class_1_FE6DD620A0017964;
class Class_2_59B7D0D376F5D526;
class DamageTextStyle;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_DC6739E252B83566_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x13F1ADB0)
#define CLASS_2_DC6739E252B83566_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x13F1AE80)
#define CLASS_2_DC6739E252B83566_METHOD_2_07BB339C490CE727_OFFSET UNITYSDK_OFFSET(0x13F1A7B0)
#define CLASS_2_DC6739E252B83566_METHOD_2_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0x13F19C20)
#define CLASS_2_DC6739E252B83566_METHOD_2_56C38FA04523BC2D_OFFSET UNITYSDK_OFFSET(0x13F1A700)
#define CLASS_2_DC6739E252B83566_METHOD_2_6AEBE3E41B97B1C7_OFFSET UNITYSDK_OFFSET(0x13F1A4A0)
#define CLASS_2_DC6739E252B83566_METHOD_2_9D62DE16254F5A7E_OFFSET UNITYSDK_OFFSET(0x13F1A620)
#define CLASS_2_DC6739E252B83566_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x13F1ACC0)
#define CLASS_2_DC6739E252B83566_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13F1A420)
#define CLASS_2_DC6739E252B83566_METHOD_2_D3E111A72AFB2828_OFFSET UNITYSDK_OFFSET(0x13F1A940)
#define CLASS_2_DC6739E252B83566_METHOD_2_DDA3F72D5926A636_OFFSET UNITYSDK_OFFSET(0x13F1A8B0)
#define CLASS_2_DC6739E252B83566_METHOD_2_F291FAB047B4807E_OFFSET UNITYSDK_OFFSET(0x13F1AAC0)
#define CLASS_2_DC6739E252B83566__CTOR_OFFSET UNITYSDK_OFFSET(0x13F1AF20)
#define CLASS_2_DC6739E252B83566__ONBIND_OFFSET UNITYSDK_OFFSET(0x13F19BE0)
#define CLASS_2_DC6739E252B83566__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x13F1A460)

inline static constexpr unsigned int Class_2_DC6739E252B83566_TypeDefinitionIndex = 71545;

class Class_2_DC6739E252B83566 : public ::Class_1_34917908B7833130
{
public:
	::DamageTextStyle* PCHICPLDDIB; // 0x60
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::DamageTextStyle*>* BHNHLHHOKLJ; // 0x68
	::DamageTextStyle* MEEBEGPKBBM; // 0x70
	::DamageTextStyle* LDCIMODGNCN; // 0x78
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::DamageTextStyle*>* GNKGANNNMGI; // 0x80
	::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::UIFloatingTextType, ::RPG::Client::TextID>*>* LADHCMMDAOA; // 0x88
	::RPG::Client::UIFloatingTextType OJPMJFFIGCP; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC6739E252B83566__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC6739E252B83566__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC6739E252B83566_METHOD_2_0C88AB06D46E777A_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC6739E252B83566_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC6739E252B83566__ONDISPOSE_OFFSET))(this);
	}

	::DamageTextStyle* Method_2_6AEBE3E41B97B1C7(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::RPG::Client::UIFloatingTextType a3, ::Struct_2_3A335394524C9E44 a4)
	{
		return ((::DamageTextStyle*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::Client::UIFloatingTextType, ::Struct_2_3A335394524C9E44))((::PBYTE)hIl2Cpp + CLASS_2_DC6739E252B83566_METHOD_2_6AEBE3E41B97B1C7_OFFSET))(this, a1, a2, a3, a4);
	}

	::DamageTextStyle* Method_2_9D62DE16254F5A7E(::Struct_2_5909FD7779934CCA a1)
	{
		return ((::DamageTextStyle*(*)(::PVOID, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + CLASS_2_DC6739E252B83566_METHOD_2_9D62DE16254F5A7E_OFFSET))(this, a1);
	}

	::DamageTextStyle* Method_2_56C38FA04523BC2D(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::DamageTextStyle*(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_2_DC6739E252B83566_METHOD_2_56C38FA04523BC2D_OFFSET))(this, a1);
	}

	::DamageTextStyle* Method_2_07BB339C490CE727()
	{
		return ((::DamageTextStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC6739E252B83566_METHOD_2_07BB339C490CE727_OFFSET))(this);
	}

	::System::Void Method_2_DDA3F72D5926A636(::Class_2_59B7D0D376F5D526* a1, ::RPG::Client::UIFloatingTextType a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_59B7D0D376F5D526*, ::RPG::Client::UIFloatingTextType, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DC6739E252B83566_METHOD_2_DDA3F72D5926A636_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_2_D3E111A72AFB2828(::RPG::Client::UIFloatingTextType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::UIFloatingTextType))((::PBYTE)hIl2Cpp + CLASS_2_DC6739E252B83566_METHOD_2_D3E111A72AFB2828_OFFSET))(this, a1);
	}

	::System::Void Method_2_F291FAB047B4807E(::Class_1_FE6DD620A0017964* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FE6DD620A0017964*))((::PBYTE)hIl2Cpp + CLASS_2_DC6739E252B83566_METHOD_2_F291FAB047B4807E_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DC6739E252B83566_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC6739E252B83566_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC6739E252B83566_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

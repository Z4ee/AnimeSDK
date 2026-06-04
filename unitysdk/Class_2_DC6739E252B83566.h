#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
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

#define CLASS_2_DC6739E252B83566_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x12385E80)
#define CLASS_2_DC6739E252B83566_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x12385F50)
#define CLASS_2_DC6739E252B83566_METHOD_2_07BB339C490CE727_OFFSET UNITYSDK_OFFSET(0x123858D0)
#define CLASS_2_DC6739E252B83566_METHOD_2_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0x12384D40)
#define CLASS_2_DC6739E252B83566_METHOD_2_56C38FA04523BC2D_OFFSET UNITYSDK_OFFSET(0x12385820)
#define CLASS_2_DC6739E252B83566_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x12386330)
#define CLASS_2_DC6739E252B83566_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x123862D0)
#define CLASS_2_DC6739E252B83566_METHOD_2_6AEBE3E41B97B1C7_OFFSET UNITYSDK_OFFSET(0x123855C0)
#define CLASS_2_DC6739E252B83566_METHOD_2_9D62DE16254F5A7E_OFFSET UNITYSDK_OFFSET(0x12385740)
#define CLASS_2_DC6739E252B83566_METHOD_2_C34FFE4348D9BAA0_OFFSET UNITYSDK_OFFSET(0x123859C0)
#define CLASS_2_DC6739E252B83566_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12385540)
#define CLASS_2_DC6739E252B83566_METHOD_2_D3E111A72AFB2828_OFFSET UNITYSDK_OFFSET(0x12385A50)
#define CLASS_2_DC6739E252B83566_METHOD_2_F291FAB047B4807E_OFFSET UNITYSDK_OFFSET(0x12385BD0)
#define CLASS_2_DC6739E252B83566_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x12385DC0)
#define CLASS_2_DC6739E252B83566__CTOR_OFFSET UNITYSDK_OFFSET(0x12385FF0)
#define CLASS_2_DC6739E252B83566__ONBIND_OFFSET UNITYSDK_OFFSET(0x12384D00)
#define CLASS_2_DC6739E252B83566__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x12385580)
#define CLASS_2_DC6739E252B83566___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x123863F0)
#define CLASS_2_DC6739E252B83566___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x12386450)
#define CLASS_2_DC6739E252B83566___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x12386270)
#define CLASS_2_DC6739E252B83566___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x12386390)

inline static constexpr unsigned int Class_2_DC6739E252B83566_TypeDefinitionIndex = 66919;

class Class_2_DC6739E252B83566 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::DamageTextStyle*>* Field_2_0; // 0x60
	::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::UIFloatingTextType, ::RPG::Client::TextID>*>* Field_2_1; // 0x68
	::DamageTextStyle* Field_2_2; // 0x70
	::DamageTextStyle* Field_2_3; // 0x78
	::DamageTextStyle* Field_2_4; // 0x80
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::DamageTextStyle*>* Field_2_5; // 0x88
	::RPG::Client::UIFloatingTextType Field_2_6; // 0x90

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

	::System::Void Method_2_C34FFE4348D9BAA0(::Class_2_59B7D0D376F5D526* a1, ::RPG::Client::UIFloatingTextType a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_59B7D0D376F5D526*, ::RPG::Client::UIFloatingTextType, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DC6739E252B83566_METHOD_2_C34FFE4348D9BAA0_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_2_D3E111A72AFB2828(::RPG::Client::UIFloatingTextType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::UIFloatingTextType))((::PBYTE)hIl2Cpp + CLASS_2_DC6739E252B83566_METHOD_2_D3E111A72AFB2828_OFFSET))(this, a1);
	}

	::System::Void Method_2_F291FAB047B4807E(::Class_1_FE6DD620A0017964* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FE6DD620A0017964*))((::PBYTE)hIl2Cpp + CLASS_2_DC6739E252B83566_METHOD_2_F291FAB047B4807E_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_DC6739E252B83566_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC6739E252B83566_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC6739E252B83566_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC6739E252B83566___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC6739E252B83566_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC6739E252B83566_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC6739E252B83566___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC6739E252B83566___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC6739E252B83566___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"
#include "unitysdk/System/Decimal.h"

class Class_1_FE6DD620A0017964;
class Class_2_FDE932543F78327B;
class DamageTextStyle;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_98C553BBF0666C0F_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1058A010)
#define CLASS_2_98C553BBF0666C0F_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1058A0B0)
#define CLASS_2_98C553BBF0666C0F_METHOD_2_07BB339C490CE727_OFFSET UNITYSDK_OFFSET(0x10589A80)
#define CLASS_2_98C553BBF0666C0F_METHOD_2_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0x10588E40)
#define CLASS_2_98C553BBF0666C0F_METHOD_2_30A49BAAE192DEFA_OFFSET UNITYSDK_OFFSET(0x105896E0)
#define CLASS_2_98C553BBF0666C0F_METHOD_2_56C38FA04523BC2D_OFFSET UNITYSDK_OFFSET(0x105899C0)
#define CLASS_2_98C553BBF0666C0F_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x1058A380)
#define CLASS_2_98C553BBF0666C0F_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1058A320)
#define CLASS_2_98C553BBF0666C0F_METHOD_2_7E4C1D9BAFB973C3_OFFSET UNITYSDK_OFFSET(0x10589B80)
#define CLASS_2_98C553BBF0666C0F_METHOD_2_9D62DE16254F5A7E_OFFSET UNITYSDK_OFFSET(0x105898D0)
#define CLASS_2_98C553BBF0666C0F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10589660)
#define CLASS_2_98C553BBF0666C0F_METHOD_2_D3E111A72AFB2828_OFFSET UNITYSDK_OFFSET(0x10589BF0)
#define CLASS_2_98C553BBF0666C0F_METHOD_2_F291FAB047B4807E_OFFSET UNITYSDK_OFFSET(0x10589D60)
#define CLASS_2_98C553BBF0666C0F_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x10589F50)
#define CLASS_2_98C553BBF0666C0F__CTOR_OFFSET UNITYSDK_OFFSET(0x1058A130)
#define CLASS_2_98C553BBF0666C0F__ONBIND_OFFSET UNITYSDK_OFFSET(0x10588E00)
#define CLASS_2_98C553BBF0666C0F__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x105896A0)
#define CLASS_2_98C553BBF0666C0F___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1058A440)
#define CLASS_2_98C553BBF0666C0F___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1058A4A0)
#define CLASS_2_98C553BBF0666C0F___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x1058A2C0)
#define CLASS_2_98C553BBF0666C0F___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1058A3E0)

inline static constexpr unsigned int Class_2_98C553BBF0666C0F_TypeDefinitionIndex = 58662;

class Class_2_98C553BBF0666C0F : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::DamageTextStyle* Field_2_4; // 0x60
	::DamageTextStyle* Field_2_3; // 0x68
	::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::UIFloatingTextType, ::RPG::Client::TextID>*>* Field_2_0; // 0x70
	::DamageTextStyle* Field_2_2; // 0x78
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::DamageTextStyle*>* Field_2_5; // 0x80
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::DamageTextStyle*>* Field_2_6; // 0x88
	::RPG::Client::UIFloatingTextType Field_2_1; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98C553BBF0666C0F__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98C553BBF0666C0F__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98C553BBF0666C0F_METHOD_2_0C88AB06D46E777A_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98C553BBF0666C0F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98C553BBF0666C0F__ONDISPOSE_OFFSET))(this);
	}

	::DamageTextStyle* Method_2_30A49BAAE192DEFA(::RPG::GameCore::GameEntity* a1, ::System::Decimal a2, ::RPG::Client::UIFloatingTextType a3, ::Struct_2_5909FD7779934CCA a4)
	{
		return ((::DamageTextStyle*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Decimal, ::RPG::Client::UIFloatingTextType, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + CLASS_2_98C553BBF0666C0F_METHOD_2_30A49BAAE192DEFA_OFFSET))(this, a1, a2, a3, a4);
	}

	::DamageTextStyle* Method_2_9D62DE16254F5A7E(::Struct_2_5909FD7779934CCA a1)
	{
		return ((::DamageTextStyle*(*)(::PVOID, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + CLASS_2_98C553BBF0666C0F_METHOD_2_9D62DE16254F5A7E_OFFSET))(this, a1);
	}

	::DamageTextStyle* Method_2_56C38FA04523BC2D(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::DamageTextStyle*(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_2_98C553BBF0666C0F_METHOD_2_56C38FA04523BC2D_OFFSET))(this, a1);
	}

	::DamageTextStyle* Method_2_07BB339C490CE727()
	{
		return ((::DamageTextStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98C553BBF0666C0F_METHOD_2_07BB339C490CE727_OFFSET))(this);
	}

	::System::Void Method_2_7E4C1D9BAFB973C3(::Class_2_FDE932543F78327B* a1, ::RPG::Client::UIFloatingTextType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FDE932543F78327B*, ::RPG::Client::UIFloatingTextType))((::PBYTE)hIl2Cpp + CLASS_2_98C553BBF0666C0F_METHOD_2_7E4C1D9BAFB973C3_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_D3E111A72AFB2828(::RPG::Client::UIFloatingTextType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::UIFloatingTextType))((::PBYTE)hIl2Cpp + CLASS_2_98C553BBF0666C0F_METHOD_2_D3E111A72AFB2828_OFFSET))(this, a1);
	}

	::System::Void Method_2_F291FAB047B4807E(::Class_1_FE6DD620A0017964* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FE6DD620A0017964*))((::PBYTE)hIl2Cpp + CLASS_2_98C553BBF0666C0F_METHOD_2_F291FAB047B4807E_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_98C553BBF0666C0F_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98C553BBF0666C0F_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98C553BBF0666C0F_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98C553BBF0666C0F___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98C553BBF0666C0F_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98C553BBF0666C0F_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98C553BBF0666C0F___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98C553BBF0666C0F___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98C553BBF0666C0F___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

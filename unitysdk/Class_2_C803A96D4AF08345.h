#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_2_80F8A7089EA5B467;
class Class_2_D5EF00F29F3F5AC8;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class IdleLiveUiVisibleData; }
namespace RPG::GameCore { class RtBattleMode; }
namespace RPG::GameCore { class RtDamageTextConfigGroup; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_C803A96D4AF08345_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15496CE0)
#define CLASS_2_C803A96D4AF08345_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15496E20)
#define CLASS_2_C803A96D4AF08345_METHOD_2_457717A0CF438A7C_OFFSET UNITYSDK_OFFSET(0x15496A70)
#define CLASS_2_C803A96D4AF08345_METHOD_2_817EEB57AC996B67_OFFSET UNITYSDK_OFFSET(0x15496570)
#define CLASS_2_C803A96D4AF08345_METHOD_2_9194DE0EC7A9DFF1_OFFSET UNITYSDK_OFFSET(0x15496960)
#define CLASS_2_C803A96D4AF08345_METHOD_2_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0x15496AC0)
#define CLASS_2_C803A96D4AF08345_METHOD_2_992B8012C243F93E_OFFSET UNITYSDK_OFFSET(0x15496430)
#define CLASS_2_C803A96D4AF08345_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x15496BF0)
#define CLASS_2_C803A96D4AF08345_METHOD_2_CB1E131C2DC1CD1C_OFFSET UNITYSDK_OFFSET(0x15496620)
#define CLASS_2_C803A96D4AF08345_METHOD_2_CD37BA088172EEF7_OFFSET UNITYSDK_OFFSET(0x15496510)
#define CLASS_2_C803A96D4AF08345_METHOD_2_E5630A859AA24FB3_OFFSET UNITYSDK_OFFSET(0x15496480)
#define CLASS_2_C803A96D4AF08345__CTOR_OFFSET UNITYSDK_OFFSET(0x15496220)
#define CLASS_2_C803A96D4AF08345__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x15496270)
#define CLASS_2_C803A96D4AF08345__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x154963E0)

inline static constexpr unsigned int Class_2_C803A96D4AF08345_TypeDefinitionIndex = 71662;

class Class_2_C803A96D4AF08345 : public ::RPG::Client::UIController
{
public:
	::Class_2_D5EF00F29F3F5AC8* OOPCGHHFANI; // 0x188
	::RPG::GameCore::RtBattleMode* BHJDJDPLCLP; // 0x190

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C803A96D4AF08345__CTOR_OFFSET))(this);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C803A96D4AF08345__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _UnBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C803A96D4AF08345__UNBINDVIEW_OFFSET))(this);
	}

	::System::Void Method_2_992B8012C243F93E(::RPG::GameCore::RtBattleMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtBattleMode*))((::PBYTE)hIl2Cpp + CLASS_2_C803A96D4AF08345_METHOD_2_992B8012C243F93E_OFFSET))(this, a1);
	}

	::Class_2_80F8A7089EA5B467* Method_2_E5630A859AA24FB3()
	{
		return ((::Class_2_80F8A7089EA5B467*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C803A96D4AF08345_METHOD_2_E5630A859AA24FB3_OFFSET))(this);
	}

	::System::Void Method_2_CD37BA088172EEF7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C803A96D4AF08345_METHOD_2_CD37BA088172EEF7_OFFSET))(this, a1);
	}

	::System::Void Method_2_817EEB57AC996B67(::RPG::GameCore::IdleLiveUiVisibleData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveUiVisibleData*))((::PBYTE)hIl2Cpp + CLASS_2_C803A96D4AF08345_METHOD_2_817EEB57AC996B67_OFFSET))(this, a1);
	}

	::RPG::GameCore::RtDamageTextConfigGroup* Method_2_CB1E131C2DC1CD1C(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::RPG::GameCore::RtDamageTextConfigGroup*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C803A96D4AF08345_METHOD_2_CB1E131C2DC1CD1C_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::RtDamageTextConfigGroup* Method_2_9194DE0EC7A9DFF1(::System::String* a1)
	{
		return ((::RPG::GameCore::RtDamageTextConfigGroup*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C803A96D4AF08345_METHOD_2_9194DE0EC7A9DFF1_OFFSET))(this, a1);
	}

	::Class_2_D5EF00F29F3F5AC8* Method_2_457717A0CF438A7C()
	{
		return ((::Class_2_D5EF00F29F3F5AC8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C803A96D4AF08345_METHOD_2_457717A0CF438A7C_OFFSET))(this);
	}

	::System::Void Method_2_974A70E8019154E7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C803A96D4AF08345_METHOD_2_974A70E8019154E7_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C803A96D4AF08345_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C803A96D4AF08345_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C803A96D4AF08345_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

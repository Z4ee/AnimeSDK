#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_D1403D5EBDB678B3_2;
class Class_2_49DD3E60D823A726;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_7D8073A5EE8BF83F_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA05CA60)
#define CLASS_2_7D8073A5EE8BF83F_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xA05CB20)
#define CLASS_2_7D8073A5EE8BF83F_METHOD_2_126D1245D1EBB1FC_OFFSET UNITYSDK_OFFSET(0xA05BC60)
#define CLASS_2_7D8073A5EE8BF83F_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xA05BA60)
#define CLASS_2_7D8073A5EE8BF83F_METHOD_2_4C1C6BDA70EF0410_OFFSET UNITYSDK_OFFSET(0xA05C140)
#define CLASS_2_7D8073A5EE8BF83F_METHOD_2_5187D2A0E6751251_OFFSET UNITYSDK_OFFSET(0xA05C1A0)
#define CLASS_2_7D8073A5EE8BF83F_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA05CD40)
#define CLASS_2_7D8073A5EE8BF83F_METHOD_2_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0xA05BCE0)
#define CLASS_2_7D8073A5EE8BF83F_METHOD_2_7443AD94E7275ABA_OFFSET UNITYSDK_OFFSET(0xA05C720)
#define CLASS_2_7D8073A5EE8BF83F_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA05C6A0)
#define CLASS_2_7D8073A5EE8BF83F_METHOD_2_99462BC90C62BA8E_OFFSET UNITYSDK_OFFSET(0xA05BDF0)
#define CLASS_2_7D8073A5EE8BF83F_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xA05C9A0)
#define CLASS_2_7D8073A5EE8BF83F_METHOD_2_B24D6784786E080C_OFFSET UNITYSDK_OFFSET(0xA05BD30)
#define CLASS_2_7D8073A5EE8BF83F_METHOD_2_B9903FCF260F16A8_OFFSET UNITYSDK_OFFSET(0xA05C3E0)
#define CLASS_2_7D8073A5EE8BF83F_METHOD_2_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0xA05C8F0)
#define CLASS_2_7D8073A5EE8BF83F_METHOD_2_D5E5EC1B4538DDD1_OFFSET UNITYSDK_OFFSET(0xA05CE10)
#define CLASS_2_7D8073A5EE8BF83F__CTOR_OFFSET UNITYSDK_OFFSET(0xA05CBC0)
#define CLASS_2_7D8073A5EE8BF83F__ONBIND_OFFSET UNITYSDK_OFFSET(0xA05B9A0)
#define CLASS_2_7D8073A5EE8BF83F__ONTICK_OFFSET UNITYSDK_OFFSET(0xA05BD90)
#define CLASS_2_7D8073A5EE8BF83F___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA05CE80)
#define CLASS_2_7D8073A5EE8BF83F___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xA05CEE0)
#define CLASS_2_7D8073A5EE8BF83F___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xA05CCE0)
#define CLASS_2_7D8073A5EE8BF83F___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0xA05CDA0)

inline static constexpr unsigned int Class_2_7D8073A5EE8BF83F_TypeDefinitionIndex = 66475;

class Class_2_7D8073A5EE8BF83F : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::Animator* Field_2_2; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_49DD3E60D823A726*>* Field_2_6; // 0x68
	::UnityEngine::UI::Text* Field_2_1; // 0x70
	::RPG::Client::PrefabLoadMeta* Field_2_3; // 0x78
	::System::Int32 Field_2_9; // 0x80
	::System::Int32 Field_2_5; // 0x84
	::System::Int32 Field_2_4; // 0x88
	::System::Int32 Field_2_7; // 0x8C
	::System::Int32 Field_2_8; // 0x90
	::System::Boolean Field_2_10; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F_METHOD_2_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Void Method_2_B24D6784786E080C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F_METHOD_2_B24D6784786E080C_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_4C1C6BDA70EF0410(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F_METHOD_2_4C1C6BDA70EF0410_OFFSET))(this, a1);
	}

	::System::Void Method_2_5187D2A0E6751251(::Class_1_D1403D5EBDB678B3_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D1403D5EBDB678B3_2*))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F_METHOD_2_5187D2A0E6751251_OFFSET))(this, a1);
	}

	::System::Void Method_2_126D1245D1EBB1FC(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F_METHOD_2_126D1245D1EBB1FC_OFFSET))(this, a1);
	}

	::System::Void Method_2_B9903FCF260F16A8(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F_METHOD_2_B9903FCF260F16A8_OFFSET))(this, a1);
	}

	::System::Void Method_2_99462BC90C62BA8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F_METHOD_2_99462BC90C62BA8E_OFFSET))(this);
	}

	::System::Void Method_2_7443AD94E7275ABA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F_METHOD_2_7443AD94E7275ABA_OFFSET))(this);
	}

	::System::Void Method_2_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F_METHOD_2_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void Method_2_D5E5EC1B4538DDD1(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F_METHOD_2_D5E5EC1B4538DDD1_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D8073A5EE8BF83F___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

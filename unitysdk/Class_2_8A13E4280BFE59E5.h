#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47C4886CB6C61234.h"

class Class_1_526A55237908A31C;
class Class_1_96660E892790E9E7;
class Class_1_DDD57BA1FF01F606;
class Class_1_E05E7A6D9DE9138B;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class TrainCakeCatchExhibitController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NPCDataRow; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_8A13E4280BFE59E5_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0x91E88B0)
#define CLASS_2_8A13E4280BFE59E5_METHOD_2_019FAF8DF887E9D8_OFFSET UNITYSDK_OFFSET(0x91E82B0)
#define CLASS_2_8A13E4280BFE59E5_METHOD_2_0ED51BEF22C2FF5B_OFFSET UNITYSDK_OFFSET(0x91E86E0)
#define CLASS_2_8A13E4280BFE59E5_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x91E9940)
#define CLASS_2_8A13E4280BFE59E5_METHOD_2_3E65CC5F4D6D7D56_OFFSET UNITYSDK_OFFSET(0x91E9930)
#define CLASS_2_8A13E4280BFE59E5_METHOD_2_464F9487BF0D77F8_OFFSET UNITYSDK_OFFSET(0x91E8DC0)
#define CLASS_2_8A13E4280BFE59E5_METHOD_2_49559FFD8B7FEB23_OFFSET UNITYSDK_OFFSET(0x91E89D0)
#define CLASS_2_8A13E4280BFE59E5_METHOD_2_6C3D9B9514010865_OFFSET UNITYSDK_OFFSET(0x91E9460)
#define CLASS_2_8A13E4280BFE59E5_METHOD_2_709D8097E5FF96FD_OFFSET UNITYSDK_OFFSET(0x91E8ED0)
#define CLASS_2_8A13E4280BFE59E5_METHOD_2_70F5CB717D992972_OFFSET UNITYSDK_OFFSET(0x91E9200)
#define CLASS_2_8A13E4280BFE59E5_METHOD_2_8F9D844CDD2A6E5B_OFFSET UNITYSDK_OFFSET(0x91E8A90)
#define CLASS_2_8A13E4280BFE59E5_METHOD_2_8FAC2D2B652EF996_OFFSET UNITYSDK_OFFSET(0x91E9760)
#define CLASS_2_8A13E4280BFE59E5_METHOD_2_A741114645E428EE_OFFSET UNITYSDK_OFFSET(0x91E9850)
#define CLASS_2_8A13E4280BFE59E5_METHOD_2_AA94D17017C8E64E_OFFSET UNITYSDK_OFFSET(0x91E8C90)
#define CLASS_2_8A13E4280BFE59E5_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x91E9130)
#define CLASS_2_8A13E4280BFE59E5_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x91E8480)
#define CLASS_2_8A13E4280BFE59E5_METHOD_2_BA410EA09457B5C1_OFFSET UNITYSDK_OFFSET(0x91E8C00)
#define CLASS_2_8A13E4280BFE59E5_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x91E8D20)
#define CLASS_2_8A13E4280BFE59E5_METHOD_2_D7411E5DB745D614_OFFSET UNITYSDK_OFFSET(0x91E9380)
#define CLASS_2_8A13E4280BFE59E5_METHOD_2_E0F01199A115CE27_OFFSET UNITYSDK_OFFSET(0x91E95F0)
#define CLASS_2_8A13E4280BFE59E5_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x91E8940)
#define CLASS_2_8A13E4280BFE59E5_ONINIT_OFFSET UNITYSDK_OFFSET(0x91E8050)
#define CLASS_2_8A13E4280BFE59E5_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x91E8520)
#define CLASS_2_8A13E4280BFE59E5_TICK_OFFSET UNITYSDK_OFFSET(0x91E88C0)
#define CLASS_2_8A13E4280BFE59E5__CTOR_OFFSET UNITYSDK_OFFSET(0x91E9950)
#define CLASS_2_8A13E4280BFE59E5___IFIXBASEPROXY_ONINIT_OFFSET UNITYSDK_OFFSET(0x91E99C0)
#define CLASS_2_8A13E4280BFE59E5___IFIXBASEPROXY_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x91E9A20)
#define CLASS_2_8A13E4280BFE59E5___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x91E9A80)

inline static constexpr unsigned int Class_2_8A13E4280BFE59E5_TypeDefinitionIndex = 55528;

class Class_2_8A13E4280BFE59E5 : public ::Class_1_47C4886CB6C61234
{
public:
	::Class_1_526A55237908A31C* Field_2_1; // 0x20
	::Class_1_96660E892790E9E7* Field_2_2; // 0x28
	::Class_1_DDD57BA1FF01F606* Field_2_3; // 0x30
	::Class_1_E05E7A6D9DE9138B* Field_2_4; // 0x38
	::RPG::Client::TrainCakeCatchExhibitController* Field_2_0; // 0x40
	::Il2CppArray<::System::String*>* Field_2_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A13E4280BFE59E5__CTOR_OFFSET))(this);
	}

	::System::Void OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A13E4280BFE59E5_ONINIT_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A13E4280BFE59E5_ONUNINIT_OFFSET))(this);
	}

	::System::Boolean get_NeedTick()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A13E4280BFE59E5_GET_NEEDTICK_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8A13E4280BFE59E5_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_019FAF8DF887E9D8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A13E4280BFE59E5_METHOD_2_019FAF8DF887E9D8_OFFSET))(this);
	}

	::System::Void Method_2_0ED51BEF22C2FF5B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A13E4280BFE59E5_METHOD_2_0ED51BEF22C2FF5B_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8A13E4280BFE59E5_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_49559FFD8B7FEB23(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8A13E4280BFE59E5_METHOD_2_49559FFD8B7FEB23_OFFSET))(this, a1);
	}

	::System::Void Method_2_8F9D844CDD2A6E5B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8A13E4280BFE59E5_METHOD_2_8F9D844CDD2A6E5B_OFFSET))(this, a1);
	}

	::System::Void Method_2_BA410EA09457B5C1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8A13E4280BFE59E5_METHOD_2_BA410EA09457B5C1_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA94D17017C8E64E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8A13E4280BFE59E5_METHOD_2_AA94D17017C8E64E_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8A13E4280BFE59E5_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_464F9487BF0D77F8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8A13E4280BFE59E5_METHOD_2_464F9487BF0D77F8_OFFSET))(this, a1);
	}

	::System::Void Method_2_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A13E4280BFE59E5_METHOD_2_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_2_709D8097E5FF96FD(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8A13E4280BFE59E5_METHOD_2_709D8097E5FF96FD_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A13E4280BFE59E5_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_70F5CB717D992972(::RPG::GameCore::NPCDataRow* a1, ::System::String* a2, ::UnityEngine::Transform* a3, ::System::Boolean a4)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::NPCDataRow*, ::System::String*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8A13E4280BFE59E5_METHOD_2_70F5CB717D992972_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_D7411E5DB745D614(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8A13E4280BFE59E5_METHOD_2_D7411E5DB745D614_OFFSET))(this, a1);
	}

	::System::Void Method_2_6C3D9B9514010865(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8A13E4280BFE59E5_METHOD_2_6C3D9B9514010865_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_E0F01199A115CE27(::RPG::Client::AdventurePhase* a1)
	{
		return ((::System::Void(*)(::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + CLASS_2_8A13E4280BFE59E5_METHOD_2_E0F01199A115CE27_OFFSET))(a1);
	}

	static ::System::Void Method_2_8FAC2D2B652EF996(::RPG::Client::AdventurePhase* a1)
	{
		return ((::System::Void(*)(::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + CLASS_2_8A13E4280BFE59E5_METHOD_2_8FAC2D2B652EF996_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_A741114645E428EE(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8A13E4280BFE59E5_METHOD_2_A741114645E428EE_OFFSET))(a1);
	}

	::RPG::Client::TrainCakeCatchExhibitController* Method_2_3E65CC5F4D6D7D56()
	{
		return ((::RPG::Client::TrainCakeCatchExhibitController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A13E4280BFE59E5_METHOD_2_3E65CC5F4D6D7D56_OFFSET))(this);
	}

	::Class_1_DDD57BA1FF01F606* Method_2_24748FC20F375725()
	{
		return ((::Class_1_DDD57BA1FF01F606*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A13E4280BFE59E5_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A13E4280BFE59E5___IFIXBASEPROXY_ONINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A13E4280BFE59E5___IFIXBASEPROXY_ONUNINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8A13E4280BFE59E5___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};

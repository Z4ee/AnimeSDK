#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9E50CC0DD27207C5_Struct_2_CA8D3805E01DE980.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"

class Class_1_D294488719556168;
class Class_2_7EA45D2647F35CDD;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class String; }

#define CLASS_1_9E50CC0DD27207C5_METHOD_1_14938E70B30BB85F_OFFSET UNITYSDK_OFFSET(0xF8A5E20)
#define CLASS_1_9E50CC0DD27207C5_METHOD_1_278DE3B6BE616E54_OFFSET UNITYSDK_OFFSET(0xF8A6670)
#define CLASS_1_9E50CC0DD27207C5_METHOD_1_37D1806EE754B4F8_OFFSET UNITYSDK_OFFSET(0xF8A5D90)
#define CLASS_1_9E50CC0DD27207C5_METHOD_1_8A60616F18141AC2_OFFSET UNITYSDK_OFFSET(0xF8A6610)
#define CLASS_1_9E50CC0DD27207C5_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0xF8A6F90)
#define CLASS_1_9E50CC0DD27207C5_METHOD_1_EDF18EDB284DEFF4_OFFSET UNITYSDK_OFFSET(0xF8A6410)
#define CLASS_1_9E50CC0DD27207C5_METHOD_1_EF297E0838BCF50E_OFFSET UNITYSDK_OFFSET(0xF8A64C0)
#define CLASS_1_9E50CC0DD27207C5__CCTOR_OFFSET UNITYSDK_OFFSET(0xF8A6FB0)
#define CLASS_1_9E50CC0DD27207C5__CTOR_OFFSET UNITYSDK_OFFSET(0xF8A6FA0)

inline static constexpr unsigned int Class_1_9E50CC0DD27207C5_TypeDefinitionIndex = 61035;

class Class_1_9E50CC0DD27207C5 : public ::System::Object
{
public:
	static ::Il2CppArray<::RPG::GameCore::TurnState>** StaticGet_BHEACGEEHAF()
	{
		return (::Il2CppArray<::RPG::GameCore::TurnState>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E50CC0DD27207C5_TypeDefinitionIndex)->GetStaticField(0x597D0);
	}
	// static const ::System::String* FOHLNIHIBMG; // 0x0
	// static const ::System::String* KHFDLEELAKK; // 0x0
	// static const ::System::String* JLJDAJEMCMA; // 0x0
	// static const ::System::String* HCHAKNFMALH; // 0x0
	// static const ::System::String* GELCHFADPGH; // 0x0
	// static const ::System::Single MPKPILNMIIA; // 0x0
	::RPG::GameCore::TurnBasedGameMode* GICHGNGMBGD; // 0x10
	::System::String* JEFGLLBIGIO; // 0x18
	::Class_1_9E50CC0DD27207C5_Struct_2_CA8D3805E01DE980 IPOGJOIFCNG; // 0x20
	::Class_2_7EA45D2647F35CDD* LICMIKIFMJN; // 0x40
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x48
	::System::Int32 KHDHMKAAPGE; // 0x50
	::System::Int32 BAOOLPLLAME; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E50CC0DD27207C5__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9E50CC0DD27207C5__CCTOR_OFFSET))();
	}

	::System::Void Method_1_37D1806EE754B4F8(::RPG::GameCore::GameEntity* a1, ::Class_2_7EA45D2647F35CDD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_2_7EA45D2647F35CDD*))((::PBYTE)hIl2Cpp + CLASS_1_9E50CC0DD27207C5_METHOD_1_37D1806EE754B4F8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EDF18EDB284DEFF4(::Class_1_D294488719556168* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D294488719556168*))((::PBYTE)hIl2Cpp + CLASS_1_9E50CC0DD27207C5_METHOD_1_EDF18EDB284DEFF4_OFFSET))(this, a1);
	}

	::System::Void Method_1_14938E70B30BB85F(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9E50CC0DD27207C5_METHOD_1_14938E70B30BB85F_OFFSET))(this, a1);
	}

	::System::Void Method_1_278DE3B6BE616E54(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9E50CC0DD27207C5_METHOD_1_278DE3B6BE616E54_OFFSET))(this, a1);
	}

	static ::System::String* Method_1_8A60616F18141AC2(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9E50CC0DD27207C5_METHOD_1_8A60616F18141AC2_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_EF297E0838BCF50E(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9E50CC0DD27207C5_METHOD_1_EF297E0838BCF50E_OFFSET))(a1);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E50CC0DD27207C5_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}
};

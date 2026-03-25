#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_2_273AB9C9690DD47B;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterRevive; }
namespace RPG::GameCore { class LevelEntityEscape; }
namespace RPG::GameCore { class LevelEntityTeamFormationStateChange; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_2_65A713E9215D4553_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x118260F0)
#define CLASS_2_65A713E9215D4553_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x118263D0)
#define CLASS_2_65A713E9215D4553_METHOD_2_1EC35B803DAEC21A_OFFSET UNITYSDK_OFFSET(0x11825C20)
#define CLASS_2_65A713E9215D4553_METHOD_2_3C111959D3BB5616_OFFSET UNITYSDK_OFFSET(0x118256D0)
#define CLASS_2_65A713E9215D4553_METHOD_2_5477399663FA192A_OFFSET UNITYSDK_OFFSET(0x118259C0)
#define CLASS_2_65A713E9215D4553_METHOD_2_557B1D7542534335_OFFSET UNITYSDK_OFFSET(0x11825B40)
#define CLASS_2_65A713E9215D4553_METHOD_2_61EC2AC0BD93363E_OFFSET UNITYSDK_OFFSET(0x11825F70)
#define CLASS_2_65A713E9215D4553_METHOD_2_976CDF5EF06E0838_OFFSET UNITYSDK_OFFSET(0x118254C0)
#define CLASS_2_65A713E9215D4553_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x11825DC0)
#define CLASS_2_65A713E9215D4553_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x11825ED0)
#define CLASS_2_65A713E9215D4553_METHOD_2_A27D06F9481FAFDB_3_OFFSET UNITYSDK_OFFSET(0x11826030)
#define CLASS_2_65A713E9215D4553_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x11825CF0)
#define CLASS_2_65A713E9215D4553_METHOD_2_DB70D0859EAB49B9_OFFSET UNITYSDK_OFFSET(0x11825A10)
#define CLASS_2_65A713E9215D4553_METHOD_2_DCEC38F05597CB7D_OFFSET UNITYSDK_OFFSET(0x11825BB0)
#define CLASS_2_65A713E9215D4553_METHOD_2_DED4CCF46ACC00F8_OFFSET UNITYSDK_OFFSET(0x118257F0)
#define CLASS_2_65A713E9215D4553_METHOD_2_E81CEED1B22DE2BF_OFFSET UNITYSDK_OFFSET(0x11825430)
#define CLASS_2_65A713E9215D4553__CTOR_OFFSET UNITYSDK_OFFSET(0x11826670)
#define CLASS_2_65A713E9215D4553___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x11826750)
#define CLASS_2_65A713E9215D4553___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x118267B0)

inline static constexpr unsigned int Class_2_65A713E9215D4553_TypeDefinitionIndex = 58605;

class Class_2_65A713E9215D4553 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_273AB9C9690DD47B*>* Field_2_0; // 0x60
	::System::Collections::Generic::Stack_1<::Class_2_273AB9C9690DD47B*>* Field_2_1; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65A713E9215D4553__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E81CEED1B22DE2BF(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_65A713E9215D4553_METHOD_2_E81CEED1B22DE2BF_OFFSET))(this, a1);
	}

	::System::Void Method_2_3C111959D3BB5616(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_65A713E9215D4553_METHOD_2_3C111959D3BB5616_OFFSET))(this, a1);
	}

	::System::Void Method_2_5477399663FA192A(::RPG::GameCore::LevelCharacterRevive* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterRevive*))((::PBYTE)hIl2Cpp + CLASS_2_65A713E9215D4553_METHOD_2_5477399663FA192A_OFFSET))(this, a1);
	}

	::System::Void Method_2_DB70D0859EAB49B9(::RPG::GameCore::LevelEntityEscape* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityEscape*))((::PBYTE)hIl2Cpp + CLASS_2_65A713E9215D4553_METHOD_2_DB70D0859EAB49B9_OFFSET))(this, a1);
	}

	::System::Void Method_2_557B1D7542534335(::RPG::GameCore::LevelEntityTeamFormationStateChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityTeamFormationStateChange*))((::PBYTE)hIl2Cpp + CLASS_2_65A713E9215D4553_METHOD_2_557B1D7542534335_OFFSET))(this, a1);
	}

	::System::Void Method_2_976CDF5EF06E0838(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_65A713E9215D4553_METHOD_2_976CDF5EF06E0838_OFFSET))(this, a1);
	}

	::Class_2_273AB9C9690DD47B* Method_2_DCEC38F05597CB7D()
	{
		return ((::Class_2_273AB9C9690DD47B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65A713E9215D4553_METHOD_2_DCEC38F05597CB7D_OFFSET))(this);
	}

	::System::Void Method_2_DED4CCF46ACC00F8(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_65A713E9215D4553_METHOD_2_DED4CCF46ACC00F8_OFFSET))(this, a1);
	}

	::Class_2_273AB9C9690DD47B* Method_2_1EC35B803DAEC21A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_2_273AB9C9690DD47B*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_65A713E9215D4553_METHOD_2_1EC35B803DAEC21A_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_65A713E9215D4553_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_65A713E9215D4553_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_65A713E9215D4553_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_61EC2AC0BD93363E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_65A713E9215D4553_METHOD_2_61EC2AC0BD93363E_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_65A713E9215D4553_METHOD_2_A27D06F9481FAFDB_3_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65A713E9215D4553_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65A713E9215D4553_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65A713E9215D4553___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65A713E9215D4553___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

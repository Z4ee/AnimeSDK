#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Object.h"

class Class_1_4385C14088733CE3;
class Class_1_534AF681CC2BD5FD_256_Class_0_16E7307DCC43CB2C_22;
class Class_1_534AF681CC2BD5FD_256_Class_1_03E62CF48893968D;
class Class_1_534AF681CC2BD5FD_256_Class_1_DE02586F0442F5B4;
class Class_5_DCFF91E03A93C03C;
namespace MoleMole::Config { class AtmosphereData; }
namespace MoleMole::Config { class ConfigChangeBGDiffusion; }
namespace MoleMole::Config { class ConfigChangeBGFade; }
namespace MoleMole::Config { class ConfigHollowChessboardAtmosphere; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_E0F34B566AF43EC9_METHOD_1_03CE0F7B749C62EB_OFFSET UNITYSDK_OFFSET(0x1A7D6060)
#define CLASS_1_E0F34B566AF43EC9_METHOD_1_1C82B0464A6F73F2_OFFSET UNITYSDK_OFFSET(0x1A7D4CA0)
#define CLASS_1_E0F34B566AF43EC9_METHOD_1_26C5221AC22B6534_OFFSET UNITYSDK_OFFSET(0x1A7D5AE0)
#define CLASS_1_E0F34B566AF43EC9_METHOD_1_3A3D8F51A58D5D63_OFFSET UNITYSDK_OFFSET(0x1A7D46D0)
#define CLASS_1_E0F34B566AF43EC9_METHOD_1_415752109343FC19_OFFSET UNITYSDK_OFFSET(0x1A7D4EE0)
#define CLASS_1_E0F34B566AF43EC9_METHOD_1_49FD34069072168E_OFFSET UNITYSDK_OFFSET(0x1A7D45C0)
#define CLASS_1_E0F34B566AF43EC9_METHOD_1_4C9717BAC49A1DCF_OFFSET UNITYSDK_OFFSET(0x1A7D5010)
#define CLASS_1_E0F34B566AF43EC9_METHOD_1_5F0A4EF9D548EA45_OFFSET UNITYSDK_OFFSET(0x1A7D4E40)
#define CLASS_1_E0F34B566AF43EC9_METHOD_1_636E3B3F6B1E329E_OFFSET UNITYSDK_OFFSET(0x1A7D5E60)
#define CLASS_1_E0F34B566AF43EC9_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x1A7D5510)
#define CLASS_1_E0F34B566AF43EC9_METHOD_1_7FC520CA38904A11_OFFSET UNITYSDK_OFFSET(0x1A7D5A20)
#define CLASS_1_E0F34B566AF43EC9_METHOD_1_96C7FAA41B688781_OFFSET UNITYSDK_OFFSET(0x1A7D5060)
#define CLASS_1_E0F34B566AF43EC9_METHOD_1_AA914530EEC77BB6_OFFSET UNITYSDK_OFFSET(0x1A7D4520)
#define CLASS_1_E0F34B566AF43EC9_METHOD_1_BF71F89DF302D505_1_OFFSET UNITYSDK_OFFSET(0x1A7D5700)
#define CLASS_1_E0F34B566AF43EC9_METHOD_1_BF71F89DF302D505_OFFSET UNITYSDK_OFFSET(0x1A7D53C0)
#define CLASS_1_E0F34B566AF43EC9_METHOD_1_D6CA15ED15C24E07_OFFSET UNITYSDK_OFFSET(0x1A7D5F70)
#define CLASS_1_E0F34B566AF43EC9_METHOD_1_D9AB20A02ACC46BF_OFFSET UNITYSDK_OFFSET(0x1A7D5950)
#define CLASS_1_E0F34B566AF43EC9_METHOD_1_E268E2A262EF750C_OFFSET UNITYSDK_OFFSET(0x1A7D5C50)
#define CLASS_1_E0F34B566AF43EC9_METHOD_1_E45D00649FC6CBEA_OFFSET UNITYSDK_OFFSET(0x1A7D56B0)
#define CLASS_1_E0F34B566AF43EC9_METHOD_1_EAE6C4A1F39979F5_OFFSET UNITYSDK_OFFSET(0x1A7D43E0)
#define CLASS_1_E0F34B566AF43EC9_METHOD_1_F190EA40998B3E0B_OFFSET UNITYSDK_OFFSET(0x1A7D5850)
#define CLASS_1_E0F34B566AF43EC9__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7D43D0)

inline static constexpr unsigned int Class_1_E0F34B566AF43EC9_TypeDefinitionIndex = 54833;

class Class_1_E0F34B566AF43EC9 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigHollowChessboardAtmosphere** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigHollowChessboardAtmosphere**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E0F34B566AF43EC9_TypeDefinitionIndex)->GetStaticField(0x35510);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0F34B566AF43EC9__CTOR_OFFSET))(this);
	}

	static ::Class_1_534AF681CC2BD5FD_256_Class_1_DE02586F0442F5B4* Method_1_EAE6C4A1F39979F5(::MoleMole::Config::AtmosphereData* a1, ::System::Boolean a2, ::MoleMole::Config::ConfigChangeBGFade* a3)
	{
		return ((::Class_1_534AF681CC2BD5FD_256_Class_1_DE02586F0442F5B4*(*)(::MoleMole::Config::AtmosphereData*, ::System::Boolean, ::MoleMole::Config::ConfigChangeBGFade*))((::PBYTE)hIl2Cpp + CLASS_1_E0F34B566AF43EC9_METHOD_1_EAE6C4A1F39979F5_OFFSET))(a1, a2, a3);
	}

	static ::Cysharp::Threading::Tasks::UniTask Method_1_AA914530EEC77BB6(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E0F34B566AF43EC9_METHOD_1_AA914530EEC77BB6_OFFSET))(a1, a2);
	}

	static ::Class_1_534AF681CC2BD5FD_256_Class_0_16E7307DCC43CB2C_22* Method_1_49FD34069072168E(::Class_5_DCFF91E03A93C03C* a1, ::MoleMole::Config::AtmosphereData* a2, ::System::Boolean a3)
	{
		return ((::Class_1_534AF681CC2BD5FD_256_Class_0_16E7307DCC43CB2C_22*(*)(::Class_5_DCFF91E03A93C03C*, ::MoleMole::Config::AtmosphereData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E0F34B566AF43EC9_METHOD_1_49FD34069072168E_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_1C82B0464A6F73F2(::MoleMole::HollowChessboard::HollowCell& a1)
	{
		return ((::System::Boolean(*)(::MoleMole::HollowChessboard::HollowCell&))((::PBYTE)hIl2Cpp + CLASS_1_E0F34B566AF43EC9_METHOD_1_1C82B0464A6F73F2_OFFSET))(a1);
	}

	static ::Cysharp::Threading::Tasks::UniTask Method_1_5F0A4EF9D548EA45(::System::Action* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E0F34B566AF43EC9_METHOD_1_5F0A4EF9D548EA45_OFFSET))(a1);
	}

	static ::System::Void Method_1_415752109343FC19(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E0F34B566AF43EC9_METHOD_1_415752109343FC19_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_96C7FAA41B688781(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E0F34B566AF43EC9_METHOD_1_96C7FAA41B688781_OFFSET))(a1, a2);
	}

	static ::Class_1_534AF681CC2BD5FD_256_Class_1_03E62CF48893968D* Method_1_3A3D8F51A58D5D63(::Class_5_DCFF91E03A93C03C* a1, ::MoleMole::Config::AtmosphereData* a2, ::System::Boolean a3, ::MoleMole::Config::ConfigChangeBGDiffusion* a4)
	{
		return ((::Class_1_534AF681CC2BD5FD_256_Class_1_03E62CF48893968D*(*)(::Class_5_DCFF91E03A93C03C*, ::MoleMole::Config::AtmosphereData*, ::System::Boolean, ::MoleMole::Config::ConfigChangeBGDiffusion*))((::PBYTE)hIl2Cpp + CLASS_1_E0F34B566AF43EC9_METHOD_1_3A3D8F51A58D5D63_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_4C9717BAC49A1DCF(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E0F34B566AF43EC9_METHOD_1_4C9717BAC49A1DCF_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::AtmosphereData* Method_1_BF71F89DF302D505(::System::String* a1)
	{
		return ((::MoleMole::Config::AtmosphereData*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E0F34B566AF43EC9_METHOD_1_BF71F89DF302D505_OFFSET))(a1);
	}

	static ::MoleMole::Config::AtmosphereData* Method_1_BF71F89DF302D505_1(::System::String* a1)
	{
		return ((::MoleMole::Config::AtmosphereData*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E0F34B566AF43EC9_METHOD_1_BF71F89DF302D505_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_F190EA40998B3E0B(::System::String* a1, ::MoleMole::HollowChessboard::HollowChessboardUID a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::System::String*, ::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E0F34B566AF43EC9_METHOD_1_F190EA40998B3E0B_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::Config::ConfigHollowChessboardAtmosphere* Method_1_E45D00649FC6CBEA()
	{
		return ((::MoleMole::Config::ConfigHollowChessboardAtmosphere*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E0F34B566AF43EC9_METHOD_1_E45D00649FC6CBEA_OFFSET))();
	}

	static ::System::Void Method_1_D9AB20A02ACC46BF(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E0F34B566AF43EC9_METHOD_1_D9AB20A02ACC46BF_OFFSET))(a1, a2);
	}

	static ::Cysharp::Threading::Tasks::UniTask Method_1_7FC520CA38904A11(::Class_5_DCFF91E03A93C03C* a1, ::System::String* a2, ::System::Action* a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::Class_5_DCFF91E03A93C03C*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E0F34B566AF43EC9_METHOD_1_7FC520CA38904A11_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_79830F666EE579C0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E0F34B566AF43EC9_METHOD_1_79830F666EE579C0_OFFSET))();
	}

	static ::System::Void Method_1_26C5221AC22B6534()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E0F34B566AF43EC9_METHOD_1_26C5221AC22B6534_OFFSET))();
	}

	static ::MoleMole::Config::AtmosphereData* Method_1_E268E2A262EF750C(::System::String* a1, ::Class_5_DCFF91E03A93C03C* a2, ::System::Boolean a3, ::System::Action* a4)
	{
		return ((::MoleMole::Config::AtmosphereData*(*)(::System::String*, ::Class_5_DCFF91E03A93C03C*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E0F34B566AF43EC9_METHOD_1_E268E2A262EF750C_OFFSET))(a1, a2, a3, a4);
	}

	static ::Cysharp::Threading::Tasks::UniTask Method_1_D6CA15ED15C24E07(::Class_5_DCFF91E03A93C03C* a1, ::MoleMole::Config::AtmosphereData* a2, ::MoleMole::Config::AtmosphereData* a3, ::System::Action* a4)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::Class_5_DCFF91E03A93C03C*, ::MoleMole::Config::AtmosphereData*, ::MoleMole::Config::AtmosphereData*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E0F34B566AF43EC9_METHOD_1_D6CA15ED15C24E07_OFFSET))(a1, a2, a3, a4);
	}

	static ::Cysharp::Threading::Tasks::UniTask Method_1_03CE0F7B749C62EB(::System::String* a1, ::System::Action* a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E0F34B566AF43EC9_METHOD_1_03CE0F7B749C62EB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_636E3B3F6B1E329E(::MoleMole::Config::AtmosphereData* a1, ::Class_5_DCFF91E03A93C03C* a2, ::System::Boolean a3, ::Class_1_4385C14088733CE3* a4, ::System::Action* a5)
	{
		return ((::System::Void(*)(::MoleMole::Config::AtmosphereData*, ::Class_5_DCFF91E03A93C03C*, ::System::Boolean, ::Class_1_4385C14088733CE3*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E0F34B566AF43EC9_METHOD_1_636E3B3F6B1E329E_OFFSET))(a1, a2, a3, a4, a5);
	}
};

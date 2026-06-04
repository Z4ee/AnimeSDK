#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AssetEventPort.h"
#include "unitysdk/RPG/Client/AssetEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_48570DED401BD199;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client::AssetSystem { class AssetLoader; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_1FA450CC2B1CA0BD_METHOD_1_379BC0A2C05546EC_1_OFFSET UNITYSDK_OFFSET(0x1891DE60)
#define CLASS_1_1FA450CC2B1CA0BD_METHOD_1_379BC0A2C05546EC_OFFSET UNITYSDK_OFFSET(0x1891DC40)
#define CLASS_1_1FA450CC2B1CA0BD_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1891DAC0)
#define CLASS_1_1FA450CC2B1CA0BD_METHOD_1_6999EE222E287427_1_OFFSET UNITYSDK_OFFSET(0x1891DD50)
#define CLASS_1_1FA450CC2B1CA0BD_METHOD_1_6999EE222E287427_OFFSET UNITYSDK_OFFSET(0x1891DB30)
#define CLASS_1_1FA450CC2B1CA0BD_METHOD_1_8436C877B513915F_1_OFFSET UNITYSDK_OFFSET(0x1891DFC0)
#define CLASS_1_1FA450CC2B1CA0BD_METHOD_1_8436C877B513915F_2_OFFSET UNITYSDK_OFFSET(0x1891E010)
#define CLASS_1_1FA450CC2B1CA0BD_METHOD_1_8436C877B513915F_OFFSET UNITYSDK_OFFSET(0x1891DF70)
#define CLASS_1_1FA450CC2B1CA0BD_METHOD_1_BA3B602C4BB7BC46_1_OFFSET UNITYSDK_OFFSET(0x1891D890)
#define CLASS_1_1FA450CC2B1CA0BD_METHOD_1_BA3B602C4BB7BC46_OFFSET UNITYSDK_OFFSET(0x1891D660)
#define CLASS_1_1FA450CC2B1CA0BD_METHOD_1_BD4E3016385C6CFC_OFFSET UNITYSDK_OFFSET(0x1891D610)
#define CLASS_1_1FA450CC2B1CA0BD_METHOD_1_BD8B7BD93540FF00_1_OFFSET UNITYSDK_OFFSET(0x1891D9A0)
#define CLASS_1_1FA450CC2B1CA0BD_METHOD_1_BD8B7BD93540FF00_OFFSET UNITYSDK_OFFSET(0x1891D770)
#define CLASS_1_1FA450CC2B1CA0BD_METHOD_1_FF1776C0D75B83EC_1_OFFSET UNITYSDK_OFFSET(0x1891E0B0)
#define CLASS_1_1FA450CC2B1CA0BD_METHOD_1_FF1776C0D75B83EC_OFFSET UNITYSDK_OFFSET(0x1891E060)
#define CLASS_1_1FA450CC2B1CA0BD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1891E110)
#define CLASS_1_1FA450CC2B1CA0BD__CTOR_OFFSET UNITYSDK_OFFSET(0x1891E100)

inline static constexpr unsigned int Class_1_1FA450CC2B1CA0BD_TypeDefinitionIndex = 38419;

class Class_1_1FA450CC2B1CA0BD : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Action_2<::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*>*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Action_2<::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1FA450CC2B1CA0BD_TypeDefinitionIndex)->GetStaticField(0x23FB0);
	}
	// static const ::System::Int32 Field_1_1 = 0x1E; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FA450CC2B1CA0BD__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1FA450CC2B1CA0BD__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_BD4E3016385C6CFC(::RPG::Client::AssetEventType a1, ::RPG::Client::AssetEventPort a2)
	{
		return ((::System::Int32(*)(::RPG::Client::AssetEventType, ::RPG::Client::AssetEventPort))((::PBYTE)hIl2Cpp + CLASS_1_1FA450CC2B1CA0BD_METHOD_1_BD4E3016385C6CFC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BA3B602C4BB7BC46(::RPG::Client::AssetEventType a1, ::System::Action_2<::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*>* a2)
	{
		return ((::System::Void(*)(::RPG::Client::AssetEventType, ::System::Action_2<::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_1FA450CC2B1CA0BD_METHOD_1_BA3B602C4BB7BC46_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BD8B7BD93540FF00(::RPG::Client::AssetEventType a1, ::RPG::Client::AssetEventPort a2, ::System::Action_2<::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*>* a3)
	{
		return ((::System::Void(*)(::RPG::Client::AssetEventType, ::RPG::Client::AssetEventPort, ::System::Action_2<::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_1FA450CC2B1CA0BD_METHOD_1_BD8B7BD93540FF00_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_BA3B602C4BB7BC46_1(::RPG::Client::AssetEventType a1, ::System::Action_2<::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*>* a2)
	{
		return ((::System::Void(*)(::RPG::Client::AssetEventType, ::System::Action_2<::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_1FA450CC2B1CA0BD_METHOD_1_BA3B602C4BB7BC46_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BD8B7BD93540FF00_1(::RPG::Client::AssetEventType a1, ::RPG::Client::AssetEventPort a2, ::System::Action_2<::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*>* a3)
	{
		return ((::System::Void(*)(::RPG::Client::AssetEventType, ::RPG::Client::AssetEventPort, ::System::Action_2<::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_1FA450CC2B1CA0BD_METHOD_1_BD8B7BD93540FF00_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1FA450CC2B1CA0BD_METHOD_1_4343F372F34C05BF_OFFSET))();
	}

	static ::System::Void Method_1_6999EE222E287427(::RPG::Client::AssetEventType a1, ::RPG::Client::IAssetOperation* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::RPG::Client::AssetEventType, ::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_1FA450CC2B1CA0BD_METHOD_1_6999EE222E287427_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_379BC0A2C05546EC(::RPG::Client::AssetEventType a1, ::RPG::Client::AssetEventPort a2, ::RPG::Client::IAssetOperation* a3, ::Il2CppArray<::System::Object*>* a4)
	{
		return ((::System::Void(*)(::RPG::Client::AssetEventType, ::RPG::Client::AssetEventPort, ::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_1FA450CC2B1CA0BD_METHOD_1_379BC0A2C05546EC_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_6999EE222E287427_1(::RPG::Client::AssetEventType a1, ::RPG::Client::IAssetOperation* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::RPG::Client::AssetEventType, ::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_1FA450CC2B1CA0BD_METHOD_1_6999EE222E287427_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_379BC0A2C05546EC_1(::RPG::Client::AssetEventType a1, ::RPG::Client::AssetEventPort a2, ::RPG::Client::IAssetOperation* a3, ::Il2CppArray<::System::Object*>* a4)
	{
		return ((::System::Void(*)(::RPG::Client::AssetEventType, ::RPG::Client::AssetEventPort, ::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_1FA450CC2B1CA0BD_METHOD_1_379BC0A2C05546EC_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_8436C877B513915F(::Class_1_48570DED401BD199* a1, ::RPG::Client::AssetEventPort a2)
	{
		return ((::System::Void(*)(::Class_1_48570DED401BD199*, ::RPG::Client::AssetEventPort))((::PBYTE)hIl2Cpp + CLASS_1_1FA450CC2B1CA0BD_METHOD_1_8436C877B513915F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8436C877B513915F_1(::Class_1_48570DED401BD199* a1, ::RPG::Client::AssetEventPort a2)
	{
		return ((::System::Void(*)(::Class_1_48570DED401BD199*, ::RPG::Client::AssetEventPort))((::PBYTE)hIl2Cpp + CLASS_1_1FA450CC2B1CA0BD_METHOD_1_8436C877B513915F_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8436C877B513915F_2(::Class_1_48570DED401BD199* a1, ::RPG::Client::AssetEventPort a2)
	{
		return ((::System::Void(*)(::Class_1_48570DED401BD199*, ::RPG::Client::AssetEventPort))((::PBYTE)hIl2Cpp + CLASS_1_1FA450CC2B1CA0BD_METHOD_1_8436C877B513915F_2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FF1776C0D75B83EC(::RPG::Client::AssetSystem::AssetLoader* a1, ::RPG::Client::AssetEventPort a2)
	{
		return ((::System::Void(*)(::RPG::Client::AssetSystem::AssetLoader*, ::RPG::Client::AssetEventPort))((::PBYTE)hIl2Cpp + CLASS_1_1FA450CC2B1CA0BD_METHOD_1_FF1776C0D75B83EC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FF1776C0D75B83EC_1(::RPG::Client::AssetSystem::AssetLoader* a1, ::RPG::Client::AssetEventPort a2)
	{
		return ((::System::Void(*)(::RPG::Client::AssetSystem::AssetLoader*, ::RPG::Client::AssetEventPort))((::PBYTE)hIl2Cpp + CLASS_1_1FA450CC2B1CA0BD_METHOD_1_FF1776C0D75B83EC_1_OFFSET))(a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AssetEventPort.h"
#include "unitysdk/RPG/Client/AssetEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_48570DED401BD199;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client::AssetSystem { class AssetLoader; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_111B4826C7CC20B7_METHOD_1_1A2DAA6320208A73_1_OFFSET UNITYSDK_OFFSET(0x17B3ADF0)
#define CLASS_1_111B4826C7CC20B7_METHOD_1_1A2DAA6320208A73_OFFSET UNITYSDK_OFFSET(0x17B3AB80)
#define CLASS_1_111B4826C7CC20B7_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x17B3AF30)
#define CLASS_1_111B4826C7CC20B7_METHOD_1_58B192064E901C5D_1_OFFSET UNITYSDK_OFFSET(0x17B3ACC0)
#define CLASS_1_111B4826C7CC20B7_METHOD_1_58B192064E901C5D_OFFSET UNITYSDK_OFFSET(0x17B3AA50)
#define CLASS_1_111B4826C7CC20B7_METHOD_1_8436C877B513915F_1_OFFSET UNITYSDK_OFFSET(0x17B3B450)
#define CLASS_1_111B4826C7CC20B7_METHOD_1_8436C877B513915F_2_OFFSET UNITYSDK_OFFSET(0x17B3B4A0)
#define CLASS_1_111B4826C7CC20B7_METHOD_1_8436C877B513915F_OFFSET UNITYSDK_OFFSET(0x17B3B400)
#define CLASS_1_111B4826C7CC20B7_METHOD_1_B368045646154A7F_1_OFFSET UNITYSDK_OFFSET(0x17B3B1D0)
#define CLASS_1_111B4826C7CC20B7_METHOD_1_B368045646154A7F_OFFSET UNITYSDK_OFFSET(0x17B3AFA0)
#define CLASS_1_111B4826C7CC20B7_METHOD_1_BD4E3016385C6CFC_OFFSET UNITYSDK_OFFSET(0x17B3AA00)
#define CLASS_1_111B4826C7CC20B7_METHOD_1_FD0A1AFBB909D432_1_OFFSET UNITYSDK_OFFSET(0x17B3B2E0)
#define CLASS_1_111B4826C7CC20B7_METHOD_1_FD0A1AFBB909D432_OFFSET UNITYSDK_OFFSET(0x17B3B0B0)
#define CLASS_1_111B4826C7CC20B7_METHOD_1_FF1776C0D75B83EC_1_OFFSET UNITYSDK_OFFSET(0x17B3B540)
#define CLASS_1_111B4826C7CC20B7_METHOD_1_FF1776C0D75B83EC_OFFSET UNITYSDK_OFFSET(0x17B3B4F0)
#define CLASS_1_111B4826C7CC20B7__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B3B5A0)
#define CLASS_1_111B4826C7CC20B7__CTOR_OFFSET UNITYSDK_OFFSET(0x17B3B590)

inline static constexpr unsigned int Class_1_111B4826C7CC20B7_TypeDefinitionIndex = 37687;

class Class_1_111B4826C7CC20B7 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Action_2<::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*>*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::Action_2<::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_111B4826C7CC20B7_TypeDefinitionIndex)->GetStaticField(0xC8B0);
	}
	// static const ::System::Int32 Field_1_0 = 0x1E; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_111B4826C7CC20B7__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_111B4826C7CC20B7__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_BD4E3016385C6CFC(::RPG::Client::AssetEventType a1, ::RPG::Client::AssetEventPort a2)
	{
		return ((::System::Int32(*)(::RPG::Client::AssetEventType, ::RPG::Client::AssetEventPort))((::PBYTE)hIl2Cpp + CLASS_1_111B4826C7CC20B7_METHOD_1_BD4E3016385C6CFC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_58B192064E901C5D(::RPG::Client::AssetEventType a1, ::System::Action_2<::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*>* a2)
	{
		return ((::System::Void(*)(::RPG::Client::AssetEventType, ::System::Action_2<::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_111B4826C7CC20B7_METHOD_1_58B192064E901C5D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1A2DAA6320208A73(::RPG::Client::AssetEventType a1, ::RPG::Client::AssetEventPort a2, ::System::Action_2<::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*>* a3)
	{
		return ((::System::Void(*)(::RPG::Client::AssetEventType, ::RPG::Client::AssetEventPort, ::System::Action_2<::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_111B4826C7CC20B7_METHOD_1_1A2DAA6320208A73_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_58B192064E901C5D_1(::RPG::Client::AssetEventType a1, ::System::Action_2<::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*>* a2)
	{
		return ((::System::Void(*)(::RPG::Client::AssetEventType, ::System::Action_2<::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_111B4826C7CC20B7_METHOD_1_58B192064E901C5D_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1A2DAA6320208A73_1(::RPG::Client::AssetEventType a1, ::RPG::Client::AssetEventPort a2, ::System::Action_2<::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*>* a3)
	{
		return ((::System::Void(*)(::RPG::Client::AssetEventType, ::RPG::Client::AssetEventPort, ::System::Action_2<::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_111B4826C7CC20B7_METHOD_1_1A2DAA6320208A73_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_111B4826C7CC20B7_METHOD_1_4343F372F34C05BF_OFFSET))();
	}

	static ::System::Void Method_1_B368045646154A7F(::RPG::Client::AssetEventType a1, ::RPG::Client::IAssetOperation* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::RPG::Client::AssetEventType, ::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_111B4826C7CC20B7_METHOD_1_B368045646154A7F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_FD0A1AFBB909D432(::RPG::Client::AssetEventType a1, ::RPG::Client::AssetEventPort a2, ::RPG::Client::IAssetOperation* a3, ::Il2CppArray<::System::Object*>* a4)
	{
		return ((::System::Void(*)(::RPG::Client::AssetEventType, ::RPG::Client::AssetEventPort, ::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_111B4826C7CC20B7_METHOD_1_FD0A1AFBB909D432_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_B368045646154A7F_1(::RPG::Client::AssetEventType a1, ::RPG::Client::IAssetOperation* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::RPG::Client::AssetEventType, ::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_111B4826C7CC20B7_METHOD_1_B368045646154A7F_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_FD0A1AFBB909D432_1(::RPG::Client::AssetEventType a1, ::RPG::Client::AssetEventPort a2, ::RPG::Client::IAssetOperation* a3, ::Il2CppArray<::System::Object*>* a4)
	{
		return ((::System::Void(*)(::RPG::Client::AssetEventType, ::RPG::Client::AssetEventPort, ::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_111B4826C7CC20B7_METHOD_1_FD0A1AFBB909D432_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_8436C877B513915F(::Class_1_48570DED401BD199* a1, ::RPG::Client::AssetEventPort a2)
	{
		return ((::System::Void(*)(::Class_1_48570DED401BD199*, ::RPG::Client::AssetEventPort))((::PBYTE)hIl2Cpp + CLASS_1_111B4826C7CC20B7_METHOD_1_8436C877B513915F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8436C877B513915F_1(::Class_1_48570DED401BD199* a1, ::RPG::Client::AssetEventPort a2)
	{
		return ((::System::Void(*)(::Class_1_48570DED401BD199*, ::RPG::Client::AssetEventPort))((::PBYTE)hIl2Cpp + CLASS_1_111B4826C7CC20B7_METHOD_1_8436C877B513915F_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8436C877B513915F_2(::Class_1_48570DED401BD199* a1, ::RPG::Client::AssetEventPort a2)
	{
		return ((::System::Void(*)(::Class_1_48570DED401BD199*, ::RPG::Client::AssetEventPort))((::PBYTE)hIl2Cpp + CLASS_1_111B4826C7CC20B7_METHOD_1_8436C877B513915F_2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FF1776C0D75B83EC(::RPG::Client::AssetSystem::AssetLoader* a1, ::RPG::Client::AssetEventPort a2)
	{
		return ((::System::Void(*)(::RPG::Client::AssetSystem::AssetLoader*, ::RPG::Client::AssetEventPort))((::PBYTE)hIl2Cpp + CLASS_1_111B4826C7CC20B7_METHOD_1_FF1776C0D75B83EC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FF1776C0D75B83EC_1(::RPG::Client::AssetSystem::AssetLoader* a1, ::RPG::Client::AssetEventPort a2)
	{
		return ((::System::Void(*)(::RPG::Client::AssetSystem::AssetLoader*, ::RPG::Client::AssetEventPort))((::PBYTE)hIl2Cpp + CLASS_1_111B4826C7CC20B7_METHOD_1_FF1776C0D75B83EC_1_OFFSET))(a1, a2);
	}
};

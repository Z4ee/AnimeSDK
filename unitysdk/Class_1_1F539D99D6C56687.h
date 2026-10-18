#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace EnviromentSystem { class EnviromentProfile; }
namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1F539D99D6C56687_METHOD_1_02C1A2B49611A138_OFFSET UNITYSDK_OFFSET(0xF8B5D90)
#define CLASS_1_1F539D99D6C56687_METHOD_1_05114270587ACE3F_OFFSET UNITYSDK_OFFSET(0xF8B60C0)
#define CLASS_1_1F539D99D6C56687_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xF8B4DF0)
#define CLASS_1_1F539D99D6C56687_METHOD_1_6F4A6B5CE800C615_OFFSET UNITYSDK_OFFSET(0xF8B4C20)
#define CLASS_1_1F539D99D6C56687_METHOD_1_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0xF8B4B00)
#define CLASS_1_1F539D99D6C56687_METHOD_1_8ED4571F58D2A47E_OFFSET UNITYSDK_OFFSET(0xF8B6150)
#define CLASS_1_1F539D99D6C56687_METHOD_1_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0xF8B4C30)
#define CLASS_1_1F539D99D6C56687_METHOD_1_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0xF8B4E50)
#define CLASS_1_1F539D99D6C56687__CTOR_OFFSET UNITYSDK_OFFSET(0xF8B6440)

inline static constexpr unsigned int Class_1_1F539D99D6C56687_TypeDefinitionIndex = 48497;

class Class_1_1F539D99D6C56687 : public ::System::Object
{
public:
	::RPG::Client::IAssetOperation* BBOFBHCDHBO; // 0x10
	::System::Collections::Generic::HashSet_1<::System::String*>* GBEECFJEDCO; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::IAssetOperation*>* GFAOOMGHJDN; // 0x20
	::System::Action_1<::System::String*>* GICMMIMFLIM; // 0x28
	::System::String* DOEIHCMGBDL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F539D99D6C56687__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F539D99D6C56687_METHOD_1_70589F89E4D22649_OFFSET))(this);
	}

	::RPG::Client::IAssetOperation* Method_1_6F4A6B5CE800C615()
	{
		return ((::RPG::Client::IAssetOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F539D99D6C56687_METHOD_1_6F4A6B5CE800C615_OFFSET))(this);
	}

	::System::Void Method_1_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F539D99D6C56687_METHOD_1_921C3C3E09D59CD4_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F539D99D6C56687_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F539D99D6C56687_METHOD_1_BBA49FAB086F388D_OFFSET))(this);
	}

	::System::Void Method_1_02C1A2B49611A138(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::Type*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + CLASS_1_1F539D99D6C56687_METHOD_1_02C1A2B49611A138_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_05114270587ACE3F(::EnviromentSystem::EnviromentProfile* a1)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + CLASS_1_1F539D99D6C56687_METHOD_1_05114270587ACE3F_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_8ED4571F58D2A47E(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_1F539D99D6C56687_METHOD_1_8ED4571F58D2A47E_OFFSET))(a1);
	}
};

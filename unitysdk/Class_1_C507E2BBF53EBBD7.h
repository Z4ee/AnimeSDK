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

#define CLASS_1_C507E2BBF53EBBD7_METHOD_1_05114270587ACE3F_OFFSET UNITYSDK_OFFSET(0xFA7C230)
#define CLASS_1_C507E2BBF53EBBD7_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xFA7AF10)
#define CLASS_1_C507E2BBF53EBBD7_METHOD_1_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0xFA7AF70)
#define CLASS_1_C507E2BBF53EBBD7_METHOD_1_58ED8A81443F5E00_OFFSET UNITYSDK_OFFSET(0xFA7BED0)
#define CLASS_1_C507E2BBF53EBBD7_METHOD_1_6F4A6B5CE800C615_OFFSET UNITYSDK_OFFSET(0xFA7AD40)
#define CLASS_1_C507E2BBF53EBBD7_METHOD_1_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0xFA7AC20)
#define CLASS_1_C507E2BBF53EBBD7_METHOD_1_8ED4571F58D2A47E_OFFSET UNITYSDK_OFFSET(0xFA7C2C0)
#define CLASS_1_C507E2BBF53EBBD7_METHOD_1_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0xFA7AD50)
#define CLASS_1_C507E2BBF53EBBD7__CTOR_OFFSET UNITYSDK_OFFSET(0xFA7C5B0)

inline static constexpr unsigned int Class_1_C507E2BBF53EBBD7_TypeDefinitionIndex = 48951;

class Class_1_C507E2BBF53EBBD7 : public ::System::Object
{
public:
	::System::String* DOEIHCMGBDL; // 0x10
	::RPG::Client::IAssetOperation* BBOFBHCDHBO; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::IAssetOperation*>* GFAOOMGHJDN; // 0x20
	::System::Collections::Generic::HashSet_1<::System::String*>* GBEECFJEDCO; // 0x28
	::System::Action_1<::System::String*>* GICMMIMFLIM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C507E2BBF53EBBD7__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C507E2BBF53EBBD7_METHOD_1_70589F89E4D22649_OFFSET))(this);
	}

	::RPG::Client::IAssetOperation* Method_1_6F4A6B5CE800C615()
	{
		return ((::RPG::Client::IAssetOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C507E2BBF53EBBD7_METHOD_1_6F4A6B5CE800C615_OFFSET))(this);
	}

	::System::Void Method_1_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C507E2BBF53EBBD7_METHOD_1_921C3C3E09D59CD4_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C507E2BBF53EBBD7_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C507E2BBF53EBBD7_METHOD_1_4389275F4099DE36_OFFSET))(this);
	}

	::System::Void Method_1_58ED8A81443F5E00(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::Type*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + CLASS_1_C507E2BBF53EBBD7_METHOD_1_58ED8A81443F5E00_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_05114270587ACE3F(::EnviromentSystem::EnviromentProfile* a1)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + CLASS_1_C507E2BBF53EBBD7_METHOD_1_05114270587ACE3F_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_8ED4571F58D2A47E(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_C507E2BBF53EBBD7_METHOD_1_8ED4571F58D2A47E_OFFSET))(a1);
	}
};

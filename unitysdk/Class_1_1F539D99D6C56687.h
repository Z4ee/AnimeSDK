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

#define CLASS_1_1F539D99D6C56687_METHOD_1_02C1A2B49611A138_OFFSET UNITYSDK_OFFSET(0xE4EA120)
#define CLASS_1_1F539D99D6C56687_METHOD_1_05114270587ACE3F_OFFSET UNITYSDK_OFFSET(0xE4EA450)
#define CLASS_1_1F539D99D6C56687_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xE4E9180)
#define CLASS_1_1F539D99D6C56687_METHOD_1_6F4A6B5CE800C615_OFFSET UNITYSDK_OFFSET(0xE4E8FB0)
#define CLASS_1_1F539D99D6C56687_METHOD_1_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0xE4E8E90)
#define CLASS_1_1F539D99D6C56687_METHOD_1_8ED4571F58D2A47E_OFFSET UNITYSDK_OFFSET(0xE4EA4E0)
#define CLASS_1_1F539D99D6C56687_METHOD_1_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0xE4E8FC0)
#define CLASS_1_1F539D99D6C56687_METHOD_1_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0xE4E91E0)
#define CLASS_1_1F539D99D6C56687__CTOR_OFFSET UNITYSDK_OFFSET(0xE4EA7D0)

inline static constexpr unsigned int Class_1_1F539D99D6C56687_TypeDefinitionIndex = 46705;

class Class_1_1F539D99D6C56687 : public ::System::Object
{
public:
	::RPG::Client::IAssetOperation* Field_1_0; // 0x10
	::System::Action_1<::System::String*>* Field_1_1; // 0x18
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28
	::System::Collections::Generic::List_1<::RPG::Client::IAssetOperation*>* Field_1_4; // 0x30

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

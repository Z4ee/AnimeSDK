#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_542;
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { template <typename T> class LockableList_1; }

#define CLASS_1_2B3811E66EE856E4_METHOD_1_224FD38A147331B3_OFFSET UNITYSDK_OFFSET(0x938D000)
#define CLASS_1_2B3811E66EE856E4_METHOD_1_616087387C3A1C36_OFFSET UNITYSDK_OFFSET(0x938CC90)
#define CLASS_1_2B3811E66EE856E4_METHOD_1_8733738E0E834C59_OFFSET UNITYSDK_OFFSET(0x938CEE0)
#define CLASS_1_2B3811E66EE856E4_METHOD_1_9C1F668AC136A1A1_OFFSET UNITYSDK_OFFSET(0x938CE50)
#define CLASS_1_2B3811E66EE856E4_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x938CC00)
#define CLASS_1_2B3811E66EE856E4_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x938CC50)
#define CLASS_1_2B3811E66EE856E4__CTOR_OFFSET UNITYSDK_OFFSET(0x938D010)

inline static constexpr unsigned int Class_1_2B3811E66EE856E4_TypeDefinitionIndex = 53321;

class Class_1_2B3811E66EE856E4 : public ::System::Object
{
public:
	::RPG::GameCore::JsonEnum* Field_1_0; // 0x10
	::RPG::GameCore::LockableList_1<::Class_0_16E4307DCC419505_542*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B3811E66EE856E4__CTOR_OFFSET))(this);
	}

	::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_2B3811E66EE856E4_ONPLUGININIT_OFFSET))(this, a1);
	}

	::System::Void OnPluginUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B3811E66EE856E4_ONPLUGINUNINIT_OFFSET))(this);
	}

	::System::Void Method_1_616087387C3A1C36(::RPG::GameCore::JsonEnum* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + CLASS_1_2B3811E66EE856E4_METHOD_1_616087387C3A1C36_OFFSET))(this, a1);
	}

	::System::Void Method_1_9C1F668AC136A1A1(::Class_0_16E4307DCC419505_542* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_542*))((::PBYTE)hIl2Cpp + CLASS_1_2B3811E66EE856E4_METHOD_1_9C1F668AC136A1A1_OFFSET))(this, a1);
	}

	::System::Void Method_1_8733738E0E834C59(::Class_0_16E4307DCC419505_542* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_542*))((::PBYTE)hIl2Cpp + CLASS_1_2B3811E66EE856E4_METHOD_1_8733738E0E834C59_OFFSET))(this, a1);
	}

	::RPG::GameCore::JsonEnum* Method_1_224FD38A147331B3()
	{
		return ((::RPG::GameCore::JsonEnum*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B3811E66EE856E4_METHOD_1_224FD38A147331B3_OFFSET))(this);
	}
};

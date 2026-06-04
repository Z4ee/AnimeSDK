#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_564;
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { template <typename T> class LockableList_1; }

#define CLASS_1_2B3811E66EE856E4_METHOD_1_0A2EA2CCD0CFB858_OFFSET UNITYSDK_OFFSET(0x1400ACF0)
#define CLASS_1_2B3811E66EE856E4_METHOD_1_224FD38A147331B3_OFFSET UNITYSDK_OFFSET(0x1400B060)
#define CLASS_1_2B3811E66EE856E4_METHOD_1_9C1F668AC136A1A1_OFFSET UNITYSDK_OFFSET(0x1400AEE0)
#define CLASS_1_2B3811E66EE856E4_METHOD_1_A497B3ECFD0EA55C_OFFSET UNITYSDK_OFFSET(0x1400AF70)
#define CLASS_1_2B3811E66EE856E4_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x1400AC60)
#define CLASS_1_2B3811E66EE856E4_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x1400ACB0)
#define CLASS_1_2B3811E66EE856E4__CTOR_OFFSET UNITYSDK_OFFSET(0x1400B070)

inline static constexpr unsigned int Class_1_2B3811E66EE856E4_TypeDefinitionIndex = 54034;

class Class_1_2B3811E66EE856E4 : public ::System::Object
{
public:
	::RPG::GameCore::LockableList_1<::Class_0_16E4307DCC419505_564*>* Field_1_0; // 0x10
	::RPG::GameCore::JsonEnum* Field_1_1; // 0x18

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

	::System::Void Method_1_0A2EA2CCD0CFB858(::RPG::GameCore::JsonEnum* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + CLASS_1_2B3811E66EE856E4_METHOD_1_0A2EA2CCD0CFB858_OFFSET))(this, a1);
	}

	::System::Void Method_1_9C1F668AC136A1A1(::Class_0_16E4307DCC419505_564* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_564*))((::PBYTE)hIl2Cpp + CLASS_1_2B3811E66EE856E4_METHOD_1_9C1F668AC136A1A1_OFFSET))(this, a1);
	}

	::System::Void Method_1_A497B3ECFD0EA55C(::Class_0_16E4307DCC419505_564* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_564*))((::PBYTE)hIl2Cpp + CLASS_1_2B3811E66EE856E4_METHOD_1_A497B3ECFD0EA55C_OFFSET))(this, a1);
	}

	::RPG::GameCore::JsonEnum* Method_1_224FD38A147331B3()
	{
		return ((::RPG::GameCore::JsonEnum*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B3811E66EE856E4_METHOD_1_224FD38A147331B3_OFFSET))(this);
	}
};

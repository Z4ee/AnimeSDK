#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginTargetCentricReveal; }

#define CLASS_2_FD5E27D79F54FDEE_METHOD_2_1F600059BFC04D4A_OFFSET UNITYSDK_OFFSET(0x1103A520)
#define CLASS_2_FD5E27D79F54FDEE_METHOD_2_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x1103A320)
#define CLASS_2_FD5E27D79F54FDEE_METHOD_2_E71BF0BD3B65DF83_OFFSET UNITYSDK_OFFSET(0x1103A5C0)
#define CLASS_2_FD5E27D79F54FDEE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1103A640)
#define CLASS_2_FD5E27D79F54FDEE__CTOR_OFFSET UNITYSDK_OFFSET(0x1103A630)

inline static constexpr unsigned int Class_2_FD5E27D79F54FDEE_TypeDefinitionIndex = 57182;

class Class_2_FD5E27D79F54FDEE : public ::RPG::Client::BehaviorBase
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FD5E27D79F54FDEE_TypeDefinitionIndex)->GetStaticField(0xF4A0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD5E27D79F54FDEE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_FD5E27D79F54FDEE__CCTOR_OFFSET))();
	}

	::System::Void Method_2_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD5E27D79F54FDEE_METHOD_2_D7852DE078ACC1F1_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginTargetCentricReveal* Method_2_E71BF0BD3B65DF83()
	{
		return ((::RPG::Client::MonoEffectPluginTargetCentricReveal*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD5E27D79F54FDEE_METHOD_2_E71BF0BD3B65DF83_OFFSET))(this);
	}

	::RPG::Client::MonoEffect* Method_2_1F600059BFC04D4A()
	{
		return ((::RPG::Client::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD5E27D79F54FDEE_METHOD_2_1F600059BFC04D4A_OFFSET))(this);
	}
};

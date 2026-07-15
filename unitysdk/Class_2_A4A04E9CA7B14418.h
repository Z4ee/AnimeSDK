#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginTargetCentricReveal; }

#define CLASS_2_A4A04E9CA7B14418_METHOD_2_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x162D6DB0)
#define CLASS_2_A4A04E9CA7B14418_METHOD_2_94BCAADFC0C57A3A_OFFSET UNITYSDK_OFFSET(0x162D7060)
#define CLASS_2_A4A04E9CA7B14418_METHOD_2_D21F07D8555D0065_OFFSET UNITYSDK_OFFSET(0x162D6FB0)
#define CLASS_2_A4A04E9CA7B14418__CCTOR_OFFSET UNITYSDK_OFFSET(0x162D70E0)
#define CLASS_2_A4A04E9CA7B14418__CTOR_OFFSET UNITYSDK_OFFSET(0x162D70D0)

inline static constexpr unsigned int Class_2_A4A04E9CA7B14418_TypeDefinitionIndex = 66768;

class Class_2_A4A04E9CA7B14418 : public ::RPG::Client::BehaviorBase
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_A4A04E9CA7B14418_TypeDefinitionIndex)->GetStaticField(0xA7B0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4A04E9CA7B14418__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A4A04E9CA7B14418__CCTOR_OFFSET))();
	}

	::System::Void Method_2_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4A04E9CA7B14418_METHOD_2_84B92802FDAFF6C8_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginTargetCentricReveal* Method_2_94BCAADFC0C57A3A()
	{
		return ((::RPG::Client::MonoEffectPluginTargetCentricReveal*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4A04E9CA7B14418_METHOD_2_94BCAADFC0C57A3A_OFFSET))(this);
	}

	::RPG::Client::MonoEffect* Method_2_D21F07D8555D0065()
	{
		return ((::RPG::Client::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4A04E9CA7B14418_METHOD_2_D21F07D8555D0065_OFFSET))(this);
	}
};

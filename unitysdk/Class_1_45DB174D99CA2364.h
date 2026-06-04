#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_798;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_45DB174D99CA2364_METHOD_1_473FC8FA6DCC42E5_OFFSET UNITYSDK_OFFSET(0x1443D340)
#define CLASS_1_45DB174D99CA2364_METHOD_1_ACCF125FF6EC7E06_OFFSET UNITYSDK_OFFSET(0x1443D390)
#define CLASS_1_45DB174D99CA2364__CTOR_OFFSET UNITYSDK_OFFSET(0x1443D550)

inline static constexpr unsigned int Class_1_45DB174D99CA2364_TypeDefinitionIndex = 61309;

class Class_1_45DB174D99CA2364 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45DB174D99CA2364__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_473FC8FA6DCC42E5(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_45DB174D99CA2364_METHOD_1_473FC8FA6DCC42E5_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_798* Method_1_ACCF125FF6EC7E06(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::Class_0_16E4307DCC419505_798*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_45DB174D99CA2364_METHOD_1_ACCF125FF6EC7E06_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_663;
class Class_1_E2C7519622F2C258;
namespace RPG::Client { class GridFightRole; }

#define CLASS_1_C49FDECB722F4A14_METHOD_1_2ED82C7B65E3B599_OFFSET UNITYSDK_OFFSET(0x124AFA80)
#define CLASS_1_C49FDECB722F4A14__CTOR_OFFSET UNITYSDK_OFFSET(0x124AF9F0)

inline static constexpr unsigned int Class_1_C49FDECB722F4A14_TypeDefinitionIndex = 59967;

class Class_1_C49FDECB722F4A14 : public ::System::Object
{
public:
	::Class_1_E2C7519622F2C258* Field_1_0; // 0x10
	::RPG::Client::GridFightRole* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_C49FDECB722F4A14__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_663* Method_1_2ED82C7B65E3B599(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::Class_0_16E4307DCC419505_663*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_C49FDECB722F4A14_METHOD_1_2ED82C7B65E3B599_OFFSET))(this, a1);
	}
};

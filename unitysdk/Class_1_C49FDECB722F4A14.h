#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_573;
class Class_1_3D07D3D32ECE229A;
namespace RPG::Client { class GridFightRole; }

#define CLASS_1_C49FDECB722F4A14_METHOD_1_2ED82C7B65E3B599_OFFSET UNITYSDK_OFFSET(0x8BB11D0)
#define CLASS_1_C49FDECB722F4A14__CTOR_OFFSET UNITYSDK_OFFSET(0x8BB1140)

inline static constexpr unsigned int Class_1_C49FDECB722F4A14_TypeDefinitionIndex = 52890;

class Class_1_C49FDECB722F4A14 : public ::System::Object
{
public:
	::RPG::Client::GridFightRole* Field_1_1; // 0x10
	::Class_1_3D07D3D32ECE229A* Field_1_0; // 0x18

	::System::Void _ctor(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_C49FDECB722F4A14__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_573* Method_1_2ED82C7B65E3B599(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::Class_0_16E4307DCC419505_573*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_C49FDECB722F4A14_METHOD_1_2ED82C7B65E3B599_OFFSET))(this, a1);
	}
};

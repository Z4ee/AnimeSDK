#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_684;
class Class_1_AC56FA381B2C219F;
namespace RPG::Client { class GridFightRole; }

#define CLASS_1_58AB108C11C39790_METHOD_1_855BF59754CF6B13_OFFSET UNITYSDK_OFFSET(0x143490E0)
#define CLASS_1_58AB108C11C39790__CTOR_OFFSET UNITYSDK_OFFSET(0x14349050)

inline static constexpr unsigned int Class_1_58AB108C11C39790_TypeDefinitionIndex = 60902;

class Class_1_58AB108C11C39790 : public ::System::Object
{
public:
	::Class_1_AC56FA381B2C219F* Field_1_0; // 0x10
	::RPG::Client::GridFightRole* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_58AB108C11C39790__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_684* Method_1_855BF59754CF6B13(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::Class_0_16E4307DCC419505_684*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_58AB108C11C39790_METHOD_1_855BF59754CF6B13_OFFSET))(this, a1);
	}
};

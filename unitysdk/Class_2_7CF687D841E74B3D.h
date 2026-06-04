#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5A85708757A0277D.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class GridFightRole; }

#define CLASS_2_7CF687D841E74B3D_METHOD_2_F2BD1F8A46F0A559_OFFSET UNITYSDK_OFFSET(0xCBE0F90)
#define CLASS_2_7CF687D841E74B3D__CTOR_OFFSET UNITYSDK_OFFSET(0xCBE0FE0)

inline static constexpr unsigned int Class_2_7CF687D841E74B3D_TypeDefinitionIndex = 60951;

class Class_2_7CF687D841E74B3D : public ::Class_1_5A85708757A0277D
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CF687D841E74B3D__CTOR_OFFSET))(this);
	}

	::RPG::AvatarSystem::IAvatar* Method_2_F2BD1F8A46F0A559(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_7CF687D841E74B3D_METHOD_2_F2BD1F8A46F0A559_OFFSET))(this, a1);
	}
};

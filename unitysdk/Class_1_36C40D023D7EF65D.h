#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSourceType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_36C40D023D7EF65D_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0xBE8B760)
#define CLASS_1_36C40D023D7EF65D_METHOD_1_3D08761F9CBE3019_OFFSET UNITYSDK_OFFSET(0xBE8B6E0)
#define CLASS_1_36C40D023D7EF65D_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBE8B690)
#define CLASS_1_36C40D023D7EF65D__CTOR_OFFSET UNITYSDK_OFFSET(0xBE8B7D0)

inline static constexpr unsigned int Class_1_36C40D023D7EF65D_TypeDefinitionIndex = 57619;

class Class_1_36C40D023D7EF65D : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
	::RPG::GameCore::TargetSourceType MIAJNJNECOG; // 0x18
	::System::Boolean DHHGLHOOCMA; // 0x1C
	::System::Boolean GIMONLCMCMA; // 0x1D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36C40D023D7EF65D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36C40D023D7EF65D_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_3D08761F9CBE3019(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TargetSourceType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TargetSourceType))((::PBYTE)hIl2Cpp + CLASS_1_36C40D023D7EF65D_METHOD_1_3D08761F9CBE3019_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_36C40D023D7EF65D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_36C40D023D7EF65D*))((::PBYTE)hIl2Cpp + CLASS_1_36C40D023D7EF65D_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}
};

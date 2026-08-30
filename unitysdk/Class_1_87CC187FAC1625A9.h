#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BossHPStanceChangeType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_87CC187FAC1625A9__CTOR_OFFSET UNITYSDK_OFFSET(0x18512870)

inline static constexpr unsigned int Class_1_87CC187FAC1625A9_TypeDefinitionIndex = 55557;

class Class_1_87CC187FAC1625A9 : public ::System::Object
{
public:
	::RPG::GameCore::BossHPStanceChangeType EBFOHGMMHKL; // 0x10
	::System::Single OJDKICBEIIP; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87CC187FAC1625A9__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimCustomScreenTransferStyle.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_F2FEBAAB4D6BBF75_METHOD_3_56AA6EAE795B6969_OFFSET UNITYSDK_OFFSET(0x1CF531D0)
#define CLASS_3_F2FEBAAB4D6BBF75_METHOD_3_70D89F22B6EB766C_OFFSET UNITYSDK_OFFSET(0x1CF53210)
#define CLASS_3_F2FEBAAB4D6BBF75__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF53200)

inline static constexpr unsigned int Class_3_F2FEBAAB4D6BBF75_TypeDefinitionIndex = 21240;

class Class_3_F2FEBAAB4D6BBF75 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::FiveDimCustomScreenTransferStyle JJIDJALHONN; // 0x18
	::System::Boolean AHIBJAAJJKI; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2FEBAAB4D6BBF75__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_56AA6EAE795B6969(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F2FEBAAB4D6BBF75*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F2FEBAAB4D6BBF75*&))((::PBYTE)hIl2Cpp + CLASS_3_F2FEBAAB4D6BBF75_METHOD_3_56AA6EAE795B6969_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_70D89F22B6EB766C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F2FEBAAB4D6BBF75* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F2FEBAAB4D6BBF75*))((::PBYTE)hIl2Cpp + CLASS_3_F2FEBAAB4D6BBF75_METHOD_3_70D89F22B6EB766C_OFFSET))(a1, a2);
	}
};

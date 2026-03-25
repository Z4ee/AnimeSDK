#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CableProcedural; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_46FEFE987AF60A5E_CLASS_1_FAD46716BE584497_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11119280)
#define CLASS_1_46FEFE987AF60A5E_CLASS_1_FAD46716BE584497_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x111194D0)
#define CLASS_1_46FEFE987AF60A5E_CLASS_1_FAD46716BE584497__CTOR_OFFSET UNITYSDK_OFFSET(0x111192F0)

inline static constexpr unsigned int Class_1_46FEFE987AF60A5E_Class_1_FAD46716BE584497_TypeDefinitionIndex = 48984;

class Class_1_46FEFE987AF60A5E_Class_1_FAD46716BE584497 : public ::System::Object
{
public:
	::RPG::Client::CableProcedural* Field_1_1; // 0x10
	::RPG::GameCore::GameEntity* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FEFE987AF60A5E_CLASS_1_FAD46716BE584497__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FEFE987AF60A5E_CLASS_1_FAD46716BE584497_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46FEFE987AF60A5E_CLASS_1_FAD46716BE584497_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};

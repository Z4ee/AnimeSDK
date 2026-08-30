#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinServantType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_4534392E87FC5ACC_METHOD_3_237DE7154300C94D_OFFSET UNITYSDK_OFFSET(0x1D0F23A0)
#define CLASS_3_4534392E87FC5ACC_METHOD_3_4EB4DD7CBD5AE076_OFFSET UNITYSDK_OFFSET(0x1D0F23E0)
#define CLASS_3_4534392E87FC5ACC__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F23D0)

inline static constexpr unsigned int Class_3_4534392E87FC5ACC_TypeDefinitionIndex = 19705;

class Class_3_4534392E87FC5ACC : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::FateRinServantType KJDGJHAAMNJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4534392E87FC5ACC__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_237DE7154300C94D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_4534392E87FC5ACC*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_4534392E87FC5ACC*&))((::PBYTE)hIl2Cpp + CLASS_3_4534392E87FC5ACC_METHOD_3_237DE7154300C94D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4EB4DD7CBD5AE076(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_4534392E87FC5ACC* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_4534392E87FC5ACC*))((::PBYTE)hIl2Cpp + CLASS_3_4534392E87FC5ACC_METHOD_3_4EB4DD7CBD5AE076_OFFSET))(a1, a2);
	}
};

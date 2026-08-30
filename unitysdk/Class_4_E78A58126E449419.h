#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesAIState.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_4_E78A58126E449419_METHOD_4_509114C78249BEAB_OFFSET UNITYSDK_OFFSET(0x1CCA95C0)
#define CLASS_4_E78A58126E449419_METHOD_4_56A65F877CC4A890_OFFSET UNITYSDK_OFFSET(0x1CCA9580)
#define CLASS_4_E78A58126E449419__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCA95B0)

inline static constexpr unsigned int Class_4_E78A58126E449419_TypeDefinitionIndex = 21087;

class Class_4_E78A58126E449419 : public ::RPG::GameCore::STTaskConfig
{
public:
	::RPG::GameCore::ChenLingFesAIState MEPFOEEGBEA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E78A58126E449419__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_56A65F877CC4A890(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_E78A58126E449419*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_E78A58126E449419*&))((::PBYTE)hIl2Cpp + CLASS_4_E78A58126E449419_METHOD_4_56A65F877CC4A890_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_509114C78249BEAB(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_E78A58126E449419* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_E78A58126E449419*))((::PBYTE)hIl2Cpp + CLASS_4_E78A58126E449419_METHOD_4_509114C78249BEAB_OFFSET))(a1, a2);
	}
};

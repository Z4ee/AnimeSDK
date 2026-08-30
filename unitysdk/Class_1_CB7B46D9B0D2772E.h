#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/System/Object.h"

class Class_1_EAF7984A8FAD6BE4;

#define CLASS_1_CB7B46D9B0D2772E_METHOD_1_CEA8A8DA5CDC25E2_OFFSET UNITYSDK_OFFSET(0xC434940)
#define CLASS_1_CB7B46D9B0D2772E_METHOD_1_FF86CAF6465767B3_OFFSET UNITYSDK_OFFSET(0xC434810)

inline static constexpr unsigned int Class_1_CB7B46D9B0D2772E_TypeDefinitionIndex = 49789;

class Class_1_CB7B46D9B0D2772E : public ::System::Object
{
public:
	static ::System::Boolean Method_1_FF86CAF6465767B3(::Class_1_EAF7984A8FAD6BE4* a1, ::RPG::GameCore::EnviromentControlPriority a2)
	{
		return ((::System::Boolean(*)(::Class_1_EAF7984A8FAD6BE4*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_1_CB7B46D9B0D2772E_METHOD_1_FF86CAF6465767B3_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_CEA8A8DA5CDC25E2(::Class_1_EAF7984A8FAD6BE4* a1, ::System::Single a2, ::RPG::GameCore::EnviromentControlPriority a3)
	{
		return ((::System::Boolean(*)(::Class_1_EAF7984A8FAD6BE4*, ::System::Single, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + CLASS_1_CB7B46D9B0D2772E_METHOD_1_CEA8A8DA5CDC25E2_OFFSET))(a1, a2, a3);
	}
};

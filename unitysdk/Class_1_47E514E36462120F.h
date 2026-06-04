#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TaskConfig; }

#define CLASS_1_47E514E36462120F_METHOD_1_3219EB470158DE67_OFFSET UNITYSDK_OFFSET(0x13610C90)
#define CLASS_1_47E514E36462120F_METHOD_1_62541B8F5D78BAEF_OFFSET UNITYSDK_OFFSET(0x13610C00)

inline static constexpr unsigned int Class_1_47E514E36462120F_TypeDefinitionIndex = 53670;

class Class_1_47E514E36462120F : public ::System::Object
{
public:
	static ::System::Boolean Method_1_62541B8F5D78BAEF(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_47E514E36462120F_METHOD_1_62541B8F5D78BAEF_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_3219EB470158DE67(::RPG::GameCore::TaskConfig* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + CLASS_1_47E514E36462120F_METHOD_1_3219EB470158DE67_OFFSET))(a1);
	}
};

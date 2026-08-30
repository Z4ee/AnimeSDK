#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlayerModule; }

#define CLASS_1_DA9FD26D5EDC0BF0_METHOD_1_5534A72804BC609C_OFFSET UNITYSDK_OFFSET(0x1521ADD0)
#define CLASS_1_DA9FD26D5EDC0BF0_METHOD_1_82D31EE5CBCC3D57_OFFSET UNITYSDK_OFFSET(0x1521ACC0)
#define CLASS_1_DA9FD26D5EDC0BF0__CTOR_OFFSET UNITYSDK_OFFSET(0x1521AE50)

inline static constexpr unsigned int Class_1_DA9FD26D5EDC0BF0_TypeDefinitionIndex = 79732;

class Class_1_DA9FD26D5EDC0BF0 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA9FD26D5EDC0BF0__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::GenderType Method_1_82D31EE5CBCC3D57()
	{
		return ((::RPG::GameCore::GenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA9FD26D5EDC0BF0_METHOD_1_82D31EE5CBCC3D57_OFFSET))(this);
	}

	::RPG::Client::PlayerModule* Method_1_5534A72804BC609C()
	{
		return ((::RPG::Client::PlayerModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA9FD26D5EDC0BF0_METHOD_1_5534A72804BC609C_OFFSET))(this);
	}
};

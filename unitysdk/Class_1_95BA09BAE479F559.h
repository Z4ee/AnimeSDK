#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexAIStrategy.h"
#include "unitysdk/System/Object.h"

class Class_1_1C30CE192ABE4C54;
namespace RPG::GameCore { class AIGlobalVarsConfig; }
namespace RPG::GameCore { class AIVariable; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_95BA09BAE479F559_DISPOSE_OFFSET UNITYSDK_OFFSET(0x183ECA80)
#define CLASS_1_95BA09BAE479F559_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x183ECE00)
#define CLASS_1_95BA09BAE479F559_METHOD_1_528BD4865C714C5C_OFFSET UNITYSDK_OFFSET(0x183ECE20)
#define CLASS_1_95BA09BAE479F559_METHOD_1_6D7C68910A89535E_OFFSET UNITYSDK_OFFSET(0x183ECD30)
#define CLASS_1_95BA09BAE479F559_METHOD_1_84E7E0B4EA58877D_OFFSET UNITYSDK_OFFSET(0x183ECB10)
#define CLASS_1_95BA09BAE479F559_METHOD_1_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x183EC920)
#define CLASS_1_95BA09BAE479F559_METHOD_1_D94CB0E64E013CD7_OFFSET UNITYSDK_OFFSET(0x183ECC10)
#define CLASS_1_95BA09BAE479F559_METHOD_1_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0x183EC8D0)
#define CLASS_1_95BA09BAE479F559__CTOR_OFFSET UNITYSDK_OFFSET(0x183EC850)

inline static constexpr unsigned int Class_1_95BA09BAE479F559_TypeDefinitionIndex = 51862;

class Class_1_95BA09BAE479F559 : public ::System::Object
{
public:
	::RPG::GameCore::AIGlobalVarsConfig* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AIVariable*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95BA09BAE479F559__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95BA09BAE479F559_METHOD_1_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95BA09BAE479F559_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_84E7E0B4EA58877D(::System::String* a1, ::RPG::GameCore::AIVariable* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::AIVariable*))((::PBYTE)hIl2Cpp + CLASS_1_95BA09BAE479F559_METHOD_1_84E7E0B4EA58877D_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::AIVariable* Method_1_D94CB0E64E013CD7(::System::String* a1)
	{
		return ((::RPG::GameCore::AIVariable*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_95BA09BAE479F559_METHOD_1_D94CB0E64E013CD7_OFFSET))(this, a1);
	}

	::RPG::GameCore::ComplexAIStrategy Method_1_6D7C68910A89535E(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
	{
		return ((::RPG::GameCore::ComplexAIStrategy(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_95BA09BAE479F559_METHOD_1_6D7C68910A89535E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95BA09BAE479F559_METHOD_1_B2C0ADBFEA309440_OFFSET))(this);
	}

	::Class_1_1C30CE192ABE4C54* Method_1_528BD4865C714C5C()
	{
		return ((::Class_1_1C30CE192ABE4C54*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95BA09BAE479F559_METHOD_1_528BD4865C714C5C_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95BA09BAE479F559_METHOD_1_128774387667156B_OFFSET))(this);
	}
};

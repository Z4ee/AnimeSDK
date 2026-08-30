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

#define CLASS_1_95BA09BAE479F559_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157AEBA0)
#define CLASS_1_95BA09BAE479F559_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x157AEF20)
#define CLASS_1_95BA09BAE479F559_METHOD_1_528BD4865C714C5C_OFFSET UNITYSDK_OFFSET(0x157AEF40)
#define CLASS_1_95BA09BAE479F559_METHOD_1_6D7C68910A89535E_OFFSET UNITYSDK_OFFSET(0x157AEE50)
#define CLASS_1_95BA09BAE479F559_METHOD_1_7F4EBEC55EBE2D81_OFFSET UNITYSDK_OFFSET(0x157AEA00)
#define CLASS_1_95BA09BAE479F559_METHOD_1_84E7E0B4EA58877D_OFFSET UNITYSDK_OFFSET(0x157AEC30)
#define CLASS_1_95BA09BAE479F559_METHOD_1_D94CB0E64E013CD7_OFFSET UNITYSDK_OFFSET(0x157AED30)
#define CLASS_1_95BA09BAE479F559_METHOD_1_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x157AEA50)
#define CLASS_1_95BA09BAE479F559__CTOR_OFFSET UNITYSDK_OFFSET(0x157AE980)

inline static constexpr unsigned int Class_1_95BA09BAE479F559_TypeDefinitionIndex = 54546;

class Class_1_95BA09BAE479F559 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AIVariable*>* GKAMLONHMAD; // 0x10
	::RPG::GameCore::AIGlobalVarsConfig* FBDPOHAFNMF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95BA09BAE479F559__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7F4EBEC55EBE2D81()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95BA09BAE479F559_METHOD_1_7F4EBEC55EBE2D81_OFFSET))(this);
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

	::System::Void Method_1_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95BA09BAE479F559_METHOD_1_EAD10B3E55E2C4C5_OFFSET))(this);
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

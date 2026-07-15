#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1286;
class Class_1_0471857D35382E2E;
class Class_1_42D96751C1376DDB;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B9EDAC86F64196FA_METHOD_1_145893F2FB3A5D91_OFFSET UNITYSDK_OFFSET(0x183B4730)
#define CLASS_1_B9EDAC86F64196FA_METHOD_1_1ACF6FF0C08F1936_OFFSET UNITYSDK_OFFSET(0x183B4BE0)
#define CLASS_1_B9EDAC86F64196FA_METHOD_1_1E47304E326E432A_OFFSET UNITYSDK_OFFSET(0x183B5520)
#define CLASS_1_B9EDAC86F64196FA_METHOD_1_994C2F1D702A0331_OFFSET UNITYSDK_OFFSET(0x183B5250)
#define CLASS_1_B9EDAC86F64196FA_METHOD_1_A1812BAC495759F8_OFFSET UNITYSDK_OFFSET(0x183B5100)
#define CLASS_1_B9EDAC86F64196FA_METHOD_1_B3DEA8FA8F19936B_OFFSET UNITYSDK_OFFSET(0x183B51C0)
#define CLASS_1_B9EDAC86F64196FA__CTOR_OFFSET UNITYSDK_OFFSET(0x183B46C0)

inline static constexpr unsigned int Class_1_B9EDAC86F64196FA_TypeDefinitionIndex = 75874;

class Class_1_B9EDAC86F64196FA : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1286* Field_1_0; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_1286* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1286*))((::PBYTE)hIl2Cpp + CLASS_1_B9EDAC86F64196FA__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_145893F2FB3A5D91(::System::Collections::Generic::List_1<::Class_1_42D96751C1376DDB*>* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_42D96751C1376DDB*>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B9EDAC86F64196FA_METHOD_1_145893F2FB3A5D91_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1ACF6FF0C08F1936(::Class_1_42D96751C1376DDB* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_42D96751C1376DDB*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_B9EDAC86F64196FA_METHOD_1_1ACF6FF0C08F1936_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A1812BAC495759F8(::Class_1_0471857D35382E2E* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0471857D35382E2E*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B9EDAC86F64196FA_METHOD_1_A1812BAC495759F8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_994C2F1D702A0331(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_B9EDAC86F64196FA_METHOD_1_994C2F1D702A0331_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B3DEA8FA8F19936B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B9EDAC86F64196FA_METHOD_1_B3DEA8FA8F19936B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1E47304E326E432A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B9EDAC86F64196FA_METHOD_1_1E47304E326E432A_OFFSET))(this, a1);
	}
};

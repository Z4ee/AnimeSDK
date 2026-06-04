#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F49CA2983DD8D8E6.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"

class Class_0_16E4307DCC419505_401;
class Class_1_CB986F8DD1655D73;
class Class_1_DB457F2E821DD51D;
class Class_2_1DBE0E1023AFDBC5;
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_B5F5479DD9FD64DF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12374FA0)
#define CLASS_2_B5F5479DD9FD64DF_METHOD_2_1B9BCD64F419AAE9_OFFSET UNITYSDK_OFFSET(0x123750E0)
#define CLASS_2_B5F5479DD9FD64DF_METHOD_2_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x12375630)
#define CLASS_2_B5F5479DD9FD64DF_METHOD_2_8CA05BCD86E125DF_OFFSET UNITYSDK_OFFSET(0x12375000)
#define CLASS_2_B5F5479DD9FD64DF_METHOD_2_99ECCA006FCA089B_OFFSET UNITYSDK_OFFSET(0x12375520)
#define CLASS_2_B5F5479DD9FD64DF_METHOD_2_AF53AC45ED2466EB_OFFSET UNITYSDK_OFFSET(0x12375370)
#define CLASS_2_B5F5479DD9FD64DF_METHOD_2_BA068247ADF67C92_OFFSET UNITYSDK_OFFSET(0x12375570)
#define CLASS_2_B5F5479DD9FD64DF_METHOD_2_E684D9B954DFA019_OFFSET UNITYSDK_OFFSET(0x12375130)
#define CLASS_2_B5F5479DD9FD64DF__CTOR_OFFSET UNITYSDK_OFFSET(0x12374F20)

inline static constexpr unsigned int Class_2_B5F5479DD9FD64DF_TypeDefinitionIndex = 52242;

class Class_2_B5F5479DD9FD64DF : public ::Class_1_F49CA2983DD8D8E6
{
public:
	::System::String* Field_2_0; // 0x30
	::RPG::GameCore::EventManager* Field_2_1; // 0x38
	::Class_1_CB986F8DD1655D73* Field_2_2; // 0x40
	::RPG::GameCore::GameEntity* Field_2_3; // 0x48

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Class_2_1DBE0E1023AFDBC5* a2, ::Class_1_DB457F2E821DD51D* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_2_1DBE0E1023AFDBC5*, ::Class_1_DB457F2E821DD51D*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B5F5479DD9FD64DF__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5F5479DD9FD64DF_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::AnimStateLogicType Method_2_1B9BCD64F419AAE9()
	{
		return ((::RPG::GameCore::AnimStateLogicType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5F5479DD9FD64DF_METHOD_2_1B9BCD64F419AAE9_OFFSET))(this);
	}

	::System::Void Method_2_E684D9B954DFA019(::RPG::GameCore::AnimStateLogicType a1, ::Class_1_CB986F8DD1655D73* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType, ::Class_1_CB986F8DD1655D73*))((::PBYTE)hIl2Cpp + CLASS_2_B5F5479DD9FD64DF_METHOD_2_E684D9B954DFA019_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AF53AC45ED2466EB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B5F5479DD9FD64DF_METHOD_2_AF53AC45ED2466EB_OFFSET))(this, a1);
	}

	::System::Void Method_2_99ECCA006FCA089B(::RPG::GameCore::AnimStateLogicType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType))((::PBYTE)hIl2Cpp + CLASS_2_B5F5479DD9FD64DF_METHOD_2_99ECCA006FCA089B_OFFSET))(this, a1);
	}

	::System::Void Method_2_BA068247ADF67C92(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_B5F5479DD9FD64DF_METHOD_2_BA068247ADF67C92_OFFSET))(this, a1);
	}

	::System::Void Method_2_8CA05BCD86E125DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5F5479DD9FD64DF_METHOD_2_8CA05BCD86E125DF_OFFSET))(this);
	}

	::System::Void Method_2_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B5F5479DD9FD64DF_METHOD_2_3C927B51D2142A24_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_511;
class Class_1_43BD383C98B4C0C5_121;
class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class AIDecisionConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_1_E1281C4E82D9BC05_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16D002D0)
#define CLASS_1_E1281C4E82D9BC05_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x16D004F0)
#define CLASS_1_E1281C4E82D9BC05_METHOD_1_3C40424C29E0284B_OFFSET UNITYSDK_OFFSET(0x16D003A0)
#define CLASS_1_E1281C4E82D9BC05_METHOD_1_47192F8F1CDC4F83_OFFSET UNITYSDK_OFFSET(0x16D00E60)
#define CLASS_1_E1281C4E82D9BC05_METHOD_1_62DE73773FC6579E_OFFSET UNITYSDK_OFFSET(0x16D00180)
#define CLASS_1_E1281C4E82D9BC05_METHOD_1_63A75319D8C51064_OFFSET UNITYSDK_OFFSET(0x16D001F0)
#define CLASS_1_E1281C4E82D9BC05_METHOD_1_7325C483F9A2A3EE_OFFSET UNITYSDK_OFFSET(0x16D00460)
#define CLASS_1_E1281C4E82D9BC05_METHOD_1_B681CCB7CA0E61C0_OFFSET UNITYSDK_OFFSET(0x16D00960)
#define CLASS_1_E1281C4E82D9BC05_METHOD_1_CEBFF096B4C9D46B_OFFSET UNITYSDK_OFFSET(0x16D00510)
#define CLASS_1_E1281C4E82D9BC05_METHOD_1_D25CFA28E8C200FE_OFFSET UNITYSDK_OFFSET(0x16D00BC0)
#define CLASS_1_E1281C4E82D9BC05__CTOR_OFFSET UNITYSDK_OFFSET(0x16D00100)

inline static constexpr unsigned int Class_1_E1281C4E82D9BC05_TypeDefinitionIndex = 51857;

class Class_1_E1281C4E82D9BC05 : public ::System::Object
{
public:
	::RPG::GameCore::AIDecisionConfig* Field_1_0; // 0x10
	::Class_1_5F51D4049EA87B7B* Field_1_1; // 0x18
	::Class_1_43BD383C98B4C0C5_121* Field_1_2; // 0x20
	::RPG::GameCore::FixPoint Field_1_3; // 0x28

	::System::Void _ctor(::RPG::GameCore::AIDecisionConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AIDecisionConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_E1281C4E82D9BC05__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1281C4E82D9BC05_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_3C40424C29E0284B()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1281C4E82D9BC05_METHOD_1_3C40424C29E0284B_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_511* Method_1_7325C483F9A2A3EE(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_511*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E1281C4E82D9BC05_METHOD_1_7325C483F9A2A3EE_OFFSET))(this, a1);
	}

	::System::Void Method_1_CEBFF096B4C9D46B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1281C4E82D9BC05_METHOD_1_CEBFF096B4C9D46B_OFFSET))(this);
	}

	::System::Void Method_1_B681CCB7CA0E61C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1281C4E82D9BC05_METHOD_1_B681CCB7CA0E61C0_OFFSET))(this);
	}

	::System::Void Method_1_D25CFA28E8C200FE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E1281C4E82D9BC05_METHOD_1_D25CFA28E8C200FE_OFFSET))(this, a1);
	}

	::System::Void Method_1_62DE73773FC6579E(::RPG::GameCore::AIDecisionConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AIDecisionConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_E1281C4E82D9BC05_METHOD_1_62DE73773FC6579E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_63A75319D8C51064(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_E1281C4E82D9BC05_METHOD_1_63A75319D8C51064_OFFSET))(this, a1);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1281C4E82D9BC05_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::RPG::GameCore::TaskState Method_1_47192F8F1CDC4F83()
	{
		return ((::RPG::GameCore::TaskState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1281C4E82D9BC05_METHOD_1_47192F8F1CDC4F83_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_F3391C70DC37088D;
namespace RPG::Client { class ConfirmDialogContext; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_CFBD65ACDA38CCCB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x155CCA00)
#define CLASS_2_CFBD65ACDA38CCCB_METHOD_2_73C23613314BF1A1_OFFSET UNITYSDK_OFFSET(0x155CCCB0)
#define CLASS_2_CFBD65ACDA38CCCB_METHOD_2_E644604C8CC8D8E1_OFFSET UNITYSDK_OFFSET(0x155CCB10)
#define CLASS_2_CFBD65ACDA38CCCB_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x155CCFC0)
#define CLASS_2_CFBD65ACDA38CCCB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155CCA90)
#define CLASS_2_CFBD65ACDA38CCCB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x155CCF10)
#define CLASS_2_CFBD65ACDA38CCCB_TICK_OFFSET UNITYSDK_OFFSET(0x155CCF60)
#define CLASS_2_CFBD65ACDA38CCCB__CTOR_OFFSET UNITYSDK_OFFSET(0x155CC9F0)

inline static constexpr unsigned int Class_2_CFBD65ACDA38CCCB_TypeDefinitionIndex = 58677;

class Class_2_CFBD65ACDA38CCCB : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::ConfirmDialogContext* OGOFNHAGOPO; // 0x18
	::Class_1_F3391C70DC37088D* PJHNKKIDLBE; // 0x20
	::Il2CppArray<::System::Int32>* CFKLLAOPMOG; // 0x28
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TaskConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_CFBD65ACDA38CCCB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFBD65ACDA38CCCB_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFBD65ACDA38CCCB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_E644604C8CC8D8E1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CFBD65ACDA38CCCB_METHOD_2_E644604C8CC8D8E1_OFFSET))(this, a1);
	}

	::System::Void Method_2_73C23613314BF1A1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CFBD65ACDA38CCCB_METHOD_2_73C23613314BF1A1_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFBD65ACDA38CCCB_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CFBD65ACDA38CCCB_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CFBD65ACDA38CCCB_METHOD_2_FDE09C8D62639E3E_OFFSET))(this, a1);
	}
};

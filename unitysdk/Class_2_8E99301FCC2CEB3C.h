#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_F3391C70DC37088D;
namespace RPG::GameCore { class ConfirmCheckpointRecover; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_8E99301FCC2CEB3C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BB51C0)
#define CLASS_2_8E99301FCC2CEB3C_METHOD_2_5276488EF6F1DA44_OFFSET UNITYSDK_OFFSET(0x15BB5610)
#define CLASS_2_8E99301FCC2CEB3C_METHOD_2_CEE2550285AA5985_OFFSET UNITYSDK_OFFSET(0x15BB5440)
#define CLASS_2_8E99301FCC2CEB3C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15BB5260)
#define CLASS_2_8E99301FCC2CEB3C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15BB5800)
#define CLASS_2_8E99301FCC2CEB3C_TICK_OFFSET UNITYSDK_OFFSET(0x15BB5200)
#define CLASS_2_8E99301FCC2CEB3C__CTOR_OFFSET UNITYSDK_OFFSET(0x15BB5170)

inline static constexpr unsigned int Class_2_8E99301FCC2CEB3C_TypeDefinitionIndex = 58187;

class Class_2_8E99301FCC2CEB3C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_F3391C70DC37088D* GDLFJGENBDC; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::Class_1_F3391C70DC37088D* OMDKFBJCHBO; // 0x28
	::RPG::GameCore::ConfirmCheckpointRecover* OFKGLJOAMLD; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConfirmCheckpointRecover* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConfirmCheckpointRecover*))((::PBYTE)hIl2Cpp + CLASS_2_8E99301FCC2CEB3C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E99301FCC2CEB3C_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8E99301FCC2CEB3C_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E99301FCC2CEB3C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_CEE2550285AA5985(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8E99301FCC2CEB3C_METHOD_2_CEE2550285AA5985_OFFSET))(this, a1);
	}

	::System::Void Method_2_5276488EF6F1DA44(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8E99301FCC2CEB3C_METHOD_2_5276488EF6F1DA44_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E99301FCC2CEB3C_ONTASKRESET_OFFSET))(this);
	}
};

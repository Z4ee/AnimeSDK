#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_5436AF4270279182;
class Class_3_6954875F008CACFC;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_375DBCCB71AFCB8D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19FC0040)
#define CLASS_3_375DBCCB71AFCB8D_METHOD_3_3F0C8BDFB5C4839C_OFFSET UNITYSDK_OFFSET(0x19FBFE30)
#define CLASS_3_375DBCCB71AFCB8D_METHOD_3_EB6D1E58AC2AC25C_OFFSET UNITYSDK_OFFSET(0x19FBFCE0)
#define CLASS_3_375DBCCB71AFCB8D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19FBF9A0)
#define CLASS_3_375DBCCB71AFCB8D__CTOR_OFFSET UNITYSDK_OFFSET(0x19FBF920)

inline static constexpr unsigned int Class_3_375DBCCB71AFCB8D_TypeDefinitionIndex = 52949;

class Class_3_375DBCCB71AFCB8D : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_6954875F008CACFC*>
{
public:
	::Class_2_5436AF4270279182* ELJIPLEAKAP; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_6954875F008CACFC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_6954875F008CACFC*))((::PBYTE)hIl2Cpp + CLASS_3_375DBCCB71AFCB8D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_375DBCCB71AFCB8D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_375DBCCB71AFCB8D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_EB6D1E58AC2AC25C(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_375DBCCB71AFCB8D_METHOD_3_EB6D1E58AC2AC25C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_3F0C8BDFB5C4839C(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_375DBCCB71AFCB8D_METHOD_3_3F0C8BDFB5C4839C_OFFSET))(this, a1, a2);
	}
};

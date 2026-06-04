#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_5436AF4270279182;
class Class_3_DB896EF8435160DD;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_375DBCCB71AFCB8D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12ACC810)
#define CLASS_3_375DBCCB71AFCB8D_METHOD_3_3F0C8BDFB5C4839C_OFFSET UNITYSDK_OFFSET(0x12ACC600)
#define CLASS_3_375DBCCB71AFCB8D_METHOD_3_EB6D1E58AC2AC25C_OFFSET UNITYSDK_OFFSET(0x12ACC4B0)
#define CLASS_3_375DBCCB71AFCB8D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12ACC170)
#define CLASS_3_375DBCCB71AFCB8D__CTOR_OFFSET UNITYSDK_OFFSET(0x12ACC0F0)
#define CLASS_3_375DBCCB71AFCB8D___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12ACC860)

inline static constexpr unsigned int Class_3_375DBCCB71AFCB8D_TypeDefinitionIndex = 49271;

class Class_3_375DBCCB71AFCB8D : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_DB896EF8435160DD*>
{
public:
	::Class_2_5436AF4270279182* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_DB896EF8435160DD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_DB896EF8435160DD*))((::PBYTE)hIl2Cpp + CLASS_3_375DBCCB71AFCB8D__CTOR_OFFSET))(this, a1, a2);
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

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_375DBCCB71AFCB8D___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};

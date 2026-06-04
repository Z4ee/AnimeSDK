#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesItemFilterType.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_5436AF4270279182;
class Class_3_E0C0E5A2FEE22B08;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3DF34BDC901C620A_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13C1A770)
#define CLASS_3_3DF34BDC901C620A_1_METHOD_3_5DFD1448F4591EA1_OFFSET UNITYSDK_OFFSET(0x13C1A490)
#define CLASS_3_3DF34BDC901C620A_1_METHOD_3_86F340443E1C857C_OFFSET UNITYSDK_OFFSET(0x13C1A7B0)
#define CLASS_3_3DF34BDC901C620A_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13C1A1A0)
#define CLASS_3_3DF34BDC901C620A_1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13C1A720)
#define CLASS_3_3DF34BDC901C620A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13C1A120)
#define CLASS_3_3DF34BDC901C620A_1___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13C1AA40)
#define CLASS_3_3DF34BDC901C620A_1___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13C1A9F0)

inline static constexpr unsigned int Class_3_3DF34BDC901C620A_1_TypeDefinitionIndex = 49268;

class Class_3_3DF34BDC901C620A_1 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_E0C0E5A2FEE22B08*>
{
public:
	::Class_2_5436AF4270279182* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_E0C0E5A2FEE22B08* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_E0C0E5A2FEE22B08*))((::PBYTE)hIl2Cpp + CLASS_3_3DF34BDC901C620A_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3DF34BDC901C620A_1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3DF34BDC901C620A_1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3DF34BDC901C620A_1_DISPOSE_OFFSET))(this);
	}

	::System::Int32 Method_3_5DFD1448F4591EA1(::RPG::GameCore::ChenLingFesItemFilterType a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ChenLingFesItemFilterType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_3DF34BDC901C620A_1_METHOD_3_5DFD1448F4591EA1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_86F340443E1C857C(::Class_2_5436AF4270279182* a1, ::RPG::GameCore::ChenLingFesItemFilterType a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_5436AF4270279182*, ::RPG::GameCore::ChenLingFesItemFilterType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_3DF34BDC901C620A_1_METHOD_3_86F340443E1C857C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3DF34BDC901C620A_1___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3DF34BDC901C620A_1___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};

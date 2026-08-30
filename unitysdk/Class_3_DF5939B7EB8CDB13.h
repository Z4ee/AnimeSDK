#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSpecialStatisticsType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_A67459655C467518;
class Class_3_616D254EC2C455CD;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DF5939B7EB8CDB13_METHOD_3_145BEE9BBC06CCEE_OFFSET UNITYSDK_OFFSET(0x15626A10)
#define CLASS_3_DF5939B7EB8CDB13_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15626700)
#define CLASS_3_DF5939B7EB8CDB13__CTOR_OFFSET UNITYSDK_OFFSET(0x156266D0)

inline static constexpr unsigned int Class_3_DF5939B7EB8CDB13_TypeDefinitionIndex = 55908;

class Class_3_DF5939B7EB8CDB13 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_616D254EC2C455CD*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_616D254EC2C455CD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_616D254EC2C455CD*))((::PBYTE)hIl2Cpp + CLASS_3_DF5939B7EB8CDB13__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DF5939B7EB8CDB13_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_145BEE9BBC06CCEE(::Class_1_A67459655C467518* a1, ::RPG::GameCore::AvatarSpecialStatisticsType a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A67459655C467518*, ::RPG::GameCore::AvatarSpecialStatisticsType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_DF5939B7EB8CDB13_METHOD_3_145BEE9BBC06CCEE_OFFSET))(this, a1, a2, a3);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSpecialStatisticsType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_63FCD7401F25CCF9;
class Class_3_99BDA01B55ECE46A;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DF5939B7EB8CDB13_METHOD_3_145BEE9BBC06CCEE_OFFSET UNITYSDK_OFFSET(0x13841290)
#define CLASS_3_DF5939B7EB8CDB13_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13840F80)
#define CLASS_3_DF5939B7EB8CDB13__CTOR_OFFSET UNITYSDK_OFFSET(0x13840F50)

inline static constexpr unsigned int Class_3_DF5939B7EB8CDB13_TypeDefinitionIndex = 52040;

class Class_3_DF5939B7EB8CDB13 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_99BDA01B55ECE46A*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_99BDA01B55ECE46A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_99BDA01B55ECE46A*))((::PBYTE)hIl2Cpp + CLASS_3_DF5939B7EB8CDB13__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DF5939B7EB8CDB13_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_145BEE9BBC06CCEE(::Class_1_63FCD7401F25CCF9* a1, ::RPG::GameCore::AvatarSpecialStatisticsType a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63FCD7401F25CCF9*, ::RPG::GameCore::AvatarSpecialStatisticsType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_DF5939B7EB8CDB13_METHOD_3_145BEE9BBC06CCEE_OFFSET))(this, a1, a2, a3);
	}
};

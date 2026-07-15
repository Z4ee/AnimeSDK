#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_RtTask_1.h"

class Class_4_03EFB37613466871_2;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5F46B28464BC0299_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17AD7480)
#define CLASS_3_5F46B28464BC0299_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17AD75D0)
#define CLASS_3_5F46B28464BC0299__CTOR_OFFSET UNITYSDK_OFFSET(0x17AD7450)

inline static constexpr unsigned int Class_3_5F46B28464BC0299_TypeDefinitionIndex = 51246;

class Class_3_5F46B28464BC0299 : public ::RPG::GameCore::ST_RtTask_1<::Class_4_03EFB37613466871_2*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_03EFB37613466871_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_03EFB37613466871_2*))((::PBYTE)hIl2Cpp + CLASS_3_5F46B28464BC0299__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F46B28464BC0299_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F46B28464BC0299_ONTASKRESET_OFFSET))(this);
	}
};

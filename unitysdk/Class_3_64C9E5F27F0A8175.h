#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BB5C2228DBF7AE1F.h"

namespace RPG::GameCore { class GridFightWaitDragConsumable; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_64C9E5F27F0A8175_METHOD_3_1947BC35B7A7FCB8_OFFSET UNITYSDK_OFFSET(0x161735A0)
#define CLASS_3_64C9E5F27F0A8175_METHOD_3_BD6A3C745D127D79_OFFSET UNITYSDK_OFFSET(0x16173C30)
#define CLASS_3_64C9E5F27F0A8175_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x161736C0)
#define CLASS_3_64C9E5F27F0A8175_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16173B90)
#define CLASS_3_64C9E5F27F0A8175__CTOR_OFFSET UNITYSDK_OFFSET(0x16173590)

inline static constexpr unsigned int Class_3_64C9E5F27F0A8175_TypeDefinitionIndex = 53806;

class Class_3_64C9E5F27F0A8175 : public ::Class_2_BB5C2228DBF7AE1F
{
public:
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x28
	::RPG::GameCore::GridFightWaitDragConsumable* IGHAHBNLIJA; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GridFightWaitDragConsumable* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GridFightWaitDragConsumable*))((::PBYTE)hIl2Cpp + CLASS_3_64C9E5F27F0A8175__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1947BC35B7A7FCB8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64C9E5F27F0A8175_METHOD_3_1947BC35B7A7FCB8_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64C9E5F27F0A8175_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_64C9E5F27F0A8175_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_BD6A3C745D127D79(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_64C9E5F27F0A8175_METHOD_3_BD6A3C745D127D79_OFFSET))(this, a1);
	}
};

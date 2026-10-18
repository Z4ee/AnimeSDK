#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/Struct_2_F52539D238DC1365_1.h"

class Class_3_07C3C4D2990C49EE;
class Class_3_B82138AA71BA19A5;
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_55AB15CB25D9B9FD_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C2BA70)
#define CLASS_3_55AB15CB25D9B9FD_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C2BBD0)
#define CLASS_3_55AB15CB25D9B9FD_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15C2B960)

inline static constexpr unsigned int Class_3_55AB15CB25D9B9FD_1_TypeDefinitionIndex = 55042;

class Class_3_55AB15CB25D9B9FD_1 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_B82138AA71BA19A5*>
{
public:
	::Class_3_07C3C4D2990C49EE* CHOOMNGLJHI; // 0x28
	::System::Collections::Generic::List_1<::Struct_2_F52539D238DC1365_1>* MDDKBNLNMBN; // 0x30
	::Class_3_07C3C4D2990C49EE* LNMOCNDILJN; // 0x38
	::System::Collections::Generic::List_1<::Struct_2_F52539D238DC1365_1>* AAECKGKGJFG; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_B82138AA71BA19A5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_B82138AA71BA19A5*))((::PBYTE)hIl2Cpp + CLASS_3_55AB15CB25D9B9FD_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_55AB15CB25D9B9FD_1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_55AB15CB25D9B9FD_1_ONTASKBEGIN_OFFSET))(this);
	}
};

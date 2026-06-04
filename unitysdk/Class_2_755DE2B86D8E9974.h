#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_118.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_F9FBCC956DFCF137_5;
namespace RPG::GameCore { class AIDecisionBaseConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_755DE2B86D8E9974_METHOD_2_40F780724A36A3D2_OFFSET UNITYSDK_OFFSET(0x143FD8E0)
#define CLASS_2_755DE2B86D8E9974_METHOD_2_B88515D9B38F2F0D_OFFSET UNITYSDK_OFFSET(0x143FD810)
#define CLASS_2_755DE2B86D8E9974__CTOR_OFFSET UNITYSDK_OFFSET(0x143FD680)

inline static constexpr unsigned int Class_2_755DE2B86D8E9974_TypeDefinitionIndex = 50835;

class Class_2_755DE2B86D8E9974 : public ::Class_1_43BD383C98B4C0C5_118
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_F9FBCC956DFCF137_5*>* Field_2_1; // 0x18
	::RPG::GameCore::AIDecisionBaseConfig* Field_2_2; // 0x20

	::System::Void _ctor(::RPG::GameCore::AIDecisionBaseConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AIDecisionBaseConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_755DE2B86D8E9974__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_B88515D9B38F2F0D(::RPG::GameCore::FixPoint a1, ::System::Int32 a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_755DE2B86D8E9974_METHOD_2_B88515D9B38F2F0D_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_40F780724A36A3D2()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_755DE2B86D8E9974_METHOD_2_40F780724A36A3D2_OFFSET))(this);
	}
};

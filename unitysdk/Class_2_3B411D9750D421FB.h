#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/ShowAttackTimeType.h"

namespace RPG::GameCore { class ShowAttackTime; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_3B411D9750D421FB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17D9B640)
#define CLASS_2_3B411D9750D421FB_METHOD_2_F203519397590FDC_OFFSET UNITYSDK_OFFSET(0x17D9B940)
#define CLASS_2_3B411D9750D421FB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17D9B680)
#define CLASS_2_3B411D9750D421FB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17D9BA00)
#define CLASS_2_3B411D9750D421FB_TICK_OFFSET UNITYSDK_OFFSET(0x17D9BA50)
#define CLASS_2_3B411D9750D421FB__CTOR_OFFSET UNITYSDK_OFFSET(0x17D9B4F0)

inline static constexpr unsigned int Class_2_3B411D9750D421FB_TypeDefinitionIndex = 53903;

class Class_2_3B411D9750D421FB : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::GameCore::ShowAttackTime* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ShowAttackTimeType, ::System::String*>* Field_2_3; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowAttackTime* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowAttackTime*))((::PBYTE)hIl2Cpp + CLASS_2_3B411D9750D421FB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B411D9750D421FB_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B411D9750D421FB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B411D9750D421FB_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3B411D9750D421FB_TICK_OFFSET))(this, a1);
	}

	::System::String* Method_2_F203519397590FDC(::RPG::GameCore::ShowAttackTimeType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::ShowAttackTimeType))((::PBYTE)hIl2Cpp + CLASS_2_3B411D9750D421FB_METHOD_2_F203519397590FDC_OFFSET))(this, a1);
	}
};

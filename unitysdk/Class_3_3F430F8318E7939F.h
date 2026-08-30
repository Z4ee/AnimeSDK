#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_576F4DC5F5A776FC;
class Class_3_FA3DB7B30E78C0CA_39;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_3F430F8318E7939F_METHOD_3_31D2D05D09A8070B_OFFSET UNITYSDK_OFFSET(0xE2E7480)
#define CLASS_3_3F430F8318E7939F_METHOD_3_9FEE7BDC452CDEFB_OFFSET UNITYSDK_OFFSET(0xE2E72A0)
#define CLASS_3_3F430F8318E7939F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE2E6EC0)
#define CLASS_3_3F430F8318E7939F__CTOR_OFFSET UNITYSDK_OFFSET(0xE2E6E90)
#define CLASS_3_3F430F8318E7939F___STARTTUTORIALMATCH_G__ONMATCHFLOWEND_2_0_OFFSET UNITYSDK_OFFSET(0xE2E7510)

inline static constexpr unsigned int Class_3_3F430F8318E7939F_TypeDefinitionIndex = 58091;

class Class_3_3F430F8318E7939F : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_FA3DB7B30E78C0CA_39*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FA3DB7B30E78C0CA_39* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FA3DB7B30E78C0CA_39*))((::PBYTE)hIl2Cpp + CLASS_3_3F430F8318E7939F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3F430F8318E7939F_ONTASKBEGIN_OFFSET))(this);
	}

	static ::System::Void Method_3_9FEE7BDC452CDEFB(::Class_1_576F4DC5F5A776FC* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::Class_1_576F4DC5F5A776FC*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_3F430F8318E7939F_METHOD_3_9FEE7BDC452CDEFB_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_31D2D05D09A8070B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3F430F8318E7939F_METHOD_3_31D2D05D09A8070B_OFFSET))(a1);
	}

	static ::System::Void __StartTutorialMatch_g__OnMatchFlowEnd_2_0(::System::Object* a1)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_3F430F8318E7939F___STARTTUTORIALMATCH_G__ONMATCHFLOWEND_2_0_OFFSET))(a1);
	}
};

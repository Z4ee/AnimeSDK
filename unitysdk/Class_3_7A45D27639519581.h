#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_3F4D673D3F90D12C;
namespace RPG::GameCore { class ST_Side_MuteVision; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7A45D27639519581_METHOD_3_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x9577020)
#define CLASS_3_7A45D27639519581_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9576F30)
#define CLASS_3_7A45D27639519581_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9576FD0)
#define CLASS_3_7A45D27639519581_TICK_OFFSET UNITYSDK_OFFSET(0x95770E0)
#define CLASS_3_7A45D27639519581__CTOR_OFFSET UNITYSDK_OFFSET(0x9576ED0)
#define CLASS_3_7A45D27639519581___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x9577180)

inline static constexpr unsigned int Class_3_7A45D27639519581_TypeDefinitionIndex = 48225;

class Class_3_7A45D27639519581 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_MuteVision*>
{
public:
	::Class_2_3F4D673D3F90D12C* Field_3_3; // 0x28
	::System::Single Field_3_0; // 0x30
	::System::Boolean Field_3_2; // 0x34
	::System::Boolean Field_3_1; // 0x35

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_MuteVision* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_MuteVision*))((::PBYTE)hIl2Cpp + CLASS_3_7A45D27639519581__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7A45D27639519581_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7A45D27639519581_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7A45D27639519581_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7A45D27639519581_METHOD_3_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7A45D27639519581___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};

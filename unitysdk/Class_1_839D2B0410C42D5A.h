#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_A1F69E2229E56CFE;
namespace RPG::GameCore { template <typename T> class IFrameSyncOperationSource_1; }

#define CLASS_1_839D2B0410C42D5A_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA3F7540)
#define CLASS_1_839D2B0410C42D5A_GET_EXECUTEFRAME_OFFSET UNITYSDK_OFFSET(0xA3F7500)
#define CLASS_1_839D2B0410C42D5A_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0xA3F7520)
#define CLASS_1_839D2B0410C42D5A_SET_EXECUTEFRAME_OFFSET UNITYSDK_OFFSET(0xA3F7510)
#define CLASS_1_839D2B0410C42D5A_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0xA3F7530)
#define CLASS_1_839D2B0410C42D5A__CTOR_OFFSET UNITYSDK_OFFSET(0xA3F75D0)

inline static constexpr unsigned int Class_1_839D2B0410C42D5A_TypeDefinitionIndex = 50709;

class Class_1_839D2B0410C42D5A : public ::System::Object
{
public:
	::RPG::GameCore::IFrameSyncOperationSource_1<::Class_2_A1F69E2229E56CFE*>* _Source_k__BackingField; // 0x10
	::System::Int32 _ExecuteFrame_k__BackingField; // 0x18
	::System::UInt32 Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_839D2B0410C42D5A__CTOR_OFFSET))(this);
	}

	::System::Int32 get_ExecuteFrame()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_839D2B0410C42D5A_GET_EXECUTEFRAME_OFFSET))(this);
	}

	::System::Void set_ExecuteFrame(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_839D2B0410C42D5A_SET_EXECUTEFRAME_OFFSET))(this, a1);
	}

	::RPG::GameCore::IFrameSyncOperationSource_1<::Class_2_A1F69E2229E56CFE*>* get_Source()
	{
		return ((::RPG::GameCore::IFrameSyncOperationSource_1<::Class_2_A1F69E2229E56CFE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_839D2B0410C42D5A_GET_SOURCE_OFFSET))(this);
	}

	::System::Void set_Source(::RPG::GameCore::IFrameSyncOperationSource_1<::Class_2_A1F69E2229E56CFE*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IFrameSyncOperationSource_1<::Class_2_A1F69E2229E56CFE*>*))((::PBYTE)hIl2Cpp + CLASS_1_839D2B0410C42D5A_SET_SOURCE_OFFSET))(this, a1);
	}

	::System::Void Execute(::Class_2_A1F69E2229E56CFE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A1F69E2229E56CFE*))((::PBYTE)hIl2Cpp + CLASS_1_839D2B0410C42D5A_EXECUTE_OFFSET))(this, a1);
	}
};

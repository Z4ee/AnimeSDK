#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class TrainPartyPerformance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_ACD6077BAB92A2F2_STRUCT_2_014836B908323005_METHOD_2_AB4C540057F9A269_OFFSET UNITYSDK_OFFSET(0x14E79B0)
#define CLASS_1_ACD6077BAB92A2F2_STRUCT_2_014836B908323005_METHOD_2_E631B63295647DB5_OFFSET UNITYSDK_OFFSET(0x14E79A0)

inline static constexpr unsigned int Class_1_ACD6077BAB92A2F2_Struct_2_014836B908323005_TypeDefinitionIndex = 48773;

struct alignas(8) Class_1_ACD6077BAB92A2F2_Struct_2_014836B908323005
{
	::System::Collections::Generic::List_1<::RPG::GameCore::TrainPartyPerformance*>* Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::TrainPartyPerformance*>* Field_2_1; // 0x18

	::System::Void Method_2_E631B63295647DB5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACD6077BAB92A2F2_STRUCT_2_014836B908323005_METHOD_2_E631B63295647DB5_OFFSET))(this);
	}

	::System::Void Method_2_AB4C540057F9A269(::RPG::GameCore::TrainPartyPerformance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TrainPartyPerformance*))((::PBYTE)hIl2Cpp + CLASS_1_ACD6077BAB92A2F2_STRUCT_2_014836B908323005_METHOD_2_AB4C540057F9A269_OFFSET))(this, a1);
	}
};

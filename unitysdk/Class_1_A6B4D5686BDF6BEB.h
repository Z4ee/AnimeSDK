#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1ED936FF8C554768.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TeamBuildConfigRow; }

#define CLASS_1_A6B4D5686BDF6BEB_GET_CANDIDATEPOOLIDS_OFFSET UNITYSDK_OFFSET(0x12B0E590)
#define CLASS_1_A6B4D5686BDF6BEB_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x12B0E580)
#define CLASS_1_A6B4D5686BDF6BEB_METHOD_1_BAB4E7DC03EB99C0_OFFSET UNITYSDK_OFFSET(0x12B0E5A0)
#define CLASS_1_A6B4D5686BDF6BEB__CTOR_OFFSET UNITYSDK_OFFSET(0x12B0E870)

inline static constexpr unsigned int Class_1_A6B4D5686BDF6BEB_TypeDefinitionIndex = 62775;

class Class_1_A6B4D5686BDF6BEB : public ::System::Object
{
public:
	::Il2CppArray<::Il2CppArray<::System::UInt32>*>* _CandidatePoolIDs_k__BackingField; // 0x10
	::Struct_2_1ED936FF8C554768 _Identifier_k__BackingField; // 0x18

	::System::Void _ctor(::Struct_2_1ED936FF8C554768& a1, ::Il2CppArray<::Il2CppArray<::System::UInt32>*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_1ED936FF8C554768&, ::Il2CppArray<::Il2CppArray<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + CLASS_1_A6B4D5686BDF6BEB__CTOR_OFFSET))(this, a1, a2);
	}

	::Struct_2_1ED936FF8C554768 get_Identifier()
	{
		return ((::Struct_2_1ED936FF8C554768(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6B4D5686BDF6BEB_GET_IDENTIFIER_OFFSET))(this);
	}

	::Il2CppArray<::Il2CppArray<::System::UInt32>*>* get_CandidatePoolIDs()
	{
		return ((::Il2CppArray<::Il2CppArray<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6B4D5686BDF6BEB_GET_CANDIDATEPOOLIDS_OFFSET))(this);
	}

	static ::Class_1_A6B4D5686BDF6BEB* Method_1_BAB4E7DC03EB99C0(::RPG::GameCore::TeamBuildConfigRow* a1)
	{
		return ((::Class_1_A6B4D5686BDF6BEB*(*)(::RPG::GameCore::TeamBuildConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_A6B4D5686BDF6BEB_METHOD_1_BAB4E7DC03EB99C0_OFFSET))(a1);
	}
};

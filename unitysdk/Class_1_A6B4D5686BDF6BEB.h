#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_276321B6B122C69C_6.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TeamBuildConfigRow; }

#define CLASS_1_A6B4D5686BDF6BEB_GET_CANDIDATEPOOLIDS_OFFSET UNITYSDK_OFFSET(0xB9662E0)
#define CLASS_1_A6B4D5686BDF6BEB_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xB9662D0)
#define CLASS_1_A6B4D5686BDF6BEB_METHOD_1_2AB34FE959A47862_OFFSET UNITYSDK_OFFSET(0xB9662F0)
#define CLASS_1_A6B4D5686BDF6BEB__CTOR_OFFSET UNITYSDK_OFFSET(0xB966530)

inline static constexpr unsigned int Class_1_A6B4D5686BDF6BEB_TypeDefinitionIndex = 68086;

class Class_1_A6B4D5686BDF6BEB : public ::System::Object
{
public:
	::Il2CppArray<::Il2CppArray<::System::UInt32>*>* _CandidatePoolIDs_k__BackingField; // 0x10
	::Struct_2_276321B6B122C69C_6 _Identifier_k__BackingField; // 0x18

	::System::Void _ctor(::Struct_2_276321B6B122C69C_6& a1, ::Il2CppArray<::Il2CppArray<::System::UInt32>*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_276321B6B122C69C_6&, ::Il2CppArray<::Il2CppArray<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + CLASS_1_A6B4D5686BDF6BEB__CTOR_OFFSET))(this, a1, a2);
	}

	::Struct_2_276321B6B122C69C_6 get_Identifier()
	{
		return ((::Struct_2_276321B6B122C69C_6(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6B4D5686BDF6BEB_GET_IDENTIFIER_OFFSET))(this);
	}

	::Il2CppArray<::Il2CppArray<::System::UInt32>*>* get_CandidatePoolIDs()
	{
		return ((::Il2CppArray<::Il2CppArray<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6B4D5686BDF6BEB_GET_CANDIDATEPOOLIDS_OFFSET))(this);
	}

	static ::Class_1_A6B4D5686BDF6BEB* Method_1_2AB34FE959A47862(::RPG::GameCore::TeamBuildConfigRow* a1)
	{
		return ((::Class_1_A6B4D5686BDF6BEB*(*)(::RPG::GameCore::TeamBuildConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_A6B4D5686BDF6BEB_METHOD_1_2AB34FE959A47862_OFFSET))(a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AimSolver_Struct_2_CC346D804C45C8EA.h"
#include "unitysdk/Struct_2_4EA80D691DA591E4.h"
#include "unitysdk/Struct_2_5D16D4C3379FF23A.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_934D15C6B55FFFEC_METHOD_2_30B6287B6A8DE2BF_OFFSET UNITYSDK_OFFSET(0xD4710)
#define STRUCT_2_934D15C6B55FFFEC_METHOD_2_87B9DBEA11CD8D35_OFFSET UNITYSDK_OFFSET(0xD4770)
#define STRUCT_2_934D15C6B55FFFEC_METHOD_2_AC3D041EA6F5D8CC_OFFSET UNITYSDK_OFFSET(0xD4780)
#define STRUCT_2_934D15C6B55FFFEC_METHOD_2_CCB4A821E6A9C153_OFFSET UNITYSDK_OFFSET(0xD4790)

inline static constexpr unsigned int Struct_2_934D15C6B55FFFEC_TypeDefinitionIndex = 63105;

struct alignas(8) Struct_2_934D15C6B55FFFEC
{
	::System::Boolean Field_2_0; // 0x10
	::Il2CppArray<::Struct_2_4EA80D691DA591E4>* Field_2_1; // 0x18
	::Il2CppArray<::Struct_2_5D16D4C3379FF23A>* Field_2_2; // 0x20
	::Il2CppArray<::RPG::Client::AimSolver_Struct_2_CC346D804C45C8EA>* Field_2_3; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* Field_2_4; // 0x30

	::System::Boolean Method_2_30B6287B6A8DE2BF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_934D15C6B55FFFEC_METHOD_2_30B6287B6A8DE2BF_OFFSET))(this);
	}

	::System::Boolean Method_2_87B9DBEA11CD8D35()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_934D15C6B55FFFEC_METHOD_2_87B9DBEA11CD8D35_OFFSET))(this);
	}

	::System::Boolean Method_2_AC3D041EA6F5D8CC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_934D15C6B55FFFEC_METHOD_2_AC3D041EA6F5D8CC_OFFSET))(this);
	}

	/*
	::System::Void Method_2_CCB4A821E6A9C153(::RootMotion::IKJob::IKTransformRef a1)
	{
		return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKTransformRef))((::PBYTE)hIl2Cpp + STRUCT_2_934D15C6B55FFFEC_METHOD_2_CCB4A821E6A9C153_OFFSET))(this, a1);
	}
	*/
};

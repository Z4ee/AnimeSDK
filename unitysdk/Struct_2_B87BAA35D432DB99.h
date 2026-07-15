#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AimSolver_Struct_2_CC346D804C45C8EA.h"
#include "unitysdk/Struct_2_4EA80D691DA591E4.h"
#include "unitysdk/Struct_2_796CB5BE9A5C5D0E.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_B87BAA35D432DB99_METHOD_2_30B6287B6A8DE2BF_OFFSET UNITYSDK_OFFSET(0x394B880)
#define STRUCT_2_B87BAA35D432DB99_METHOD_2_87B9DBEA11CD8D35_OFFSET UNITYSDK_OFFSET(0x394B8E0)
#define STRUCT_2_B87BAA35D432DB99_METHOD_2_AC3D041EA6F5D8CC_OFFSET UNITYSDK_OFFSET(0x394B8F0)
#define STRUCT_2_B87BAA35D432DB99_METHOD_2_CCB4A821E6A9C153_OFFSET UNITYSDK_OFFSET(0x394B900)

inline static constexpr unsigned int Struct_2_B87BAA35D432DB99_TypeDefinitionIndex = 65393;

struct alignas(8) Struct_2_B87BAA35D432DB99
{
	::System::Boolean Field_2_0; // 0x10
	::Il2CppArray<::Struct_2_4EA80D691DA591E4>* Field_2_1; // 0x18
	::Il2CppArray<::Struct_2_796CB5BE9A5C5D0E>* Field_2_2; // 0x20
	::Il2CppArray<::RPG::Client::AimSolver_Struct_2_CC346D804C45C8EA>* Field_2_3; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* Field_2_4; // 0x30

	::System::Boolean Method_2_30B6287B6A8DE2BF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B87BAA35D432DB99_METHOD_2_30B6287B6A8DE2BF_OFFSET))(this);
	}

	::System::Boolean Method_2_87B9DBEA11CD8D35()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B87BAA35D432DB99_METHOD_2_87B9DBEA11CD8D35_OFFSET))(this);
	}

	::System::Boolean Method_2_AC3D041EA6F5D8CC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B87BAA35D432DB99_METHOD_2_AC3D041EA6F5D8CC_OFFSET))(this);
	}

	/*
	::System::Void Method_2_CCB4A821E6A9C153(::RootMotion::IKJob::IKTransformRef a1)
	{
		return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKTransformRef))((::PBYTE)hIl2Cpp + STRUCT_2_B87BAA35D432DB99_METHOD_2_CCB4A821E6A9C153_OFFSET))(this, a1);
	}
	*/
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_07C3C4D2990C49EE;
class Class_3_65B48AA9E8A7B14E;
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_CA4F1EA69A356FB6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x173D8870)
#define CLASS_3_CA4F1EA69A356FB6_METHOD_3_2CB92D87A4C029F3_OFFSET UNITYSDK_OFFSET(0x173D8E40)
#define CLASS_3_CA4F1EA69A356FB6_METHOD_3_6B6AE2B3E1C3264F_OFFSET UNITYSDK_OFFSET(0x173D9010)
#define CLASS_3_CA4F1EA69A356FB6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x173D8B30)
#define CLASS_3_CA4F1EA69A356FB6__CTOR_OFFSET UNITYSDK_OFFSET(0x173D8610)

inline static constexpr unsigned int Class_3_CA4F1EA69A356FB6_TypeDefinitionIndex = 50145;

class Class_3_CA4F1EA69A356FB6 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_65B48AA9E8A7B14E*>
{
public:
	::Class_3_07C3C4D2990C49EE* Field_3_0; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_07C3C4D2990C49EE*>* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_65B48AA9E8A7B14E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_65B48AA9E8A7B14E*))((::PBYTE)hIl2Cpp + CLASS_3_CA4F1EA69A356FB6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA4F1EA69A356FB6_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA4F1EA69A356FB6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::UInt32 Method_3_2CB92D87A4C029F3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA4F1EA69A356FB6_METHOD_3_2CB92D87A4C029F3_OFFSET))(this);
	}

	::System::Void Method_3_6B6AE2B3E1C3264F(::Class_3_07C3C4D2990C49EE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_07C3C4D2990C49EE*))((::PBYTE)hIl2Cpp + CLASS_3_CA4F1EA69A356FB6_METHOD_3_6B6AE2B3E1C3264F_OFFSET))(this, a1);
	}
};

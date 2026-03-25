#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_2_A3AF96076A322B71_CLASS_1_7DA27B8F8ABD68D6_GETHPPROGRESS_OFFSET UNITYSDK_OFFSET(0xF391570)
#define CLASS_2_A3AF96076A322B71_CLASS_1_7DA27B8F8ABD68D6_GETKILLPROGRESS_OFFSET UNITYSDK_OFFSET(0xF391410)
#define CLASS_2_A3AF96076A322B71_CLASS_1_7DA27B8F8ABD68D6_METHOD_1_0208EC436624B061_OFFSET UNITYSDK_OFFSET(0xF3914B0)
#define CLASS_2_A3AF96076A322B71_CLASS_1_7DA27B8F8ABD68D6__CTOR_OFFSET UNITYSDK_OFFSET(0xF391010)

inline static constexpr unsigned int Class_2_A3AF96076A322B71_Class_1_7DA27B8F8ABD68D6_TypeDefinitionIndex = 44894;

class Class_2_A3AF96076A322B71_Class_1_7DA27B8F8ABD68D6 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* Field_1_1; // 0x10
	::Il2CppArray<::System::UInt32>* Field_1_0; // 0x18

	::System::Void _ctor(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_A3AF96076A322B71_CLASS_1_7DA27B8F8ABD68D6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 GetKillProgress(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_A3AF96076A322B71_CLASS_1_7DA27B8F8ABD68D6_GETKILLPROGRESS_OFFSET))(this, a1);
	}

	::System::UInt32 GetHPProgress(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_A3AF96076A322B71_CLASS_1_7DA27B8F8ABD68D6_GETHPPROGRESS_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_0208EC436624B061(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_A3AF96076A322B71_CLASS_1_7DA27B8F8ABD68D6_METHOD_1_0208EC436624B061_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C2937544035FD07F.h"

namespace System { class Action; }

#define CLASS_2_B2679A6C23E24D7D_1_METHOD_2_7CF132EF9D68586E_OFFSET UNITYSDK_OFFSET(0x14324700)
#define CLASS_2_B2679A6C23E24D7D_1_METHOD_2_A9CEE377F9340272_OFFSET UNITYSDK_OFFSET(0x143244D0)
#define CLASS_2_B2679A6C23E24D7D_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14324440)
#define CLASS_2_B2679A6C23E24D7D_1_ONSTART_OFFSET UNITYSDK_OFFSET(0x14324480)
#define CLASS_2_B2679A6C23E24D7D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x143244C0)

inline static constexpr unsigned int Class_2_B2679A6C23E24D7D_1_TypeDefinitionIndex = 69705;

class Class_2_B2679A6C23E24D7D_1 : public ::Class_1_C2937544035FD07F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2679A6C23E24D7D_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2679A6C23E24D7D_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2679A6C23E24D7D_1_ONSTART_OFFSET))(this);
	}

	::System::Void Method_2_A9CEE377F9340272(::Il2CppArray<::System::Int32>* a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_B2679A6C23E24D7D_1_METHOD_2_A9CEE377F9340272_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7CF132EF9D68586E(::System::Int32 a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_B2679A6C23E24D7D_1_METHOD_2_7CF132EF9D68586E_OFFSET))(this, a1, a2, a3);
	}
};

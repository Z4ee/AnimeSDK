#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_3_F56DB220284C0D9A_Class_1_3E05A2677F6F2423_7;

#define CLASS_3_F56DB220284C0D9A_CLASS_1_7662FCFBA3929E98_METHOD_1_0CE7D7736230C083_OFFSET UNITYSDK_OFFSET(0x17599F10)
#define CLASS_3_F56DB220284C0D9A_CLASS_1_7662FCFBA3929E98_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x17599F40)
#define CLASS_3_F56DB220284C0D9A_CLASS_1_7662FCFBA3929E98_METHOD_1_FADCC3D208CA04AD_OFFSET UNITYSDK_OFFSET(0x17599F70)
#define CLASS_3_F56DB220284C0D9A_CLASS_1_7662FCFBA3929E98__CTOR_OFFSET UNITYSDK_OFFSET(0x17599F00)

inline static constexpr unsigned int Class_3_F56DB220284C0D9A_Class_1_7662FCFBA3929E98_TypeDefinitionIndex = 74411;

class Class_3_F56DB220284C0D9A_Class_1_7662FCFBA3929E98 : public ::System::Object
{
public:
	::MoleMole::EntityHandle Field_1_0; // 0x10
	::Class_3_F56DB220284C0D9A_Class_1_3E05A2677F6F2423_7* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F56DB220284C0D9A_CLASS_1_7662FCFBA3929E98__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0CE7D7736230C083(::System::Int32 a1, ::UnityEngine::AnimatorStateInfo a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimatorStateInfo))((::PBYTE)hIl2Cpp + CLASS_3_F56DB220284C0D9A_CLASS_1_7662FCFBA3929E98_METHOD_1_0CE7D7736230C083_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F56DB220284C0D9A_CLASS_1_7662FCFBA3929E98_METHOD_1_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_1_FADCC3D208CA04AD(::UnityEngine::AnimatorStateInfo a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_F56DB220284C0D9A_CLASS_1_7662FCFBA3929E98_METHOD_1_FADCC3D208CA04AD_OFFSET))(this, a1, a2, a3, a4);
	}
};

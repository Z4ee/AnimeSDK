#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_BE9C061CE2BEA794_DISPOSE_OFFSET UNITYSDK_OFFSET(0x170061C0)
#define CLASS_1_BE9C061CE2BEA794_METHOD_1_2A0F87BBFF6387F7_OFFSET UNITYSDK_OFFSET(0x17006350)
#define CLASS_1_BE9C061CE2BEA794_METHOD_1_D4F033201DFBB6EB_OFFSET UNITYSDK_OFFSET(0x170063E0)
#define CLASS_1_BE9C061CE2BEA794_METHOD_1_DFEC27F1F6CA5A80_OFFSET UNITYSDK_OFFSET(0x17006210)
#define CLASS_1_BE9C061CE2BEA794_METHOD_1_EC860A8C4A16970C_OFFSET UNITYSDK_OFFSET(0x170063F0)
#define CLASS_1_BE9C061CE2BEA794__CTOR_OFFSET UNITYSDK_OFFSET(0x17006310)

inline static constexpr unsigned int Class_1_BE9C061CE2BEA794_TypeDefinitionIndex = 46860;

class Class_1_BE9C061CE2BEA794 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x20; // 0x0
	::Il2CppArray<::UnityEngine::RaycastHit>* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE9C061CE2BEA794__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE9C061CE2BEA794_DISPOSE_OFFSET))(this);
	}

	static ::Class_1_BE9C061CE2BEA794* Method_1_2A0F87BBFF6387F7()
	{
		return ((::Class_1_BE9C061CE2BEA794*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BE9C061CE2BEA794_METHOD_1_2A0F87BBFF6387F7_OFFSET))();
	}

	::Il2CppArray<::UnityEngine::RaycastHit>* Method_1_D4F033201DFBB6EB()
	{
		return ((::Il2CppArray<::UnityEngine::RaycastHit>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE9C061CE2BEA794_METHOD_1_D4F033201DFBB6EB_OFFSET))(this);
	}

	::System::Void Method_1_DFEC27F1F6CA5A80()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE9C061CE2BEA794_METHOD_1_DFEC27F1F6CA5A80_OFFSET))(this);
	}

	::System::Int32 Method_1_EC860A8C4A16970C(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BE9C061CE2BEA794_METHOD_1_EC860A8C4A16970C_OFFSET))(this, a1, a2, a3, a4);
	}
};

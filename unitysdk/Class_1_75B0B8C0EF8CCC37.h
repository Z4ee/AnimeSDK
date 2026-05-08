#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1747DAB17F36B4DF;
namespace UnityEngine { class Transform; }

#define CLASS_1_75B0B8C0EF8CCC37_INIT_OFFSET UNITYSDK_OFFSET(0x14CF1D20)
#define CLASS_1_75B0B8C0EF8CCC37_METHOD_1_B289B0A3665840C4_OFFSET UNITYSDK_OFFSET(0x14CF1D90)
#define CLASS_1_75B0B8C0EF8CCC37_ONSYNC_OFFSET UNITYSDK_OFFSET(0x14CF1550)
#define CLASS_1_75B0B8C0EF8CCC37_POLISH_OFFSET UNITYSDK_OFFSET(0x14CF1C10)
#define CLASS_1_75B0B8C0EF8CCC37_RECYCLE_OFFSET UNITYSDK_OFFSET(0x14CF1C70)
#define CLASS_1_75B0B8C0EF8CCC37__CTOR_OFFSET UNITYSDK_OFFSET(0x14CF1D80)

inline static constexpr unsigned int Class_1_75B0B8C0EF8CCC37_TypeDefinitionIndex = 53153;

class Class_1_75B0B8C0EF8CCC37 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_2; // 0x18
	::System::Single Field_1_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75B0B8C0EF8CCC37__CTOR_OFFSET))(this);
	}

	::System::Void OnSync(::Class_1_1747DAB17F36B4DF* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1747DAB17F36B4DF*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_75B0B8C0EF8CCC37_ONSYNC_OFFSET))(this, a1, a2);
	}

	::System::Void Polish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75B0B8C0EF8CCC37_POLISH_OFFSET))(this);
	}

	::System::Void Recycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75B0B8C0EF8CCC37_RECYCLE_OFFSET))(this);
	}

	::System::Void Init(::Class_1_1747DAB17F36B4DF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1747DAB17F36B4DF*))((::PBYTE)hIl2Cpp + CLASS_1_75B0B8C0EF8CCC37_INIT_OFFSET))(this, a1);
	}

	static ::Class_1_75B0B8C0EF8CCC37* Method_1_B289B0A3665840C4(::UnityEngine::Transform* a1, ::System::Single a2, ::UnityEngine::Vector3 a3)
	{
		return ((::Class_1_75B0B8C0EF8CCC37*(*)(::UnityEngine::Transform*, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_75B0B8C0EF8CCC37_METHOD_1_B289B0A3665840C4_OFFSET))(a1, a2, a3);
	}
};

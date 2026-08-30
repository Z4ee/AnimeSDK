#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_0C3D32DB2657826D_1_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xB7B6B70)
#define CLASS_1_0C3D32DB2657826D_1_METHOD_1_9D6C85109864ED0C_OFFSET UNITYSDK_OFFSET(0xB7B6A00)
#define CLASS_1_0C3D32DB2657826D_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB7B6B60)

inline static constexpr unsigned int Class_1_0C3D32DB2657826D_1_TypeDefinitionIndex = 68235;

class Class_1_0C3D32DB2657826D_1 : public ::System::Object
{
public:
	::UnityEngine::Transform* ILHILGNDLAJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C3D32DB2657826D_1__CTOR_OFFSET))(this);
	}

	static ::Class_1_0C3D32DB2657826D_1* Method_1_9D6C85109864ED0C()
	{
		return ((::Class_1_0C3D32DB2657826D_1*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0C3D32DB2657826D_1_METHOD_1_9D6C85109864ED0C_OFFSET))();
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C3D32DB2657826D_1_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}
};

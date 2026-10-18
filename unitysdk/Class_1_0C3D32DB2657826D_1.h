#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_0C3D32DB2657826D_1_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xB669350)
#define CLASS_1_0C3D32DB2657826D_1_METHOD_1_E11A60CCAF1D8111_OFFSET UNITYSDK_OFFSET(0xB669170)
#define CLASS_1_0C3D32DB2657826D_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB669340)

inline static constexpr unsigned int Class_1_0C3D32DB2657826D_1_TypeDefinitionIndex = 68243;

class Class_1_0C3D32DB2657826D_1 : public ::System::Object
{
public:
	::UnityEngine::Transform* ILHILGNDLAJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C3D32DB2657826D_1__CTOR_OFFSET))(this);
	}

	static ::Class_1_0C3D32DB2657826D_1* Method_1_E11A60CCAF1D8111()
	{
		return ((::Class_1_0C3D32DB2657826D_1*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0C3D32DB2657826D_1_METHOD_1_E11A60CCAF1D8111_OFFSET))();
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C3D32DB2657826D_1_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}
};

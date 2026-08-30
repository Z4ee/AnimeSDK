#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/LDWhiteBox/ShapeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Mesh; }

#define CLASS_1_CE64005BC1508F00_METHOD_1_040CF54B42782B94_OFFSET UNITYSDK_OFFSET(0x1AA40AD0)
#define CLASS_1_CE64005BC1508F00_METHOD_1_14E2DD9901813E20_OFFSET UNITYSDK_OFFSET(0x1AA40710)
#define CLASS_1_CE64005BC1508F00_METHOD_1_85E55A2FCC83A677_OFFSET UNITYSDK_OFFSET(0x1AA405A0)
#define CLASS_1_CE64005BC1508F00_METHOD_1_E79BDD48AEE26997_OFFSET UNITYSDK_OFFSET(0x1AA412C0)

inline static constexpr unsigned int Class_1_CE64005BC1508F00_TypeDefinitionIndex = 49364;

class Class_1_CE64005BC1508F00 : public ::System::Object
{
public:
	static ::System::Void Method_1_85E55A2FCC83A677(::UnityEngine::Mesh* a1, ::RPGTools::LDWhiteBox::ShapeType a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::UnityEngine::Mesh*, ::RPGTools::LDWhiteBox::ShapeType, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_CE64005BC1508F00_METHOD_1_85E55A2FCC83A677_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_14E2DD9901813E20(::UnityEngine::Mesh* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_CE64005BC1508F00_METHOD_1_14E2DD9901813E20_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_040CF54B42782B94(::UnityEngine::Mesh* a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CE64005BC1508F00_METHOD_1_040CF54B42782B94_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_E79BDD48AEE26997(::UnityEngine::Mesh* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_CE64005BC1508F00_METHOD_1_E79BDD48AEE26997_OFFSET))(a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F641FF8CBDE96A09.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Space.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }

#define CLASS_1_4CF211415491A034_METHOD_1_325AB6920C9E101A_OFFSET UNITYSDK_OFFSET(0x10F374E0)
#define CLASS_1_4CF211415491A034_METHOD_1_827DAA95B410E46D_OFFSET UNITYSDK_OFFSET(0x10F375C0)
#define CLASS_1_4CF211415491A034_METHOD_1_870ECA741D750424_OFFSET UNITYSDK_OFFSET(0x10F37630)
#define CLASS_1_4CF211415491A034_METHOD_1_E27EDB332461C683_OFFSET UNITYSDK_OFFSET(0x10F37550)

inline static constexpr unsigned int Class_1_4CF211415491A034_TypeDefinitionIndex = 65789;

class Class_1_4CF211415491A034 : public ::System::Object
{
public:
	static ::Struct_2_F641FF8CBDE96A09 Method_1_325AB6920C9E101A(::FluffyUnderware::Curvy::CurvySpline* a1)
	{
		return ((::Struct_2_F641FF8CBDE96A09(*)(::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + CLASS_1_4CF211415491A034_METHOD_1_325AB6920C9E101A_OFFSET))(a1);
	}

	static ::Struct_2_F641FF8CBDE96A09 Method_1_E27EDB332461C683(::FluffyUnderware::Curvy::CurvySpline* a1, ::System::Boolean a2)
	{
		return ((::Struct_2_F641FF8CBDE96A09(*)(::FluffyUnderware::Curvy::CurvySpline*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4CF211415491A034_METHOD_1_E27EDB332461C683_OFFSET))(a1, a2);
	}

	static ::Struct_2_F641FF8CBDE96A09 Method_1_827DAA95B410E46D(::FluffyUnderware::Curvy::CurvySpline* a1, ::UnityEngine::Space a2)
	{
		return ((::Struct_2_F641FF8CBDE96A09(*)(::FluffyUnderware::Curvy::CurvySpline*, ::UnityEngine::Space))((::PBYTE)hIl2Cpp + CLASS_1_4CF211415491A034_METHOD_1_827DAA95B410E46D_OFFSET))(a1, a2);
	}

	static ::Struct_2_F641FF8CBDE96A09 Method_1_870ECA741D750424(::FluffyUnderware::Curvy::CurvySpline* a1, ::System::Boolean a2, ::UnityEngine::Space a3)
	{
		return ((::Struct_2_F641FF8CBDE96A09(*)(::FluffyUnderware::Curvy::CurvySpline*, ::System::Boolean, ::UnityEngine::Space))((::PBYTE)hIl2Cpp + CLASS_1_4CF211415491A034_METHOD_1_870ECA741D750424_OFFSET))(a1, a2, a3);
	}
};

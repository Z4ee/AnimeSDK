#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B9E6DC87D4879FCD.h"
#include "unitysdk/System/Exception.h"

class Class_1_60B5E5A0CB5606E4;

#define CLASS_2_FC54E400239290F6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19DC3D50)
#define CLASS_2_FC54E400239290F6__CTOR_OFFSET UNITYSDK_OFFSET(0x19DC2BB0)

inline static constexpr unsigned int Class_2_FC54E400239290F6_TypeDefinitionIndex = 39855;

class Class_2_FC54E400239290F6 : public ::System::Exception
{
public:
	::Class_1_60B5E5A0CB5606E4* Field_2_2; // 0x88
	::Struct_2_B9E6DC87D4879FCD Field_2_0; // 0x90
	::Class_1_60B5E5A0CB5606E4* Field_2_1; // 0xA8

	::System::Void _ctor(::Struct_2_B9E6DC87D4879FCD a1, ::Class_1_60B5E5A0CB5606E4* a2, ::Class_1_60B5E5A0CB5606E4* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_B9E6DC87D4879FCD, ::Class_1_60B5E5A0CB5606E4*, ::Class_1_60B5E5A0CB5606E4*))((::PBYTE)hIl2Cpp + CLASS_2_FC54E400239290F6__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::Struct_2_B9E6DC87D4879FCD a1, ::Class_1_60B5E5A0CB5606E4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_B9E6DC87D4879FCD, ::Class_1_60B5E5A0CB5606E4*))((::PBYTE)hIl2Cpp + CLASS_2_FC54E400239290F6__CTOR_1_OFFSET))(this, a1, a2);
	}
};

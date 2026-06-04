#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_EE7757763407FF51_METHOD_3_2DFC332AF3EA3B47_OFFSET UNITYSDK_OFFSET(0x18FE19F0)
#define CLASS_3_EE7757763407FF51_METHOD_3_469ECD10EF199C13_OFFSET UNITYSDK_OFFSET(0x18FE1AA0)
#define CLASS_3_EE7757763407FF51__CTOR_OFFSET UNITYSDK_OFFSET(0x18FE1A60)

inline static constexpr unsigned int Class_3_EE7757763407FF51_TypeDefinitionIndex = 20274;

class Class_3_EE7757763407FF51 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_0; // 0x18
	::System::String* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EE7757763407FF51__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2DFC332AF3EA3B47(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_EE7757763407FF51*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_EE7757763407FF51*&))((::PBYTE)hIl2Cpp + CLASS_3_EE7757763407FF51_METHOD_3_2DFC332AF3EA3B47_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_469ECD10EF199C13(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_EE7757763407FF51* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_EE7757763407FF51*))((::PBYTE)hIl2Cpp + CLASS_3_EE7757763407FF51_METHOD_3_469ECD10EF199C13_OFFSET))(a1, a2);
	}
};

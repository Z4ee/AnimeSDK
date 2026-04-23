#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_C73AB3362B307540;
namespace System { class String; }

#define CLASS_4_1FB815F46FC4D5AE_METHOD_4_637CBE131CC2826D_OFFSET UNITYSDK_OFFSET(0x1838A3D0)
#define CLASS_4_1FB815F46FC4D5AE_METHOD_4_D0DFE8D5305B9B00_OFFSET UNITYSDK_OFFSET(0x1838A4F0)
#define CLASS_4_1FB815F46FC4D5AE__CTOR_OFFSET UNITYSDK_OFFSET(0x1838A470)

inline static constexpr unsigned int Class_4_1FB815F46FC4D5AE_TypeDefinitionIndex = 19062;

class Class_4_1FB815F46FC4D5AE : public ::RPG::GameCore::STTaskConfig
{
public:
	::Il2CppArray<::Class_2_C73AB3362B307540*>* Field_4_2; // 0x18
	::System::String* Field_4_0; // 0x20
	::System::Single Field_4_1; // 0x28
	::System::Single Field_4_3; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1FB815F46FC4D5AE__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_637CBE131CC2826D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_1FB815F46FC4D5AE*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_1FB815F46FC4D5AE*&))((::PBYTE)hIl2Cpp + CLASS_4_1FB815F46FC4D5AE_METHOD_4_637CBE131CC2826D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_D0DFE8D5305B9B00(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_1FB815F46FC4D5AE* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_1FB815F46FC4D5AE*))((::PBYTE)hIl2Cpp + CLASS_4_1FB815F46FC4D5AE_METHOD_4_D0DFE8D5305B9B00_OFFSET))(a1, a2);
	}
};

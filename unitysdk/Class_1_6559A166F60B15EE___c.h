#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_884CDB9D0FDFAF0D_8.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_6559A166F60B15EE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x155C8B50)
#define CLASS_1_6559A166F60B15EE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x155C8B90)
#define CLASS_1_6559A166F60B15EE___C___STARTBATTLE_B__7_0_OFFSET UNITYSDK_OFFSET(0x155C8BA0)

inline static constexpr unsigned int Class_1_6559A166F60B15EE___c_TypeDefinitionIndex = 60412;

class Class_1_6559A166F60B15EE___c : public ::System::Object
{
public:
	static ::Class_1_6559A166F60B15EE___c** StaticGet___9()
	{
		return (::Class_1_6559A166F60B15EE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6559A166F60B15EE___c_TypeDefinitionIndex)->GetStaticField(0x53B40);
	}
	static ::System::Func_2<::Struct_2_884CDB9D0FDFAF0D_8, ::System::Boolean>** StaticGet___9__7_0()
	{
		return (::System::Func_2<::Struct_2_884CDB9D0FDFAF0D_8, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6559A166F60B15EE___c_TypeDefinitionIndex)->GetStaticField(0x53B48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6559A166F60B15EE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6559A166F60B15EE___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __StartBattle_b__7_0(::Struct_2_884CDB9D0FDFAF0D_8 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_884CDB9D0FDFAF0D_8))((::PBYTE)hIl2Cpp + CLASS_1_6559A166F60B15EE___C___STARTBATTLE_B__7_0_OFFSET))(this, a1);
	}
};

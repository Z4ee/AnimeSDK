#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F581D47F54331173_Struct_2_E81A211B6662113C_4.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_F581D47F54331173___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B863B0)
#define CLASS_1_F581D47F54331173___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18B863F0)
#define CLASS_1_F581D47F54331173___C___GATHERBATTLEITEMDATA_B__11_0_OFFSET UNITYSDK_OFFSET(0x18B86400)

inline static constexpr unsigned int Class_1_F581D47F54331173___c_TypeDefinitionIndex = 72683;

class Class_1_F581D47F54331173___c : public ::System::Object
{
public:
	static ::Class_1_F581D47F54331173___c** StaticGet___9()
	{
		return (::Class_1_F581D47F54331173___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F581D47F54331173___c_TypeDefinitionIndex)->GetStaticField(0x59960);
	}
	static ::System::Func_2<::Class_1_F581D47F54331173_Struct_2_E81A211B6662113C_4, ::System::UInt32>** StaticGet___9__11_0()
	{
		return (::System::Func_2<::Class_1_F581D47F54331173_Struct_2_E81A211B6662113C_4, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F581D47F54331173___c_TypeDefinitionIndex)->GetStaticField(0x59968);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F581D47F54331173___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F581D47F54331173___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 __GatherBattleItemData_b__11_0(::Class_1_F581D47F54331173_Struct_2_E81A211B6662113C_4 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_1_F581D47F54331173_Struct_2_E81A211B6662113C_4))((::PBYTE)hIl2Cpp + CLASS_1_F581D47F54331173___C___GATHERBATTLEITEMDATA_B__11_0_OFFSET))(this, a1);
	}
};

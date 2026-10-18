#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_6754083DAC0EB34B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1662DF20)
#define CLASS_1_6754083DAC0EB34B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1662DF60)
#define CLASS_1_6754083DAC0EB34B___C__SHOULDEMPHASIZEWRONGLYPEAKED_B__0_0_OFFSET UNITYSDK_OFFSET(0x1662DF70)

inline static constexpr unsigned int Class_1_6754083DAC0EB34B___c_TypeDefinitionIndex = 79416;

class Class_1_6754083DAC0EB34B___c : public ::System::Object
{
public:
	static ::Class_1_6754083DAC0EB34B___c** StaticGet___9()
	{
		return (::Class_1_6754083DAC0EB34B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6754083DAC0EB34B___c_TypeDefinitionIndex)->GetStaticField(0x3230);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::System::Int32>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6754083DAC0EB34B___c_TypeDefinitionIndex)->GetStaticField(0x3238);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6754083DAC0EB34B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6754083DAC0EB34B___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _ShouldEmphasizeWronglyPeaked_b__0_0(::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_6754083DAC0EB34B___C__SHOULDEMPHASIZEWRONGLYPEAKED_B__0_0_OFFSET))(this, a1);
	}
};

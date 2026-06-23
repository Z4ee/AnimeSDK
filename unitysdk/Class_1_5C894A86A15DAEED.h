#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5C894A86A15DAEED_Struct_2_03315CF1422390A1_1.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1062;
namespace MoleMole::Battle { class Entity; }

#define CLASS_1_5C894A86A15DAEED_METHOD_1_255C2D8E523BDDFC_OFFSET UNITYSDK_OFFSET(0x102F8560)
#define CLASS_1_5C894A86A15DAEED_METHOD_1_6CA5FC6F24953CF4_OFFSET UNITYSDK_OFFSET(0x102F7F80)
#define CLASS_1_5C894A86A15DAEED_METHOD_1_7C2B8FFBE67ABB82_OFFSET UNITYSDK_OFFSET(0x102F8940)
#define CLASS_1_5C894A86A15DAEED_METHOD_1_C982C8295D29DA97_OFFSET UNITYSDK_OFFSET(0x102F83B0)
#define CLASS_1_5C894A86A15DAEED__CCTOR_OFFSET UNITYSDK_OFFSET(0x102F7F70)

inline static constexpr unsigned int Class_1_5C894A86A15DAEED_TypeDefinitionIndex = 77875;

class Class_1_5C894A86A15DAEED : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5C894A86A15DAEED_TypeDefinitionIndex)->GetStaticField(0xD190);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5C894A86A15DAEED__CCTOR_OFFSET))();
	}

	static ::Class_2_208CC9941471731A_1062* Method_1_6CA5FC6F24953CF4(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1062*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5C894A86A15DAEED_METHOD_1_6CA5FC6F24953CF4_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C982C8295D29DA97()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5C894A86A15DAEED_METHOD_1_C982C8295D29DA97_OFFSET))();
	}

	static ::System::Nullable_1<::Class_1_5C894A86A15DAEED_Struct_2_03315CF1422390A1_1> Method_1_255C2D8E523BDDFC(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Nullable_1<::Class_1_5C894A86A15DAEED_Struct_2_03315CF1422390A1_1>(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5C894A86A15DAEED_METHOD_1_255C2D8E523BDDFC_OFFSET))(a1, a2);
	}

	static ::MoleMole::Battle::Entity* Method_1_7C2B8FFBE67ABB82(::System::UInt32 a1)
	{
		return ((::MoleMole::Battle::Entity*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5C894A86A15DAEED_METHOD_1_7C2B8FFBE67ABB82_OFFSET))(a1);
	}
};

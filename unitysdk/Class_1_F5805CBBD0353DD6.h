#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationTimeAtmosphereType.h"
#include "unitysdk/Struct_2_CD1E75D6195024B4.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1128;
class Class_0_16E4307DCC419505_1130;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F5805CBBD0353DD6_CLEAR_OFFSET UNITYSDK_OFFSET(0x195AD8D0)
#define CLASS_1_F5805CBBD0353DD6_GET_ATMOSPHERECONFIG_OFFSET UNITYSDK_OFFSET(0x195AE450)
#define CLASS_1_F5805CBBD0353DD6_GET_SHOWEFFECT_OFFSET UNITYSDK_OFFSET(0x195AE300)
#define CLASS_1_F5805CBBD0353DD6_METHOD_1_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x195ADE30)
#define CLASS_1_F5805CBBD0353DD6_METHOD_1_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x195ADA80)
#define CLASS_1_F5805CBBD0353DD6_METHOD_1_D460460D84D0F4A2_OFFSET UNITYSDK_OFFSET(0x195ADB70)
#define CLASS_1_F5805CBBD0353DD6_METHOD_1_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x195ADE80)
#define CLASS_1_F5805CBBD0353DD6_METHOD_1_E9D89E37393D6CD0_OFFSET UNITYSDK_OFFSET(0x195ADD10)
#define CLASS_1_F5805CBBD0353DD6_METHOD_1_EE3CCB3EBB7312F7_OFFSET UNITYSDK_OFFSET(0x195AE320)
#define CLASS_1_F5805CBBD0353DD6_METHOD_1_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x195AD940)
#define CLASS_1_F5805CBBD0353DD6_SET_ATMOSPHERECONFIG_OFFSET UNITYSDK_OFFSET(0x195AE460)
#define CLASS_1_F5805CBBD0353DD6_SET_SHOWEFFECT_OFFSET UNITYSDK_OFFSET(0x195AE310)
#define CLASS_1_F5805CBBD0353DD6__CCTOR_OFFSET UNITYSDK_OFFSET(0x195AE4B0)
#define CLASS_1_F5805CBBD0353DD6__CTOR_OFFSET UNITYSDK_OFFSET(0x195AE470)

inline static constexpr unsigned int Class_1_F5805CBBD0353DD6_TypeDefinitionIndex = 72120;

class Class_1_F5805CBBD0353DD6 : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_1130** StaticGet_HNJFINNACLG()
	{
		return (::Class_0_16E4307DCC419505_1130**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5805CBBD0353DD6_TypeDefinitionIndex)->GetStaticField(0x27540);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ElationTimeAtmosphereType, ::Class_0_16E4307DCC419505_1130*>** StaticGet_JLJLOEGKLGJ()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ElationTimeAtmosphereType, ::Class_0_16E4307DCC419505_1130*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5805CBBD0353DD6_TypeDefinitionIndex)->GetStaticField(0x27548);
	}
	::Class_0_16E4307DCC419505_1130* _AtmosphereConfig_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_1128* APCENCANDNM; // 0x18
	::System::Boolean _ShowEffect_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5805CBBD0353DD6__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F5805CBBD0353DD6__CCTOR_OFFSET))();
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5805CBBD0353DD6_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_BCCEF225A11BDA90(::Struct_2_CD1E75D6195024B4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_CD1E75D6195024B4))((::PBYTE)hIl2Cpp + CLASS_1_F5805CBBD0353DD6_METHOD_1_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_1_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5805CBBD0353DD6_METHOD_1_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_1_D460460D84D0F4A2(::Struct_2_CD1E75D6195024B4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_CD1E75D6195024B4))((::PBYTE)hIl2Cpp + CLASS_1_F5805CBBD0353DD6_METHOD_1_D460460D84D0F4A2_OFFSET))(this, a1);
	}

	::System::Void Method_1_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5805CBBD0353DD6_METHOD_1_7646FFE662147970_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1130* Method_1_E9D89E37393D6CD0(::RPG::GameCore::ElationTimeAtmosphereType a1)
	{
		return ((::Class_0_16E4307DCC419505_1130*(*)(::PVOID, ::RPG::GameCore::ElationTimeAtmosphereType))((::PBYTE)hIl2Cpp + CLASS_1_F5805CBBD0353DD6_METHOD_1_E9D89E37393D6CD0_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_E693A0026D178D8E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F5805CBBD0353DD6_METHOD_1_E693A0026D178D8E_OFFSET))();
	}

	::System::Boolean get_ShowEffect()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5805CBBD0353DD6_GET_SHOWEFFECT_OFFSET))(this);
	}

	::System::Void set_ShowEffect(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F5805CBBD0353DD6_SET_SHOWEFFECT_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_EE3CCB3EBB7312F7()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5805CBBD0353DD6_METHOD_1_EE3CCB3EBB7312F7_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1130* get_AtmosphereConfig()
	{
		return ((::Class_0_16E4307DCC419505_1130*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5805CBBD0353DD6_GET_ATMOSPHERECONFIG_OFFSET))(this);
	}

	::System::Void set_AtmosphereConfig(::Class_0_16E4307DCC419505_1130* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1130*))((::PBYTE)hIl2Cpp + CLASS_1_F5805CBBD0353DD6_SET_ATMOSPHERECONFIG_OFFSET))(this, a1);
	}
};

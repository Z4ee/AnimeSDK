#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationTimeAtmosphereType.h"
#include "unitysdk/Struct_2_CD1E75D6195024B4.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1072;
class Class_0_16E4307DCC419505_1074;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F5805CBBD0353DD6_CLEAR_OFFSET UNITYSDK_OFFSET(0x18F2C280)
#define CLASS_1_F5805CBBD0353DD6_GET_ATMOSPHERECONFIG_OFFSET UNITYSDK_OFFSET(0x18F2CD50)
#define CLASS_1_F5805CBBD0353DD6_GET_SHOWEFFECT_OFFSET UNITYSDK_OFFSET(0x18F2CC00)
#define CLASS_1_F5805CBBD0353DD6_METHOD_1_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x18F2C830)
#define CLASS_1_F5805CBBD0353DD6_METHOD_1_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x18F2C7E0)
#define CLASS_1_F5805CBBD0353DD6_METHOD_1_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x18F2C430)
#define CLASS_1_F5805CBBD0353DD6_METHOD_1_D460460D84D0F4A2_OFFSET UNITYSDK_OFFSET(0x18F2C520)
#define CLASS_1_F5805CBBD0353DD6_METHOD_1_E9D89E37393D6CD0_OFFSET UNITYSDK_OFFSET(0x18F2C6C0)
#define CLASS_1_F5805CBBD0353DD6_METHOD_1_EE3CCB3EBB7312F7_OFFSET UNITYSDK_OFFSET(0x18F2CC20)
#define CLASS_1_F5805CBBD0353DD6_METHOD_1_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x18F2C2F0)
#define CLASS_1_F5805CBBD0353DD6_SET_ATMOSPHERECONFIG_OFFSET UNITYSDK_OFFSET(0x18F2CD60)
#define CLASS_1_F5805CBBD0353DD6_SET_SHOWEFFECT_OFFSET UNITYSDK_OFFSET(0x18F2CC10)
#define CLASS_1_F5805CBBD0353DD6__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F2CDB0)
#define CLASS_1_F5805CBBD0353DD6__CTOR_OFFSET UNITYSDK_OFFSET(0x18F2CD70)

inline static constexpr unsigned int Class_1_F5805CBBD0353DD6_TypeDefinitionIndex = 68922;

class Class_1_F5805CBBD0353DD6 : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_1074** StaticGet_Field_1_0()
	{
		return (::Class_0_16E4307DCC419505_1074**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5805CBBD0353DD6_TypeDefinitionIndex)->GetStaticField(0x5E2F0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ElationTimeAtmosphereType, ::Class_0_16E4307DCC419505_1074*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ElationTimeAtmosphereType, ::Class_0_16E4307DCC419505_1074*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F5805CBBD0353DD6_TypeDefinitionIndex)->GetStaticField(0x5E2F8);
	}
	::Class_0_16E4307DCC419505_1074* _AtmosphereConfig_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_1072* Field_1_3; // 0x18
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

	::Class_0_16E4307DCC419505_1074* Method_1_E9D89E37393D6CD0(::RPG::GameCore::ElationTimeAtmosphereType a1)
	{
		return ((::Class_0_16E4307DCC419505_1074*(*)(::PVOID, ::RPG::GameCore::ElationTimeAtmosphereType))((::PBYTE)hIl2Cpp + CLASS_1_F5805CBBD0353DD6_METHOD_1_E9D89E37393D6CD0_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_6D93101E4CE10A96()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F5805CBBD0353DD6_METHOD_1_6D93101E4CE10A96_OFFSET))();
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

	::Class_0_16E4307DCC419505_1074* get_AtmosphereConfig()
	{
		return ((::Class_0_16E4307DCC419505_1074*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5805CBBD0353DD6_GET_ATMOSPHERECONFIG_OFFSET))(this);
	}

	::System::Void set_AtmosphereConfig(::Class_0_16E4307DCC419505_1074* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1074*))((::PBYTE)hIl2Cpp + CLASS_1_F5805CBBD0353DD6_SET_ATMOSPHERECONFIG_OFFSET))(this, a1);
	}
};

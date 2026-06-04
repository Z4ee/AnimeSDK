#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_952A7C560FC1CD4B.h"
#include "unitysdk/EnviromentSystem/EnviromentPropertiesID.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"

class Class_1_44E98D8B63E395F0;
class Class_1_B70D230670A2440B;
class Class_1_EAF7984A8FAD6BE4;
namespace EnviromentSystemV2Space { class EnvDynamicPropLayoutProfile; }
namespace EnviromentSystemV2Space { class PropertyDataBase; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define CLASS_2_A9498771C1409A0B_METHOD_2_004598EA5EBAC892_OFFSET UNITYSDK_OFFSET(0xA9CD5B0)
#define CLASS_2_A9498771C1409A0B_METHOD_2_0756C0BF4C8BD127_OFFSET UNITYSDK_OFFSET(0xA9C6EE0)
#define CLASS_2_A9498771C1409A0B_METHOD_2_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0xA9CACF0)
#define CLASS_2_A9498771C1409A0B_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xA9C5FF0)
#define CLASS_2_A9498771C1409A0B_METHOD_2_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0xA9CD4F0)
#define CLASS_2_A9498771C1409A0B_METHOD_2_3DB1C321AC87EE9A_OFFSET UNITYSDK_OFFSET(0xA9CB3D0)
#define CLASS_2_A9498771C1409A0B_METHOD_2_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0xA9C5600)
#define CLASS_2_A9498771C1409A0B_METHOD_2_4EABA0671C5D4363_OFFSET UNITYSDK_OFFSET(0xA9C5680)
#define CLASS_2_A9498771C1409A0B_METHOD_2_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0xA9C6220)
#define CLASS_2_A9498771C1409A0B_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xA9CD480)
#define CLASS_2_A9498771C1409A0B_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0xA9CD550)
#define CLASS_2_A9498771C1409A0B_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA9CD420)
#define CLASS_2_A9498771C1409A0B_METHOD_2_6AD99CFFD5B86B2E_OFFSET UNITYSDK_OFFSET(0xA9C57F0)
#define CLASS_2_A9498771C1409A0B_METHOD_2_6C75A41592AE91E4_OFFSET UNITYSDK_OFFSET(0xA9C5610)
#define CLASS_2_A9498771C1409A0B_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA9C6140)
#define CLASS_2_A9498771C1409A0B_METHOD_2_B0EE1354C100D9C9_OFFSET UNITYSDK_OFFSET(0xA9C59A0)
#define CLASS_2_A9498771C1409A0B_METHOD_2_B1AD01C70CDC9165_OFFSET UNITYSDK_OFFSET(0xA9C5890)
#define CLASS_2_A9498771C1409A0B_METHOD_2_B1D0479D4182D4BF_OFFSET UNITYSDK_OFFSET(0xA9C6BF0)
#define CLASS_2_A9498771C1409A0B_METHOD_2_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0xA9CD4E0)
#define CLASS_2_A9498771C1409A0B_METHOD_2_C56DC3B2E26040B8_1_OFFSET UNITYSDK_OFFSET(0xA9C6DB0)
#define CLASS_2_A9498771C1409A0B_METHOD_2_C56DC3B2E26040B8_OFFSET UNITYSDK_OFFSET(0xA9C6C80)
#define CLASS_2_A9498771C1409A0B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA9C61E0)
#define CLASS_2_A9498771C1409A0B_METHOD_2_CAC86D6683AA455B_OFFSET UNITYSDK_OFFSET(0xA9C5710)
#define CLASS_2_A9498771C1409A0B_METHOD_2_CF60BD7B3C2C0430_OFFSET UNITYSDK_OFFSET(0xA9CB540)
#define CLASS_2_A9498771C1409A0B_METHOD_2_DE9367954300A5D4_OFFSET UNITYSDK_OFFSET(0xA9CBCE0)
#define CLASS_2_A9498771C1409A0B_METHOD_2_E26DC44DCE94AB5A_OFFSET UNITYSDK_OFFSET(0xA9CB310)
#define CLASS_2_A9498771C1409A0B_METHOD_2_E4B829802A26F311_OFFSET UNITYSDK_OFFSET(0xA9C5F40)
#define CLASS_2_A9498771C1409A0B_METHOD_2_E83C86A203FAF2A6_OFFSET UNITYSDK_OFFSET(0xA9C60B0)
#define CLASS_2_A9498771C1409A0B_METHOD_2_EAC2737A96E071C9_OFFSET UNITYSDK_OFFSET(0xA9C8100)
#define CLASS_2_A9498771C1409A0B_METHOD_2_F7E4CF2BB55691F2_OFFSET UNITYSDK_OFFSET(0xA9C7EF0)
#define CLASS_2_A9498771C1409A0B__CCTOR_OFFSET UNITYSDK_OFFSET(0xA9CD3D0)
#define CLASS_2_A9498771C1409A0B__CTOR_OFFSET UNITYSDK_OFFSET(0xA9C5390)

inline static constexpr unsigned int Class_2_A9498771C1409A0B_TypeDefinitionIndex = 46477;

class Class_2_A9498771C1409A0B : public ::Class_1_952A7C560FC1CD4B
{
public:
	static ::EnviromentSystemV2Space::EnvDynamicPropLayoutProfile** StaticGet_Field_2_0()
	{
		return (::EnviromentSystemV2Space::EnvDynamicPropLayoutProfile**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A9498771C1409A0B_TypeDefinitionIndex)->GetStaticField(0x685B0);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_A9498771C1409A0B_TypeDefinitionIndex)->GetStaticField(0x14060);
	}
	static ::System::Int32* StaticGet_Field_2_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_A9498771C1409A0B_TypeDefinitionIndex)->GetStaticField(0x14064);
	}
	static ::System::Int32* StaticGet_Field_2_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_A9498771C1409A0B_TypeDefinitionIndex)->GetStaticField(0x14068);
	}
	::System::Collections::Generic::Dictionary_2<::EnviromentSystem::EnviromentPropertiesID, ::Class_1_44E98D8B63E395F0*>* Field_2_4; // 0x28
	::System::Collections::Generic::List_1<::Class_1_44E98D8B63E395F0*>* Field_2_5; // 0x30
	::Il2CppArray<::System::Int32>* Field_2_6; // 0x38
	::Il2CppArray<::System::Int32>* Field_2_7; // 0x40
	::Class_1_B70D230670A2440B* Field_2_8; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_44E98D8B63E395F0*>* Field_2_9; // 0x50
	::System::Int32 Field_2_10; // 0x58
	::System::Boolean Field_2_11; // 0x5C
	::System::Boolean Field_2_12; // 0x5D
	::System::Int32 Field_2_13; // 0x60
	::System::Int32 Field_2_14; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::List_1<::Class_1_44E98D8B63E395F0*>* Method_2_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_44E98D8B63E395F0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_4993EDAE54425105_OFFSET))(this);
	}

	::System::Void Method_2_6C75A41592AE91E4(::System::Int32 a1, ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>*))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_6C75A41592AE91E4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CAC86D6683AA455B(::System::Int32 a1, ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>*))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_CAC86D6683AA455B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6AD99CFFD5B86B2E(::System::String* a1, ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>*))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_6AD99CFFD5B86B2E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B1AD01C70CDC9165(::System::String* a1, ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>*))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_B1AD01C70CDC9165_OFFSET))(this, a1, a2);
	}

	::Class_1_44E98D8B63E395F0* Method_2_4EABA0671C5D4363(::System::Int32 a1)
	{
		return ((::Class_1_44E98D8B63E395F0*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_4EABA0671C5D4363_OFFSET))(this, a1);
	}

	::Class_1_44E98D8B63E395F0* Method_2_B0EE1354C100D9C9(::Class_1_EAF7984A8FAD6BE4* a1, ::System::String* a2, ::System::Int32 a3)
	{
		return ((::Class_1_44E98D8B63E395F0*(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_B0EE1354C100D9C9_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_44E98D8B63E395F0* Method_2_E4B829802A26F311(::EnviromentSystem::EnviromentPropertiesID a1)
	{
		return ((::Class_1_44E98D8B63E395F0*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_E4B829802A26F311_OFFSET))(this, a1);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_E83C86A203FAF2A6(::Class_1_44E98D8B63E395F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_44E98D8B63E395F0*))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_E83C86A203FAF2A6_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_9681042564541CD6_OFFSET))();
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_51BBA01F511E6107_OFFSET))(this);
	}

	::System::Void Method_2_B1D0479D4182D4BF(::Class_1_EAF7984A8FAD6BE4* a1, ::EnviromentSystemV2Space::PropertyDataBase* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*, ::EnviromentSystemV2Space::PropertyDataBase*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_B1D0479D4182D4BF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C56DC3B2E26040B8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_C56DC3B2E26040B8_OFFSET))(this);
	}

	::System::Void Method_2_C56DC3B2E26040B8_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_C56DC3B2E26040B8_1_OFFSET))(this);
	}

	::System::Void Method_2_0756C0BF4C8BD127(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_0756C0BF4C8BD127_OFFSET))(this, a1);
	}

	::System::Void Method_2_EAC2737A96E071C9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_EAC2737A96E071C9_OFFSET))(this);
	}

	::System::Single Method_2_E26DC44DCE94AB5A(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_E26DC44DCE94AB5A_OFFSET))(this, a1);
	}

	::System::Void Method_2_0D372435D9CAE4BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_0D372435D9CAE4BC_OFFSET))(this);
	}

	static ::System::Void Method_2_F7E4CF2BB55691F2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_F7E4CF2BB55691F2_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_3DB1C321AC87EE9A(::System::Int32 a1, ::System::Int32 a2, ::Il2CppArray<::System::Int32>* a3, ::RPG::CustomRP::CustomLightQualityFilter a4)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::RPG::CustomRP::CustomLightQualityFilter))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_3DB1C321AC87EE9A_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_2_CF60BD7B3C2C0430(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_CF60BD7B3C2C0430_OFFSET))(this, a1);
	}

	::System::Void Method_2_DE9367954300A5D4(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_DE9367954300A5D4_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::Void Method_2_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_3C927B51D2142A24_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void Method_2_004598EA5EBAC892(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_004598EA5EBAC892_OFFSET))(this, a1);
	}
};

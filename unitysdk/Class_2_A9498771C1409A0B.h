#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_952A7C560FC1CD4B.h"
#include "unitysdk/EnviromentSystem/EnviromentPropertiesID.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"

class Class_1_5B239AF8CDCBD731;
class Class_1_C662E2F2A633F51D;
class Class_1_EAF7984A8FAD6BE4;
namespace EnviromentSystemV2Space { class EnvDynamicPropLayoutProfile; }
namespace EnviromentSystemV2Space { class PropertyDataBase; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define CLASS_2_A9498771C1409A0B_METHOD_2_0756C0BF4C8BD127_OFFSET UNITYSDK_OFFSET(0x11E37580)
#define CLASS_2_A9498771C1409A0B_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x11E365D0)
#define CLASS_2_A9498771C1409A0B_METHOD_2_253A66CCBFD9E6BC_OFFSET UNITYSDK_OFFSET(0x11E35C00)
#define CLASS_2_A9498771C1409A0B_METHOD_2_2E8AFDFF20EB7DF5_OFFSET UNITYSDK_OFFSET(0x11E35B80)
#define CLASS_2_A9498771C1409A0B_METHOD_2_3DB1C321AC87EE9A_OFFSET UNITYSDK_OFFSET(0x11E39FE0)
#define CLASS_2_A9498771C1409A0B_METHOD_2_3FC863B885E15ED5_OFFSET UNITYSDK_OFFSET(0x11E383E0)
#define CLASS_2_A9498771C1409A0B_METHOD_2_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x11E35AB0)
#define CLASS_2_A9498771C1409A0B_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x11E3C1A0)
#define CLASS_2_A9498771C1409A0B_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x11E3C280)
#define CLASS_2_A9498771C1409A0B_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x11E3C140)
#define CLASS_2_A9498771C1409A0B_METHOD_2_630A3B9C63A23882_OFFSET UNITYSDK_OFFSET(0x11E3C200)
#define CLASS_2_A9498771C1409A0B_METHOD_2_6E2356E48BB4B332_OFFSET UNITYSDK_OFFSET(0x11E3C2E0)
#define CLASS_2_A9498771C1409A0B_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x11E3C210)
#define CLASS_2_A9498771C1409A0B_METHOD_2_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x11E36820)
#define CLASS_2_A9498771C1409A0B_METHOD_2_915081C653EED5FB_OFFSET UNITYSDK_OFFSET(0x11E35AC0)
#define CLASS_2_A9498771C1409A0B_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x11E36740)
#define CLASS_2_A9498771C1409A0B_METHOD_2_AE5D2F3CFBE15D74_1_OFFSET UNITYSDK_OFFSET(0x11E37440)
#define CLASS_2_A9498771C1409A0B_METHOD_2_AE5D2F3CFBE15D74_OFFSET UNITYSDK_OFFSET(0x11E37300)
#define CLASS_2_A9498771C1409A0B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11E367E0)
#define CLASS_2_A9498771C1409A0B_METHOD_2_CB7363B8D75A199E_OFFSET UNITYSDK_OFFSET(0x11E37270)
#define CLASS_2_A9498771C1409A0B_METHOD_2_CF295EF977FF1E85_OFFSET UNITYSDK_OFFSET(0x11E3A910)
#define CLASS_2_A9498771C1409A0B_METHOD_2_D00DF1751C044660_OFFSET UNITYSDK_OFFSET(0x11E35E50)
#define CLASS_2_A9498771C1409A0B_METHOD_2_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0x11E39970)
#define CLASS_2_A9498771C1409A0B_METHOD_2_DE9367954300A5D4_OFFSET UNITYSDK_OFFSET(0x11E3A190)
#define CLASS_2_A9498771C1409A0B_METHOD_2_E26DC44DCE94AB5A_OFFSET UNITYSDK_OFFSET(0x11E39F20)
#define CLASS_2_A9498771C1409A0B_METHOD_2_E4B829802A26F311_OFFSET UNITYSDK_OFFSET(0x11E36510)
#define CLASS_2_A9498771C1409A0B_METHOD_2_E83C86A203FAF2A6_OFFSET UNITYSDK_OFFSET(0x11E366B0)
#define CLASS_2_A9498771C1409A0B_METHOD_2_EEEAE1AC770D8AEC_OFFSET UNITYSDK_OFFSET(0x11E35FE0)
#define CLASS_2_A9498771C1409A0B_METHOD_2_FCD96A53060DA74B_OFFSET UNITYSDK_OFFSET(0x11E35D60)
#define CLASS_2_A9498771C1409A0B__CCTOR_OFFSET UNITYSDK_OFFSET(0x11E3C0F0)
#define CLASS_2_A9498771C1409A0B__CTOR_OFFSET UNITYSDK_OFFSET(0x11E35840)

inline static constexpr unsigned int Class_2_A9498771C1409A0B_TypeDefinitionIndex = 45894;

class Class_2_A9498771C1409A0B : public ::Class_1_952A7C560FC1CD4B
{
public:
	static ::EnviromentSystemV2Space::EnvDynamicPropLayoutProfile** StaticGet_Field_2_7()
	{
		return (::EnviromentSystemV2Space::EnvDynamicPropLayoutProfile**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A9498771C1409A0B_TypeDefinitionIndex)->GetStaticField(0x525C0);
	}
	static ::System::Int32* StaticGet_Field_2_12()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_A9498771C1409A0B_TypeDefinitionIndex)->GetStaticField(0xFE30);
	}
	static ::System::Int32* StaticGet_Field_2_13()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_A9498771C1409A0B_TypeDefinitionIndex)->GetStaticField(0xFE34);
	}
	static ::System::Int32* StaticGet_Field_2_14()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_A9498771C1409A0B_TypeDefinitionIndex)->GetStaticField(0xFE38);
	}
	::System::Collections::Generic::Dictionary_2<::EnviromentSystem::EnviromentPropertiesID, ::Class_1_C662E2F2A633F51D*>* Field_2_0; // 0x28
	::Il2CppArray<::System::Int32>* Field_2_3; // 0x30
	::Class_1_5B239AF8CDCBD731* Field_2_9; // 0x38
	::Il2CppArray<::System::Int32>* Field_2_2; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_C662E2F2A633F51D*>* Field_2_8; // 0x48
	::System::Collections::Generic::List_1<::Class_1_C662E2F2A633F51D*>* Field_2_1; // 0x50
	::System::Int32 Field_2_4; // 0x58
	::System::Int32 Field_2_5; // 0x5C
	::System::Boolean Field_2_10; // 0x60
	::System::Boolean Field_2_11; // 0x61
	::System::Int32 Field_2_6; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::List_1<::Class_1_C662E2F2A633F51D*>* Method_2_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C662E2F2A633F51D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_4993EDAE54425105_OFFSET))(this);
	}

	::System::Void Method_2_915081C653EED5FB(::System::Int32 a1, ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>*))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_915081C653EED5FB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_253A66CCBFD9E6BC(::System::Int32 a1, ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>*))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_253A66CCBFD9E6BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FCD96A53060DA74B(::System::String* a1, ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>*))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_FCD96A53060DA74B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D00DF1751C044660(::System::String* a1, ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::Class_1_EAF7984A8FAD6BE4*>*))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_D00DF1751C044660_OFFSET))(this, a1, a2);
	}

	::Class_1_C662E2F2A633F51D* Method_2_2E8AFDFF20EB7DF5(::System::Int32 a1)
	{
		return ((::Class_1_C662E2F2A633F51D*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_2E8AFDFF20EB7DF5_OFFSET))(this, a1);
	}

	::Class_1_C662E2F2A633F51D* Method_2_EEEAE1AC770D8AEC(::Class_1_EAF7984A8FAD6BE4* a1, ::System::String* a2, ::System::Int32 a3)
	{
		return ((::Class_1_C662E2F2A633F51D*(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_EEEAE1AC770D8AEC_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_C662E2F2A633F51D* Method_2_E4B829802A26F311(::EnviromentSystem::EnviromentPropertiesID a1)
	{
		return ((::Class_1_C662E2F2A633F51D*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_E4B829802A26F311_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_E83C86A203FAF2A6(::Class_1_C662E2F2A633F51D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C662E2F2A633F51D*))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_E83C86A203FAF2A6_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_9681042564541CD6_OFFSET))();
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Void Method_2_CB7363B8D75A199E(::Class_1_EAF7984A8FAD6BE4* a1, ::EnviromentSystemV2Space::PropertyDataBase* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*, ::EnviromentSystemV2Space::PropertyDataBase*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_CB7363B8D75A199E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_AE5D2F3CFBE15D74()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_AE5D2F3CFBE15D74_OFFSET))(this);
	}

	::System::Void Method_2_AE5D2F3CFBE15D74_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_AE5D2F3CFBE15D74_1_OFFSET))(this);
	}

	::System::Void Method_2_0756C0BF4C8BD127(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_0756C0BF4C8BD127_OFFSET))(this, a1);
	}

	::System::Void Method_2_3FC863B885E15ED5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_3FC863B885E15ED5_OFFSET))(this);
	}

	::System::Single Method_2_E26DC44DCE94AB5A(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_E26DC44DCE94AB5A_OFFSET))(this, a1);
	}

	::System::Void Method_2_D799715F2EF979EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_D799715F2EF979EA_OFFSET))(this);
	}

	static ::System::Boolean Method_2_3DB1C321AC87EE9A(::System::Int32 a1, ::System::Int32 a2, ::Il2CppArray<::System::Int32>* a3, ::RPG::CustomRP::CustomLightQualityFilter a4)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::RPG::CustomRP::CustomLightQualityFilter))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_3DB1C321AC87EE9A_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_2_DE9367954300A5D4(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_DE9367954300A5D4_OFFSET))(this, a1);
	}

	::System::Void Method_2_CF295EF977FF1E85(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_CF295EF977FF1E85_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_630A3B9C63A23882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_630A3B9C63A23882_OFFSET))(this);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void Method_2_6E2356E48BB4B332(::UnityEngine::Rendering::CommandBuffer* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_A9498771C1409A0B_METHOD_2_6E2356E48BB4B332_OFFSET))(this, P0);
	}
};

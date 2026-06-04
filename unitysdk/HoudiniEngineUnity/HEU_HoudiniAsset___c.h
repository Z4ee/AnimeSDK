#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_AttributesStore; }
namespace HoudiniEngineUnity { class HEU_Curve; }
namespace HoudiniEngineUnity { class HEU_InputNode; }
namespace HoudiniEngineUnity { class HEU_MaterialData; }
namespace HoudiniEngineUnity { class HEU_ObjectNode; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define HOUDINIENGINEUNITY_HEU_HOUDINIASSET___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F06380)
#define HOUDINIENGINEUNITY_HEU_HOUDINIASSET___C__CLEARINVALIDCURVES_B__372_0_OFFSET UNITYSDK_OFFSET(0x17F06450)
#define HOUDINIENGINEUNITY_HEU_HOUDINIASSET___C__CLEARINVALIDLISTS_B__403_0_OFFSET UNITYSDK_OFFSET(0x17F06470)
#define HOUDINIENGINEUNITY_HEU_HOUDINIASSET___C__CLEARINVALIDLISTS_B__403_1_OFFSET UNITYSDK_OFFSET(0x17F06490)
#define HOUDINIENGINEUNITY_HEU_HOUDINIASSET___C__CLEARINVALIDLISTS_B__403_2_OFFSET UNITYSDK_OFFSET(0x17F064B0)
#define HOUDINIENGINEUNITY_HEU_HOUDINIASSET___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17F063C0)
#define HOUDINIENGINEUNITY_HEU_HOUDINIASSET___C__DOPOSTCOOKWORK_B__312_0_OFFSET UNITYSDK_OFFSET(0x17F063F0)
#define HOUDINIENGINEUNITY_HEU_HOUDINIASSET___C__GETNONPARAMETERINPUTNODES_B__274_0_OFFSET UNITYSDK_OFFSET(0x17F063D0)
#define HOUDINIENGINEUNITY_HEU_HOUDINIASSET___C__UPLOADATTRIBUTEVALUES_B__335_0_OFFSET UNITYSDK_OFFSET(0x17F06430)
#define HOUDINIENGINEUNITY_HEU_HOUDINIASSET___C__UPLOADCURVESPARAMETERS_B__334_0_OFFSET UNITYSDK_OFFSET(0x17F06410)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_HoudiniAsset___c_TypeDefinitionIndex = 37434;

	class HEU_HoudiniAsset___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::HoudiniEngineUnity::HEU_Curve*, ::System::Boolean>** StaticGet___9__334_0()
		{
			return (::System::Func_2<::HoudiniEngineUnity::HEU_Curve*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HEU_HoudiniAsset___c_TypeDefinitionIndex)->GetStaticField(0xCB90);
		}
		static ::System::Func_2<::HoudiniEngineUnity::HEU_ObjectNode*, ::System::Boolean>** StaticGet___9__312_0()
		{
			return (::System::Func_2<::HoudiniEngineUnity::HEU_ObjectNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HEU_HoudiniAsset___c_TypeDefinitionIndex)->GetStaticField(0xCB98);
		}
		static ::System::Func_2<::HoudiniEngineUnity::HEU_Curve*, ::System::Boolean>** StaticGet___9__403_1()
		{
			return (::System::Func_2<::HoudiniEngineUnity::HEU_Curve*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HEU_HoudiniAsset___c_TypeDefinitionIndex)->GetStaticField(0xCBA0);
		}
		static ::System::Func_2<::HoudiniEngineUnity::HEU_InputNode*, ::System::Boolean>** StaticGet___9__274_0()
		{
			return (::System::Func_2<::HoudiniEngineUnity::HEU_InputNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HEU_HoudiniAsset___c_TypeDefinitionIndex)->GetStaticField(0xCBA8);
		}
		static ::HoudiniEngineUnity::HEU_HoudiniAsset___c** StaticGet___9()
		{
			return (::HoudiniEngineUnity::HEU_HoudiniAsset___c**)Il2CppClass::FromTypeDefinitionIndex(HEU_HoudiniAsset___c_TypeDefinitionIndex)->GetStaticField(0xCBB0);
		}
		static ::System::Func_2<::HoudiniEngineUnity::HEU_ObjectNode*, ::System::Boolean>** StaticGet___9__403_0()
		{
			return (::System::Func_2<::HoudiniEngineUnity::HEU_ObjectNode*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HEU_HoudiniAsset___c_TypeDefinitionIndex)->GetStaticField(0xCBB8);
		}
		static ::System::Func_2<::HoudiniEngineUnity::HEU_AttributesStore*, ::System::Boolean>** StaticGet___9__335_0()
		{
			return (::System::Func_2<::HoudiniEngineUnity::HEU_AttributesStore*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HEU_HoudiniAsset___c_TypeDefinitionIndex)->GetStaticField(0xCBC0);
		}
		static ::System::Func_2<::HoudiniEngineUnity::HEU_MaterialData*, ::System::Boolean>** StaticGet___9__403_2()
		{
			return (::System::Func_2<::HoudiniEngineUnity::HEU_MaterialData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HEU_HoudiniAsset___c_TypeDefinitionIndex)->GetStaticField(0xCBC8);
		}
		static ::System::Func_2<::HoudiniEngineUnity::HEU_Curve*, ::System::Boolean>** StaticGet___9__372_0()
		{
			return (::System::Func_2<::HoudiniEngineUnity::HEU_Curve*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HEU_HoudiniAsset___c_TypeDefinitionIndex)->GetStaticField(0xCBD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSET___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSET___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetNonParameterInputNodes_b__274_0(::HoudiniEngineUnity::HEU_InputNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_InputNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSET___C__GETNONPARAMETERINPUTNODES_B__274_0_OFFSET))(this, a1);
		}

		::System::Boolean _DoPostCookWork_b__312_0(::HoudiniEngineUnity::HEU_ObjectNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_ObjectNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSET___C__DOPOSTCOOKWORK_B__312_0_OFFSET))(this, a1);
		}

		::System::Boolean _UploadCurvesParameters_b__334_0(::HoudiniEngineUnity::HEU_Curve* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_Curve*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSET___C__UPLOADCURVESPARAMETERS_B__334_0_OFFSET))(this, a1);
		}

		::System::Boolean _UploadAttributeValues_b__335_0(::HoudiniEngineUnity::HEU_AttributesStore* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_AttributesStore*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSET___C__UPLOADATTRIBUTEVALUES_B__335_0_OFFSET))(this, a1);
		}

		::System::Boolean _ClearInvalidCurves_b__372_0(::HoudiniEngineUnity::HEU_Curve* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_Curve*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSET___C__CLEARINVALIDCURVES_B__372_0_OFFSET))(this, a1);
		}

		::System::Boolean _ClearInvalidLists_b__403_0(::HoudiniEngineUnity::HEU_ObjectNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_ObjectNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSET___C__CLEARINVALIDLISTS_B__403_0_OFFSET))(this, a1);
		}

		::System::Boolean _ClearInvalidLists_b__403_1(::HoudiniEngineUnity::HEU_Curve* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_Curve*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSET___C__CLEARINVALIDLISTS_B__403_1_OFFSET))(this, a1);
		}

		::System::Boolean _ClearInvalidLists_b__403_2(::HoudiniEngineUnity::HEU_MaterialData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_MaterialData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIASSET___C__CLEARINVALIDLISTS_B__403_2_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class CGModule; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleInputSlot; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Linq { template <typename T1, typename T2> class IGrouping_2; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3441F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__CORRECTDUPLICATEMODULEIDS_B__84_0_OFFSET UNITYSDK_OFFSET(0x1F344390)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F344230)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__GETMODULES_B__62_0_OFFSET UNITYSDK_OFFSET(0x1F344350)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__GET_HASMODULESWITHSAMEID_B__91_0_OFFSET UNITYSDK_OFFSET(0x1F3444D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__GET_HASMODULESWITHSAMEID_B__91_1_OFFSET UNITYSDK_OFFSET(0x1F344510)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__GET_MODULESBYID_B__35_0_OFFSET UNITYSDK_OFFSET(0x1F344280)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__GET_MODULESBYID_B__35_1_OFFSET UNITYSDK_OFFSET(0x1F3442C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__GET_M_LASTMODULEID_B__12_0_OFFSET UNITYSDK_OFFSET(0x1F344240)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__REORDERENDPOINTRECURSIVEINPUTS_B__87_0_OFFSET UNITYSDK_OFFSET(0x1F344460)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__REORDERENDPOINTRECURSIVEINPUTS_B__87_1_OFFSET UNITYSDK_OFFSET(0x1F344480)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__REORDERMODULES_B__55_0_OFFSET UNITYSDK_OFFSET(0x1F3442D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__REORDERMODULES_B__55_1_OFFSET UNITYSDK_OFFSET(0x1F344320)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__RESETALLMODULELINKS_B__85_0_OFFSET UNITYSDK_OFFSET(0x1F3443D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__SAVEALLOUTPUTMANAGEDRESOURCES_B__93_0_OFFSET UNITYSDK_OFFSET(0x1F344550)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__UPDATEMODULESRECURSIVEINPUTS_B__88_0_OFFSET UNITYSDK_OFFSET(0x1F3444B0)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CurvyGenerator___c_TypeDefinitionIndex = 39658;

	class CurvyGenerator___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*, ::System::Collections::Generic::IEnumerable_1<::FluffyUnderware::Curvy::Generator::CGModule*>*>** StaticGet___9__87_0()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*, ::System::Collections::Generic::IEnumerable_1<::FluffyUnderware::Curvy::Generator::CGModule*>*>**)Il2CppClass::FromTypeDefinitionIndex(CurvyGenerator___c_TypeDefinitionIndex)->GetStaticField(0x2ACB0);
		}
		static ::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModule*, ::System::Single>** StaticGet___9__87_1()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModule*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(CurvyGenerator___c_TypeDefinitionIndex)->GetStaticField(0x2ACB8);
		}
		static ::FluffyUnderware::Curvy::Generator::CurvyGenerator___c** StaticGet___9()
		{
			return (::FluffyUnderware::Curvy::Generator::CurvyGenerator___c**)Il2CppClass::FromTypeDefinitionIndex(CurvyGenerator___c_TypeDefinitionIndex)->GetStaticField(0x2ACC0);
		}
		static ::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModule*, ::System::Int32>** StaticGet___9__84_0()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModule*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CurvyGenerator___c_TypeDefinitionIndex)->GetStaticField(0x2ACC8);
		}
		static ::System::Action_1<::FluffyUnderware::Curvy::Generator::CGModule*>** StaticGet___9__85_0()
		{
			return (::System::Action_1<::FluffyUnderware::Curvy::Generator::CGModule*>**)Il2CppClass::FromTypeDefinitionIndex(CurvyGenerator___c_TypeDefinitionIndex)->GetStaticField(0x2ACD0);
		}
		static ::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*, ::System::Collections::Generic::IEnumerable_1<::FluffyUnderware::Curvy::Generator::CGModule*>*>** StaticGet___9__88_0()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*, ::System::Collections::Generic::IEnumerable_1<::FluffyUnderware::Curvy::Generator::CGModule*>*>**)Il2CppClass::FromTypeDefinitionIndex(CurvyGenerator___c_TypeDefinitionIndex)->GetStaticField(0x2ACD8);
		}
		static ::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModule*, ::System::Int32>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModule*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CurvyGenerator___c_TypeDefinitionIndex)->GetStaticField(0x2ACE0);
		}
		static ::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModule*, ::System::Single>** StaticGet___9__55_1()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModule*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(CurvyGenerator___c_TypeDefinitionIndex)->GetStaticField(0x2ACE8);
		}
		static ::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModule*, ::System::Boolean>** StaticGet___9__62_0()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModule*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CurvyGenerator___c_TypeDefinitionIndex)->GetStaticField(0x2ACF0);
		}
		static ::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModule*, ::System::Int32>** StaticGet___9__35_0()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModule*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CurvyGenerator___c_TypeDefinitionIndex)->GetStaticField(0x2ACF8);
		}
		static ::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModule*, ::System::Boolean>** StaticGet___9__93_0()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModule*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CurvyGenerator___c_TypeDefinitionIndex)->GetStaticField(0x2AD00);
		}
		static ::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModule*, ::System::Boolean>** StaticGet___9__55_0()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModule*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CurvyGenerator___c_TypeDefinitionIndex)->GetStaticField(0x2AD08);
		}
		static ::System::Func_2<::System::Linq::IGrouping_2<::System::Int32, ::FluffyUnderware::Curvy::Generator::CGModule*>*, ::System::Boolean>** StaticGet___9__91_1()
		{
			return (::System::Func_2<::System::Linq::IGrouping_2<::System::Int32, ::FluffyUnderware::Curvy::Generator::CGModule*>*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CurvyGenerator___c_TypeDefinitionIndex)->GetStaticField(0x2AD10);
		}
		static ::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModule*, ::FluffyUnderware::Curvy::Generator::CGModule*>** StaticGet___9__35_1()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModule*, ::FluffyUnderware::Curvy::Generator::CGModule*>**)Il2CppClass::FromTypeDefinitionIndex(CurvyGenerator___c_TypeDefinitionIndex)->GetStaticField(0x2AD18);
		}
		static ::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModule*, ::System::Int32>** StaticGet___9__91_0()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::Generator::CGModule*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CurvyGenerator___c_TypeDefinitionIndex)->GetStaticField(0x2AD20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _get_m_LastModuleID_b__12_0(::FluffyUnderware::Curvy::Generator::CGModule* m)
		{
			return ((::System::Int32(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__GET_M_LASTMODULEID_B__12_0_OFFSET))(this, m);
		}

		::System::Int32 _get_ModulesByID_b__35_0(::FluffyUnderware::Curvy::Generator::CGModule* m)
		{
			return ((::System::Int32(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__GET_MODULESBYID_B__35_0_OFFSET))(this, m);
		}

		::FluffyUnderware::Curvy::Generator::CGModule* _get_ModulesByID_b__35_1(::FluffyUnderware::Curvy::Generator::CGModule* m)
		{
			return ((::FluffyUnderware::Curvy::Generator::CGModule*(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__GET_MODULESBYID_B__35_1_OFFSET))(this, m);
		}

		::System::Boolean _ReorderModules_b__55_0(::FluffyUnderware::Curvy::Generator::CGModule* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__REORDERMODULES_B__55_0_OFFSET))(this, m);
		}

		::System::Single _ReorderModules_b__55_1(::FluffyUnderware::Curvy::Generator::CGModule* m)
		{
			return ((::System::Single(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__REORDERMODULES_B__55_1_OFFSET))(this, m);
		}

		::System::Boolean _GetModules_b__62_0(::FluffyUnderware::Curvy::Generator::CGModule* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__GETMODULES_B__62_0_OFFSET))(this, t);
		}

		::System::Int32 _CorrectDuplicateModuleIDs_b__84_0(::FluffyUnderware::Curvy::Generator::CGModule* module)
		{
			return ((::System::Int32(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__CORRECTDUPLICATEMODULEIDS_B__84_0_OFFSET))(this, module);
		}

		::System::Void _ResetAllModuleLinks_b__85_0(::FluffyUnderware::Curvy::Generator::CGModule* m)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__RESETALLMODULELINKS_B__85_0_OFFSET))(this, m);
		}

		::System::Collections::Generic::IEnumerable_1<::FluffyUnderware::Curvy::Generator::CGModule*>* _ReorderEndpointRecursiveInputs_b__87_0(::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* i)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::FluffyUnderware::Curvy::Generator::CGModule*>*(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__REORDERENDPOINTRECURSIVEINPUTS_B__87_0_OFFSET))(this, i);
		}

		::System::Single _ReorderEndpointRecursiveInputs_b__87_1(::FluffyUnderware::Curvy::Generator::CGModule* m)
		{
			return ((::System::Single(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__REORDERENDPOINTRECURSIVEINPUTS_B__87_1_OFFSET))(this, m);
		}

		::System::Collections::Generic::IEnumerable_1<::FluffyUnderware::Curvy::Generator::CGModule*>* _UpdateModulesRecursiveInputs_b__88_0(::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* i)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::FluffyUnderware::Curvy::Generator::CGModule*>*(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__UPDATEMODULESRECURSIVEINPUTS_B__88_0_OFFSET))(this, i);
		}

		::System::Int32 _get_HasModulesWithSameID_b__91_0(::FluffyUnderware::Curvy::Generator::CGModule* module)
		{
			return ((::System::Int32(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__GET_HASMODULESWITHSAMEID_B__91_0_OFFSET))(this, module);
		}

		::System::Boolean _get_HasModulesWithSameID_b__91_1(::System::Linq::IGrouping_2<::System::Int32, ::FluffyUnderware::Curvy::Generator::CGModule*>* group)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Linq::IGrouping_2<::System::Int32, ::FluffyUnderware::Curvy::Generator::CGModule*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__GET_HASMODULESWITHSAMEID_B__91_1_OFFSET))(this, group);
		}

		::System::Boolean _SaveAllOutputManagedResources_b__93_0(::FluffyUnderware::Curvy::Generator::CGModule* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__SAVEALLOUTPUTMANAGEDRESOURCES_B__93_0_OFFSET))(this, m);
		}
	};
}

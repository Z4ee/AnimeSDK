#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7F3F4476896DB547.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/MoleMole/StaticBoolMaterialModifier.h"
#include "unitysdk/MoleMole/StaticColorMaterialModifier.h"
#include "unitysdk/MoleMole/StaticFloatMaterialModifier.h"
#include "unitysdk/MoleMole/StaticKeywordFloatMaterialModifier.h"
#include "unitysdk/MoleMole/StaticKeywordMaterialModifier.h"
#include "unitysdk/MoleMole/StaticTextureMaterialModifier.h"
#include "unitysdk/MoleMole/StaticVectorMaterialModifier.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_8019128448F0E9D5;
class Class_1_9610394F487FC231;
class Class_1_A0B58236B258B7B2;
class Class_3_FFD0045B4597F294;
namespace MoleMole { class MaterialGroup; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class RenderMaterial; }
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }
template <typename T> class Class_1_99BA3FB8EC118D4A;

#define MOLEMOLE_MONORENDERHANDLER_ADDMATPRIORITY_OFFSET UNITYSDK_OFFSET(0x1584CAA0)
#define MOLEMOLE_MONORENDERHANDLER_ADDMAWORKINGPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1584EAA0)
#define MOLEMOLE_MONORENDERHANDLER_ADDMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0x158497A0)
#define MOLEMOLE_MONORENDERHANDLER_ADDRUNNINGMATPROPERTIESPATTERN_OFFSET UNITYSDK_OFFSET(0x15849990)
#define MOLEMOLE_MONORENDERHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x15848140)
#define MOLEMOLE_MONORENDERHANDLER_CHECKWRITEMATPROPERTYAUTHORITY_OFFSET UNITYSDK_OFFSET(0x1584DCB0)
#define MOLEMOLE_MONORENDERHANDLER_CLEARMATERIALGROUP_OFFSET UNITYSDK_OFFSET(0x1584A2E0)
#define MOLEMOLE_MONORENDERHANDLER_EMPTY_OFFSET UNITYSDK_OFFSET(0x15847D60)
#define MOLEMOLE_MONORENDERHANDLER_FORCESYNCMATERIALSEFFECTSTORENDERERS_OFFSET UNITYSDK_OFFSET(0x15849270)
#define MOLEMOLE_MONORENDERHANDLER_GETCOMPONENTSAFELY_OFFSET UNITYSDK_OFFSET(0x15848010)
#define MOLEMOLE_MONORENDERHANDLER_GETLASTWRITEMATPROPERTYAUTHORITY_OFFSET UNITYSDK_OFFSET(0x1584E210)
#define MOLEMOLE_MONORENDERHANDLER_GETMATERIALMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0x15849420)
#define MOLEMOLE_MONORENDERHANDLER_GETMATPRIORITYPROPERTYKEY_OFFSET UNITYSDK_OFFSET(0x1584DB40)
#define MOLEMOLE_MONORENDERHANDLER_GETMATVALUEBOOL_OFFSET UNITYSDK_OFFSET(0x1584C200)
#define MOLEMOLE_MONORENDERHANDLER_GETMATVALUECOLOR_OFFSET UNITYSDK_OFFSET(0x1584BE00)
#define MOLEMOLE_MONORENDERHANDLER_GETMATVALUEFLOAT_OFFSET UNITYSDK_OFFSET(0x1584B600)
#define MOLEMOLE_MONORENDERHANDLER_GETMATVALUEKEYWORD_OFFSET UNITYSDK_OFFSET(0x1584C400)
#define MOLEMOLE_MONORENDERHANDLER_GETMATVALUETEXTUREOFFSET_OFFSET UNITYSDK_OFFSET(0x1584BA00)
#define MOLEMOLE_MONORENDERHANDLER_GETMATVALUETEXTURETILLING_OFFSET UNITYSDK_OFFSET(0x1584BC00)
#define MOLEMOLE_MONORENDERHANDLER_GETMATVALUETEXTURE_OFFSET UNITYSDK_OFFSET(0x1584B800)
#define MOLEMOLE_MONORENDERHANDLER_GETMATVALUEVECTOR_OFFSET UNITYSDK_OFFSET(0x1584C000)
#define MOLEMOLE_MONORENDERHANDLER_GETRUNNINGMATPROPERTIESPATTERNSBYTYPE_OFFSET UNITYSDK_OFFSET(0x1584C6F0)
#define MOLEMOLE_MONORENDERHANDLER_GETRUNNINGMATPROPERTIESPATTERN_OFFSET UNITYSDK_OFFSET(0x1584C600)
#define MOLEMOLE_MONORENDERHANDLER_GETRUNNINGPATTERNNONALLOC_OFFSET UNITYSDK_OFFSET(0x1584EA50)
#define MOLEMOLE_MONORENDERHANDLER_GET_ALLMATERIALMODIFIERINSTANCELIST_OFFSET UNITYSDK_OFFSET(0x15847B80)
#define MOLEMOLE_MONORENDERHANDLER_GET_DEFAULTGROUP_OFFSET UNITYSDK_OFFSET(0x15847B90)
#define MOLEMOLE_MONORENDERHANDLER_GET_INSTANCEDMATERIALS_OFFSET UNITYSDK_OFFSET(0x15847BB0)
#define MOLEMOLE_MONORENDERHANDLER_GET_ORIGINALINSTANCEDMATERIALGROUP_OFFSET UNITYSDK_OFFSET(0x15847BA0)
#define MOLEMOLE_MONORENDERHANDLER_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x15847C10)
#define MOLEMOLE_MONORENDERHANDLER_HASHIGHERRUNNINGMATPROPERTIESPATTERNS_OFFSET UNITYSDK_OFFSET(0x1584C830)
#define MOLEMOLE_MONORENDERHANDLER_HASRUNNINGMATPROPERTIESPATTERNSBYTYPE_OFFSET UNITYSDK_OFFSET(0x1584C7D0)
#define MOLEMOLE_MONORENDERHANDLER_INITRENDERERS_OFFSET UNITYSDK_OFFSET(0x158482F0)
#define MOLEMOLE_MONORENDERHANDLER_INIT_OFFSET UNITYSDK_OFFSET(0x15848190)
#define MOLEMOLE_MONORENDERHANDLER_LATEUPDATEFROMMANAGER_OFFSET UNITYSDK_OFFSET(0x158490C0)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x15848490)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_205A14011EEBDE57_OFFSET UNITYSDK_OFFSET(0x1584FA30)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0x1584A640)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_4D4839DB20A4F280_OFFSET UNITYSDK_OFFSET(0x15849D30)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x1584A400)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_5C373407A2F6FEB8_OFFSET UNITYSDK_OFFSET(0x1584CDC0)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x15848590)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x158483F0)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_A1E37D8FC0177BE6_OFFSET UNITYSDK_OFFSET(0x15849B50)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_A66B981E1EA3E23D_OFFSET UNITYSDK_OFFSET(0x1584F8E0)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_A99D60F1D5BF87C4_OFFSET UNITYSDK_OFFSET(0x1584F2B0)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0x15849110)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x15848960)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15848BA0)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x1584A350)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_EA2EE4B996A25906_OFFSET UNITYSDK_OFFSET(0x1584F630)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1584F620)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_F735665AF9627D1B_OFFSET UNITYSDK_OFFSET(0x1584F770)
#define MOLEMOLE_MONORENDERHANDLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15848BE0)
#define MOLEMOLE_MONORENDERHANDLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15848740)
#define MOLEMOLE_MONORENDERHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15848640)
#define MOLEMOLE_MONORENDERHANDLER_REFRESHMATPRIPORITY_OFFSET UNITYSDK_OFFSET(0x1584CEF0)
#define MOLEMOLE_MONORENDERHANDLER_REMOVEENTITY_OFFSET UNITYSDK_OFFSET(0x15847E70)
#define MOLEMOLE_MONORENDERHANDLER_REMOVEMATPRIORITY_OFFSET UNITYSDK_OFFSET(0x1584D2E0)
#define MOLEMOLE_MONORENDERHANDLER_REMOVEMAWORKINGPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1584EE10)
#define MOLEMOLE_MONORENDERHANDLER_REMOVEMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0x158498E0)
#define MOLEMOLE_MONORENDERHANDLER_REMOVERUNNINGMATPROPERTIESPATTERN_OFFSET UNITYSDK_OFFSET(0x15849BF0)
#define MOLEMOLE_MONORENDERHANDLER_RESETDIRTYCOUNT_OFFSET UNITYSDK_OFFSET(0x15849FD0)
#define MOLEMOLE_MONORENDERHANDLER_SETLASTWRITEMATPROPERTYAUTHORITY_OFFSET UNITYSDK_OFFSET(0x1584DFE0)
#define MOLEMOLE_MONORENDERHANDLER_SETMODIFIERINSTANCEDIRTY_OFFSET UNITYSDK_OFFSET(0x15847B20)
#define MOLEMOLE_MONORENDERHANDLER_SETUPALLMATERIALINSTANCES_OFFSET UNITYSDK_OFFSET(0x15849570)
#define MOLEMOLE_MONORENDERHANDLER_SETUPANDSTARTMATERIALINSTANCES_OFFSET UNITYSDK_OFFSET(0x158495B0)
#define MOLEMOLE_MONORENDERHANDLER_SETUPANDSTARTMATPROPERTIESPATTERN_OFFSET UNITYSDK_OFFSET(0x15849840)
#define MOLEMOLE_MONORENDERHANDLER_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x15847C20)
#define MOLEMOLE_MONORENDERHANDLER_STARTALLMATERIALMODIFIERINSTANCES_OFFSET UNITYSDK_OFFSET(0x158489A0)
#define MOLEMOLE_MONORENDERHANDLER_START_OFFSET UNITYSDK_OFFSET(0x158488D0)
#define MOLEMOLE_MONORENDERHANDLER_TRYCREATEMATERIALMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0x15849890)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_10_OFFSET UNITYSDK_OFFSET(0x1584D9D0)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_11_OFFSET UNITYSDK_OFFSET(0x1584E610)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_12_OFFSET UNITYSDK_OFFSET(0x1584E780)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_13_OFFSET UNITYSDK_OFFSET(0x1584E8E0)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_1_OFFSET UNITYSDK_OFFSET(0x1584A080)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_2_OFFSET UNITYSDK_OFFSET(0x1584A0E0)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_3_OFFSET UNITYSDK_OFFSET(0x1584A150)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_4_OFFSET UNITYSDK_OFFSET(0x1584A1C0)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_5_OFFSET UNITYSDK_OFFSET(0x1584A220)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_6_OFFSET UNITYSDK_OFFSET(0x1584A280)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_7_OFFSET UNITYSDK_OFFSET(0x1584D700)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_8_OFFSET UNITYSDK_OFFSET(0x1584E330)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_9_OFFSET UNITYSDK_OFFSET(0x1584E4A0)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_OFFSET UNITYSDK_OFFSET(0x1584A020)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETSECONDPRIORITYITEM_1_OFFSET UNITYSDK_OFFSET(0x1584D860)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETSECONDPRIORITYITEM_OFFSET UNITYSDK_OFFSET(0x1584D5D0)
#define MOLEMOLE_MONORENDERHANDLER_TRYREINIT_OFFSET UNITYSDK_OFFSET(0x15848B30)
#define MOLEMOLE_MONORENDERHANDLER_UPDATECOMMONSWITCH_OFFSET UNITYSDK_OFFSET(0x15849F90)
#define MOLEMOLE_MONORENDERHANDLER_UPDATEMATERIALMODIFIERINSTANCES_OFFSET UNITYSDK_OFFSET(0x15849DD0)
#define MOLEMOLE_MONORENDERHANDLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1584F210)
#define MOLEMOLE_MONORENDERHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1584F130)

namespace MoleMole
{
	inline static constexpr unsigned int MonoRenderHandler_TypeDefinitionIndex = 41903;

	class MonoRenderHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::MonoRenderHandler*>** StaticGet_Field_5_8()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::MonoRenderHandler*>**)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandler_TypeDefinitionIndex)->GetStaticField(0x495C0);
		}
		// static const ::System::Int32 NORMALMATNUM = 0x13; // 0x0
		::Il2CppArray<::UnityEngine::Renderer*>* renderers; // 0x18
		::System::Boolean Field_5_1; // 0x20
		::System::Int32 Field_5_3; // 0x24
		::System::Boolean Field_5_4; // 0x28
		::System::Collections::Generic::List_1<::Class_1_A0B58236B258B7B2*>* Field_5_5; // 0x30
		::MoleMole::MaterialGroup* Field_5_6; // 0x38
		::MoleMole::MaterialGroup* Field_5_7; // 0x40
		::MoleMole::Battle::Entity* Field_5_9; // 0x48
		::Class_3_FFD0045B4597F294* matComponent; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_99BA3FB8EC118D4A<::System::Single>*>* Field_5_11; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_99BA3FB8EC118D4A<::UnityEngine::Texture*>*>* Field_5_12; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_99BA3FB8EC118D4A<::UnityEngine::Vector2>*>* Field_5_13; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_99BA3FB8EC118D4A<::UnityEngine::Vector2>*>* Field_5_14; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_99BA3FB8EC118D4A<::UnityEngine::Color>*>* Field_5_15; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_99BA3FB8EC118D4A<::UnityEngine::Vector4>*>* Field_5_16; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_99BA3FB8EC118D4A<::System::Boolean>*>* Field_5_17; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_99BA3FB8EC118D4A<::System::Boolean>*>* Field_5_18; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_8019128448F0E9D5*>* Field_5_19; // 0x98
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MaterialPropertyType, ::System::Collections::Generic::HashSet_1<::Class_1_8019128448F0E9D5*>*>* Field_5_20; // 0xA0
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*>*>* Field_5_21; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::System::String*, ::UnityEngine::Material*, ::System::Int32>, ::System::Boolean>* Field_5_22; // 0xB0
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MaterialPropertyType, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* maWorkingProperties; // 0xB8
		::System::Comparison_1<::System::String*>* Field_5_24; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER__CCTOR_OFFSET))();
		}

		::System::Void SetModifierInstanceDirty(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_SETMODIFIERINSTANCEDIRTY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_A0B58236B258B7B2*>* get_AllMaterialModifierInstanceList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_A0B58236B258B7B2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GET_ALLMATERIALMODIFIERINSTANCELIST_OFFSET))(this);
		}

		::MoleMole::MaterialGroup* get_DefaultGroup()
		{
			return ((::MoleMole::MaterialGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GET_DEFAULTGROUP_OFFSET))(this);
		}

		::MoleMole::MaterialGroup* get_OriginalInstancedMaterialGroup()
		{
			return ((::MoleMole::MaterialGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GET_ORIGINALINSTANCEDMATERIALGROUP_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Material*>* get_InstancedMaterials()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GET_INSTANCEDMATERIALS_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* get_ownerEntity()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GET_OWNERENTITY_OFFSET))(this);
		}

		::System::Void set_ownerEntity(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_SET_OWNERENTITY_OFFSET))(this, a1);
		}

		static ::System::Void Empty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_EMPTY_OFFSET))();
		}

		static ::System::Void RemoveEntity(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_REMOVEENTITY_OFFSET))(a1);
		}

		static ::MoleMole::MonoRenderHandler* GetComponentSafely(::System::UInt32 a1)
		{
			return ((::MoleMole::MonoRenderHandler*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETCOMPONENTSAFELY_OFFSET))(a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_AWAKE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_INIT_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_START_OFFSET))(this);
		}

		::System::Void TryReInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYREINIT_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdateFromManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_LATEUPDATEFROMMANAGER_OFFSET))(this);
		}

		::System::Void ForceSyncMaterialsEffectsToRenderers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_FORCESYNCMATERIALSEFFECTSTORENDERERS_OFFSET))(this);
		}

		::System::Boolean InitRenderers()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_INITRENDERERS_OFFSET))(this);
		}

		::Class_1_A0B58236B258B7B2* GetMaterialModifierInstance(::Enum_3_7F3F4476896DB547 a1)
		{
			return ((::Class_1_A0B58236B258B7B2*(*)(::PVOID, ::Enum_3_7F3F4476896DB547))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETMATERIALMODIFIERINSTANCE_OFFSET))(this, a1);
		}

		::System::Void SetupAllMaterialInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_SETUPALLMATERIALINSTANCES_OFFSET))(this);
		}

		::System::Void SetupAndStartMaterialInstances(::Enum_3_7F3F4476896DB547 a1, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_SETUPANDSTARTMATERIALINSTANCES_OFFSET))(this, a1, a2);
		}

		::Class_1_8019128448F0E9D5* SetupAndStartMatPropertiesPattern(::Class_1_9610394F487FC231* a1)
		{
			return ((::Class_1_8019128448F0E9D5*(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_SETUPANDSTARTMATPROPERTIESPATTERN_OFFSET))(this, a1);
		}

		::Class_1_A0B58236B258B7B2* TryCreateMaterialModifierInstance(::Enum_3_7F3F4476896DB547 a1)
		{
			return ((::Class_1_A0B58236B258B7B2*(*)(::PVOID, ::Enum_3_7F3F4476896DB547))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYCREATEMATERIALMODIFIERINSTANCE_OFFSET))(this, a1);
		}

		::System::Void AddModifierInstance(::Class_1_A0B58236B258B7B2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A0B58236B258B7B2*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_ADDMODIFIERINSTANCE_OFFSET))(this, a1);
		}

		::System::Void RemoveModifierInstance(::Class_1_A0B58236B258B7B2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A0B58236B258B7B2*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_REMOVEMODIFIERINSTANCE_OFFSET))(this, a1);
		}

		::System::Void AddRunningMatPropertiesPattern(::Class_1_8019128448F0E9D5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8019128448F0E9D5*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_ADDRUNNINGMATPROPERTIESPATTERN_OFFSET))(this, a1);
		}

		::System::Void RemoveRunningMatPropertiesPattern(::Class_1_8019128448F0E9D5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8019128448F0E9D5*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_REMOVERUNNINGMATPROPERTIESPATTERN_OFFSET))(this, a1);
		}

		::System::Void StartAllMaterialModifierInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_STARTALLMATERIALMODIFIERINSTANCES_OFFSET))(this);
		}

		::System::Void UpdateMaterialModifierInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_UPDATEMATERIALMODIFIERINSTANCES_OFFSET))(this);
		}

		::System::Void UpdateCommonSwitch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_UPDATECOMMONSWITCH_OFFSET))(this);
		}

		::System::Void ResetDirtyCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_RESETDIRTYCOUNT_OFFSET))(this);
		}

		::System::Boolean TryGetMaterialModifier(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticFloatMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMaterialModifier_1(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticTextureMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticTextureMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMaterialModifier_2(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticVectorMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticVectorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_2_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMaterialModifier_3(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticColorMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticColorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_3_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMaterialModifier_4(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticBoolMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticBoolMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_4_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMaterialModifier_5(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticKeywordMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticKeywordMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_5_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMaterialModifier_6(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticKeywordFloatMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticKeywordFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_6_OFFSET))(this, a1, a2);
		}

		::System::Void ClearMaterialGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_CLEARMATERIALGROUP_OFFSET))(this);
		}

		::System::Void Method_5_DD784213055292FB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_DD784213055292FB_OFFSET))(this);
		}

		::Class_1_99BA3FB8EC118D4A<::System::Single>* GetMatValueFloat(::System::Int32 a1)
		{
			return ((::Class_1_99BA3FB8EC118D4A<::System::Single>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETMATVALUEFLOAT_OFFSET))(this, a1);
		}

		::Class_1_99BA3FB8EC118D4A<::UnityEngine::Texture*>* GetMatValueTexture(::System::Int32 a1)
		{
			return ((::Class_1_99BA3FB8EC118D4A<::UnityEngine::Texture*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETMATVALUETEXTURE_OFFSET))(this, a1);
		}

		::Class_1_99BA3FB8EC118D4A<::UnityEngine::Vector2>* GetMatValueTextureOffset(::System::Int32 a1)
		{
			return ((::Class_1_99BA3FB8EC118D4A<::UnityEngine::Vector2>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETMATVALUETEXTUREOFFSET_OFFSET))(this, a1);
		}

		::Class_1_99BA3FB8EC118D4A<::UnityEngine::Vector2>* GetMatValueTextureTilling(::System::Int32 a1)
		{
			return ((::Class_1_99BA3FB8EC118D4A<::UnityEngine::Vector2>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETMATVALUETEXTURETILLING_OFFSET))(this, a1);
		}

		::Class_1_99BA3FB8EC118D4A<::UnityEngine::Color>* GetMatValueColor(::System::Int32 a1)
		{
			return ((::Class_1_99BA3FB8EC118D4A<::UnityEngine::Color>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETMATVALUECOLOR_OFFSET))(this, a1);
		}

		::Class_1_99BA3FB8EC118D4A<::UnityEngine::Vector4>* GetMatValueVector(::System::Int32 a1)
		{
			return ((::Class_1_99BA3FB8EC118D4A<::UnityEngine::Vector4>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETMATVALUEVECTOR_OFFSET))(this, a1);
		}

		::Class_1_99BA3FB8EC118D4A<::System::Boolean>* GetMatValueBool(::System::Int32 a1)
		{
			return ((::Class_1_99BA3FB8EC118D4A<::System::Boolean>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETMATVALUEBOOL_OFFSET))(this, a1);
		}

		::Class_1_99BA3FB8EC118D4A<::System::Boolean>* GetMatValueKeyword(::System::Int32 a1)
		{
			return ((::Class_1_99BA3FB8EC118D4A<::System::Boolean>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETMATVALUEKEYWORD_OFFSET))(this, a1);
		}

		::Class_1_8019128448F0E9D5* GetRunningMatPropertiesPattern(::System::String* a1)
		{
			return ((::Class_1_8019128448F0E9D5*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETRUNNINGMATPROPERTIESPATTERN_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::Class_1_8019128448F0E9D5*>* GetRunningMatPropertiesPatternsByType(::MoleMole::Config::MaterialPropertyType a1)
		{
			return ((::System::Collections::Generic::HashSet_1<::Class_1_8019128448F0E9D5*>*(*)(::PVOID, ::MoleMole::Config::MaterialPropertyType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETRUNNINGMATPROPERTIESPATTERNSBYTYPE_OFFSET))(this, a1);
		}

		::System::Boolean HasRunningMatPropertiesPatternsByType(::MoleMole::Config::MaterialPropertyType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::MaterialPropertyType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_HASRUNNINGMATPROPERTIESPATTERNSBYTYPE_OFFSET))(this, a1);
		}

		::System::Boolean HasHigherRunningMatPropertiesPatterns(::MoleMole::Config::MaterialPropertyType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::MaterialPropertyType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_HASHIGHERRUNNINGMATPROPERTIESPATTERNS_OFFSET))(this, a1);
		}

		::System::Void AddMatPriority(::UnityEngine::Material* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_ADDMATPRIORITY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RefreshMatPripority(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_REFRESHMATPRIPORITY_OFFSET))(this, a1);
		}

		::System::Void RemoveMatPriority(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_REMOVEMATPRIORITY_OFFSET))(this, a1);
		}

		::System::Boolean TryGetSecondPriorityItem(::UnityEngine::Material* a1, ::System::Int32 a2, ::Enum_3_7F3F4476896DB547 a3, ::System::Single& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::Enum_3_7F3F4476896DB547, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETSECONDPRIORITYITEM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean TryGetSecondPriorityItem_1(::UnityEngine::Material* a1, ::System::Int32 a2, ::Enum_3_7F3F4476896DB547 a3, ::UnityEngine::Color& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::Enum_3_7F3F4476896DB547, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETSECONDPRIORITYITEM_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* GetMatPriorityPropertyKey(::UnityEngine::Material* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETMATPRIORITYPROPERTYKEY_OFFSET))(this, a1, a2);
		}

		::System::Boolean CheckWriteMatPropertyAuthority(::System::String* a1, ::UnityEngine::Material* a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_CHECKWRITEMATPROPERTYAUTHORITY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetLastWriteMatPropertyAuthority(::System::String* a1, ::UnityEngine::Material* a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Material*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_SETLASTWRITEMATPROPERTYAUTHORITY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean GetLastWriteMatPropertyAuthority(::System::String* a1, ::UnityEngine::Material* a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETLASTWRITEMATPROPERTYAUTHORITY_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean TryGetMaterialModifier_7(::System::String* a1, ::Enum_3_7F3F4476896DB547 a2, ::MoleMole::StaticFloatMaterialModifier& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_7_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean TryGetMaterialModifier_8(::System::String* a1, ::Enum_3_7F3F4476896DB547 a2, ::MoleMole::StaticTextureMaterialModifier& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticTextureMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_8_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean TryGetMaterialModifier_9(::System::String* a1, ::Enum_3_7F3F4476896DB547 a2, ::MoleMole::StaticVectorMaterialModifier& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticVectorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_9_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean TryGetMaterialModifier_10(::System::String* a1, ::Enum_3_7F3F4476896DB547 a2, ::MoleMole::StaticColorMaterialModifier& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticColorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_10_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean TryGetMaterialModifier_11(::System::String* a1, ::Enum_3_7F3F4476896DB547 a2, ::MoleMole::StaticBoolMaterialModifier& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticBoolMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_11_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean TryGetMaterialModifier_12(::System::String* a1, ::Enum_3_7F3F4476896DB547 a2, ::MoleMole::StaticKeywordMaterialModifier& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticKeywordMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_12_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean TryGetMaterialModifier_13(::System::String* a1, ::Enum_3_7F3F4476896DB547 a2, ::MoleMole::StaticKeywordFloatMaterialModifier& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticKeywordFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_13_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GetRunningPatternNonAlloc(::MoleMole::Config::MaterialPropertyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::MaterialPropertyType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETRUNNINGPATTERNNONALLOC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* AddMaWorkingProperties(::MoleMole::Config::MaterialPropertyType a1, ::System::Collections::Generic::HashSet_1<::System::Int32>* a2)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID, ::MoleMole::Config::MaterialPropertyType, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_ADDMAWORKINGPROPERTIES_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveMaWorkingProperties(::MoleMole::Config::MaterialPropertyType a1, ::System::Collections::Generic::HashSet_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::MaterialPropertyType, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_REMOVEMAWORKINGPROPERTIES_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_A1E37D8FC0177BE6(::Class_1_8019128448F0E9D5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8019128448F0E9D5*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_A1E37D8FC0177BE6_OFFSET))(this, a1);
		}

		::System::Void Method_5_B768DA94E3FD91D9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_B768DA94E3FD91D9_OFFSET))(this);
		}

		::System::Int32 Method_5_EA2EE4B996A25906(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_EA2EE4B996A25906_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_4D2A473556700CDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_4D2A473556700CDC_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_5_4D4839DB20A4F280(::Class_1_8019128448F0E9D5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8019128448F0E9D5*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_4D4839DB20A4F280_OFFSET))(this, a1);
		}

		::System::Void Method_5_092CD57850778EFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_092CD57850778EFC_OFFSET))(this);
		}

		::System::Void Method_5_5C373407A2F6FEB8(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_5C373407A2F6FEB8_OFFSET))(this, a1);
		}

		::System::Void Method_5_A99D60F1D5BF87C4(::MoleMole::Config::MaterialPropertyType a1, ::Class_1_8019128448F0E9D5* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::MaterialPropertyType, ::Class_1_8019128448F0E9D5*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_A99D60F1D5BF87C4_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_A66B981E1EA3E23D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_A66B981E1EA3E23D_OFFSET))(this);
		}

		::System::Boolean Method_5_205A14011EEBDE57(::Enum_3_7F3F4476896DB547 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_205A14011EEBDE57_OFFSET))(this, a1);
		}

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_5_89D1F247B9D324EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_89D1F247B9D324EE_OFFSET))(this);
		}

		::System::Void Method_5_51CFFE2AF748ECD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_51CFFE2AF748ECD7_OFFSET))(this);
		}

		::System::Boolean Method_5_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Void Method_5_F735665AF9627D1B(::MoleMole::Config::MaterialPropertyType a1, ::Class_1_8019128448F0E9D5* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::MaterialPropertyType, ::Class_1_8019128448F0E9D5*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_F735665AF9627D1B_OFFSET))(this, a1, a2);
		}
	};
}

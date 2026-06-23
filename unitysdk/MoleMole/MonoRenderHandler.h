#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7F4644768973D415.h"
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

class Class_1_413B2BDBE645DB66;
class Class_1_8019128448F0E9D5;
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
template <typename T> class Class_1_8B700E2AD021F4CA;

#define MOLEMOLE_MONORENDERHANDLER_ADDMATPRIORITY_OFFSET UNITYSDK_OFFSET(0x1641C4F0)
#define MOLEMOLE_MONORENDERHANDLER_ADDMAWORKINGPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1641E490)
#define MOLEMOLE_MONORENDERHANDLER_ADDMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0x16419120)
#define MOLEMOLE_MONORENDERHANDLER_ADDRUNNINGMATPROPERTIESPATTERN_OFFSET UNITYSDK_OFFSET(0x16419300)
#define MOLEMOLE_MONORENDERHANDLER_APPENDDYNAMICACCESSORYRENDERERS_OFFSET UNITYSDK_OFFSET(0x16416D60)
#define MOLEMOLE_MONORENDERHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x16415B30)
#define MOLEMOLE_MONORENDERHANDLER_CHECKWRITEMATPROPERTYAUTHORITY_OFFSET UNITYSDK_OFFSET(0x1641D6D0)
#define MOLEMOLE_MONORENDERHANDLER_CLEARMATERIALGROUP_OFFSET UNITYSDK_OFFSET(0x16419C50)
#define MOLEMOLE_MONORENDERHANDLER_EMPTY_OFFSET UNITYSDK_OFFSET(0x16415750)
#define MOLEMOLE_MONORENDERHANDLER_FORCESYNCMATERIALSEFFECTSTORENDERERS_OFFSET UNITYSDK_OFFSET(0x16416BB0)
#define MOLEMOLE_MONORENDERHANDLER_GETCOMPONENTSAFELY_OFFSET UNITYSDK_OFFSET(0x16415A00)
#define MOLEMOLE_MONORENDERHANDLER_GETLASTWRITEMATPROPERTYAUTHORITY_OFFSET UNITYSDK_OFFSET(0x1641DC30)
#define MOLEMOLE_MONORENDERHANDLER_GETMATERIALMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0x16418DA0)
#define MOLEMOLE_MONORENDERHANDLER_GETMATPRIORITYPROPERTYKEY_OFFSET UNITYSDK_OFFSET(0x1641D560)
#define MOLEMOLE_MONORENDERHANDLER_GETMATVALUEBOOL_OFFSET UNITYSDK_OFFSET(0x1641BC40)
#define MOLEMOLE_MONORENDERHANDLER_GETMATVALUECOLOR_OFFSET UNITYSDK_OFFSET(0x1641B840)
#define MOLEMOLE_MONORENDERHANDLER_GETMATVALUEFLOAT_OFFSET UNITYSDK_OFFSET(0x1641B070)
#define MOLEMOLE_MONORENDERHANDLER_GETMATVALUEKEYWORD_OFFSET UNITYSDK_OFFSET(0x1641BE40)
#define MOLEMOLE_MONORENDERHANDLER_GETMATVALUETEXTUREOFFSET_OFFSET UNITYSDK_OFFSET(0x1641B450)
#define MOLEMOLE_MONORENDERHANDLER_GETMATVALUETEXTURETILLING_OFFSET UNITYSDK_OFFSET(0x1641B640)
#define MOLEMOLE_MONORENDERHANDLER_GETMATVALUETEXTURE_OFFSET UNITYSDK_OFFSET(0x1641B260)
#define MOLEMOLE_MONORENDERHANDLER_GETMATVALUEVECTOR_OFFSET UNITYSDK_OFFSET(0x1641BA40)
#define MOLEMOLE_MONORENDERHANDLER_GETRUNNINGMATPROPERTIESPATTERNSBYTYPE_OFFSET UNITYSDK_OFFSET(0x1641C130)
#define MOLEMOLE_MONORENDERHANDLER_GETRUNNINGMATPROPERTIESPATTERN_OFFSET UNITYSDK_OFFSET(0x1641C040)
#define MOLEMOLE_MONORENDERHANDLER_GETRUNNINGPATTERNNONALLOC_OFFSET UNITYSDK_OFFSET(0x1641E440)
#define MOLEMOLE_MONORENDERHANDLER_GET_ALLMATERIALMODIFIERINSTANCELIST_OFFSET UNITYSDK_OFFSET(0x16415580)
#define MOLEMOLE_MONORENDERHANDLER_GET_DEFAULTGROUP_OFFSET UNITYSDK_OFFSET(0x16415590)
#define MOLEMOLE_MONORENDERHANDLER_GET_INSTANCEDMATERIALS_OFFSET UNITYSDK_OFFSET(0x164155B0)
#define MOLEMOLE_MONORENDERHANDLER_GET_ORIGINALINSTANCEDMATERIALGROUP_OFFSET UNITYSDK_OFFSET(0x164155A0)
#define MOLEMOLE_MONORENDERHANDLER_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x16415610)
#define MOLEMOLE_MONORENDERHANDLER_HASHIGHERRUNNINGMATPROPERTIESPATTERNS_OFFSET UNITYSDK_OFFSET(0x1641C270)
#define MOLEMOLE_MONORENDERHANDLER_HASRUNNINGMATPROPERTIESPATTERNSBYTYPE_OFFSET UNITYSDK_OFFSET(0x1641C210)
#define MOLEMOLE_MONORENDERHANDLER_INITRENDERERS_OFFSET UNITYSDK_OFFSET(0x16415BF0)
#define MOLEMOLE_MONORENDERHANDLER_INIT_OFFSET UNITYSDK_OFFSET(0x16415B80)
#define MOLEMOLE_MONORENDERHANDLER_LATEUPDATEFROMMANAGER_OFFSET UNITYSDK_OFFSET(0x16416A00)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x16415DE0)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_0EEF8214C2ADF425_OFFSET UNITYSDK_OFFSET(0x16417460)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_205A14011EEBDE57_OFFSET UNITYSDK_OFFSET(0x1641F2E0)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0x1641A0B0)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_4D4839DB20A4F280_OFFSET UNITYSDK_OFFSET(0x164196A0)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x16418AA0)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x16419E70)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_54C21C7B80AF2DD0_OFFSET UNITYSDK_OFFSET(0x16418370)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_5C373407A2F6FEB8_OFFSET UNITYSDK_OFFSET(0x1641C800)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_7206DC8F66A4D2A8_OFFSET UNITYSDK_OFFSET(0x16418C60)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_88EE33CDB09FCC53_OFFSET UNITYSDK_OFFSET(0x16417C10)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x16415EE0)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_8B933DECC394D41D_OFFSET UNITYSDK_OFFSET(0x164188A0)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x16415D40)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_A1E37D8FC0177BE6_OFFSET UNITYSDK_OFFSET(0x164194C0)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_A66B981E1EA3E23D_OFFSET UNITYSDK_OFFSET(0x1641F340)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_A871253BFD471C99_OFFSET UNITYSDK_OFFSET(0x164172D0)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_A99D60F1D5BF87C4_OFFSET UNITYSDK_OFFSET(0x1641ECA0)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0x16419CC0)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0x16416A50)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x164162B0)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x164164F0)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_EA2EE4B996A25906_OFFSET UNITYSDK_OFFSET(0x1641F020)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1641F010)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_F735665AF9627D1B_OFFSET UNITYSDK_OFFSET(0x1641F170)
#define MOLEMOLE_MONORENDERHANDLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16416530)
#define MOLEMOLE_MONORENDERHANDLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x16416090)
#define MOLEMOLE_MONORENDERHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16415F90)
#define MOLEMOLE_MONORENDERHANDLER_REFRESHMATPRIPORITY_OFFSET UNITYSDK_OFFSET(0x1641C930)
#define MOLEMOLE_MONORENDERHANDLER_REMOVEDYNAMICACCESSORYRENDERERS_OFFSET UNITYSDK_OFFSET(0x16417520)
#define MOLEMOLE_MONORENDERHANDLER_REMOVEENTITY_OFFSET UNITYSDK_OFFSET(0x16415860)
#define MOLEMOLE_MONORENDERHANDLER_REMOVEMATPRIORITY_OFFSET UNITYSDK_OFFSET(0x1641CD10)
#define MOLEMOLE_MONORENDERHANDLER_REMOVEMAWORKINGPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1641E800)
#define MOLEMOLE_MONORENDERHANDLER_REMOVEMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0x16419250)
#define MOLEMOLE_MONORENDERHANDLER_REMOVERUNNINGMATPROPERTIESPATTERN_OFFSET UNITYSDK_OFFSET(0x16419560)
#define MOLEMOLE_MONORENDERHANDLER_RESETDIRTYCOUNT_OFFSET UNITYSDK_OFFSET(0x16419940)
#define MOLEMOLE_MONORENDERHANDLER_SETLASTWRITEMATPROPERTYAUTHORITY_OFFSET UNITYSDK_OFFSET(0x1641DA00)
#define MOLEMOLE_MONORENDERHANDLER_SETMODIFIERINSTANCEDIRTY_OFFSET UNITYSDK_OFFSET(0x16415520)
#define MOLEMOLE_MONORENDERHANDLER_SETUPALLMATERIALINSTANCES_OFFSET UNITYSDK_OFFSET(0x16418EF0)
#define MOLEMOLE_MONORENDERHANDLER_SETUPANDSTARTMATERIALINSTANCES_OFFSET UNITYSDK_OFFSET(0x16418F30)
#define MOLEMOLE_MONORENDERHANDLER_SETUPANDSTARTMATPROPERTIESPATTERN_OFFSET UNITYSDK_OFFSET(0x164191B0)
#define MOLEMOLE_MONORENDERHANDLER_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x16415620)
#define MOLEMOLE_MONORENDERHANDLER_STARTALLMATERIALMODIFIERINSTANCES_OFFSET UNITYSDK_OFFSET(0x164162F0)
#define MOLEMOLE_MONORENDERHANDLER_START_OFFSET UNITYSDK_OFFSET(0x16416220)
#define MOLEMOLE_MONORENDERHANDLER_TRYCREATEMATERIALMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0x16419200)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_10_OFFSET UNITYSDK_OFFSET(0x1641D3F0)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_11_OFFSET UNITYSDK_OFFSET(0x1641E020)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_12_OFFSET UNITYSDK_OFFSET(0x1641E180)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_13_OFFSET UNITYSDK_OFFSET(0x1641E2E0)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_1_OFFSET UNITYSDK_OFFSET(0x164199F0)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_2_OFFSET UNITYSDK_OFFSET(0x16419A50)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_3_OFFSET UNITYSDK_OFFSET(0x16419AC0)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_4_OFFSET UNITYSDK_OFFSET(0x16419B30)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_5_OFFSET UNITYSDK_OFFSET(0x16419B90)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_6_OFFSET UNITYSDK_OFFSET(0x16419BF0)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_7_OFFSET UNITYSDK_OFFSET(0x1641D120)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_8_OFFSET UNITYSDK_OFFSET(0x1641DD50)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_9_OFFSET UNITYSDK_OFFSET(0x1641DEB0)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_OFFSET UNITYSDK_OFFSET(0x16419990)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETSECONDPRIORITYITEM_1_OFFSET UNITYSDK_OFFSET(0x1641D280)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETSECONDPRIORITYITEM_OFFSET UNITYSDK_OFFSET(0x1641CFF0)
#define MOLEMOLE_MONORENDERHANDLER_TRYREINIT_OFFSET UNITYSDK_OFFSET(0x16416480)
#define MOLEMOLE_MONORENDERHANDLER_UPDATECOMMONSWITCH_OFFSET UNITYSDK_OFFSET(0x16419900)
#define MOLEMOLE_MONORENDERHANDLER_UPDATEMATERIALMODIFIERINSTANCES_OFFSET UNITYSDK_OFFSET(0x16419740)
#define MOLEMOLE_MONORENDERHANDLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1641EC00)
#define MOLEMOLE_MONORENDERHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1641EB20)

namespace MoleMole
{
	inline static constexpr unsigned int MonoRenderHandler_TypeDefinitionIndex = 53143;

	class MonoRenderHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::MonoRenderHandler*>** StaticGet_Field_5_10()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::MonoRenderHandler*>**)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandler_TypeDefinitionIndex)->GetStaticField(0x4CDB0);
		}
		// static const ::System::Int32 NORMALMATNUM = 0x13; // 0x0
		::Il2CppArray<::UnityEngine::Renderer*>* renderers; // 0x18
		::System::Boolean Field_5_1; // 0x20
		::System::Collections::Generic::HashSet_1<::UnityEngine::Renderer*>* Field_5_2; // 0x28
		::System::Boolean Field_5_3; // 0x30
		::System::Int32 Field_5_5; // 0x34
		::System::Boolean Field_5_6; // 0x38
		::System::Collections::Generic::List_1<::Class_1_A0B58236B258B7B2*>* Field_5_7; // 0x40
		::MoleMole::MaterialGroup* Field_5_8; // 0x48
		::MoleMole::MaterialGroup* Field_5_9; // 0x50
		::MoleMole::Battle::Entity* Field_5_11; // 0x58
		::Class_3_FFD0045B4597F294* matComponent; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_8B700E2AD021F4CA<::System::Single>*>* Field_5_13; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_8B700E2AD021F4CA<::UnityEngine::Texture*>*>* Field_5_14; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_8B700E2AD021F4CA<::UnityEngine::Vector2>*>* Field_5_15; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_8B700E2AD021F4CA<::UnityEngine::Vector2>*>* Field_5_16; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_8B700E2AD021F4CA<::UnityEngine::Color>*>* Field_5_17; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_8B700E2AD021F4CA<::UnityEngine::Vector4>*>* Field_5_18; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_8B700E2AD021F4CA<::System::Boolean>*>* Field_5_19; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_8B700E2AD021F4CA<::System::Boolean>*>* Field_5_20; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_8019128448F0E9D5*>* Field_5_21; // 0xA8
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MaterialPropertyType, ::System::Collections::Generic::HashSet_1<::Class_1_8019128448F0E9D5*>*>* Field_5_22; // 0xB0
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*>*>* Field_5_23; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::System::String*, ::UnityEngine::Material*, ::System::Int32>, ::System::Boolean>* Field_5_24; // 0xC0
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MaterialPropertyType, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* maWorkingProperties; // 0xC8
		::System::Comparison_1<::System::String*>* Field_5_26; // 0xD0

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

		::System::Void AppendDynamicAccessoryRenderers(::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_APPENDDYNAMICACCESSORYRENDERERS_OFFSET))(this, a1);
		}

		::System::Void RemoveDynamicAccessoryRenderers(::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_REMOVEDYNAMICACCESSORYRENDERERS_OFFSET))(this, a1);
		}

		::System::Void Method_5_8B933DECC394D41D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_8B933DECC394D41D_OFFSET))(this);
		}

		::Class_1_A0B58236B258B7B2* GetMaterialModifierInstance(::Enum_3_7F4644768973D415 a1)
		{
			return ((::Class_1_A0B58236B258B7B2*(*)(::PVOID, ::Enum_3_7F4644768973D415))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETMATERIALMODIFIERINSTANCE_OFFSET))(this, a1);
		}

		::System::Void SetupAllMaterialInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_SETUPALLMATERIALINSTANCES_OFFSET))(this);
		}

		::System::Void SetupAndStartMaterialInstances(::Enum_3_7F4644768973D415 a1, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_7F4644768973D415, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_SETUPANDSTARTMATERIALINSTANCES_OFFSET))(this, a1, a2);
		}

		::Class_1_8019128448F0E9D5* SetupAndStartMatPropertiesPattern(::Class_1_413B2BDBE645DB66* a1)
		{
			return ((::Class_1_8019128448F0E9D5*(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_SETUPANDSTARTMATPROPERTIESPATTERN_OFFSET))(this, a1);
		}

		::Class_1_A0B58236B258B7B2* TryCreateMaterialModifierInstance(::Enum_3_7F4644768973D415 a1)
		{
			return ((::Class_1_A0B58236B258B7B2*(*)(::PVOID, ::Enum_3_7F4644768973D415))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYCREATEMATERIALMODIFIERINSTANCE_OFFSET))(this, a1);
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

		::System::Boolean TryGetMaterialModifier(::Enum_3_7F4644768973D415 a1, ::MoleMole::StaticFloatMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F4644768973D415, ::MoleMole::StaticFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMaterialModifier_1(::Enum_3_7F4644768973D415 a1, ::MoleMole::StaticTextureMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F4644768973D415, ::MoleMole::StaticTextureMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMaterialModifier_2(::Enum_3_7F4644768973D415 a1, ::MoleMole::StaticVectorMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F4644768973D415, ::MoleMole::StaticVectorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_2_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMaterialModifier_3(::Enum_3_7F4644768973D415 a1, ::MoleMole::StaticColorMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F4644768973D415, ::MoleMole::StaticColorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_3_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMaterialModifier_4(::Enum_3_7F4644768973D415 a1, ::MoleMole::StaticBoolMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F4644768973D415, ::MoleMole::StaticBoolMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_4_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMaterialModifier_5(::Enum_3_7F4644768973D415 a1, ::MoleMole::StaticKeywordMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F4644768973D415, ::MoleMole::StaticKeywordMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_5_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMaterialModifier_6(::Enum_3_7F4644768973D415 a1, ::MoleMole::StaticKeywordFloatMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F4644768973D415, ::MoleMole::StaticKeywordFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_6_OFFSET))(this, a1, a2);
		}

		::System::Void ClearMaterialGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_CLEARMATERIALGROUP_OFFSET))(this);
		}

		::System::Void Method_5_AC7CD4175E0A3EF8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_AC7CD4175E0A3EF8_OFFSET))(this);
		}

		::Class_1_8B700E2AD021F4CA<::System::Single>* GetMatValueFloat(::System::Int32 a1)
		{
			return ((::Class_1_8B700E2AD021F4CA<::System::Single>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETMATVALUEFLOAT_OFFSET))(this, a1);
		}

		::Class_1_8B700E2AD021F4CA<::UnityEngine::Texture*>* GetMatValueTexture(::System::Int32 a1)
		{
			return ((::Class_1_8B700E2AD021F4CA<::UnityEngine::Texture*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETMATVALUETEXTURE_OFFSET))(this, a1);
		}

		::Class_1_8B700E2AD021F4CA<::UnityEngine::Vector2>* GetMatValueTextureOffset(::System::Int32 a1)
		{
			return ((::Class_1_8B700E2AD021F4CA<::UnityEngine::Vector2>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETMATVALUETEXTUREOFFSET_OFFSET))(this, a1);
		}

		::Class_1_8B700E2AD021F4CA<::UnityEngine::Vector2>* GetMatValueTextureTilling(::System::Int32 a1)
		{
			return ((::Class_1_8B700E2AD021F4CA<::UnityEngine::Vector2>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETMATVALUETEXTURETILLING_OFFSET))(this, a1);
		}

		::Class_1_8B700E2AD021F4CA<::UnityEngine::Color>* GetMatValueColor(::System::Int32 a1)
		{
			return ((::Class_1_8B700E2AD021F4CA<::UnityEngine::Color>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETMATVALUECOLOR_OFFSET))(this, a1);
		}

		::Class_1_8B700E2AD021F4CA<::UnityEngine::Vector4>* GetMatValueVector(::System::Int32 a1)
		{
			return ((::Class_1_8B700E2AD021F4CA<::UnityEngine::Vector4>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETMATVALUEVECTOR_OFFSET))(this, a1);
		}

		::Class_1_8B700E2AD021F4CA<::System::Boolean>* GetMatValueBool(::System::Int32 a1)
		{
			return ((::Class_1_8B700E2AD021F4CA<::System::Boolean>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETMATVALUEBOOL_OFFSET))(this, a1);
		}

		::Class_1_8B700E2AD021F4CA<::System::Boolean>* GetMatValueKeyword(::System::Int32 a1)
		{
			return ((::Class_1_8B700E2AD021F4CA<::System::Boolean>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETMATVALUEKEYWORD_OFFSET))(this, a1);
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

		::System::Boolean TryGetSecondPriorityItem(::UnityEngine::Material* a1, ::System::Int32 a2, ::Enum_3_7F4644768973D415 a3, ::System::Single& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::Enum_3_7F4644768973D415, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETSECONDPRIORITYITEM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean TryGetSecondPriorityItem_1(::UnityEngine::Material* a1, ::System::Int32 a2, ::Enum_3_7F4644768973D415 a3, ::UnityEngine::Color& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::Enum_3_7F4644768973D415, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETSECONDPRIORITYITEM_1_OFFSET))(this, a1, a2, a3, a4);
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

		::System::Boolean TryGetMaterialModifier_7(::System::String* a1, ::Enum_3_7F4644768973D415 a2, ::MoleMole::StaticFloatMaterialModifier& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Enum_3_7F4644768973D415, ::MoleMole::StaticFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_7_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean TryGetMaterialModifier_8(::System::String* a1, ::Enum_3_7F4644768973D415 a2, ::MoleMole::StaticTextureMaterialModifier& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Enum_3_7F4644768973D415, ::MoleMole::StaticTextureMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_8_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean TryGetMaterialModifier_9(::System::String* a1, ::Enum_3_7F4644768973D415 a2, ::MoleMole::StaticVectorMaterialModifier& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Enum_3_7F4644768973D415, ::MoleMole::StaticVectorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_9_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean TryGetMaterialModifier_10(::System::String* a1, ::Enum_3_7F4644768973D415 a2, ::MoleMole::StaticColorMaterialModifier& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Enum_3_7F4644768973D415, ::MoleMole::StaticColorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_10_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean TryGetMaterialModifier_11(::System::String* a1, ::Enum_3_7F4644768973D415 a2, ::MoleMole::StaticBoolMaterialModifier& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Enum_3_7F4644768973D415, ::MoleMole::StaticBoolMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_11_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean TryGetMaterialModifier_12(::System::String* a1, ::Enum_3_7F4644768973D415 a2, ::MoleMole::StaticKeywordMaterialModifier& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Enum_3_7F4644768973D415, ::MoleMole::StaticKeywordMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_12_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean TryGetMaterialModifier_13(::System::String* a1, ::Enum_3_7F4644768973D415 a2, ::MoleMole::StaticKeywordFloatMaterialModifier& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Enum_3_7F4644768973D415, ::MoleMole::StaticKeywordFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_13_OFFSET))(this, a1, a2, a3);
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

		::System::Void Method_5_A99D60F1D5BF87C4(::MoleMole::Config::MaterialPropertyType a1, ::Class_1_8019128448F0E9D5* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::MaterialPropertyType, ::Class_1_8019128448F0E9D5*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_A99D60F1D5BF87C4_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean Method_5_A871253BFD471C99()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_A871253BFD471C99_OFFSET))();
		}

		::System::Void Method_5_4EA6B1791DACA9CC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_4EA6B1791DACA9CC_OFFSET))(this);
		}

		::System::Void Method_5_5C373407A2F6FEB8(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_5C373407A2F6FEB8_OFFSET))(this, a1);
		}

		::System::Void Method_5_B768DA94E3FD91D9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_B768DA94E3FD91D9_OFFSET))(this);
		}

		::System::Void Method_5_0EEF8214C2ADF425(::Il2CppArray<::UnityEngine::Renderer*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_0EEF8214C2ADF425_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_89D1F247B9D324EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_89D1F247B9D324EE_OFFSET))(this);
		}

		::System::Int32 Method_5_EA2EE4B996A25906(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_EA2EE4B996A25906_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_5_4D2A473556700CDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_4D2A473556700CDC_OFFSET))(this);
		}

		::System::Void Method_5_7206DC8F66A4D2A8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_7206DC8F66A4D2A8_OFFSET))(this);
		}

		::System::Void Method_5_4D4839DB20A4F280(::Class_1_8019128448F0E9D5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8019128448F0E9D5*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_4D4839DB20A4F280_OFFSET))(this, a1);
		}

		::System::Int32 Method_5_54C21C7B80AF2DD0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_54C21C7B80AF2DD0_OFFSET))(this);
		}

		::System::Void Method_5_51CFFE2AF748ECD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_51CFFE2AF748ECD7_OFFSET))(this);
		}

		::System::Void Method_5_A1E37D8FC0177BE6(::Class_1_8019128448F0E9D5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8019128448F0E9D5*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_A1E37D8FC0177BE6_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_205A14011EEBDE57(::Enum_3_7F4644768973D415 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F4644768973D415))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_205A14011EEBDE57_OFFSET))(this, a1);
		}

		::System::Void Method_5_A66B981E1EA3E23D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_A66B981E1EA3E23D_OFFSET))(this);
		}

		::System::Boolean Method_5_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Void Method_5_092CD57850778EFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_092CD57850778EFC_OFFSET))(this);
		}

		::System::Void Method_5_F735665AF9627D1B(::MoleMole::Config::MaterialPropertyType a1, ::Class_1_8019128448F0E9D5* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::MaterialPropertyType, ::Class_1_8019128448F0E9D5*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_F735665AF9627D1B_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_88EE33CDB09FCC53(::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_88EE33CDB09FCC53_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}
	};
}

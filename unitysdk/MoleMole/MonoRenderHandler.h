#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_FA887B12EB8EFCE2.h"
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

class Class_1_279DB7458D4A47A1;
class Class_1_413B2BDBE645DB66;
class Class_1_D66755A4450D1F25;
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
template <typename T> class Class_1_EA25C842AE5A5910;

#define MOLEMOLE_MONORENDERHANDLER_ADDMATPRIORITY_OFFSET UNITYSDK_OFFSET(0x1808AFC0)
#define MOLEMOLE_MONORENDERHANDLER_ADDMAWORKINGPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1808D150)
#define MOLEMOLE_MONORENDERHANDLER_ADDMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0x18087C50)
#define MOLEMOLE_MONORENDERHANDLER_ADDRUNNINGMATPROPERTIESPATTERN_OFFSET UNITYSDK_OFFSET(0x18087E30)
#define MOLEMOLE_MONORENDERHANDLER_APPENDDYNAMICACCESSORYRENDERERS_OFFSET UNITYSDK_OFFSET(0x18085890)
#define MOLEMOLE_MONORENDERHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x180846F0)
#define MOLEMOLE_MONORENDERHANDLER_CHECKMATISNULL_OFFSET UNITYSDK_OFFSET(0x1808C570)
#define MOLEMOLE_MONORENDERHANDLER_CHECKWRITEMATPROPERTYAUTHORITY_OFFSET UNITYSDK_OFFSET(0x1808C190)
#define MOLEMOLE_MONORENDERHANDLER_CLEARMATERIALGROUP_OFFSET UNITYSDK_OFFSET(0x18088780)
#define MOLEMOLE_MONORENDERHANDLER_EMPTY_OFFSET UNITYSDK_OFFSET(0x18084310)
#define MOLEMOLE_MONORENDERHANDLER_FORCESYNCMATERIALSEFFECTSTORENDERERS_OFFSET UNITYSDK_OFFSET(0x180856E0)
#define MOLEMOLE_MONORENDERHANDLER_GETCOMPONENTSAFELY_OFFSET UNITYSDK_OFFSET(0x180845C0)
#define MOLEMOLE_MONORENDERHANDLER_GETLASTWRITEMATPROPERTYAUTHORITY_OFFSET UNITYSDK_OFFSET(0x1808C8F0)
#define MOLEMOLE_MONORENDERHANDLER_GETMATERIALMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0x180878D0)
#define MOLEMOLE_MONORENDERHANDLER_GETMATPRIORITYPROPERTYKEY_OFFSET UNITYSDK_OFFSET(0x1808C020)
#define MOLEMOLE_MONORENDERHANDLER_GETMATVALUEBOOL_OFFSET UNITYSDK_OFFSET(0x1808A710)
#define MOLEMOLE_MONORENDERHANDLER_GETMATVALUECOLOR_OFFSET UNITYSDK_OFFSET(0x1808A310)
#define MOLEMOLE_MONORENDERHANDLER_GETMATVALUEFLOAT_OFFSET UNITYSDK_OFFSET(0x18089B40)
#define MOLEMOLE_MONORENDERHANDLER_GETMATVALUEKEYWORD_OFFSET UNITYSDK_OFFSET(0x1808A910)
#define MOLEMOLE_MONORENDERHANDLER_GETMATVALUETEXTUREOFFSET_OFFSET UNITYSDK_OFFSET(0x18089F20)
#define MOLEMOLE_MONORENDERHANDLER_GETMATVALUETEXTURETILLING_OFFSET UNITYSDK_OFFSET(0x1808A110)
#define MOLEMOLE_MONORENDERHANDLER_GETMATVALUETEXTURE_OFFSET UNITYSDK_OFFSET(0x18089D30)
#define MOLEMOLE_MONORENDERHANDLER_GETMATVALUEVECTOR_OFFSET UNITYSDK_OFFSET(0x1808A510)
#define MOLEMOLE_MONORENDERHANDLER_GETRUNNINGMATPROPERTIESPATTERNSBYTYPE_OFFSET UNITYSDK_OFFSET(0x1808AC00)
#define MOLEMOLE_MONORENDERHANDLER_GETRUNNINGMATPROPERTIESPATTERN_OFFSET UNITYSDK_OFFSET(0x1808AB10)
#define MOLEMOLE_MONORENDERHANDLER_GETRUNNINGPATTERNNONALLOC_OFFSET UNITYSDK_OFFSET(0x1808D100)
#define MOLEMOLE_MONORENDERHANDLER_GET_ALLMATERIALMODIFIERINSTANCELIST_OFFSET UNITYSDK_OFFSET(0x18084140)
#define MOLEMOLE_MONORENDERHANDLER_GET_DEFAULTGROUP_OFFSET UNITYSDK_OFFSET(0x18084150)
#define MOLEMOLE_MONORENDERHANDLER_GET_INSTANCEDMATERIALS_OFFSET UNITYSDK_OFFSET(0x18084170)
#define MOLEMOLE_MONORENDERHANDLER_GET_ORIGINALINSTANCEDMATERIALGROUP_OFFSET UNITYSDK_OFFSET(0x18084160)
#define MOLEMOLE_MONORENDERHANDLER_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x180841D0)
#define MOLEMOLE_MONORENDERHANDLER_HASHIGHERRUNNINGMATPROPERTIESPATTERNS_OFFSET UNITYSDK_OFFSET(0x1808AD40)
#define MOLEMOLE_MONORENDERHANDLER_HASRUNNINGMATPROPERTIESPATTERNSBYTYPE_OFFSET UNITYSDK_OFFSET(0x1808ACE0)
#define MOLEMOLE_MONORENDERHANDLER_INITRENDERERS_OFFSET UNITYSDK_OFFSET(0x180847B0)
#define MOLEMOLE_MONORENDERHANDLER_INIT_OFFSET UNITYSDK_OFFSET(0x18084740)
#define MOLEMOLE_MONORENDERHANDLER_LATEUPDATEFROMMANAGER_OFFSET UNITYSDK_OFFSET(0x18085520)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_0EEF8214C2ADF425_OFFSET UNITYSDK_OFFSET(0x18085F90)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_205A14011EEBDE57_OFFSET UNITYSDK_OFFSET(0x1808DF70)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0x18088BE0)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_4D4839DB20A4F280_OFFSET UNITYSDK_OFFSET(0x180881D0)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x180875D0)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x180889A0)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_54C21C7B80AF2DD0_OFFSET UNITYSDK_OFFSET(0x18086E80)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_5C373407A2F6FEB8_OFFSET UNITYSDK_OFFSET(0x1808B2D0)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_7206DC8F66A4D2A8_OFFSET UNITYSDK_OFFSET(0x18087790)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0x180849A0)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_88EE33CDB09FCC53_OFFSET UNITYSDK_OFFSET(0x18086720)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x18084AA0)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_8B933DECC394D41D_OFFSET UNITYSDK_OFFSET(0x180873C0)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x18084900)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_A66B981E1EA3E23D_OFFSET UNITYSDK_OFFSET(0x1808DCE0)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_A8458C1526636349_OFFSET UNITYSDK_OFFSET(0x18087FF0)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_A871253BFD471C99_OFFSET UNITYSDK_OFFSET(0x18085E00)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0x180887F0)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0x18085570)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x18084DE0)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18085020)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_E899B3E96168E20F_OFFSET UNITYSDK_OFFSET(0x1808D960)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_EA2EE4B996A25906_OFFSET UNITYSDK_OFFSET(0x1808DE30)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1808DCD0)
#define MOLEMOLE_MONORENDERHANDLER_METHOD_5_F735665AF9627D1B_OFFSET UNITYSDK_OFFSET(0x1808DFD0)
#define MOLEMOLE_MONORENDERHANDLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18085060)
#define MOLEMOLE_MONORENDERHANDLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18084C50)
#define MOLEMOLE_MONORENDERHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18084B50)
#define MOLEMOLE_MONORENDERHANDLER_REFRESHMATPRIPORITY_OFFSET UNITYSDK_OFFSET(0x1808B400)
#define MOLEMOLE_MONORENDERHANDLER_REMOVEDYNAMICACCESSORYRENDERERS_OFFSET UNITYSDK_OFFSET(0x18086050)
#define MOLEMOLE_MONORENDERHANDLER_REMOVEENTITY_OFFSET UNITYSDK_OFFSET(0x18084420)
#define MOLEMOLE_MONORENDERHANDLER_REMOVEMATPRIORITY_OFFSET UNITYSDK_OFFSET(0x1808B7D0)
#define MOLEMOLE_MONORENDERHANDLER_REMOVEMAWORKINGPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1808D4C0)
#define MOLEMOLE_MONORENDERHANDLER_REMOVEMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0x18087D80)
#define MOLEMOLE_MONORENDERHANDLER_REMOVERUNNINGMATPROPERTIESPATTERN_OFFSET UNITYSDK_OFFSET(0x18088090)
#define MOLEMOLE_MONORENDERHANDLER_RESETDIRTYCOUNT_OFFSET UNITYSDK_OFFSET(0x18088470)
#define MOLEMOLE_MONORENDERHANDLER_SETLASTWRITEMATPROPERTYAUTHORITY_OFFSET UNITYSDK_OFFSET(0x1808C6C0)
#define MOLEMOLE_MONORENDERHANDLER_SETMODIFIERINSTANCEDIRTY_OFFSET UNITYSDK_OFFSET(0x180840E0)
#define MOLEMOLE_MONORENDERHANDLER_SETUPALLMATERIALINSTANCES_OFFSET UNITYSDK_OFFSET(0x18087A20)
#define MOLEMOLE_MONORENDERHANDLER_SETUPANDSTARTMATERIALINSTANCES_OFFSET UNITYSDK_OFFSET(0x18087A60)
#define MOLEMOLE_MONORENDERHANDLER_SETUPANDSTARTMATPROPERTIESPATTERN_OFFSET UNITYSDK_OFFSET(0x18087CE0)
#define MOLEMOLE_MONORENDERHANDLER_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x180841E0)
#define MOLEMOLE_MONORENDERHANDLER_STARTALLMATERIALMODIFIERINSTANCES_OFFSET UNITYSDK_OFFSET(0x18084E20)
#define MOLEMOLE_MONORENDERHANDLER_START_OFFSET UNITYSDK_OFFSET(0x18084D50)
#define MOLEMOLE_MONORENDERHANDLER_TRYCREATEMATERIALMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0x18087D30)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_10_OFFSET UNITYSDK_OFFSET(0x1808BEB0)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_11_OFFSET UNITYSDK_OFFSET(0x1808CCE0)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_12_OFFSET UNITYSDK_OFFSET(0x1808CE40)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_13_OFFSET UNITYSDK_OFFSET(0x1808CFA0)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_1_OFFSET UNITYSDK_OFFSET(0x18088520)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_2_OFFSET UNITYSDK_OFFSET(0x18088580)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_3_OFFSET UNITYSDK_OFFSET(0x180885F0)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_4_OFFSET UNITYSDK_OFFSET(0x18088660)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_5_OFFSET UNITYSDK_OFFSET(0x180886C0)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_6_OFFSET UNITYSDK_OFFSET(0x18088720)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_7_OFFSET UNITYSDK_OFFSET(0x1808BBD0)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_8_OFFSET UNITYSDK_OFFSET(0x1808CA10)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_9_OFFSET UNITYSDK_OFFSET(0x1808CB70)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_OFFSET UNITYSDK_OFFSET(0x180884C0)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETSECONDPRIORITYITEM_1_OFFSET UNITYSDK_OFFSET(0x1808BD30)
#define MOLEMOLE_MONORENDERHANDLER_TRYGETSECONDPRIORITYITEM_OFFSET UNITYSDK_OFFSET(0x1808BAA0)
#define MOLEMOLE_MONORENDERHANDLER_TRYREINIT_OFFSET UNITYSDK_OFFSET(0x18084FB0)
#define MOLEMOLE_MONORENDERHANDLER_UPDATECOMMONSWITCH_OFFSET UNITYSDK_OFFSET(0x18088430)
#define MOLEMOLE_MONORENDERHANDLER_UPDATEMATERIALMODIFIERINSTANCES_OFFSET UNITYSDK_OFFSET(0x18088270)
#define MOLEMOLE_MONORENDERHANDLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1808D8C0)
#define MOLEMOLE_MONORENDERHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1808D7E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoRenderHandler_TypeDefinitionIndex = 57243;

	class MonoRenderHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::MonoRenderHandler*>** StaticGet_Field_5_13()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::MonoRenderHandler*>**)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandler_TypeDefinitionIndex)->GetStaticField(0x4C420);
		}
		// static const ::System::Int32 NORMALMATNUM = 0x13; // 0x0
		::Il2CppArray<::UnityEngine::Renderer*>* renderers; // 0x18
		::System::Boolean Field_5_7; // 0x20
		::System::Collections::Generic::HashSet_1<::UnityEngine::Renderer*>* Field_5_6; // 0x28
		::System::Boolean Field_5_5; // 0x30
		::System::Int32 Field_5_11; // 0x34
		::System::Boolean Field_5_10; // 0x38
		::System::Boolean Field_5_9; // 0x39
		::System::Collections::Generic::List_1<::Class_1_D66755A4450D1F25*>* Field_5_8; // 0x40
		::MoleMole::MaterialGroup* Field_5_15; // 0x48
		::MoleMole::MaterialGroup* Field_5_14; // 0x50
		::MoleMole::Battle::Entity* Field_5_12; // 0x58
		::Class_3_FFD0045B4597F294* matComponent; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_EA25C842AE5A5910<::System::Single>*>* Field_5_18; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_EA25C842AE5A5910<::UnityEngine::Texture*>*>* Field_5_17; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_EA25C842AE5A5910<::UnityEngine::Vector2>*>* Field_5_16; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_EA25C842AE5A5910<::UnityEngine::Vector2>*>* Field_5_23; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_EA25C842AE5A5910<::UnityEngine::Color>*>* Field_5_22; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_EA25C842AE5A5910<::UnityEngine::Vector4>*>* Field_5_21; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_EA25C842AE5A5910<::System::Boolean>*>* Field_5_20; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_EA25C842AE5A5910<::System::Boolean>*>* Field_5_27; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_279DB7458D4A47A1*>* Field_5_26; // 0xA8
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MaterialPropertyType, ::System::Collections::Generic::HashSet_1<::Class_1_279DB7458D4A47A1*>*>* Field_5_25; // 0xB0
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*>*>* Field_5_24; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::System::String*, ::UnityEngine::Material*, ::System::Int32>, ::System::Boolean>* Field_5_31; // 0xC0
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MaterialPropertyType, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* maWorkingProperties; // 0xC8
		::System::Comparison_1<::System::String*>* Field_5_29; // 0xD0

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

		::System::Collections::Generic::List_1<::Class_1_D66755A4450D1F25*>* get_AllMaterialModifierInstanceList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_D66755A4450D1F25*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GET_ALLMATERIALMODIFIERINSTANCELIST_OFFSET))(this);
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

		::Class_1_D66755A4450D1F25* GetMaterialModifierInstance(::Enum_3_FA887B12EB8EFCE2 a1)
		{
			return ((::Class_1_D66755A4450D1F25*(*)(::PVOID, ::Enum_3_FA887B12EB8EFCE2))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETMATERIALMODIFIERINSTANCE_OFFSET))(this, a1);
		}

		::System::Void SetupAllMaterialInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_SETUPALLMATERIALINSTANCES_OFFSET))(this);
		}

		::System::Void SetupAndStartMaterialInstances(::Enum_3_FA887B12EB8EFCE2 a1, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_FA887B12EB8EFCE2, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_SETUPANDSTARTMATERIALINSTANCES_OFFSET))(this, a1, a2);
		}

		::Class_1_279DB7458D4A47A1* SetupAndStartMatPropertiesPattern(::Class_1_413B2BDBE645DB66* a1)
		{
			return ((::Class_1_279DB7458D4A47A1*(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_SETUPANDSTARTMATPROPERTIESPATTERN_OFFSET))(this, a1);
		}

		::Class_1_D66755A4450D1F25* TryCreateMaterialModifierInstance(::Enum_3_FA887B12EB8EFCE2 a1)
		{
			return ((::Class_1_D66755A4450D1F25*(*)(::PVOID, ::Enum_3_FA887B12EB8EFCE2))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYCREATEMATERIALMODIFIERINSTANCE_OFFSET))(this, a1);
		}

		::System::Void AddModifierInstance(::Class_1_D66755A4450D1F25* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D66755A4450D1F25*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_ADDMODIFIERINSTANCE_OFFSET))(this, a1);
		}

		::System::Void RemoveModifierInstance(::Class_1_D66755A4450D1F25* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D66755A4450D1F25*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_REMOVEMODIFIERINSTANCE_OFFSET))(this, a1);
		}

		::System::Void AddRunningMatPropertiesPattern(::Class_1_279DB7458D4A47A1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_279DB7458D4A47A1*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_ADDRUNNINGMATPROPERTIESPATTERN_OFFSET))(this, a1);
		}

		::System::Void RemoveRunningMatPropertiesPattern(::Class_1_279DB7458D4A47A1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_279DB7458D4A47A1*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_REMOVERUNNINGMATPROPERTIESPATTERN_OFFSET))(this, a1);
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

		::System::Boolean TryGetMaterialModifier(::Enum_3_FA887B12EB8EFCE2 a1, ::MoleMole::StaticFloatMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_FA887B12EB8EFCE2, ::MoleMole::StaticFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMaterialModifier_1(::Enum_3_FA887B12EB8EFCE2 a1, ::MoleMole::StaticTextureMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_FA887B12EB8EFCE2, ::MoleMole::StaticTextureMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMaterialModifier_2(::Enum_3_FA887B12EB8EFCE2 a1, ::MoleMole::StaticVectorMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_FA887B12EB8EFCE2, ::MoleMole::StaticVectorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_2_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMaterialModifier_3(::Enum_3_FA887B12EB8EFCE2 a1, ::MoleMole::StaticColorMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_FA887B12EB8EFCE2, ::MoleMole::StaticColorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_3_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMaterialModifier_4(::Enum_3_FA887B12EB8EFCE2 a1, ::MoleMole::StaticBoolMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_FA887B12EB8EFCE2, ::MoleMole::StaticBoolMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_4_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMaterialModifier_5(::Enum_3_FA887B12EB8EFCE2 a1, ::MoleMole::StaticKeywordMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_FA887B12EB8EFCE2, ::MoleMole::StaticKeywordMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_5_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMaterialModifier_6(::Enum_3_FA887B12EB8EFCE2 a1, ::MoleMole::StaticKeywordFloatMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_FA887B12EB8EFCE2, ::MoleMole::StaticKeywordFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_6_OFFSET))(this, a1, a2);
		}

		::System::Void ClearMaterialGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_CLEARMATERIALGROUP_OFFSET))(this);
		}

		::System::Void Method_5_AC7CD4175E0A3EF8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_AC7CD4175E0A3EF8_OFFSET))(this);
		}

		::Class_1_EA25C842AE5A5910<::System::Single>* GetMatValueFloat(::System::Int32 a1)
		{
			return ((::Class_1_EA25C842AE5A5910<::System::Single>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETMATVALUEFLOAT_OFFSET))(this, a1);
		}

		::Class_1_EA25C842AE5A5910<::UnityEngine::Texture*>* GetMatValueTexture(::System::Int32 a1)
		{
			return ((::Class_1_EA25C842AE5A5910<::UnityEngine::Texture*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETMATVALUETEXTURE_OFFSET))(this, a1);
		}

		::Class_1_EA25C842AE5A5910<::UnityEngine::Vector2>* GetMatValueTextureOffset(::System::Int32 a1)
		{
			return ((::Class_1_EA25C842AE5A5910<::UnityEngine::Vector2>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETMATVALUETEXTUREOFFSET_OFFSET))(this, a1);
		}

		::Class_1_EA25C842AE5A5910<::UnityEngine::Vector2>* GetMatValueTextureTilling(::System::Int32 a1)
		{
			return ((::Class_1_EA25C842AE5A5910<::UnityEngine::Vector2>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETMATVALUETEXTURETILLING_OFFSET))(this, a1);
		}

		::Class_1_EA25C842AE5A5910<::UnityEngine::Color>* GetMatValueColor(::System::Int32 a1)
		{
			return ((::Class_1_EA25C842AE5A5910<::UnityEngine::Color>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETMATVALUECOLOR_OFFSET))(this, a1);
		}

		::Class_1_EA25C842AE5A5910<::UnityEngine::Vector4>* GetMatValueVector(::System::Int32 a1)
		{
			return ((::Class_1_EA25C842AE5A5910<::UnityEngine::Vector4>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETMATVALUEVECTOR_OFFSET))(this, a1);
		}

		::Class_1_EA25C842AE5A5910<::System::Boolean>* GetMatValueBool(::System::Int32 a1)
		{
			return ((::Class_1_EA25C842AE5A5910<::System::Boolean>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETMATVALUEBOOL_OFFSET))(this, a1);
		}

		::Class_1_EA25C842AE5A5910<::System::Boolean>* GetMatValueKeyword(::System::Int32 a1)
		{
			return ((::Class_1_EA25C842AE5A5910<::System::Boolean>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETMATVALUEKEYWORD_OFFSET))(this, a1);
		}

		::Class_1_279DB7458D4A47A1* GetRunningMatPropertiesPattern(::System::String* a1)
		{
			return ((::Class_1_279DB7458D4A47A1*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETRUNNINGMATPROPERTIESPATTERN_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::Class_1_279DB7458D4A47A1*>* GetRunningMatPropertiesPatternsByType(::MoleMole::Config::MaterialPropertyType a1)
		{
			return ((::System::Collections::Generic::HashSet_1<::Class_1_279DB7458D4A47A1*>*(*)(::PVOID, ::MoleMole::Config::MaterialPropertyType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETRUNNINGMATPROPERTIESPATTERNSBYTYPE_OFFSET))(this, a1);
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

		::System::Boolean TryGetSecondPriorityItem(::UnityEngine::Material* a1, ::System::Int32 a2, ::Enum_3_FA887B12EB8EFCE2 a3, ::System::Single& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::Enum_3_FA887B12EB8EFCE2, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETSECONDPRIORITYITEM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean TryGetSecondPriorityItem_1(::UnityEngine::Material* a1, ::System::Int32 a2, ::Enum_3_FA887B12EB8EFCE2 a3, ::UnityEngine::Color& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::Enum_3_FA887B12EB8EFCE2, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETSECONDPRIORITYITEM_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* GetMatPriorityPropertyKey(::UnityEngine::Material* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETMATPRIORITYPROPERTYKEY_OFFSET))(this, a1, a2);
		}

		::System::Boolean CheckWriteMatPropertyAuthority(::System::String* a1, ::UnityEngine::Material* a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Material*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_CHECKWRITEMATPROPERTYAUTHORITY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetLastWriteMatPropertyAuthority(::System::String* a1, ::UnityEngine::Material* a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Material*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_SETLASTWRITEMATPROPERTYAUTHORITY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean GetLastWriteMatPropertyAuthority(::System::String* a1, ::UnityEngine::Material* a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_GETLASTWRITEMATPROPERTYAUTHORITY_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean TryGetMaterialModifier_7(::System::String* a1, ::Enum_3_FA887B12EB8EFCE2 a2, ::MoleMole::StaticFloatMaterialModifier& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Enum_3_FA887B12EB8EFCE2, ::MoleMole::StaticFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_7_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean TryGetMaterialModifier_8(::System::String* a1, ::Enum_3_FA887B12EB8EFCE2 a2, ::MoleMole::StaticTextureMaterialModifier& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Enum_3_FA887B12EB8EFCE2, ::MoleMole::StaticTextureMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_8_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean TryGetMaterialModifier_9(::System::String* a1, ::Enum_3_FA887B12EB8EFCE2 a2, ::MoleMole::StaticVectorMaterialModifier& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Enum_3_FA887B12EB8EFCE2, ::MoleMole::StaticVectorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_9_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean TryGetMaterialModifier_10(::System::String* a1, ::Enum_3_FA887B12EB8EFCE2 a2, ::MoleMole::StaticColorMaterialModifier& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Enum_3_FA887B12EB8EFCE2, ::MoleMole::StaticColorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_10_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean TryGetMaterialModifier_11(::System::String* a1, ::Enum_3_FA887B12EB8EFCE2 a2, ::MoleMole::StaticBoolMaterialModifier& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Enum_3_FA887B12EB8EFCE2, ::MoleMole::StaticBoolMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_11_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean TryGetMaterialModifier_12(::System::String* a1, ::Enum_3_FA887B12EB8EFCE2 a2, ::MoleMole::StaticKeywordMaterialModifier& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Enum_3_FA887B12EB8EFCE2, ::MoleMole::StaticKeywordMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_12_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean TryGetMaterialModifier_13(::System::String* a1, ::Enum_3_FA887B12EB8EFCE2 a2, ::MoleMole::StaticKeywordFloatMaterialModifier& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Enum_3_FA887B12EB8EFCE2, ::MoleMole::StaticKeywordFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_TRYGETMATERIALMODIFIER_13_OFFSET))(this, a1, a2, a3);
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

		static ::System::Boolean CheckMatIsNull(::UnityEngine::Material* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_CHECKMATISNULL_OFFSET))(a1, a2);
		}

		::System::Void Method_5_0EEF8214C2ADF425(::Il2CppArray<::UnityEngine::Renderer*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_0EEF8214C2ADF425_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_A8458C1526636349(::Class_1_279DB7458D4A47A1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_279DB7458D4A47A1*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_A8458C1526636349_OFFSET))(this, a1);
		}

		::System::Void Method_5_4D2A473556700CDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_4D2A473556700CDC_OFFSET))(this);
		}

		::System::Void Method_5_B768DA94E3FD91D9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_B768DA94E3FD91D9_OFFSET))(this);
		}

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_9681042564541CD6_OFFSET))(this);
		}

		::System::Int32 Method_5_54C21C7B80AF2DD0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_54C21C7B80AF2DD0_OFFSET))(this);
		}

		::System::Void Method_5_5C373407A2F6FEB8(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_5C373407A2F6FEB8_OFFSET))(this, a1);
		}

		::System::Void Method_5_A66B981E1EA3E23D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_A66B981E1EA3E23D_OFFSET))(this);
		}

		::System::Int32 Method_5_EA2EE4B996A25906(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_EA2EE4B996A25906_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean Method_5_A871253BFD471C99()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_A871253BFD471C99_OFFSET))();
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_5_88EE33CDB09FCC53(::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_88EE33CDB09FCC53_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_205A14011EEBDE57(::Enum_3_FA887B12EB8EFCE2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_FA887B12EB8EFCE2))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_205A14011EEBDE57_OFFSET))(this, a1);
		}

		::System::Void Method_5_E899B3E96168E20F(::MoleMole::Config::MaterialPropertyType a1, ::Class_1_279DB7458D4A47A1* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::MaterialPropertyType, ::Class_1_279DB7458D4A47A1*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_E899B3E96168E20F_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_5_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Void Method_5_51CFFE2AF748ECD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_51CFFE2AF748ECD7_OFFSET))(this);
		}

		::System::Void Method_5_4EA6B1791DACA9CC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_4EA6B1791DACA9CC_OFFSET))(this);
		}

		::System::Void Method_5_F735665AF9627D1B(::MoleMole::Config::MaterialPropertyType a1, ::Class_1_279DB7458D4A47A1* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::MaterialPropertyType, ::Class_1_279DB7458D4A47A1*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_F735665AF9627D1B_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_749948B663FCCCEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_749948B663FCCCEF_OFFSET))(this);
		}

		::System::Void Method_5_4D4839DB20A4F280(::Class_1_279DB7458D4A47A1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_279DB7458D4A47A1*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_4D4839DB20A4F280_OFFSET))(this, a1);
		}

		::System::Void Method_5_89D1F247B9D324EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_89D1F247B9D324EE_OFFSET))(this);
		}

		::System::Void Method_5_7206DC8F66A4D2A8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLER_METHOD_5_7206DC8F66A4D2A8_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviromentProfile_Struct_2_4A5861BA045B4A85.h"
#include "unitysdk/EnviromentSystem/EnviromentPropertiesID.h"
#include "unitysdk/RPG/CustomRP/GameCameraType.h"
#include "unitysdk/UnityEngine/Rendering/AmbientVolumneData.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_0_16E4307DCC419505_336;
class Class_1_303D5A33D1401D59;
class SceneLightVolume;
namespace EnviromentSystem { class EnviroBlockDataTransProperty; }
namespace EnviromentSystem { class EnviroBoolProperty; }
namespace EnviromentSystem { class EnviroEffectLightProperty; }
namespace EnviromentSystem { class EnviroEnumProperty; }
namespace EnviromentSystem { class EnviroFloatProperty; }
namespace EnviromentSystem { class EnviroGpuParticleProperty; }
namespace EnviromentSystem { class EnviroGradientProperty; }
namespace EnviromentSystem { class EnviroLocalLightGroupProperty; }
namespace EnviromentSystem { class EnviroParticleProperty; }
namespace EnviromentSystem { class EnviroPointLightProperty; }
namespace EnviromentSystem { class EnviroPostProcessVolumeProperty; }
namespace EnviromentSystem { class EnviroPrefabProperty; }
namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviroReflectionProbeProperty; }
namespace EnviromentSystem { class EnviroTextureProperty; }
namespace EnviromentSystem { class EnviroVectorProperty; }
namespace EnviromentSystem { class EnviroWindZoneProperty; }
namespace EnviromentSystem { class EnviromentClip; }
namespace EnviromentSystem { class EnviromentClip_OnEnvironmentClipLoadDelegate; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class VolumeProfile; }

#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_GET_ACTIVEPROFILETRANSITIONTARGET_OFFSET UNITYSDK_OFFSET(0xF1CE320)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_GET_NAMEEX_OFFSET UNITYSDK_OFFSET(0xF1CE410)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_GET_PROFILEPATHEX_OFFSET UNITYSDK_OFFSET(0xF1CE3F0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_01244C5D42565CB2_OFFSET UNITYSDK_OFFSET(0xF1D56E0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_063ADB01C44981A7_OFFSET UNITYSDK_OFFSET(0xF1D5AB0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_0C42DDDF06BF692D_OFFSET UNITYSDK_OFFSET(0xF1CE480)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_0DABAC67FBEEEDA6_OFFSET UNITYSDK_OFFSET(0xF1D8EB0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_1454625925CA73F5_OFFSET UNITYSDK_OFFSET(0xF1D9420)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_16E2C4C5C61F8FDB_OFFSET UNITYSDK_OFFSET(0xF1D08D0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xF1D82C0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_1B0CF56F555C9A93_OFFSET UNITYSDK_OFFSET(0xF1D8660)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_1B214D9710BB7534_OFFSET UNITYSDK_OFFSET(0xF1D92F0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_2092EACB383790AB_OFFSET UNITYSDK_OFFSET(0xF1CF2F0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0xF1CE6D0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_2839AE123F8ECAA7_OFFSET UNITYSDK_OFFSET(0xF1CEBC0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_2BA9010C7C33DCAE_OFFSET UNITYSDK_OFFSET(0xF1D6710)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_2BB7E72A7E700799_OFFSET UNITYSDK_OFFSET(0xF1CE890)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_2DA5E14835AEFAD5_OFFSET UNITYSDK_OFFSET(0xF1D87F0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_2F68009C40503107_OFFSET UNITYSDK_OFFSET(0xF1D41A0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_31B71B6D307F7F0C_OFFSET UNITYSDK_OFFSET(0xF1D8430)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_33A7DE6DC0669409_OFFSET UNITYSDK_OFFSET(0xF1D7B20)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_35DD9F229AF5C1D0_1_OFFSET UNITYSDK_OFFSET(0xF1D8C60)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_35DD9F229AF5C1D0_OFFSET UNITYSDK_OFFSET(0xF1904B0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_39CF31F4D7DD3B81_OFFSET UNITYSDK_OFFSET(0xF1D7DE0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_408445D4519BA880_OFFSET UNITYSDK_OFFSET(0xF1D1250)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_41206355B1BC7902_OFFSET UNITYSDK_OFFSET(0xF1D72C0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_4307B2A4B4A12C1A_1_OFFSET UNITYSDK_OFFSET(0xF1D5880)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_4307B2A4B4A12C1A_2_OFFSET UNITYSDK_OFFSET(0xF1D5B60)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xF1CF240)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_4E4D3005862CA49B_OFFSET UNITYSDK_OFFSET(0xF1D8120)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_4FF38CFCA5B3077D_OFFSET UNITYSDK_OFFSET(0xF1D0B00)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_511BD23D89CDE949_OFFSET UNITYSDK_OFFSET(0xF1D40D0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_52084BFE92581342_OFFSET UNITYSDK_OFFSET(0xF1D88E0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_5A0DB1B7B9BE25BD_OFFSET UNITYSDK_OFFSET(0xF1CE2D0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_5D22ABED9373C2B3_OFFSET UNITYSDK_OFFSET(0xF1D8D10)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_658323AD993800CF_OFFSET UNITYSDK_OFFSET(0xF1D1000)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_6964C65990684D4A_OFFSET UNITYSDK_OFFSET(0xF1B5F70)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_70D35EA6595005E0_OFFSET UNITYSDK_OFFSET(0xF1D5610)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_722196BE0640FA62_OFFSET UNITYSDK_OFFSET(0xF1CE810)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0xF1D8870)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_79B90490025ABC83_OFFSET UNITYSDK_OFFSET(0xF1D9340)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_7C70D627BA6F6091_OFFSET UNITYSDK_OFFSET(0xF1D8F30)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_7EC8FB1E5C75BFDC_OFFSET UNITYSDK_OFFSET(0xF1D7970)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_803856DB6C5D9DB5_OFFSET UNITYSDK_OFFSET(0xF1D9F60)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_8F537CE539CF0103_OFFSET UNITYSDK_OFFSET(0xF1D8DE0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_8F673316E45525AC_OFFSET UNITYSDK_OFFSET(0xF1D7510)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_9216B801ACD0B564_OFFSET UNITYSDK_OFFSET(0xF1CF700)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_98B7D142FBED6D85_OFFSET UNITYSDK_OFFSET(0xF1D5C10)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_A1C464B05BB7A5C1_OFFSET UNITYSDK_OFFSET(0xF1D83A0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_A50B0776CACF3F3C_OFFSET UNITYSDK_OFFSET(0xF1D5CF0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_A8C3CD0F3AB51701_OFFSET UNITYSDK_OFFSET(0xF1D8AC0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_A9A048D3B4CDDD40_OFFSET UNITYSDK_OFFSET(0xF1D69E0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_AA05F99BBEDA8B55_OFFSET UNITYSDK_OFFSET(0xF1D7F90)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_AD7283B0EE0C18A1_OFFSET UNITYSDK_OFFSET(0xF1D6D90)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_AF36EBA0C8D1FBA2_OFFSET UNITYSDK_OFFSET(0xF1D09A0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_B50425D0A09C6F35_OFFSET UNITYSDK_OFFSET(0xF1D84C0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_B81E7C3D0102EBE3_OFFSET UNITYSDK_OFFSET(0xF1D6830)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_B8988AFA2C9F74D0_OFFSET UNITYSDK_OFFSET(0xF1CF450)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_C137F5CD6FDEBE03_OFFSET UNITYSDK_OFFSET(0xF1CE280)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_C17DDF50E9F40898_OFFSET UNITYSDK_OFFSET(0xF1D8330)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0xF1D9020)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_CE13F95478F90C1E_OFFSET UNITYSDK_OFFSET(0xF1CFC30)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_D33218A492B26449_OFFSET UNITYSDK_OFFSET(0xF1D12B0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_D60F4BA24E06086B_OFFSET UNITYSDK_OFFSET(0xF1D4120)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_D92CEBF2FF830E5C_OFFSET UNITYSDK_OFFSET(0xF1D4220)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_DCEDA9CA86F04212_OFFSET UNITYSDK_OFFSET(0xF1D6200)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_E34FD37B13C162FC_OFFSET UNITYSDK_OFFSET(0xF1D1EC0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_E59CAA2089D7E8B1_OFFSET UNITYSDK_OFFSET(0xF1D5930)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_ECCE25DC2E771DF4_OFFSET UNITYSDK_OFFSET(0xF1CC820)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_F25FA9F7CFC308C3_1_OFFSET UNITYSDK_OFFSET(0xF1D6020)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_F25FA9F7CFC308C3_OFFSET UNITYSDK_OFFSET(0xF1D5E40)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_F441ACB416811999_OFFSET UNITYSDK_OFFSET(0xF1D6B90)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_F8EC8B3D73CFFDCF_OFFSET UNITYSDK_OFFSET(0xF193D00)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_FA4F4834B590F55F_OFFSET UNITYSDK_OFFSET(0xF1D6F80)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0xF1D98E0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0xF1D98A0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_SET_ACTIVEPROFILETRANSITIONTARGET_OFFSET UNITYSDK_OFFSET(0xF1CE330)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_SET_NAMEEX_OFFSET UNITYSDK_OFFSET(0xF1CE420)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_SET_PROFILEPATHEX_OFFSET UNITYSDK_OFFSET(0xF1CE400)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE__CCTOR_OFFSET UNITYSDK_OFFSET(0xF1DA090)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0xF1D9FE0)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviromentProfile_TypeDefinitionIndex = 47730;

	class EnviromentProfile : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::EnviromentSystem::EnviromentProfile** StaticGet__DefaultProfileTemplate()
		{
			return (::EnviromentSystem::EnviromentProfile**)Il2CppClass::FromTypeDefinitionIndex(EnviromentProfile_TypeDefinitionIndex)->GetStaticField(0x35790);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>** StaticGet__EnvPropShaderIDToIndex()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(EnviromentProfile_TypeDefinitionIndex)->GetStaticField(0x35798);
		}
		static ::System::Collections::Generic::Stack_1<::EnviromentSystem::EnviromentProfile*>** StaticGet__DefaultProfilePool()
		{
			return (::System::Collections::Generic::Stack_1<::EnviromentSystem::EnviromentProfile*>**)Il2CppClass::FromTypeDefinitionIndex(EnviromentProfile_TypeDefinitionIndex)->GetStaticField(0x357A0);
		}
		static ::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>** StaticGet__LoadResources()
		{
			return (::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>**)Il2CppClass::FromTypeDefinitionIndex(EnviromentProfile_TypeDefinitionIndex)->GetStaticField(0x357A8);
		}
		static ::System::Int32* StaticGet_TransitionRateID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviromentProfile_TypeDefinitionIndex)->GetStaticField(0x8CE0);
		}
		static ::System::Int32* StaticGet_GlobalRotMatrixID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviromentProfile_TypeDefinitionIndex)->GetStaticField(0x8CE4);
		}
		static ::System::Int32* StaticGet_ShadowDirID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviromentProfile_TypeDefinitionIndex)->GetStaticField(0x8CE8);
		}
		::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* OnLoadFinish; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* PropertiesTable; // 0x20
		::System::Boolean _isFullProfile; // 0x28
		::EnviromentSystem::EnviromentProfile* activeProfileTransitionTarget; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* _ClipTypes; // 0x38
		::System::String* ProfilePath; // 0x40
		::System::String* ProfilePathNext; // 0x48
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>* AsyncLoadResources; // 0x50
		::System::Boolean IsAsyncLoadFinished; // 0x58
		::System::Boolean IsInited; // 0x59
		::System::Int32 loadResourcesCount; // 0x5C
		::System::Int32 iTaskDoneCount; // 0x60
		::EnviromentSystem::EnviroBlockDataTransProperty* _EnviroBlockDataTransProperty; // 0x68
		::System::Boolean IsSubClip; // 0x70
		::System::Boolean IsKeepEnviroBlockData; // 0x71
		::System::Boolean NeedUpdateEnvPrefab; // 0x72
		::System::Boolean OriIsSubClip; // 0x73
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviromentClip*>* EnviroProfileClips; // 0x78
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroBoolProperty*>* EnviroBoolProperties; // 0x80
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroFloatProperty*>* EnviroFloatProperties; // 0x88
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroLocalLightGroupProperty*>* EnviroLocalLightGroupProperties; // 0x90
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroVectorProperty*>* EnviroVectorProperties; // 0x98
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroEnumProperty*>* EnviroEnumProperties; // 0xA0
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroTextureProperty*>* EnviroTextureProperties; // 0xA8
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroPrefabProperty*>* EnviroPrefabProperties; // 0xB0
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroGradientProperty*>* EnviroGradientProperties; // 0xB8
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroGpuParticleProperty*>* EnviroGpuParticleProperties; // 0xC0
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroReflectionProbeProperty*>* EnviroReflectionProbeProperties; // 0xC8
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroPointLightProperty*>* EnviroPointLightProperties; // 0xD0
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroParticleProperty*>* EnviroParticleProperties; // 0xD8
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroEffectLightProperty*>* EnviroEffectLightingProperties; // 0xE0
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroPostProcessVolumeProperty*>* EnviroPPVolumeProperties; // 0xE8
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroWindZoneProperty*>* EnviroWindZoneProperties; // 0xF0
		::System::Boolean IsCancelAsyncLoad; // 0xF8
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>* TempProperties; // 0x100
		::Il2CppArray<::System::Int32>* TempPropertiesArray; // 0x108
		::EnviromentSystem::EnviromentProfile_Struct_2_4A5861BA045B4A85 _CopyTexCmd; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE__CCTOR_OFFSET))();
		}

		::System::Int32 Method_3_C137F5CD6FDEBE03(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::System::Int32(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_C137F5CD6FDEBE03_OFFSET))(this, a1);
		}

		::System::Void Method_3_5A0DB1B7B9BE25BD(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Int32))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_5A0DB1B7B9BE25BD_OFFSET))(this, a1, a2);
		}

		::Class_0_16E4307DCC419505_336* get_ActiveProfileTransitionTarget()
		{
			return ((::Class_0_16E4307DCC419505_336*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_GET_ACTIVEPROFILETRANSITIONTARGET_OFFSET))(this);
		}

		::System::Void set_ActiveProfileTransitionTarget(::Class_0_16E4307DCC419505_336* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_336*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_SET_ACTIVEPROFILETRANSITIONTARGET_OFFSET))(this, a1);
		}

		::System::String* get_ProfilePathEx()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_GET_PROFILEPATHEX_OFFSET))(this);
		}

		::System::Void set_ProfilePathEx(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_SET_PROFILEPATHEX_OFFSET))(this, a1);
		}

		::System::String* get_NameEx()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_GET_NAMEEX_OFFSET))(this);
		}

		::System::Void set_NameEx(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_SET_NAMEEX_OFFSET))(this, a1);
		}

		static ::System::Void Method_3_0C42DDDF06BF692D()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_0C42DDDF06BF692D_OFFSET))();
		}

		static ::EnviromentSystem::EnviromentProfile* Method_3_722196BE0640FA62()
		{
			return ((::EnviromentSystem::EnviromentProfile*(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_722196BE0640FA62_OFFSET))();
		}

		static ::EnviromentSystem::EnviromentProfile* Method_3_2092EACB383790AB()
		{
			return ((::EnviromentSystem::EnviromentProfile*(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_2092EACB383790AB_OFFSET))();
		}

		static ::EnviromentSystem::EnviromentProfile* Method_3_2BB7E72A7E700799()
		{
			return ((::EnviromentSystem::EnviromentProfile*(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_2BB7E72A7E700799_OFFSET))();
		}

		::System::Void Method_3_B8988AFA2C9F74D0(::Il2CppArray<::System::String*>*& a1, ::Il2CppArray<::System::Type*>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*&, ::Il2CppArray<::System::Type*>*&))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_B8988AFA2C9F74D0_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_2839AE123F8ECAA7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_2839AE123F8ECAA7_OFFSET))(this);
		}

		::System::Void Method_3_283228DCA08F69C7(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_283228DCA08F69C7_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_16E2C4C5C61F8FDB(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_16E2C4C5C61F8FDB_OFFSET))(this, a1);
		}

		::System::Void Method_3_AF36EBA0C8D1FBA2(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_AF36EBA0C8D1FBA2_OFFSET))(this, a1);
		}

		::System::Void Method_3_4FF38CFCA5B3077D(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_4FF38CFCA5B3077D_OFFSET))(this, a1);
		}

		::System::Void Method_3_408445D4519BA880(::RPG::CustomRP::GameCameraType a1, ::UnityEngine::Rendering::CommandBuffer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::GameCameraType, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_408445D4519BA880_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_4307B2A4B4A12C1A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_4307B2A4B4A12C1A_OFFSET))(this);
		}

		::System::Void Method_3_D33218A492B26449()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_D33218A492B26449_OFFSET))(this);
		}

		::System::Void Method_3_CE13F95478F90C1E(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_CE13F95478F90C1E_OFFSET))(this, a1);
		}

		::System::Void Method_3_E34FD37B13C162FC(::Class_0_16E4307DCC419505_336* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_336*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_E34FD37B13C162FC_OFFSET))(this, a1);
		}

		::SceneLightVolume* Method_3_511BD23D89CDE949()
		{
			return ((::SceneLightVolume*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_511BD23D89CDE949_OFFSET))(this);
		}

		::System::Void Method_3_D60F4BA24E06086B(::Class_1_303D5A33D1401D59* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_D60F4BA24E06086B_OFFSET))(this, a1);
		}

		::System::Void Method_3_2F68009C40503107(::Class_1_303D5A33D1401D59* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_2F68009C40503107_OFFSET))(this, a1);
		}

		::System::Void Method_3_D92CEBF2FF830E5C(::Class_0_16E4307DCC419505_336* a1, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_336*, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_D92CEBF2FF830E5C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_01244C5D42565CB2(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_01244C5D42565CB2_OFFSET))(this, a1);
		}

		::System::Void Method_3_4307B2A4B4A12C1A_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_4307B2A4B4A12C1A_1_OFFSET))(this);
		}

		::System::Void Method_3_70D35EA6595005E0(::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_70D35EA6595005E0_OFFSET))(this, a1);
		}

		::System::Void Method_3_E59CAA2089D7E8B1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_E59CAA2089D7E8B1_OFFSET))(this);
		}

		::System::Void Method_3_063ADB01C44981A7(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_063ADB01C44981A7_OFFSET))(this, a1);
		}

		::System::Void Method_3_4307B2A4B4A12C1A_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_4307B2A4B4A12C1A_2_OFFSET))(this);
		}

		::System::Void Method_3_98B7D142FBED6D85()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_98B7D142FBED6D85_OFFSET))(this);
		}

		::System::Void Method_3_6964C65990684D4A(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_6964C65990684D4A_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_A50B0776CACF3F3C(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_A50B0776CACF3F3C_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Light* Method_3_F25FA9F7CFC308C3(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_F25FA9F7CFC308C3_OFFSET))(this, a1);
		}

		::UnityEngine::Light* Method_3_F25FA9F7CFC308C3_1(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_F25FA9F7CFC308C3_1_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_DCEDA9CA86F04212(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_DCEDA9CA86F04212_OFFSET))(this, a1);
		}

		::EnviromentSystem::EnviroProperty* Method_3_35DD9F229AF5C1D0(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::EnviromentSystem::EnviroProperty*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_35DD9F229AF5C1D0_OFFSET))(this, a1);
		}

		::System::Int32 Method_3_2BA9010C7C33DCAE(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::System::Int32(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_2BA9010C7C33DCAE_OFFSET))(this, a1);
		}

		::UnityEngine::Texture* Method_3_B81E7C3D0102EBE3(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_B81E7C3D0102EBE3_OFFSET))(this, a1);
		}

		::UnityEngine::Gradient* Method_3_A9A048D3B4CDDD40(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_A9A048D3B4CDDD40_OFFSET))(this, a1);
		}

		::System::Void Method_3_F441ACB416811999(::EnviromentSystem::EnviromentPropertiesID a1, ::UnityEngine::Gradient* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_F441ACB416811999_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_AD7283B0EE0C18A1(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_AD7283B0EE0C18A1_OFFSET))(this, a1, a2);
		}

		::System::Single Method_3_658323AD993800CF(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::System::Single(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_658323AD993800CF_OFFSET))(this, a1);
		}

		::System::Void Method_3_FA4F4834B590F55F(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_FA4F4834B590F55F_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 Method_3_41206355B1BC7902(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::System::Int32(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_41206355B1BC7902_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 Method_3_ECCE25DC2E771DF4(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_ECCE25DC2E771DF4_OFFSET))(this, a1);
		}

		::System::Void Method_3_8F673316E45525AC(::EnviromentSystem::EnviromentPropertiesID a1, ::UnityEngine::Vector4 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::UnityEngine::Vector4, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_8F673316E45525AC_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_3_F8EC8B3D73CFFDCF(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_F8EC8B3D73CFFDCF_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_7EC8FB1E5C75BFDC(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_7EC8FB1E5C75BFDC_OFFSET))(this, a1);
		}

		::System::Void Method_3_33A7DE6DC0669409(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_33A7DE6DC0669409_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::GameObject* Method_3_39CF31F4D7DD3B81(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_39CF31F4D7DD3B81_OFFSET))(this, a1);
		}

		::EnviromentSystem::EnviroGpuParticleProperty* Method_3_AA05F99BBEDA8B55()
		{
			return ((::EnviromentSystem::EnviroGpuParticleProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_AA05F99BBEDA8B55_OFFSET))(this);
		}

		::EnviromentSystem::EnviroWindZoneProperty* Method_3_4E4D3005862CA49B()
		{
			return ((::EnviromentSystem::EnviroWindZoneProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_4E4D3005862CA49B_OFFSET))(this);
		}

		::System::Boolean Method_3_1808E1CF7A125519()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_1808E1CF7A125519_OFFSET))(this);
		}

		::UnityEngine::RenderTexture* Method_3_C17DDF50E9F40898()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_C17DDF50E9F40898_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_3_A1C464B05BB7A5C1()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_A1C464B05BB7A5C1_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_3_31B71B6D307F7F0C()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_31B71B6D307F7F0C_OFFSET))(this);
		}

		::EnviromentSystem::EnviroParticleProperty* Method_3_B50425D0A09C6F35()
		{
			return ((::EnviromentSystem::EnviroParticleProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_B50425D0A09C6F35_OFFSET))(this);
		}

		::EnviromentSystem::EnviroEffectLightProperty* Method_3_1B0CF56F555C9A93()
		{
			return ((::EnviromentSystem::EnviroEffectLightProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_1B0CF56F555C9A93_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_3_2DA5E14835AEFAD5()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_2DA5E14835AEFAD5_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_3_77FD543600E00498()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_77FD543600E00498_OFFSET))(this);
		}

		::System::Void Method_3_52084BFE92581342(::System::Boolean a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_52084BFE92581342_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Rendering::VolumeProfile* Method_3_A8C3CD0F3AB51701()
		{
			return ((::UnityEngine::Rendering::VolumeProfile*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_A8C3CD0F3AB51701_OFFSET))(this);
		}

		::EnviromentSystem::EnviroProperty* Method_3_35DD9F229AF5C1D0_1(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::EnviromentSystem::EnviroProperty*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_35DD9F229AF5C1D0_1_OFFSET))(this, a1);
		}

		::System::Void Method_3_5D22ABED9373C2B3(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_5D22ABED9373C2B3_OFFSET))(this, a1);
		}

		::System::Void Method_3_8F537CE539CF0103()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_8F537CE539CF0103_OFFSET))(this);
		}

		::System::Void Method_3_0DABAC67FBEEEDA6(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_0DABAC67FBEEEDA6_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_7C70D627BA6F6091(::UnityEngine::Rendering::AmbientVolumneData& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AmbientVolumneData&))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_7C70D627BA6F6091_OFFSET))(this, a1);
		}

		::System::Void Method_3_9216B801ACD0B564()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_9216B801ACD0B564_OFFSET))(this);
		}

		::System::Void Method_3_C706B1EC6D2E1C64()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_C706B1EC6D2E1C64_OFFSET))(this);
		}

		::System::Void Method_3_1B214D9710BB7534(::RPG::CustomRP::GameCameraType a1, ::UnityEngine::Rendering::CommandBuffer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::GameCameraType, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_1B214D9710BB7534_OFFSET))(this, a1, a2);
		}

		::System::Int32 Method_3_79B90490025ABC83(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_79B90490025ABC83_OFFSET))(this, a1);
		}

		::System::Void Method_3_1454625925CA73F5(::Class_0_16E4307DCC419505_336* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_336*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_1454625925CA73F5_OFFSET))(this, a1);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Int32>* Method_3_803856DB6C5D9DB5()
		{
			return ((::Il2CppArray<::System::Int32>*(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_803856DB6C5D9DB5_OFFSET))();
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_64FEF67DF2D01E84.h"
#include "unitysdk/Foundation/Tuple_3.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESLoopable.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole { class ConfigAnimationCurveGroup; }
namespace MoleMole { class ConfigMaterialPropertyModifier; }
namespace MoleMole::EffectSimulate { class ESAvatarMatChange_RendererPartInfo; }
namespace MoleMole::EffectSimulate { class Float01KeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector401KeyframeCurve; }
namespace MoleMole::EffectSimulate { template <typename T> class Keyframeable01Curve_1; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_032DFEAD312377C0_OFFSET UNITYSDK_OFFSET(0x18F53BE0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_0721A34A3F235CD6_OFFSET UNITYSDK_OFFSET(0x18F55370)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_0A3CE4A741F45029_OFFSET UNITYSDK_OFFSET(0x18F55BC0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x18F55220)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_0FF9BF68FEB50D87_OFFSET UNITYSDK_OFFSET(0x18F50DA0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_15589D72A798461B_OFFSET UNITYSDK_OFFSET(0x18F51A50)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_15DCCE49BC0108C7_OFFSET UNITYSDK_OFFSET(0x18F55D90)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_167F9AB65FD3C1E9_OFFSET UNITYSDK_OFFSET(0x18F56510)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_18F90A371677B540_OFFSET UNITYSDK_OFFSET(0x18F56300)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_1B8ECE9B8EFBF530_OFFSET UNITYSDK_OFFSET(0x18F52390)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_1DC5C67BADA233F2_OFFSET UNITYSDK_OFFSET(0x18F522C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_1EC08054332D6E78_OFFSET UNITYSDK_OFFSET(0x18F53CA0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_1F35A34EF6B8D691_OFFSET UNITYSDK_OFFSET(0x18F53930)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_25862DBE61A3FF7D_OFFSET UNITYSDK_OFFSET(0x18F514D0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x18F52CF0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_2A621E60C1B92639_OFFSET UNITYSDK_OFFSET(0x18F54C20)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_30F055975532AFD2_OFFSET UNITYSDK_OFFSET(0x18F55C70)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3465AD12EDAA53AB_OFFSET UNITYSDK_OFFSET(0x18F537F0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_351C4FD1DB2A02BE_OFFSET UNITYSDK_OFFSET(0x18F50530)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x18F53C10)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x18F4F4B0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3B59663CDC1F907C_OFFSET UNITYSDK_OFFSET(0x18F51F00)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x18F52FA0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3F6D459B7BA17E37_OFFSET UNITYSDK_OFFSET(0x18F513D0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4272BE5198E6F216_OFFSET UNITYSDK_OFFSET(0x18F51A40)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x18F541B0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x18F54160)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_49D41C826A66EA0F_OFFSET UNITYSDK_OFFSET(0x18F4FDB0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4BD70257E617DEC0_OFFSET UNITYSDK_OFFSET(0x18F55540)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4EF39E24235C05BA_OFFSET UNITYSDK_OFFSET(0x18F4FE80)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4F127FCB7C2E8AED_OFFSET UNITYSDK_OFFSET(0x18F52CA0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_595E641DF1B4387D_1_OFFSET UNITYSDK_OFFSET(0x18F507B0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_595E641DF1B4387D_OFFSET UNITYSDK_OFFSET(0x18F52D90)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_5C27C8EFFB7EF72B_OFFSET UNITYSDK_OFFSET(0x18F54430)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_66193B8782064F5D_OFFSET UNITYSDK_OFFSET(0x18F506B0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_681E224EC188A7D5_OFFSET UNITYSDK_OFFSET(0x18F4F4F0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_71F8914B71084768_OFFSET UNITYSDK_OFFSET(0x18F56350)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_74DF49A67006D1EF_OFFSET UNITYSDK_OFFSET(0x18F533A0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_77254DE60C8D74CE_OFFSET UNITYSDK_OFFSET(0x18F54750)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_7EAAFC58338571AC_OFFSET UNITYSDK_OFFSET(0x18F54080)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_8558E387859BE466_OFFSET UNITYSDK_OFFSET(0x18F55130)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_86ADBB4228161C74_OFFSET UNITYSDK_OFFSET(0x18F4F650)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_93B11D936DE46402_OFFSET UNITYSDK_OFFSET(0x18F56650)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_9441529D4B4B549D_OFFSET UNITYSDK_OFFSET(0x18F4F600)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_97B3D064317CBD55_OFFSET UNITYSDK_OFFSET(0x18F4FBF0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_9F8EF6EE79B16064_OFFSET UNITYSDK_OFFSET(0x18F50170)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_A239DF324AF4215D_1_OFFSET UNITYSDK_OFFSET(0x18F50710)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x18F554A0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_A36A663AAAEECCC3_OFFSET UNITYSDK_OFFSET(0x18F54310)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_AAA5D9082F14E784_OFFSET UNITYSDK_OFFSET(0x18F4FB90)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_AB16839EF6AC669C_OFFSET UNITYSDK_OFFSET(0x18F549D0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_ABC8D484A6686265_OFFSET UNITYSDK_OFFSET(0x18F501E0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_B14F449F40FB49A1_OFFSET UNITYSDK_OFFSET(0x18F52140)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_B700C588F0375CB9_OFFSET UNITYSDK_OFFSET(0x18F4FCC0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_B747781924F4C9A5_OFFSET UNITYSDK_OFFSET(0x18F54A10)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_BE0B46E2EB67FE6C_OFFSET UNITYSDK_OFFSET(0x18F51170)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_C7AAF17DCEC0ED53_OFFSET UNITYSDK_OFFSET(0x18F509C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x18F4FB50)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x18F55460)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x18F55C30)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18F4FB10)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CCFDEEDCD5323B77_OFFSET UNITYSDK_OFFSET(0x18F54AE0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CD291CEE2301C52F_OFFSET UNITYSDK_OFFSET(0x18F531B0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CE3C4BA2A61197F1_OFFSET UNITYSDK_OFFSET(0x18F535D0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_DA0E665FDD3C2872_OFFSET UNITYSDK_OFFSET(0x18F50EF0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_DA3AB34EE5446F46_OFFSET UNITYSDK_OFFSET(0x18F4F880)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_DE0AC7DE7E87AD18_OFFSET UNITYSDK_OFFSET(0x18F50B40)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_E0F2C81B101352A9_OFFSET UNITYSDK_OFFSET(0x18F563A0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_EEA73B6010018ADD_OFFSET UNITYSDK_OFFSET(0x18F4F550)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_F0F497FA4BDD6520_OFFSET UNITYSDK_OFFSET(0x18F556A0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_F291D33602C690AF_OFFSET UNITYSDK_OFFSET(0x18F53030)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_F7F86838A0D8F98E_OFFSET UNITYSDK_OFFSET(0x18F54610)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_F91B8892FC7A8C48_1_OFFSET UNITYSDK_OFFSET(0x18F4FC60)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_F91B8892FC7A8C48_OFFSET UNITYSDK_OFFSET(0x18F4F5A0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F50520)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18F502B0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESAvatarMatChange_TypeDefinitionIndex = 40403;

	class ESAvatarMatChange : public ::MoleMole::EffectSimulate::ESLoopable
	{
	public:
		static ::System::Action_2<::UnityEngine::Material*, ::System::Boolean>** StaticGet_m_fcMakeAvatarMatKeywordChange()
		{
			return (::System::Action_2<::UnityEngine::Material*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ESAvatarMatChange_TypeDefinitionIndex)->GetStaticField(0x4F3F0);
		}
		// static const ::System::Int32 DRAW_ORDER = 0x14; // 0x0
		// static const ::System::String* BASE_GROUP_NAME; // 0x0
		// static const ::System::String* OTHER_GROUP_NAME; // 0x0
		// static const ::System::Int32 TOP_DRAW_ORDER = 0xFFFFFF9C; // 0x0
		// static const ::System::String* RENDERER_PART_CONFIG_GROUP_NAME; // 0x0
		// static const ::System::String* MAT_PROP_MODIFIER_ASSET_FOLDER_PATH; // 0x0
		// static const ::System::String* MAT_PROP_MODIFIER_ASSET_AUTOGEN_FOLDER_PATH; // 0x0
		// static const ::System::String* MAT_PROP_MODIFIER_TEMP_SELECT_SPLIT_CHAR; // 0x0
		::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo* m_stOverrideRendererPartInfo; // 0x58
		::UnityEngine::Renderer* m_stRenderer; // 0x60
		::System::Int32 _uniqueSeqID; // 0x68
		::System::String* _tempSelect; // 0x70
		::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo* rendererPartInfo; // 0x78
		::UnityEngine::AnimationCurve* fadeInCurve; // 0x80
		::UnityEngine::AnimationCurve* fadeOutCurve; // 0x88
		::UnityEngine::AnimationCurve* fadeOutCurve_Shower; // 0x90
		::System::Int32 priority; // 0x98
		::System::Boolean ignoreWorldTimescale; // 0x9C
		::System::Boolean ignoreOwnerTimescale; // 0x9D
		::System::Boolean ignoreWitchTimescale; // 0x9E
		::System::Boolean canCarryIntoBlackCurtain; // 0x9F
		::System::Boolean forbidSuspendByBlackCurtain; // 0xA0
		::System::Boolean endPerformWhiteList; // 0xA1
		::System::Boolean applyToAllShaders; // 0xA2
		::System::Boolean canPlayInCoopNonAuthority; // 0xA3
		::System::Boolean UseQuaSetting; // 0xA4
		::MoleMole::Config::MatPropertySetting QuaSetting; // 0xA5
		::MoleMole::EffectSimulate::Float01KeyframeCurve* enableCurve; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE__CCTOR_OFFSET))();
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Type* Method_3_681E224EC188A7D5()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_681E224EC188A7D5_OFFSET))(this);
		}

		::MoleMole::Config::MaterialPropertyType Method_3_EEA73B6010018ADD()
		{
			return ((::MoleMole::Config::MaterialPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_EEA73B6010018ADD_OFFSET))(this);
		}

		::System::Void Method_3_F91B8892FC7A8C48(::MoleMole::ConfigMaterialPropertyModifier* a1, ::MoleMole::ConfigAnimationCurveGroup* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyModifier*, ::MoleMole::ConfigAnimationCurveGroup*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_F91B8892FC7A8C48_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_9441529D4B4B549D(::MoleMole::ConfigMaterialPropertyModifier* a1, ::MoleMole::ConfigAnimationCurveGroup* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyModifier*, ::MoleMole::ConfigAnimationCurveGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_9441529D4B4B549D_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_3_86ADBB4228161C74()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_86ADBB4228161C74_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_3_AAA5D9082F14E784(::UnityEngine::Material* a1, ::UnityEngine::MaterialPropertyBlock* a2, ::UnityEngine::Material* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_AAA5D9082F14E784_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_97B3D064317CBD55(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::MaterialPropertyBlock* a3, ::UnityEngine::Material* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_97B3D064317CBD55_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_F91B8892FC7A8C48_1(::MoleMole::ConfigMaterialPropertyModifier* a1, ::MoleMole::ConfigAnimationCurveGroup* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyModifier*, ::MoleMole::ConfigAnimationCurveGroup*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_F91B8892FC7A8C48_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_B700C588F0375CB9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_B700C588F0375CB9_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_4EF39E24235C05BA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4EF39E24235C05BA_OFFSET))(this);
		}

		::System::Void Method_3_9F8EF6EE79B16064(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_9F8EF6EE79B16064_OFFSET))(this, a1);
		}

		::System::Void Method_3_ABC8D484A6686265(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_ABC8D484A6686265_OFFSET))(this, a1);
		}

		::System::Single Method_3_DA3AB34EE5446F46()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_DA3AB34EE5446F46_OFFSET))(this);
		}

		::System::Boolean Method_3_66193B8782064F5D()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_66193B8782064F5D_OFFSET))(this);
		}

		::System::Void Method_3_C7AAF17DCEC0ED53(::UnityEngine::MaterialPropertyBlock* a1, ::System::String* a2, ::UnityEngine::Vector4 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_C7AAF17DCEC0ED53_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_DE0AC7DE7E87AD18(::UnityEngine::Material* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_DE0AC7DE7E87AD18_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_0FF9BF68FEB50D87(::UnityEngine::Material* a1, ::UnityEngine::Material* a2, ::System::Boolean a3, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector2>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_0FF9BF68FEB50D87_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_BE0B46E2EB67FE6C(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::Material* a3, ::System::Boolean a4, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector4>* a5, ::System::Byte a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector4>*, ::System::Byte))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_BE0B46E2EB67FE6C_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_3_4272BE5198E6F216(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4272BE5198E6F216_OFFSET))(this, a1);
		}

		::System::Void Method_3_15589D72A798461B(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::System::String* a3, ::UnityEngine::Texture* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::String*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_15589D72A798461B_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_B14F449F40FB49A1(::UnityEngine::MaterialPropertyBlock* a1, ::System::String* a2, ::UnityEngine::Color a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_B14F449F40FB49A1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_1DC5C67BADA233F2(::UnityEngine::Material* a1, ::UnityEngine::Material* a2, ::System::String* a3, ::System::Boolean a4, ::UnityEngine::Texture* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::String*, ::System::Boolean, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_1DC5C67BADA233F2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean Method_3_1B8ECE9B8EFBF530(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_1B8ECE9B8EFBF530_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_595E641DF1B4387D()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_595E641DF1B4387D_OFFSET))(this);
		}

		::System::Void Method_3_3E7178C5ECF017DB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3E7178C5ECF017DB_OFFSET))(this, a1);
		}

		::System::Void Method_3_3B59663CDC1F907C(::UnityEngine::Material* a1, ::System::String* a2, ::UnityEngine::Texture* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3B59663CDC1F907C_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_F291D33602C690AF(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::Material* a3, ::System::Boolean a4, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector2>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_F291D33602C690AF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_3_CD291CEE2301C52F(::UnityEngine::Material* a1, ::UnityEngine::MaterialPropertyBlock* a2, ::System::String* a3, ::System::Boolean a4, ::UnityEngine::Texture* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::System::String*, ::System::Boolean, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CD291CEE2301C52F_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean Method_3_CE3C4BA2A61197F1(::MoleMole::EffectSimulate::Vector401KeyframeCurve* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EffectSimulate::Vector401KeyframeCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CE3C4BA2A61197F1_OFFSET))(this, a1);
		}

		::System::Void Method_3_3465AD12EDAA53AB(::UnityEngine::Material* a1, ::UnityEngine::Material* a2, ::System::Boolean a3, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Color>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3465AD12EDAA53AB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Collections::Generic::List_1<::Foundation::Tuple_3<::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*>>*>* Method_3_032DFEAD312377C0()
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Collections::Generic::List_1<::Foundation::Tuple_3<::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*>>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_032DFEAD312377C0_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::Void Method_3_1EC08054332D6E78(::System::Action_4<::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_4<::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_1EC08054332D6E78_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_7EAAFC58338571AC(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::Material* a3, ::System::String* a4, ::System::Boolean a5, ::UnityEngine::Texture* a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::String*, ::System::Boolean, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_7EAAFC58338571AC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::Enum_3_64FEF67DF2D01E84 Method_3_351C4FD1DB2A02BE()
		{
			return ((::Enum_3_64FEF67DF2D01E84(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_351C4FD1DB2A02BE_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_A36A663AAAEECCC3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_A36A663AAAEECCC3_OFFSET))(this);
		}

		::System::Void Method_3_5C27C8EFFB7EF72B(::UnityEngine::Material* a1, ::UnityEngine::MaterialPropertyBlock* a2, ::System::Boolean a3, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::System::Single>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_5C27C8EFFB7EF72B_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_49D41C826A66EA0F(::System::Action_3<::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_49D41C826A66EA0F_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_77254DE60C8D74CE(::UnityEngine::Material* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_77254DE60C8D74CE_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void Method_3_AB16839EF6AC669C(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_AB16839EF6AC669C_OFFSET))(a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_3_B747781924F4C9A5()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_B747781924F4C9A5_OFFSET))(this);
		}

		::System::Void Method_3_CCFDEEDCD5323B77(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::Material* a3, ::System::Boolean a4, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::System::Single>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CCFDEEDCD5323B77_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_3_8558E387859BE466(::UnityEngine::Material* a1, ::UnityEngine::MaterialPropertyBlock* a2, ::System::Boolean a3, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector4>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_8558E387859BE466_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Method_3_0B1EB5C9B94BAB66()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_0B1EB5C9B94BAB66_OFFSET))(this);
		}

		::System::Void Method_3_0721A34A3F235CD6(::UnityEngine::Material* a1, ::UnityEngine::MaterialPropertyBlock* a2, ::System::Boolean a3, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Color>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_0721A34A3F235CD6_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_1F35A34EF6B8D691(::UnityEngine::Material* a1, ::System::String* a2, ::UnityEngine::Color a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_1F35A34EF6B8D691_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
		}

		::System::Void Method_3_A239DF324AF4215D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_A239DF324AF4215D_OFFSET))(this);
		}

		::System::Void Method_3_4BD70257E617DEC0(::UnityEngine::MaterialPropertyBlock* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4BD70257E617DEC0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_F0F497FA4BDD6520(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_F0F497FA4BDD6520_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_25862DBE61A3FF7D(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::System::String* a3, ::UnityEngine::Vector4 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_25862DBE61A3FF7D_OFFSET))(this, a1, a2, a3, a4);
		}

		::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo* Method_3_4F127FCB7C2E8AED()
		{
			return ((::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4F127FCB7C2E8AED_OFFSET))(this);
		}

		::System::Void Method_3_DA0E665FDD3C2872(::UnityEngine::Material* a1, ::System::String* a2, ::UnityEngine::Vector4 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_DA0E665FDD3C2872_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_0A3CE4A741F45029(::UnityEngine::Material* a1, ::UnityEngine::MaterialPropertyBlock* a2, ::UnityEngine::Material* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_0A3CE4A741F45029_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_A239DF324AF4215D_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_A239DF324AF4215D_1_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CA373AA1C7054598_3_OFFSET))(this);
		}

		::System::Void Method_3_2A621E60C1B92639(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::System::String* a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_2A621E60C1B92639_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_F7F86838A0D8F98E(::UnityEngine::MaterialPropertyBlock* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_F7F86838A0D8F98E_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_30F055975532AFD2(::UnityEngine::Material* a1, ::UnityEngine::Material* a2, ::System::Boolean a3, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::System::Single>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_30F055975532AFD2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Method_3_595E641DF1B4387D_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_595E641DF1B4387D_1_OFFSET))(this);
		}

		::System::Void Method_3_15DCCE49BC0108C7(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::System::String* a3, ::UnityEngine::Color a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_15DCCE49BC0108C7_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_74DF49A67006D1EF(::UnityEngine::MaterialPropertyBlock* a1, ::System::String* a2, ::UnityEngine::Texture* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::String*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_74DF49A67006D1EF_OFFSET))(this, a1, a2, a3);
		}

		::System::String* Method_3_18F90A371677B540(::UnityEngine::Object* a1)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_18F90A371677B540_OFFSET))(this, a1);
		}

		::System::Void Method_3_71F8914B71084768(::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_71F8914B71084768_OFFSET))(this, a1);
		}

		::System::Void Method_3_E0F2C81B101352A9(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::Material* a3, ::System::Boolean a4, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Color>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_E0F2C81B101352A9_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_3_167F9AB65FD3C1E9(::UnityEngine::Material* a1, ::UnityEngine::Material* a2, ::System::Boolean a3, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector4>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_167F9AB65FD3C1E9_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector4 Method_3_3F6D459B7BA17E37(::UnityEngine::Vector4 a1, ::UnityEngine::Vector4 a2, ::System::Byte a3)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Byte))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3F6D459B7BA17E37_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_93B11D936DE46402(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_93B11D936DE46402_OFFSET))(this, a1, a2);
		}
	};
}

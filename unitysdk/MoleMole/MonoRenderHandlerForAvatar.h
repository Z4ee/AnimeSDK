#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7F3F4476896DB547.h"
#include "unitysdk/MoleMole/MonoRenderHandler.h"
#include "unitysdk/MoleMole/MonoRenderHandlerForAvatar_Struct_2_7952382059FE8D18.h"
#include "unitysdk/MoleMole/MonoRenderHandlerForAvatar_Struct_2_E6333E5B8A276D86.h"
#include "unitysdk/MoleMole/StaticBoolMaterialModifier.h"
#include "unitysdk/MoleMole/StaticColorMaterialModifier.h"
#include "unitysdk/MoleMole/StaticFloatMaterialModifier.h"
#include "unitysdk/MoleMole/StaticKeywordFloatMaterialModifier.h"
#include "unitysdk/MoleMole/StaticKeywordMaterialModifier.h"
#include "unitysdk/MoleMole/StaticTextureMaterialModifier.h"
#include "unitysdk/MoleMole/StaticVectorMaterialModifier.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_8019128448F0E9D5;
class Class_1_9610394F487FC231;
class Class_1_A0B58236B258B7B2;
namespace MoleMole { class MonoRenderHandlerForAvatar_Class_1_E31A828FD7691185; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }

#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_FORCEUPDATEDITHERFXCLIP_OFFSET UNITYSDK_OFFSET(0x178304D0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_FORCEUPDATEFXCLIP_OFFSET UNITYSDK_OFFSET(0x178301C0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_INVALIDATEUPDATESWITCHCACHE_OFFSET UNITYSDK_OFFSET(0x17830160)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_36971FC3F16E2CEB_OFFSET UNITYSDK_OFFSET(0x178319D0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_3E5E39D0D3E9B5CD_OFFSET UNITYSDK_OFFSET(0x1782ED60)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_4D8DE63ACD68BAC3_OFFSET UNITYSDK_OFFSET(0x1782D200)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_515C5D9412196CB3_OFFSET UNITYSDK_OFFSET(0x1782FD50)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_5D5F16A6230C8F33_OFFSET UNITYSDK_OFFSET(0x1783AFB0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_62A845E20C4260F0_OFFSET UNITYSDK_OFFSET(0x1783A3E0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_6D3FB7CC639EF394_OFFSET UNITYSDK_OFFSET(0x1782C1E0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_6EFB9FF221105F53_OFFSET UNITYSDK_OFFSET(0x1782F980)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_77E3CF907BA6F8B7_OFFSET UNITYSDK_OFFSET(0x17829920)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_7F349DA94A1B78DF_OFFSET UNITYSDK_OFFSET(0x1782B290)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_8028CA7CF379A879_OFFSET UNITYSDK_OFFSET(0x1782DC30)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_83D69C60802E274D_OFFSET UNITYSDK_OFFSET(0x178299E0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_93C64601FA6F7E9D_OFFSET UNITYSDK_OFFSET(0x17839A60)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_96B03403C56455CD_OFFSET UNITYSDK_OFFSET(0x17831390)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_9D8CB5E47C1952BD_OFFSET UNITYSDK_OFFSET(0x17829630)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_A476CAA54063C150_OFFSET UNITYSDK_OFFSET(0x1782C720)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0x17831930)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_C0940C3855FBCBCA_OFFSET UNITYSDK_OFFSET(0x17830A70)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_D41D7B87AEBE6BD0_OFFSET UNITYSDK_OFFSET(0x1782BE10)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_D624E2057E4C2061_OFFSET UNITYSDK_OFFSET(0x17829510)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_E12043F46AB48C94_OFFSET UNITYSDK_OFFSET(0x17830F40)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_E9D90F1C7434F23D_OFFSET UNITYSDK_OFFSET(0x1782D890)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x17830800)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_REVERTSHADER_OFFSET UNITYSDK_OFFSET(0x17830850)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_SETFXUNCLIPKEYWORDSFORCUTSCENETIMELINE_OFFSET UNITYSDK_OFFSET(0x17831000)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_SETFXUNCLIPKEYWORDS_OFFSET UNITYSDK_OFFSET(0x17830C60)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_SETUPALLMATERIALINSTANCES_OFFSET UNITYSDK_OFFSET(0x17829040)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_SETUPANDSTARTMATPROPERTIESPATTERN_OFFSET UNITYSDK_OFFSET(0x17831340)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYCREATEMATERIALMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0x17829990)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_1_OFFSET UNITYSDK_OFFSET(0x1782BDB0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_2_OFFSET UNITYSDK_OFFSET(0x1782C180)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_3_OFFSET UNITYSDK_OFFSET(0x1782C6C0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_4_OFFSET UNITYSDK_OFFSET(0x1782D1A0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_5_OFFSET UNITYSDK_OFFSET(0x1782D790)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_6_OFFSET UNITYSDK_OFFSET(0x1782D7F0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_OFFSET UNITYSDK_OFFSET(0x1782B230)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_UPDATECOMMONSWITCH_OFFSET UNITYSDK_OFFSET(0x1782D910)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x178368A0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x17832540)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_DOONDESTROY_OFFSET UNITYSDK_OFFSET(0x178392B0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x178392C0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_SETUPALLDEFAULTMATERIALINSTANCES_OFFSET UNITYSDK_OFFSET(0x178392D0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_SETUPALLMATERIALINSTANCES_OFFSET UNITYSDK_OFFSET(0x17839360)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_SETUPANDSTARTMATPROPERTIESPATTERN_OFFSET UNITYSDK_OFFSET(0x178393F0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYCREATEMATERIALMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0x17839480)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_1_OFFSET UNITYSDK_OFFSET(0x178395C0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_2_OFFSET UNITYSDK_OFFSET(0x17839670)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_3_OFFSET UNITYSDK_OFFSET(0x17839720)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_4_OFFSET UNITYSDK_OFFSET(0x178397D0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_5_OFFSET UNITYSDK_OFFSET(0x17839880)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_6_OFFSET UNITYSDK_OFFSET(0x17839920)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_OFFSET UNITYSDK_OFFSET(0x17839510)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_UPDATECOMMONSWITCH_OFFSET UNITYSDK_OFFSET(0x178399D0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoRenderHandlerForAvatar_TypeDefinitionIndex = 79424;

	class MonoRenderHandlerForAvatar : public ::MoleMole::MonoRenderHandler
	{
	public:
		static ::Il2CppArray<::Il2CppArray<::MoleMole::MonoRenderHandlerForAvatar_Class_1_E31A828FD7691185*>*>** StaticGet_Field_6_327()
		{
			return (::Il2CppArray<::Il2CppArray<::MoleMole::MonoRenderHandlerForAvatar_Class_1_E31A828FD7691185*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x447F0);
		}
		static ::Il2CppArray<::MoleMole::MonoRenderHandlerForAvatar_Struct_2_E6333E5B8A276D86>** StaticGet_Field_6_326()
		{
			return (::Il2CppArray<::MoleMole::MonoRenderHandlerForAvatar_Struct_2_E6333E5B8A276D86>**)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x447F8);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Vector4>** StaticGet_Field_6_325()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x44800);
		}
		static ::System::UInt32* StaticGet_Field_6_321()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x10550);
		}
		static ::System::Int32* StaticGet_Field_6_303()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x10554);
		}
		static ::System::Int32* StaticGet_Field_6_288()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x10558);
		}
		static ::System::UInt32* StaticGet_Field_6_314()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x1055C);
		}
		static ::System::Int32* StaticGet_Field_6_298()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x10560);
		}
		static ::System::Int32* StaticGet_Field_6_301()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x10564);
		}
		static ::System::Int32* StaticGet_Field_6_289()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x10568);
		}
		static ::System::UInt32* StaticGet_Field_6_315()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x1056C);
		}
		static ::System::UInt32* StaticGet_Field_6_320()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x10570);
		}
		static ::System::UInt32* StaticGet_Field_6_304()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x10574);
		}
		static ::System::UInt32* StaticGet_Field_6_311()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x10578);
		}
		static ::System::UInt32* StaticGet_Field_6_318()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x1057C);
		}
		static ::System::Int32* StaticGet_Field_6_291()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x10580);
		}
		static ::System::Int32* StaticGet_Field_6_290()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x10584);
		}
		static ::System::UInt32* StaticGet_Field_6_308()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x10588);
		}
		static ::System::Int32* StaticGet_Field_6_287()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x1058C);
		}
		static ::System::UInt32* StaticGet_Field_6_305()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x10590);
		}
		static ::System::Int32* StaticGet_Field_6_283()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x10594);
		}
		static ::System::UInt32* StaticGet_Field_6_323()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x10598);
		}
		static ::System::Int32* StaticGet_Field_6_299()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x1059C);
		}
		static ::System::Int32* StaticGet_Field_6_302()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x105A0);
		}
		static ::System::Int32* StaticGet_Field_6_295()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x105A4);
		}
		static ::System::UInt32* StaticGet_Field_6_322()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x105A8);
		}
		static ::System::UInt32* StaticGet_Field_6_310()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x105AC);
		}
		static ::System::UInt32* StaticGet_Field_6_316()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x105B0);
		}
		static ::System::UInt32* StaticGet_Field_6_307()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x105B4);
		}
		static ::System::UInt32* StaticGet_Field_6_319()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x105B8);
		}
		static ::System::Int32* StaticGet_Field_6_294()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x105BC);
		}
		static ::System::Int32* StaticGet_Field_6_296()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x105C0);
		}
		static ::System::Int32* StaticGet_Field_6_300()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x105C4);
		}
		static ::System::Int32* StaticGet_Field_6_284()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x105C8);
		}
		static ::System::Int32* StaticGet_Field_6_286()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x105CC);
		}
		static ::System::Int32* StaticGet_Field_6_285()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x105D0);
		}
		static ::System::UInt32* StaticGet_Field_6_309()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x105D4);
		}
		static ::System::UInt32* StaticGet_Field_6_317()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x105D8);
		}
		static ::System::Int32* StaticGet_Field_6_297()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x105DC);
		}
		static ::System::UInt32* StaticGet_Field_6_313()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x105E0);
		}
		static ::System::UInt32* StaticGet_Field_6_312()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x105E4);
		}
		static ::System::Int32* StaticGet_Field_6_292()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x105E8);
		}
		static ::System::Int32* StaticGet_Field_6_293()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x105EC);
		}
		static ::System::UInt32* StaticGet_Field_6_324()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x105F0);
		}
		static ::System::UInt32* StaticGet_Field_6_306()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x105F4);
		}
		::MoleMole::StaticBoolMaterialModifier _Transition; // 0xC8
		::MoleMole::StaticFloatMaterialModifier _TransitionCompletion; // 0xE0
		::MoleMole::StaticTextureMaterialModifier _TransitionTex; // 0x100
		::MoleMole::StaticBoolMaterialModifier _OverrideOutlineUseUV2; // 0x130
		::MoleMole::StaticFloatMaterialModifier _TransitionWidth; // 0x148
		::MoleMole::StaticColorMaterialModifier _TransitionColor; // 0x168
		::MoleMole::StaticTextureMaterialModifier _OverrideOutlineTex; // 0x1A0
		::MoleMole::StaticBoolMaterialModifier _ClipPlane; // 0x1D0
		::MoleMole::StaticBoolMaterialModifier _HardLight; // 0x1E8
		::MoleMole::StaticFloatMaterialModifier _HardLightWidth; // 0x200
		::MoleMole::StaticColorMaterialModifier _HardLightColor; // 0x220
		::MoleMole::StaticBoolMaterialModifier _SoftLight; // 0x258
		::MoleMole::StaticFloatMaterialModifier _SoftLightWidth; // 0x270
		::MoleMole::StaticColorMaterialModifier _SoftLightColor; // 0x290
		::MoleMole::StaticBoolMaterialModifier _PlaneClipReverse; // 0x2C8
		::MoleMole::StaticBoolMaterialModifier _ClipPlaneXZ; // 0x2E0
		::MoleMole::StaticBoolMaterialModifier _ReversePlaneXZ; // 0x2F8
		::MoleMole::StaticFloatMaterialModifier _DitherAlpha2; // 0x310
		::MoleMole::StaticVectorMaterialModifier _FxTransparentValue; // 0x330
		::MoleMole::StaticVectorMaterialModifier _FxUVDitherValue; // 0x358
		::MoleMole::StaticVectorMaterialModifier _DecolorizationContrast; // 0x380
		::MoleMole::StaticBoolMaterialModifier _Glitch; // 0x3A8
		::MoleMole::StaticTextureMaterialModifier _BlockMaskTex; // 0x3C0
		::MoleMole::StaticBoolMaterialModifier _ScreenScale; // 0x3F0
		::MoleMole::StaticColorMaterialModifier _BlockColorA; // 0x408
		::MoleMole::StaticColorMaterialModifier _BlockColorB; // 0x440
		::MoleMole::StaticColorMaterialModifier _BlockColorC; // 0x478
		::MoleMole::StaticColorMaterialModifier _BlockColorD; // 0x4B0
		::MoleMole::StaticBoolMaterialModifier _Override2Tone; // 0x4E8
		::MoleMole::StaticFloatMaterialModifier _LightSource; // 0x500
		::MoleMole::StaticFloatMaterialModifier _ShiftAngle; // 0x520
		::MoleMole::StaticColorMaterialModifier _ColorA; // 0x540
		::MoleMole::StaticColorMaterialModifier _ColorB; // 0x578
		::MoleMole::StaticFloatMaterialModifier _LerpPosition; // 0x5B0
		::MoleMole::StaticFloatMaterialModifier _Softness; // 0x5D0
		::MoleMole::StaticBoolMaterialModifier _Override2ToneMultiplyAlbedo; // 0x5F0
		::MoleMole::StaticFloatMaterialModifier _Override2ToneBlendMode; // 0x608
		::MoleMole::StaticBoolMaterialModifier _Override; // 0x628
		::MoleMole::StaticColorMaterialModifier _OverrideColor; // 0x640
		::MoleMole::StaticBoolMaterialModifier _OverrideOutline; // 0x678
		::MoleMole::StaticColorMaterialModifier _OverrideOutlineColor; // 0x690
		::MoleMole::StaticVectorMaterialModifier _OverrideOutlineSpeed; // 0x6C8
		::MoleMole::StaticFloatMaterialModifier _OutlineWidth; // 0x6F0
		::MoleMole::StaticBoolMaterialModifier _OverrideRimGlow; // 0x710
		::MoleMole::StaticFloatMaterialModifier _OverrideRimGlowMode; // 0x728
		::MoleMole::StaticColorMaterialModifier _OverrideRimGlowColor; // 0x748
		::MoleMole::StaticTextureMaterialModifier _OverrideRimGlowTexFX; // 0x780
		::MoleMole::StaticFloatMaterialModifier _OverrideRimGlowUseUV2; // 0x7B0
		::MoleMole::StaticVectorMaterialModifier _OverrideRimGlowSpeed; // 0x7D0
		::MoleMole::StaticFloatMaterialModifier _PropertyTexUseUV2; // 0x7F8
		::MoleMole::StaticColorMaterialModifier _FresnelColor; // 0x818
		::MoleMole::StaticColorMaterialModifier _DetailColor; // 0x850
		::MoleMole::StaticFloatMaterialModifier _FresnelWidth; // 0x888
		::MoleMole::StaticFloatMaterialModifier _PropertyMaskUseUV2; // 0x8A8
		::MoleMole::StaticFloatMaterialModifier _PropertyMask2UseUV2; // 0x8C8
		::MoleMole::StaticFloatMaterialModifier _PropertyMaskChannel; // 0x8E8
		::MoleMole::StaticBoolMaterialModifier _ScreenImage; // 0x908
		::MoleMole::StaticBoolMaterialModifier _MultiplySrcColor; // 0x920
		::MoleMole::StaticColorMaterialModifier _ScreenColor; // 0x938
		::MoleMole::StaticTextureMaterialModifier _ScreenTex; // 0x970
		::MoleMole::StaticTextureMaterialModifier _ScreenMask; // 0x9A0
		::MoleMole::StaticFloatMaterialModifier _ScreenMaskUV; // 0x9D0
		::MoleMole::StaticBoolMaterialModifier _UseInvSecondaryEmissionMask; // 0x9F0
		::MoleMole::StaticVectorMaterialModifier _ScreenImageUvMove; // 0xA08
		::MoleMole::StaticFloatMaterialModifier _MatCapNormalVSpeedFx; // 0xA30
		::MoleMole::StaticFloatMaterialModifier _MatCapBlendModeFx; // 0xA50
		::MoleMole::StaticBoolMaterialModifier _Blink; // 0xA70
		::MoleMole::StaticFloatMaterialModifier _BlinkFrequency; // 0xA88
		::MoleMole::StaticVectorMaterialModifier _BlinkOpacity; // 0xAA8
		::MoleMole::StaticBoolMaterialModifier _SecondaryEmission; // 0xAD0
		::MoleMole::StaticBoolMaterialModifier _SecondaryEmissionUseUV2; // 0xAE8
		::MoleMole::StaticBoolMaterialModifier _SecondaryEmissionMultiplyAlbedo; // 0xB00
		::MoleMole::StaticVectorMaterialModifier _ColorOverrideAlbedo; // 0xB18
		::MoleMole::StaticFloatMaterialModifier _MatCapUSpeedFx; // 0xB40
		::MoleMole::StaticColorMaterialModifier _MatCapColorTintFx; // 0xB60
		::MoleMole::StaticFloatMaterialModifier _SecondaryEmissionChannel; // 0xB98
		::MoleMole::StaticFloatMaterialModifier _SecondaryEmissionMaskChannel; // 0xBB8
		::MoleMole::StaticTextureMaterialModifier _SecondaryEmissionTex; // 0xBD8
		::MoleMole::StaticColorMaterialModifier _SecondaryEmissionColor; // 0xC08
		::MoleMole::StaticTextureMaterialModifier _SecondaryEmissionMaskTex; // 0xC40
		::MoleMole::StaticVectorMaterialModifier _SecondaryEmissionTexSpeed; // 0xC70
		::MoleMole::StaticFloatMaterialModifier _MatCapBumpScaleFx; // 0xC98
		::MoleMole::StaticFloatMaterialModifier _MatCapFX; // 0xCB8
		::MoleMole::StaticBoolMaterialModifier _VertexStretch; // 0xCD8
		::MoleMole::StaticTextureMaterialModifier _StretchMask; // 0xCF0
		::MoleMole::StaticFloatMaterialModifier _NormalThreshold; // 0xD20
		::MoleMole::StaticFloatMaterialModifier _StretchDistance; // 0xD40
		::MoleMole::StaticVectorMaterialModifier _StretchVector; // 0xD60
		::MoleMole::StaticFloatMaterialModifier _StretchDirection; // 0xD88
		::MoleMole::StaticVectorMaterialModifier _StretchToPoint; // 0xDA8
		::MoleMole::StaticFloatMaterialModifier _MaskTexFactor; // 0xDD0
		::MoleMole::StaticFloatMaterialModifier _StretchPercentage; // 0xDF0
		::MoleMole::StaticVectorMaterialModifier _MaskRChannelUVSpeed; // 0xE10
		::MoleMole::StaticFloatMaterialModifier _MatCapColorBurstFx; // 0xE38
		::MoleMole::StaticFloatMaterialModifier _MatCapAlphaBurstFx; // 0xE58
		::MoleMole::StaticColorMaterialModifier _Color; // 0xE78
		::MoleMole::StaticTextureMaterialModifier _MainTex; // 0xEB0
		::MoleMole::StaticTextureMaterialModifier _LightTex; // 0xEE0
		::MoleMole::StaticTextureMaterialModifier _OtherDataTex; // 0xF10
		::MoleMole::StaticTextureMaterialModifier _OtherDataTex2; // 0xF40
		::MoleMole::StaticFloatMaterialModifier _MaterialNum; // 0xF70
		::MoleMole::StaticFloatMaterialModifier _SkinMatId; // 0xF90
		::MoleMole::StaticColorMaterialModifier _ShallowColor; // 0xFB0
		::MoleMole::StaticColorMaterialModifier _ShallowColor2; // 0xFE8
		::MoleMole::StaticColorMaterialModifier _ShallowColor3; // 0x1020
		::MoleMole::StaticColorMaterialModifier _ShallowColor4; // 0x1058
		::MoleMole::StaticColorMaterialModifier _ShallowColor5; // 0x1090
		::MoleMole::StaticColorMaterialModifier _ShadowColor; // 0x10C8
		::MoleMole::StaticColorMaterialModifier _ShadowColor2; // 0x1100
		::MoleMole::StaticColorMaterialModifier _ShadowColor3; // 0x1138
		::MoleMole::StaticColorMaterialModifier _ShadowColor4; // 0x1170
		::MoleMole::StaticColorMaterialModifier _ShadowColor5; // 0x11A8
		::MoleMole::StaticTextureMaterialModifier _EyeColorMap; // 0x11E0
		::MoleMole::StaticTextureMaterialModifier _ThreadMap; // 0x1210
		::MoleMole::StaticTextureMaterialModifier _ChannelMixTex; // 0x1240
		::MoleMole::StaticColorMaterialModifier _SpecularColor; // 0x1270
		::MoleMole::StaticColorMaterialModifier _SpecularColor2; // 0x12A8
		::MoleMole::StaticColorMaterialModifier _SpecularColor3; // 0x12E0
		::MoleMole::StaticColorMaterialModifier _SpecularColor4; // 0x1318
		::MoleMole::StaticColorMaterialModifier _SpecularColor5; // 0x1350
		::MoleMole::StaticColorMaterialModifier _RimGlowLightColor; // 0x1388
		::MoleMole::StaticColorMaterialModifier _RimGlowLightColor2; // 0x13C0
		::MoleMole::StaticColorMaterialModifier _RimGlowLightColor3; // 0x13F8
		::MoleMole::StaticColorMaterialModifier _RimGlowLightColor4; // 0x1430
		::MoleMole::StaticColorMaterialModifier _RimGlowLightColor5; // 0x1468
		::MoleMole::StaticColorMaterialModifier _EmissionColor; // 0x14A0
		::MoleMole::StaticColorMaterialModifier _EmissionColor2; // 0x14D8
		::MoleMole::StaticColorMaterialModifier _EmissionColor3; // 0x1510
		::MoleMole::StaticColorMaterialModifier _EmissionColor4; // 0x1548
		::MoleMole::StaticColorMaterialModifier _EmissionColor5; // 0x1580
		::MoleMole::StaticColorMaterialModifier _OutlineColor; // 0x15B8
		::MoleMole::StaticColorMaterialModifier _OutlineColor2; // 0x15F0
		::MoleMole::StaticColorMaterialModifier _OutlineColor3; // 0x1628
		::MoleMole::StaticColorMaterialModifier _OutlineColor4; // 0x1660
		::MoleMole::StaticColorMaterialModifier _OutlineColor5; // 0x1698
		::MoleMole::StaticColorMaterialModifier _SilkFresnelColorFront; // 0x16D0
		::MoleMole::StaticColorMaterialModifier _SilkFresnelColorEdge; // 0x1708
		::MoleMole::StaticColorMaterialModifier _RChannelColorPrecomputed; // 0x1740
		::MoleMole::StaticColorMaterialModifier _GChannelColorPrecomputed; // 0x1778
		::MoleMole::StaticColorMaterialModifier _BChannelColorPrecomputed; // 0x17B0
		::MoleMole::StaticColorMaterialModifier _AChannelColorPrecomputed; // 0x17E8
		::MoleMole::StaticVectorMaterialModifier _SilkPackedParams0; // 0x1820
		::MoleMole::StaticFloatMaterialModifier _RenderType; // 0x1848
		::MoleMole::StaticFloatMaterialModifier _UseOverlayTex; // 0x1868
		::MoleMole::StaticFloatMaterialModifier _OverlayTexScale; // 0x1888
		::MoleMole::StaticFloatMaterialModifier _BumpScale; // 0x18A8
		::MoleMole::StaticFloatMaterialModifier _Glossiness; // 0x18C8
		::MoleMole::StaticFloatMaterialModifier _Metallic; // 0x18E8
		::MoleMole::StaticFloatMaterialModifier _Anisotropy; // 0x1908
		::MoleMole::StaticFloatMaterialModifier _ModelSize; // 0x1928
		::MoleMole::StaticFloatMaterialModifier _ModelSize2; // 0x1948
		::MoleMole::StaticFloatMaterialModifier _ModelSize3; // 0x1968
		::MoleMole::StaticFloatMaterialModifier _ModelSize4; // 0x1988
		::MoleMole::StaticFloatMaterialModifier _ModelSize5; // 0x19A8
		::MoleMole::StaticFloatMaterialModifier _AlbedoSmoothness; // 0x19C8
		::MoleMole::StaticFloatMaterialModifier _AlbedoSmoothness2; // 0x19E8
		::MoleMole::StaticFloatMaterialModifier _AlbedoSmoothness3; // 0x1A08
		::MoleMole::StaticFloatMaterialModifier _AlbedoSmoothness4; // 0x1A28
		::MoleMole::StaticFloatMaterialModifier _AlbedoSmoothness5; // 0x1A48
		::MoleMole::StaticFloatMaterialModifier _HighlightShape; // 0x1A68
		::MoleMole::StaticFloatMaterialModifier _HighlightShape2; // 0x1A88
		::MoleMole::StaticFloatMaterialModifier _HighlightShape3; // 0x1AA8
		::MoleMole::StaticFloatMaterialModifier _HighlightShape4; // 0x1AC8
		::MoleMole::StaticFloatMaterialModifier _HighlightShape5; // 0x1AE8
		::MoleMole::StaticFloatMaterialModifier _ToonSpecular; // 0x1B08
		::MoleMole::StaticFloatMaterialModifier _ToonSpecular2; // 0x1B28
		::MoleMole::StaticFloatMaterialModifier _ToonSpecular3; // 0x1B48
		::MoleMole::StaticFloatMaterialModifier _ToonSpecular4; // 0x1B68
		::MoleMole::StaticFloatMaterialModifier _ToonSpecular5; // 0x1B88
		::MoleMole::StaticFloatMaterialModifier _SpecularRange; // 0x1BA8
		::MoleMole::StaticFloatMaterialModifier _SpecularRange2; // 0x1BC8
		::MoleMole::StaticFloatMaterialModifier _SpecularRange3; // 0x1BE8
		::MoleMole::StaticFloatMaterialModifier _SpecularRange4; // 0x1C08
		::MoleMole::StaticFloatMaterialModifier _SpecularRange5; // 0x1C28
		::MoleMole::StaticFloatMaterialModifier _ShapeSoftness; // 0x1C48
		::MoleMole::StaticFloatMaterialModifier _ShapeSoftness2; // 0x1C68
		::MoleMole::StaticFloatMaterialModifier _ShapeSoftness3; // 0x1C88
		::MoleMole::StaticFloatMaterialModifier _ShapeSoftness4; // 0x1CA8
		::MoleMole::StaticFloatMaterialModifier _ShapeSoftness5; // 0x1CC8
		::MoleMole::StaticFloatMaterialModifier _SpecIntensity; // 0x1CE8
		::MoleMole::StaticFloatMaterialModifier _Emission; // 0x1D08
		::MoleMole::StaticFloatMaterialModifier _MaxOutlineZOffset; // 0x1D28
		::MoleMole::StaticFloatMaterialModifier _PerObjectShadowIntensity; // 0x1D48
		::MoleMole::StaticFloatMaterialModifier _PerObjectShadowIntensity2; // 0x1D68
		::MoleMole::StaticFloatMaterialModifier _PerObjectShadowIntensity3; // 0x1D88
		::MoleMole::StaticFloatMaterialModifier _PerObjectShadowIntensity4; // 0x1DA8
		::MoleMole::StaticFloatMaterialModifier _PerObjectShadowIntensity5; // 0x1DC8
		::MoleMole::StaticFloatMaterialModifier _UseChannelMixer; // 0x1DE8
		::MoleMole::StaticFloatMaterialModifier _ChannelMixerUsingUV4; // 0x1E08
		::MoleMole::StaticFloatMaterialModifier _Cull; // 0x1E28
		::MoleMole::StaticFloatMaterialModifier _DoubleSided; // 0x1E48
		::MoleMole::StaticFloatMaterialModifier _SymmetryUV; // 0x1E68
		::MoleMole::StaticBoolMaterialModifier _ShadowColorFadeByZ; // 0x1E88
		::MoleMole::StaticKeywordFloatMaterialModifier _MatCap; // 0x1EA0
		::MoleMole::StaticTextureMaterialModifier _MatCapTex; // 0x1EB8
		::MoleMole::StaticTextureMaterialModifier _MatCapTexFx; // 0x1EE8
		::MoleMole::StaticTextureMaterialModifier _MatCapBumpMapFx; // 0x1F18
		::MoleMole::StaticBoolMaterialModifier _UseMatCapMask; // 0x1F48
		::MoleMole::StaticColorMaterialModifier _MatCapColorTint; // 0x1F60
		::MoleMole::StaticFloatMaterialModifier _MatCapVSpeedFx; // 0x1F98
		::MoleMole::StaticFloatMaterialModifier _MatCapNormalUSpeedFx; // 0x1FB8
		::MoleMole::StaticFloatMaterialModifier _VertexOffset; // 0x1FD8
		::MoleMole::StaticColorMaterialModifier _MatCapColorTint2; // 0x1FF8
		::MoleMole::StaticColorMaterialModifier _MatCapColorTint3; // 0x2030
		::MoleMole::StaticColorMaterialModifier _MatCapColorTint4; // 0x2068
		::MoleMole::StaticColorMaterialModifier _MatCapColorTint5; // 0x20A0
		::MoleMole::StaticVectorMaterialModifier _RefractParam; // 0x20D8
		::MoleMole::StaticVectorMaterialModifier _RefractParam2; // 0x2100
		::MoleMole::StaticVectorMaterialModifier _RefractParam3; // 0x2128
		::MoleMole::StaticVectorMaterialModifier _RefractParam4; // 0x2150
		::MoleMole::StaticVectorMaterialModifier _RefractParam5; // 0x2178
		::MoleMole::StaticVectorMaterialModifier _MatCapParams; // 0x21A0
		::MoleMole::StaticVectorMaterialModifier _MatCapParams2; // 0x21C8
		::MoleMole::StaticVectorMaterialModifier _MatCapParams3; // 0x21F0
		::MoleMole::StaticVectorMaterialModifier _MatCapParams4; // 0x2218
		::MoleMole::StaticVectorMaterialModifier _MatCapParams5; // 0x2240
		::MoleMole::StaticVectorMaterialModifier _MatCapReractParams; // 0x2268
		::MoleMole::StaticVectorMaterialModifier _MatCapReractParams2; // 0x2290
		::MoleMole::StaticVectorMaterialModifier _MatCapReractParams3; // 0x22B8
		::MoleMole::StaticVectorMaterialModifier _MatCapReractParams4; // 0x22E0
		::MoleMole::StaticVectorMaterialModifier _MatCapReractParams5; // 0x2308
		::MoleMole::StaticBoolMaterialModifier _Fresnel; // 0x2330
		::MoleMole::StaticFloatMaterialModifier _FresnelPower; // 0x2348
		::MoleMole::StaticFloatMaterialModifier _FresnelScale; // 0x2368
		::MoleMole::StaticFloatMaterialModifier _FresnelOffset; // 0x2388
		::MoleMole::StaticBoolMaterialModifier _Outline; // 0x23A8
		::MoleMole::StaticBoolMaterialModifier _RimGlow; // 0x23C0
		::MoleMole::StaticColorMaterialModifier _RimGlowShadowColor; // 0x23D8
		::MoleMole::StaticBoolMaterialModifier _AbnormalProperty; // 0x2410
		::MoleMole::StaticFloatMaterialModifier _PropertyType; // 0x2428
		::MoleMole::StaticColorMaterialModifier _PropertyColor; // 0x2448
		::MoleMole::StaticVectorMaterialModifier _PropertyTexUVSpeed; // 0x2480
		::MoleMole::StaticFloatMaterialModifier _PropertyTexUVFlipSpeed; // 0x24A8
		::MoleMole::StaticVectorMaterialModifier _PropertyMaskUVSpeed; // 0x24C8
		::MoleMole::StaticFloatMaterialModifier _PropertyMask2Channel; // 0x24F0
		::MoleMole::StaticVectorMaterialModifier _PropertyMask2UVSpeed; // 0x2510
		::MoleMole::StaticFloatMaterialModifier _PropertyMaskUVFlipSpeed; // 0x2538
		::MoleMole::StaticFloatMaterialModifier _PropertyNormalUseUV2; // 0x2558
		::MoleMole::StaticVectorMaterialModifier _PropertyNormalUVSpeed; // 0x2578
		::MoleMole::StaticFloatMaterialModifier _FresnelMaskWidth; // 0x25A0
		::MoleMole::StaticFloatMaterialModifier _FresnelFlashing; // 0x25C0
		::MoleMole::StaticBoolMaterialModifier _MarkAsVfxMask; // 0x25E0
		::MoleMole::StaticFloatMaterialModifier _CurrentColorStagment; // 0x25F8
		::MoleMole::StaticBoolMaterialModifier _AbnormalPropertyElectro; // 0x2618
		::MoleMole::StaticBoolMaterialModifier _AbnormalPropertyBurn; // 0x2630
		::MoleMole::StaticBoolMaterialModifier _AbnormalPropertyFreeze; // 0x2648
		::MoleMole::StaticBoolMaterialModifier _GhostMask; // 0x2660
		::MoleMole::StaticFloatMaterialModifier _MarkAsGhostMask; // 0x2678
		::MoleMole::StaticBoolMaterialModifier _IgnisFatuusMask; // 0x2698
		::MoleMole::StaticBoolMaterialModifier _MarkAsIgnisFatuusMask; // 0x26B0
		::MoleMole::StaticColorMaterialModifier _BaseColor; // 0x26C8
		::MoleMole::StaticFloatMaterialModifier _Smoothness; // 0x2700
		::MoleMole::StaticBoolMaterialModifier _SpecialWeaponEmission; // 0x2720
		::MoleMole::StaticTextureMaterialModifier _SpecialWeaponEmissionTex; // 0x2738
		::MoleMole::StaticColorMaterialModifier _SpecialWeaponEmissionColor; // 0x2768
		::MoleMole::StaticVectorMaterialModifier _SpecialWeaponMergeParam01; // 0x27A0
		::MoleMole::StaticVectorMaterialModifier _SpecialWeaponMergeParam02; // 0x27C8
		::MoleMole::StaticColorMaterialModifier _SpecialWeaponEmissionColor2; // 0x27F0
		::MoleMole::StaticTextureMaterialModifier _SpecialWeaponEmissionMaskTex; // 0x2828
		::MoleMole::StaticVectorMaterialModifier _SpecialWeaponEmissionTexSpeed; // 0x2858
		::MoleMole::StaticVectorMaterialModifier _SpecialWeaponMergeParam03; // 0x2880
		::MoleMole::StaticBoolMaterialModifier _NoiseLerp; // 0x28A8
		::MoleMole::StaticTextureMaterialModifier _NoiseLerpMask; // 0x28C0
		::MoleMole::StaticColorMaterialModifier _NoiseLerpColor; // 0x28F0
		::MoleMole::StaticBoolMaterialModifier _NoiseUseUV2; // 0x2928
		::MoleMole::StaticFloatMaterialModifier _NoiseLerpEdgeRange; // 0x2940
		::MoleMole::StaticFloatMaterialModifier _NoiseLerpValue; // 0x2960
		::MoleMole::StaticBoolMaterialModifier _UseLerpEdgeColor; // 0x2980
		::MoleMole::StaticColorMaterialModifier _NoiseLerpEdgeColor; // 0x2998
		::MoleMole::StaticBoolMaterialModifier _Blush; // 0x29D0
		::MoleMole::StaticTextureMaterialModifier _BlushTexture; // 0x29E8
		::MoleMole::StaticColorMaterialModifier _BlushColor; // 0x2A18
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>* Field_6_272; // 0x2A50
		::Il2CppArray<::System::Collections::Generic::List_1<::System::UInt32>*>* Field_6_273; // 0x2A58
		::Il2CppArray<::System::Collections::Generic::List_1<::System::Int32>*>* Field_6_274; // 0x2A60
		::Il2CppArray<::Il2CppArray<::Il2CppArray<::System::Int32>*>*>* Field_6_275; // 0x2A68
		::Il2CppArray<::Il2CppArray<::System::Int32>*>* Field_6_276; // 0x2A70
		::Il2CppArray<::System::Collections::Generic::List_1<::System::Int32>*>* Field_6_277; // 0x2A78
		::Il2CppArray<::System::Collections::Generic::List_1<::System::Int32>*>* Field_6_278; // 0x2A80
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Shader*>* Field_6_279; // 0x2A88
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Int32>* Field_6_280; // 0x2A90
		::Il2CppArray<::Il2CppArray<::System::Boolean>*>* Field_6_281; // 0x2A98
		::Il2CppArray<::System::Boolean>* Field_6_282; // 0x2AA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR__CCTOR_OFFSET))();
		}

		::System::Void SetupAllMaterialInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_SETUPALLMATERIALINSTANCES_OFFSET))(this);
		}

		::System::Void Method_6_9D8CB5E47C1952BD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_9D8CB5E47C1952BD_OFFSET))(this);
		}

		::Class_1_A0B58236B258B7B2* TryCreateMaterialModifierInstance(::Enum_3_7F3F4476896DB547 a1)
		{
			return ((::Class_1_A0B58236B258B7B2*(*)(::PVOID, ::Enum_3_7F3F4476896DB547))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYCREATEMATERIALMODIFIERINSTANCE_OFFSET))(this, a1);
		}

		::System::Boolean TryGetMaterialModifier(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticFloatMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMaterialModifier_1(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticTextureMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticTextureMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMaterialModifier_2(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticVectorMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticVectorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_2_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMaterialModifier_3(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticColorMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticColorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_3_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMaterialModifier_4(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticBoolMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticBoolMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_4_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMaterialModifier_5(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticKeywordMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticKeywordMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_5_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMaterialModifier_6(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticKeywordFloatMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticKeywordFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_6_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateCommonSwitch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_UPDATECOMMONSWITCH_OFFSET))(this);
		}

		::System::Void InvalidateUpdateSwitchCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_INVALIDATEUPDATESWITCHCACHE_OFFSET))(this);
		}

		::System::Void ForceUpdateFxClip(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_FORCEUPDATEFXCLIP_OFFSET))(this, a1);
		}

		::System::Void ForceUpdateDitherFxClip(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_FORCEUPDATEDITHERFXCLIP_OFFSET))(this, a1);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_ONDISABLE_OFFSET))(this);
		}

		::System::Void RevertShader()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_REVERTSHADER_OFFSET))(this);
		}

		static ::System::Void SetFxUnClipKeywords(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_SETFXUNCLIPKEYWORDS_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>* SetFxUnClipKeywordsForCutsceneTimeline(::System::String* a1, ::System::Single a2, ::UnityEngine::Material* a3)
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>*(*)(::System::String*, ::System::Single, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_SETFXUNCLIPKEYWORDSFORCUTSCENETIMELINE_OFFSET))(a1, a2, a3);
		}

		::Class_1_8019128448F0E9D5* SetupAndStartMatPropertiesPattern(::Class_1_9610394F487FC231* a1)
		{
			return ((::Class_1_8019128448F0E9D5*(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_SETUPANDSTARTMATPROPERTIESPATTERN_OFFSET))(this, a1);
		}

		::System::Void Method_6_B877181B6123B7F6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_B877181B6123B7F6_OFFSET))(this);
		}

		::System::Void __base_DoOnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_DOONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_SetupAllDefaultMaterialInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_SETUPALLDEFAULTMATERIALINSTANCES_OFFSET))(this);
		}

		::System::Void __base_SetupAllMaterialInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_SETUPALLMATERIALINSTANCES_OFFSET))(this);
		}

		::Class_1_8019128448F0E9D5* __base_SetupAndStartMatPropertiesPattern(::Class_1_9610394F487FC231* a1)
		{
			return ((::Class_1_8019128448F0E9D5*(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_SETUPANDSTARTMATPROPERTIESPATTERN_OFFSET))(this, a1);
		}

		::Class_1_A0B58236B258B7B2* __base_TryCreateMaterialModifierInstance(::Enum_3_7F3F4476896DB547 a1)
		{
			return ((::Class_1_A0B58236B258B7B2*(*)(::PVOID, ::Enum_3_7F3F4476896DB547))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYCREATEMATERIALMODIFIERINSTANCE_OFFSET))(this, a1);
		}

		::System::Boolean __base_TryGetMaterialModifier(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticFloatMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_OFFSET))(this, a1, a2);
		}

		::System::Boolean __base_TryGetMaterialModifier_1(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticTextureMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticTextureMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean __base_TryGetMaterialModifier_2(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticVectorMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticVectorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_2_OFFSET))(this, a1, a2);
		}

		::System::Boolean __base_TryGetMaterialModifier_3(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticColorMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticColorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_3_OFFSET))(this, a1, a2);
		}

		::System::Boolean __base_TryGetMaterialModifier_4(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticBoolMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticBoolMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_4_OFFSET))(this, a1, a2);
		}

		::System::Boolean __base_TryGetMaterialModifier_5(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticKeywordMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticKeywordMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_5_OFFSET))(this, a1, a2);
		}

		::System::Boolean __base_TryGetMaterialModifier_6(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticKeywordFloatMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticKeywordFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_6_OFFSET))(this, a1, a2);
		}

		::System::Void __base_UpdateCommonSwitch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_UPDATECOMMONSWITCH_OFFSET))(this);
		}

		::System::Boolean Method_6_D41D7B87AEBE6BD0(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticTextureMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticTextureMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_D41D7B87AEBE6BD0_OFFSET))(this, a1, a2);
		}

		::Class_1_8019128448F0E9D5* Method_6_96B03403C56455CD(::Class_1_9610394F487FC231* a1)
		{
			return ((::Class_1_8019128448F0E9D5*(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_96B03403C56455CD_OFFSET))(this, a1);
		}

		::Class_1_A0B58236B258B7B2* Method_6_D624E2057E4C2061(::Enum_3_7F3F4476896DB547 a1)
		{
			return ((::Class_1_A0B58236B258B7B2*(*)(::PVOID, ::Enum_3_7F3F4476896DB547))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_D624E2057E4C2061_OFFSET))(this, a1);
		}

		static ::System::Int32 Method_6_E12043F46AB48C94(::UnityEngine::Material* a1)
		{
			return ((::System::Int32(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_E12043F46AB48C94_OFFSET))(a1);
		}

		::System::Void Method_6_77E3CF907BA6F8B7(::Enum_3_7F3F4476896DB547 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_7F3F4476896DB547))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_77E3CF907BA6F8B7_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_E9D90F1C7434F23D(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticKeywordFloatMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticKeywordFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_E9D90F1C7434F23D_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_C0940C3855FBCBCA(::UnityEngine::Material* a1, ::UnityEngine::Shader* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_C0940C3855FBCBCA_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_3E5E39D0D3E9B5CD(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Boolean a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_3E5E39D0D3E9B5CD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_6_62A845E20C4260F0(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::System::UInt32 a4, ::Il2CppArray<::System::Int32>* a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Material*, ::System::UInt32, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_62A845E20C4260F0_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean Method_6_5D5F16A6230C8F33(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Material* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_5D5F16A6230C8F33_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_6_7F349DA94A1B78DF(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticFloatMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_7F349DA94A1B78DF_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean Method_6_93C64601FA6F7E9D(::MoleMole::MonoRenderHandlerForAvatar_Struct_2_7952382059FE8D18& a1)
		{
			return ((::System::Boolean(*)(::MoleMole::MonoRenderHandlerForAvatar_Struct_2_7952382059FE8D18&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_93C64601FA6F7E9D_OFFSET))(a1);
		}

		::System::Boolean Method_6_6D3FB7CC639EF394(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticVectorMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticVectorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_6D3FB7CC639EF394_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_8028CA7CF379A879(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_8028CA7CF379A879_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_36971FC3F16E2CEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_36971FC3F16E2CEB_OFFSET))(this);
		}

		::System::Boolean Method_6_4D8DE63ACD68BAC3(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticBoolMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticBoolMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_4D8DE63ACD68BAC3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_6EFB9FF221105F53(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_6EFB9FF221105F53_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_515C5D9412196CB3(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_515C5D9412196CB3_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_6_A476CAA54063C150(::Enum_3_7F3F4476896DB547 a1, ::MoleMole::StaticColorMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::MoleMole::StaticColorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_A476CAA54063C150_OFFSET))(this, a1, a2);
		}

		::Class_1_A0B58236B258B7B2* Method_6_83D69C60802E274D(::Enum_3_7F3F4476896DB547 a1)
		{
			return ((::Class_1_A0B58236B258B7B2*(*)(::PVOID, ::Enum_3_7F3F4476896DB547))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_83D69C60802E274D_OFFSET))(this, a1);
		}
	};
}

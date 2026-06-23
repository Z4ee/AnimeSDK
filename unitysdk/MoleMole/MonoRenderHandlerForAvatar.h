#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7F4644768973D415.h"
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

class Class_1_413B2BDBE645DB66;
class Class_1_8019128448F0E9D5;
class Class_1_A0B58236B258B7B2;
namespace MoleMole { class MonoRenderHandlerForAvatar_Class_1_F93622965C4FA6CC; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }

#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_FORCEUPDATEDITHERFXCLIP_OFFSET UNITYSDK_OFFSET(0x1830A590)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_FORCEUPDATEFXCLIP_OFFSET UNITYSDK_OFFSET(0x1830A280)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_INVALIDATEUPDATESWITCHCACHE_OFFSET UNITYSDK_OFFSET(0x1830A220)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_36971FC3F16E2CEB_OFFSET UNITYSDK_OFFSET(0x160D4DB0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_3E5E39D0D3E9B5CD_OFFSET UNITYSDK_OFFSET(0x160D8A80)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_4D8DE63ACD68BAC3_OFFSET UNITYSDK_OFFSET(0x160D8470)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_515C5D9412196CB3_OFFSET UNITYSDK_OFFSET(0x160D97B0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_5D5F16A6230C8F33_OFFSET UNITYSDK_OFFSET(0x160D6E40)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_62A845E20C4260F0_OFFSET UNITYSDK_OFFSET(0x18313110)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_6D3FB7CC639EF394_OFFSET UNITYSDK_OFFSET(0x18309650)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_6EFB9FF221105F53_OFFSET UNITYSDK_OFFSET(0x160D9BC0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_77E3CF907BA6F8B7_OFFSET UNITYSDK_OFFSET(0x160D8A10)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_7F349DA94A1B78DF_OFFSET UNITYSDK_OFFSET(0x160D6FB0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_83D69C60802E274D_OFFSET UNITYSDK_OFFSET(0x18307CC0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_93C64601FA6F7E9D_OFFSET UNITYSDK_OFFSET(0x160D7AF0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_96B03403C56455CD_OFFSET UNITYSDK_OFFSET(0x1830B390)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_9D8CB5E47C1952BD_OFFSET UNITYSDK_OFFSET(0x18307980)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_A476CAA54063C150_OFFSET UNITYSDK_OFFSET(0x160D9F90)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_A4B3435BD7C0679A_OFFSET UNITYSDK_OFFSET(0x160D5910)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0x1830B930)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_C0940C3855FBCBCA_OFFSET UNITYSDK_OFFSET(0x1830AB30)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_D41D7B87AEBE6BD0_OFFSET UNITYSDK_OFFSET(0x160D6AD0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_D624E2057E4C2061_OFFSET UNITYSDK_OFFSET(0x18307870)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_E12043F46AB48C94_OFFSET UNITYSDK_OFFSET(0x160D6A10)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_E9D90F1C7434F23D_OFFSET UNITYSDK_OFFSET(0x18309D10)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1830A8C0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_REVERTSHADER_OFFSET UNITYSDK_OFFSET(0x1830A910)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_SETFXUNCLIPKEYWORDSFORCUTSCENETIMELINE_OFFSET UNITYSDK_OFFSET(0x1830B000)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_SETFXUNCLIPKEYWORDS_OFFSET UNITYSDK_OFFSET(0x1830AD20)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_SETUPALLMATERIALINSTANCES_OFFSET UNITYSDK_OFFSET(0x183073A0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_SETUPANDSTARTMATPROPERTIESPATTERN_OFFSET UNITYSDK_OFFSET(0x1830B340)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYCREATEMATERIALMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0x18307C70)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_1_OFFSET UNITYSDK_OFFSET(0x18309590)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_2_OFFSET UNITYSDK_OFFSET(0x183095F0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_3_OFFSET UNITYSDK_OFFSET(0x18309B50)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_4_OFFSET UNITYSDK_OFFSET(0x18309BB0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_5_OFFSET UNITYSDK_OFFSET(0x18309C10)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_6_OFFSET UNITYSDK_OFFSET(0x18309C70)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_OFFSET UNITYSDK_OFFSET(0x18309530)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_UPDATECOMMONSWITCH_OFFSET UNITYSDK_OFFSET(0x18309D90)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1830FDF0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1830B9D0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_DOONDESTROY_OFFSET UNITYSDK_OFFSET(0x18312960)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18312970)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_SETUPALLDEFAULTMATERIALINSTANCES_OFFSET UNITYSDK_OFFSET(0x18312980)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_SETUPALLMATERIALINSTANCES_OFFSET UNITYSDK_OFFSET(0x18312A10)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_SETUPANDSTARTMATPROPERTIESPATTERN_OFFSET UNITYSDK_OFFSET(0x18312AA0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYCREATEMATERIALMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0x18312B30)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_1_OFFSET UNITYSDK_OFFSET(0x18312C70)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_2_OFFSET UNITYSDK_OFFSET(0x18312D20)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_3_OFFSET UNITYSDK_OFFSET(0x18312DD0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_4_OFFSET UNITYSDK_OFFSET(0x18312E80)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_5_OFFSET UNITYSDK_OFFSET(0x18312F30)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_6_OFFSET UNITYSDK_OFFSET(0x18312FD0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_OFFSET UNITYSDK_OFFSET(0x18312BC0)
#define MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_UPDATECOMMONSWITCH_OFFSET UNITYSDK_OFFSET(0x18313080)

namespace MoleMole
{
	inline static constexpr unsigned int MonoRenderHandlerForAvatar_TypeDefinitionIndex = 51393;

	class MonoRenderHandlerForAvatar : public ::MoleMole::MonoRenderHandler
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Vector4>** StaticGet_Field_6_329()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x4B090);
		}
		static ::Il2CppArray<::MoleMole::MonoRenderHandlerForAvatar_Struct_2_E6333E5B8A276D86>** StaticGet_Field_6_330()
		{
			return (::Il2CppArray<::MoleMole::MonoRenderHandlerForAvatar_Struct_2_E6333E5B8A276D86>**)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x4B098);
		}
		static ::Il2CppArray<::Il2CppArray<::MoleMole::MonoRenderHandlerForAvatar_Class_1_F93622965C4FA6CC*>*>** StaticGet_Field_6_331()
		{
			return (::Il2CppArray<::Il2CppArray<::MoleMole::MonoRenderHandlerForAvatar_Class_1_F93622965C4FA6CC*>*>**)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x4B0A0);
		}
		static ::System::Int32* StaticGet_Field_6_287()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11B50);
		}
		static ::System::Int32* StaticGet_Field_6_302()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11B54);
		}
		static ::System::Int32* StaticGet_Field_6_296()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11B58);
		}
		static ::System::UInt32* StaticGet_Field_6_313()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11B5C);
		}
		static ::System::UInt32* StaticGet_Field_6_314()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11B60);
		}
		static ::System::UInt32* StaticGet_Field_6_324()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11B64);
		}
		static ::System::UInt32* StaticGet_Field_6_323()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11B68);
		}
		static ::System::UInt32* StaticGet_Field_6_328()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11B6C);
		}
		static ::System::Int32* StaticGet_Field_6_300()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11B70);
		}
		static ::System::UInt32* StaticGet_Field_6_319()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11B74);
		}
		static ::System::Int32* StaticGet_Field_6_305()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11B78);
		}
		static ::System::Int32* StaticGet_Field_6_295()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11B7C);
		}
		static ::System::UInt32* StaticGet_Field_6_315()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11B80);
		}
		static ::System::Int32* StaticGet_Field_6_285()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11B84);
		}
		static ::System::UInt32* StaticGet_Field_6_320()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11B88);
		}
		static ::System::Int32* StaticGet_Field_6_292()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11B8C);
		}
		static ::System::Int32* StaticGet_Field_6_297()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11B90);
		}
		static ::System::UInt32* StaticGet_Field_6_312()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11B94);
		}
		static ::System::UInt32* StaticGet_Field_6_317()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11B98);
		}
		static ::System::Int32* StaticGet_Field_6_299()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11B9C);
		}
		static ::System::UInt32* StaticGet_Field_6_309()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11BA0);
		}
		static ::System::Int32* StaticGet_Field_6_298()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11BA4);
		}
		static ::System::Int32* StaticGet_Field_6_304()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11BA8);
		}
		static ::System::UInt32* StaticGet_Field_6_310()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11BAC);
		}
		static ::System::Int32* StaticGet_Field_6_301()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11BB0);
		}
		static ::System::UInt32* StaticGet_Field_6_308()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11BB4);
		}
		static ::System::Int32* StaticGet_Field_6_291()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11BB8);
		}
		static ::System::Int32* StaticGet_Field_6_293()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11BBC);
		}
		static ::System::UInt32* StaticGet_Field_6_311()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11BC0);
		}
		static ::System::UInt32* StaticGet_Field_6_307()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11BC4);
		}
		static ::System::UInt32* StaticGet_Field_6_322()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11BC8);
		}
		static ::System::Int32* StaticGet_Field_6_288()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11BCC);
		}
		static ::System::Int32* StaticGet_Field_6_286()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11BD0);
		}
		static ::System::Int32* StaticGet_Field_6_294()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11BD4);
		}
		static ::System::UInt32* StaticGet_Field_6_327()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11BD8);
		}
		static ::System::UInt32* StaticGet_Field_6_316()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11BDC);
		}
		static ::System::UInt32* StaticGet_Field_6_318()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11BE0);
		}
		static ::System::Int32* StaticGet_Field_6_290()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11BE4);
		}
		static ::System::UInt32* StaticGet_Field_6_321()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11BE8);
		}
		static ::System::Int32* StaticGet_Field_6_289()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11BEC);
		}
		static ::System::Int32* StaticGet_Field_6_306()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11BF0);
		}
		static ::System::UInt32* StaticGet_Field_6_326()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11BF4);
		}
		static ::System::Int32* StaticGet_Field_6_303()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11BF8);
		}
		static ::System::UInt32* StaticGet_Field_6_325()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MonoRenderHandlerForAvatar_TypeDefinitionIndex)->GetStaticField(0x11BFC);
		}
		::MoleMole::StaticBoolMaterialModifier _Transition; // 0xD8
		::MoleMole::StaticFloatMaterialModifier _TransitionCompletion; // 0xF0
		::MoleMole::StaticTextureMaterialModifier _TransitionTex; // 0x110
		::MoleMole::StaticBoolMaterialModifier _OverrideOutlineUseUV2; // 0x140
		::MoleMole::StaticFloatMaterialModifier _TransitionWidth; // 0x158
		::MoleMole::StaticColorMaterialModifier _TransitionColor; // 0x178
		::MoleMole::StaticTextureMaterialModifier _OverrideOutlineTex; // 0x1B0
		::MoleMole::StaticBoolMaterialModifier _ClipPlane; // 0x1E0
		::MoleMole::StaticBoolMaterialModifier _HardLight; // 0x1F8
		::MoleMole::StaticFloatMaterialModifier _HardLightWidth; // 0x210
		::MoleMole::StaticColorMaterialModifier _HardLightColor; // 0x230
		::MoleMole::StaticBoolMaterialModifier _SoftLight; // 0x268
		::MoleMole::StaticFloatMaterialModifier _SoftLightWidth; // 0x280
		::MoleMole::StaticColorMaterialModifier _SoftLightColor; // 0x2A0
		::MoleMole::StaticBoolMaterialModifier _PlaneClipReverse; // 0x2D8
		::MoleMole::StaticBoolMaterialModifier _ClipPlaneXZ; // 0x2F0
		::MoleMole::StaticBoolMaterialModifier _ReversePlaneXZ; // 0x308
		::MoleMole::StaticFloatMaterialModifier _DitherAlpha2; // 0x320
		::MoleMole::StaticVectorMaterialModifier _FxTransparentValue; // 0x340
		::MoleMole::StaticVectorMaterialModifier _FxUVDitherValue; // 0x368
		::MoleMole::StaticVectorMaterialModifier _DecolorizationContrast; // 0x390
		::MoleMole::StaticBoolMaterialModifier _Glitch; // 0x3B8
		::MoleMole::StaticTextureMaterialModifier _BlockMaskTex; // 0x3D0
		::MoleMole::StaticBoolMaterialModifier _ScreenScale; // 0x400
		::MoleMole::StaticColorMaterialModifier _BlockColorA; // 0x418
		::MoleMole::StaticColorMaterialModifier _BlockColorB; // 0x450
		::MoleMole::StaticColorMaterialModifier _BlockColorC; // 0x488
		::MoleMole::StaticColorMaterialModifier _BlockColorD; // 0x4C0
		::MoleMole::StaticBoolMaterialModifier _Override2Tone; // 0x4F8
		::MoleMole::StaticFloatMaterialModifier _LightSource; // 0x510
		::MoleMole::StaticVectorMaterialModifier _PointPosition; // 0x530
		::MoleMole::StaticFloatMaterialModifier _PointSpace; // 0x558
		::MoleMole::StaticFloatMaterialModifier _ShiftAngle; // 0x578
		::MoleMole::StaticColorMaterialModifier _ColorA; // 0x598
		::MoleMole::StaticColorMaterialModifier _ColorB; // 0x5D0
		::MoleMole::StaticFloatMaterialModifier _LerpPosition; // 0x608
		::MoleMole::StaticFloatMaterialModifier _Softness; // 0x628
		::MoleMole::StaticBoolMaterialModifier _Override2ToneMultiplyAlbedo; // 0x648
		::MoleMole::StaticFloatMaterialModifier _Override2ToneBlendMode; // 0x660
		::MoleMole::StaticBoolMaterialModifier _Override; // 0x680
		::MoleMole::StaticColorMaterialModifier _OverrideColor; // 0x698
		::MoleMole::StaticBoolMaterialModifier _OverrideOutline; // 0x6D0
		::MoleMole::StaticColorMaterialModifier _OverrideOutlineColor; // 0x6E8
		::MoleMole::StaticVectorMaterialModifier _OverrideOutlineSpeed; // 0x720
		::MoleMole::StaticFloatMaterialModifier _OutlineWidth; // 0x748
		::MoleMole::StaticBoolMaterialModifier _OverrideRimGlow; // 0x768
		::MoleMole::StaticFloatMaterialModifier _OverrideRimGlowMode; // 0x780
		::MoleMole::StaticColorMaterialModifier _OverrideRimGlowColor; // 0x7A0
		::MoleMole::StaticTextureMaterialModifier _OverrideRimGlowTexFX; // 0x7D8
		::MoleMole::StaticFloatMaterialModifier _OverrideRimGlowUseUV2; // 0x808
		::MoleMole::StaticVectorMaterialModifier _OverrideRimGlowSpeed; // 0x828
		::MoleMole::StaticFloatMaterialModifier _PropertyTexUseUV2; // 0x850
		::MoleMole::StaticColorMaterialModifier _FresnelColor; // 0x870
		::MoleMole::StaticColorMaterialModifier _DetailColor; // 0x8A8
		::MoleMole::StaticFloatMaterialModifier _FresnelWidth; // 0x8E0
		::MoleMole::StaticFloatMaterialModifier _PropertyMaskUseUV2; // 0x900
		::MoleMole::StaticFloatMaterialModifier _PropertyMask2UseUV2; // 0x920
		::MoleMole::StaticFloatMaterialModifier _PropertyMaskChannel; // 0x940
		::MoleMole::StaticBoolMaterialModifier _ScreenImage; // 0x960
		::MoleMole::StaticBoolMaterialModifier _MultiplySrcColor; // 0x978
		::MoleMole::StaticColorMaterialModifier _ScreenColor; // 0x990
		::MoleMole::StaticTextureMaterialModifier _ScreenTex; // 0x9C8
		::MoleMole::StaticTextureMaterialModifier _ScreenMask; // 0x9F8
		::MoleMole::StaticFloatMaterialModifier _ScreenMaskUV; // 0xA28
		::MoleMole::StaticBoolMaterialModifier _UseInvSecondaryEmissionMask; // 0xA48
		::MoleMole::StaticVectorMaterialModifier _ScreenImageUvMove; // 0xA60
		::MoleMole::StaticFloatMaterialModifier _MatCapNormalVSpeedFx; // 0xA88
		::MoleMole::StaticFloatMaterialModifier _MatCapBlendModeFx; // 0xAA8
		::MoleMole::StaticBoolMaterialModifier _Blink; // 0xAC8
		::MoleMole::StaticFloatMaterialModifier _BlinkFrequency; // 0xAE0
		::MoleMole::StaticVectorMaterialModifier _BlinkOpacity; // 0xB00
		::MoleMole::StaticBoolMaterialModifier _SecondaryEmission; // 0xB28
		::MoleMole::StaticBoolMaterialModifier _SecondaryEmissionUseUV2; // 0xB40
		::MoleMole::StaticBoolMaterialModifier _SecondaryEmissionMultiplyAlbedo; // 0xB58
		::MoleMole::StaticVectorMaterialModifier _ColorOverrideAlbedo; // 0xB70
		::MoleMole::StaticFloatMaterialModifier _MatCapUSpeedFx; // 0xB98
		::MoleMole::StaticColorMaterialModifier _MatCapColorTintFx; // 0xBB8
		::MoleMole::StaticFloatMaterialModifier _SecondaryEmissionChannel; // 0xBF0
		::MoleMole::StaticFloatMaterialModifier _SecondaryEmissionMaskChannel; // 0xC10
		::MoleMole::StaticTextureMaterialModifier _SecondaryEmissionTex; // 0xC30
		::MoleMole::StaticColorMaterialModifier _SecondaryEmissionColor; // 0xC60
		::MoleMole::StaticTextureMaterialModifier _SecondaryEmissionMaskTex; // 0xC98
		::MoleMole::StaticVectorMaterialModifier _SecondaryEmissionTexSpeed; // 0xCC8
		::MoleMole::StaticFloatMaterialModifier _MatCapBumpScaleFx; // 0xCF0
		::MoleMole::StaticFloatMaterialModifier _MatCapFX; // 0xD10
		::MoleMole::StaticBoolMaterialModifier _VertexStretch; // 0xD30
		::MoleMole::StaticTextureMaterialModifier _StretchMask; // 0xD48
		::MoleMole::StaticFloatMaterialModifier _NormalThreshold; // 0xD78
		::MoleMole::StaticFloatMaterialModifier _StretchDistance; // 0xD98
		::MoleMole::StaticVectorMaterialModifier _StretchVector; // 0xDB8
		::MoleMole::StaticFloatMaterialModifier _StretchDirection; // 0xDE0
		::MoleMole::StaticVectorMaterialModifier _StretchToPoint; // 0xE00
		::MoleMole::StaticFloatMaterialModifier _MaskTexFactor; // 0xE28
		::MoleMole::StaticFloatMaterialModifier _StretchPercentage; // 0xE48
		::MoleMole::StaticVectorMaterialModifier _MaskRChannelUVSpeed; // 0xE68
		::MoleMole::StaticFloatMaterialModifier _MatCapColorBurstFx; // 0xE90
		::MoleMole::StaticFloatMaterialModifier _MatCapAlphaBurstFx; // 0xEB0
		::MoleMole::StaticColorMaterialModifier _Color; // 0xED0
		::MoleMole::StaticTextureMaterialModifier _MainTex; // 0xF08
		::MoleMole::StaticTextureMaterialModifier _LightTex; // 0xF38
		::MoleMole::StaticTextureMaterialModifier _OtherDataTex; // 0xF68
		::MoleMole::StaticTextureMaterialModifier _OtherDataTex2; // 0xF98
		::MoleMole::StaticFloatMaterialModifier _MaterialNum; // 0xFC8
		::MoleMole::StaticFloatMaterialModifier _SkinMatId; // 0xFE8
		::MoleMole::StaticColorMaterialModifier _ShallowColor; // 0x1008
		::MoleMole::StaticColorMaterialModifier _ShallowColor2; // 0x1040
		::MoleMole::StaticColorMaterialModifier _ShallowColor3; // 0x1078
		::MoleMole::StaticColorMaterialModifier _ShallowColor4; // 0x10B0
		::MoleMole::StaticColorMaterialModifier _ShallowColor5; // 0x10E8
		::MoleMole::StaticColorMaterialModifier _ShadowColor; // 0x1120
		::MoleMole::StaticColorMaterialModifier _ShadowColor2; // 0x1158
		::MoleMole::StaticColorMaterialModifier _ShadowColor3; // 0x1190
		::MoleMole::StaticColorMaterialModifier _ShadowColor4; // 0x11C8
		::MoleMole::StaticColorMaterialModifier _ShadowColor5; // 0x1200
		::MoleMole::StaticTextureMaterialModifier _EyeColorMap; // 0x1238
		::MoleMole::StaticTextureMaterialModifier _ThreadMap; // 0x1268
		::MoleMole::StaticTextureMaterialModifier _ChannelMixTex; // 0x1298
		::MoleMole::StaticColorMaterialModifier _SpecularColor; // 0x12C8
		::MoleMole::StaticColorMaterialModifier _SpecularColor2; // 0x1300
		::MoleMole::StaticColorMaterialModifier _SpecularColor3; // 0x1338
		::MoleMole::StaticColorMaterialModifier _SpecularColor4; // 0x1370
		::MoleMole::StaticColorMaterialModifier _SpecularColor5; // 0x13A8
		::MoleMole::StaticColorMaterialModifier _RimGlowLightColor; // 0x13E0
		::MoleMole::StaticColorMaterialModifier _RimGlowLightColor2; // 0x1418
		::MoleMole::StaticColorMaterialModifier _RimGlowLightColor3; // 0x1450
		::MoleMole::StaticColorMaterialModifier _RimGlowLightColor4; // 0x1488
		::MoleMole::StaticColorMaterialModifier _RimGlowLightColor5; // 0x14C0
		::MoleMole::StaticColorMaterialModifier _EmissionColor; // 0x14F8
		::MoleMole::StaticColorMaterialModifier _EmissionColor2; // 0x1530
		::MoleMole::StaticColorMaterialModifier _EmissionColor3; // 0x1568
		::MoleMole::StaticColorMaterialModifier _EmissionColor4; // 0x15A0
		::MoleMole::StaticColorMaterialModifier _EmissionColor5; // 0x15D8
		::MoleMole::StaticColorMaterialModifier _OutlineColor; // 0x1610
		::MoleMole::StaticColorMaterialModifier _OutlineColor2; // 0x1648
		::MoleMole::StaticColorMaterialModifier _OutlineColor3; // 0x1680
		::MoleMole::StaticColorMaterialModifier _OutlineColor4; // 0x16B8
		::MoleMole::StaticColorMaterialModifier _OutlineColor5; // 0x16F0
		::MoleMole::StaticColorMaterialModifier _SilkFresnelColorFront; // 0x1728
		::MoleMole::StaticColorMaterialModifier _SilkFresnelColorEdge; // 0x1760
		::MoleMole::StaticColorMaterialModifier _RChannelColorPrecomputed; // 0x1798
		::MoleMole::StaticColorMaterialModifier _GChannelColorPrecomputed; // 0x17D0
		::MoleMole::StaticColorMaterialModifier _BChannelColorPrecomputed; // 0x1808
		::MoleMole::StaticColorMaterialModifier _AChannelColorPrecomputed; // 0x1840
		::MoleMole::StaticVectorMaterialModifier _SilkPackedParams0; // 0x1878
		::MoleMole::StaticFloatMaterialModifier _RenderType; // 0x18A0
		::MoleMole::StaticFloatMaterialModifier _UseOverlayTex; // 0x18C0
		::MoleMole::StaticFloatMaterialModifier _OverlayTexScale; // 0x18E0
		::MoleMole::StaticFloatMaterialModifier _BumpScale; // 0x1900
		::MoleMole::StaticFloatMaterialModifier _Glossiness; // 0x1920
		::MoleMole::StaticFloatMaterialModifier _Metallic; // 0x1940
		::MoleMole::StaticFloatMaterialModifier _Anisotropy; // 0x1960
		::MoleMole::StaticFloatMaterialModifier _ModelSize; // 0x1980
		::MoleMole::StaticFloatMaterialModifier _ModelSize2; // 0x19A0
		::MoleMole::StaticFloatMaterialModifier _ModelSize3; // 0x19C0
		::MoleMole::StaticFloatMaterialModifier _ModelSize4; // 0x19E0
		::MoleMole::StaticFloatMaterialModifier _ModelSize5; // 0x1A00
		::MoleMole::StaticFloatMaterialModifier _AlbedoSmoothness; // 0x1A20
		::MoleMole::StaticFloatMaterialModifier _AlbedoSmoothness2; // 0x1A40
		::MoleMole::StaticFloatMaterialModifier _AlbedoSmoothness3; // 0x1A60
		::MoleMole::StaticFloatMaterialModifier _AlbedoSmoothness4; // 0x1A80
		::MoleMole::StaticFloatMaterialModifier _AlbedoSmoothness5; // 0x1AA0
		::MoleMole::StaticFloatMaterialModifier _HighlightShape; // 0x1AC0
		::MoleMole::StaticFloatMaterialModifier _HighlightShape2; // 0x1AE0
		::MoleMole::StaticFloatMaterialModifier _HighlightShape3; // 0x1B00
		::MoleMole::StaticFloatMaterialModifier _HighlightShape4; // 0x1B20
		::MoleMole::StaticFloatMaterialModifier _HighlightShape5; // 0x1B40
		::MoleMole::StaticFloatMaterialModifier _ToonSpecular; // 0x1B60
		::MoleMole::StaticFloatMaterialModifier _ToonSpecular2; // 0x1B80
		::MoleMole::StaticFloatMaterialModifier _ToonSpecular3; // 0x1BA0
		::MoleMole::StaticFloatMaterialModifier _ToonSpecular4; // 0x1BC0
		::MoleMole::StaticFloatMaterialModifier _ToonSpecular5; // 0x1BE0
		::MoleMole::StaticFloatMaterialModifier _SpecularRange; // 0x1C00
		::MoleMole::StaticFloatMaterialModifier _SpecularRange2; // 0x1C20
		::MoleMole::StaticFloatMaterialModifier _SpecularRange3; // 0x1C40
		::MoleMole::StaticFloatMaterialModifier _SpecularRange4; // 0x1C60
		::MoleMole::StaticFloatMaterialModifier _SpecularRange5; // 0x1C80
		::MoleMole::StaticFloatMaterialModifier _ShapeSoftness; // 0x1CA0
		::MoleMole::StaticFloatMaterialModifier _ShapeSoftness2; // 0x1CC0
		::MoleMole::StaticFloatMaterialModifier _ShapeSoftness3; // 0x1CE0
		::MoleMole::StaticFloatMaterialModifier _ShapeSoftness4; // 0x1D00
		::MoleMole::StaticFloatMaterialModifier _ShapeSoftness5; // 0x1D20
		::MoleMole::StaticFloatMaterialModifier _SpecIntensity; // 0x1D40
		::MoleMole::StaticFloatMaterialModifier _Emission; // 0x1D60
		::MoleMole::StaticFloatMaterialModifier _MaxOutlineZOffset; // 0x1D80
		::MoleMole::StaticFloatMaterialModifier _PerObjectShadowIntensity; // 0x1DA0
		::MoleMole::StaticFloatMaterialModifier _PerObjectShadowIntensity2; // 0x1DC0
		::MoleMole::StaticFloatMaterialModifier _PerObjectShadowIntensity3; // 0x1DE0
		::MoleMole::StaticFloatMaterialModifier _PerObjectShadowIntensity4; // 0x1E00
		::MoleMole::StaticFloatMaterialModifier _PerObjectShadowIntensity5; // 0x1E20
		::MoleMole::StaticFloatMaterialModifier _UseChannelMixer; // 0x1E40
		::MoleMole::StaticFloatMaterialModifier _ChannelMixerUsingUV4; // 0x1E60
		::MoleMole::StaticFloatMaterialModifier _Cull; // 0x1E80
		::MoleMole::StaticFloatMaterialModifier _DoubleSided; // 0x1EA0
		::MoleMole::StaticFloatMaterialModifier _SymmetryUV; // 0x1EC0
		::MoleMole::StaticBoolMaterialModifier _ShadowColorFadeByZ; // 0x1EE0
		::MoleMole::StaticKeywordFloatMaterialModifier _MatCap; // 0x1EF8
		::MoleMole::StaticTextureMaterialModifier _MatCapTex; // 0x1F10
		::MoleMole::StaticTextureMaterialModifier _MatCapTexFx; // 0x1F40
		::MoleMole::StaticTextureMaterialModifier _MatCapBumpMapFx; // 0x1F70
		::MoleMole::StaticBoolMaterialModifier _UseMatCapMask; // 0x1FA0
		::MoleMole::StaticColorMaterialModifier _MatCapColorTint; // 0x1FB8
		::MoleMole::StaticFloatMaterialModifier _MatCapVSpeedFx; // 0x1FF0
		::MoleMole::StaticFloatMaterialModifier _MatCapNormalUSpeedFx; // 0x2010
		::MoleMole::StaticFloatMaterialModifier _VertexOffset; // 0x2030
		::MoleMole::StaticColorMaterialModifier _MatCapColorTint2; // 0x2050
		::MoleMole::StaticColorMaterialModifier _MatCapColorTint3; // 0x2088
		::MoleMole::StaticColorMaterialModifier _MatCapColorTint4; // 0x20C0
		::MoleMole::StaticColorMaterialModifier _MatCapColorTint5; // 0x20F8
		::MoleMole::StaticVectorMaterialModifier _RefractParam; // 0x2130
		::MoleMole::StaticVectorMaterialModifier _RefractParam2; // 0x2158
		::MoleMole::StaticVectorMaterialModifier _RefractParam3; // 0x2180
		::MoleMole::StaticVectorMaterialModifier _RefractParam4; // 0x21A8
		::MoleMole::StaticVectorMaterialModifier _RefractParam5; // 0x21D0
		::MoleMole::StaticVectorMaterialModifier _MatCapParams; // 0x21F8
		::MoleMole::StaticVectorMaterialModifier _MatCapParams2; // 0x2220
		::MoleMole::StaticVectorMaterialModifier _MatCapParams3; // 0x2248
		::MoleMole::StaticVectorMaterialModifier _MatCapParams4; // 0x2270
		::MoleMole::StaticVectorMaterialModifier _MatCapParams5; // 0x2298
		::MoleMole::StaticVectorMaterialModifier _MatCapReractParams; // 0x22C0
		::MoleMole::StaticVectorMaterialModifier _MatCapReractParams2; // 0x22E8
		::MoleMole::StaticVectorMaterialModifier _MatCapReractParams3; // 0x2310
		::MoleMole::StaticVectorMaterialModifier _MatCapReractParams4; // 0x2338
		::MoleMole::StaticVectorMaterialModifier _MatCapReractParams5; // 0x2360
		::MoleMole::StaticBoolMaterialModifier _Fresnel; // 0x2388
		::MoleMole::StaticFloatMaterialModifier _FresnelPower; // 0x23A0
		::MoleMole::StaticFloatMaterialModifier _FresnelScale; // 0x23C0
		::MoleMole::StaticFloatMaterialModifier _FresnelOffset; // 0x23E0
		::MoleMole::StaticBoolMaterialModifier _Outline; // 0x2400
		::MoleMole::StaticBoolMaterialModifier _RimGlow; // 0x2418
		::MoleMole::StaticColorMaterialModifier _RimGlowShadowColor; // 0x2430
		::MoleMole::StaticBoolMaterialModifier _AbnormalProperty; // 0x2468
		::MoleMole::StaticFloatMaterialModifier _PropertyType; // 0x2480
		::MoleMole::StaticColorMaterialModifier _PropertyColor; // 0x24A0
		::MoleMole::StaticVectorMaterialModifier _PropertyTexUVSpeed; // 0x24D8
		::MoleMole::StaticFloatMaterialModifier _PropertyTexUVFlipSpeed; // 0x2500
		::MoleMole::StaticVectorMaterialModifier _PropertyMaskUVSpeed; // 0x2520
		::MoleMole::StaticFloatMaterialModifier _PropertyMask2Channel; // 0x2548
		::MoleMole::StaticVectorMaterialModifier _PropertyMask2UVSpeed; // 0x2568
		::MoleMole::StaticFloatMaterialModifier _PropertyMaskUVFlipSpeed; // 0x2590
		::MoleMole::StaticFloatMaterialModifier _PropertyNormalUseUV2; // 0x25B0
		::MoleMole::StaticVectorMaterialModifier _PropertyNormalUVSpeed; // 0x25D0
		::MoleMole::StaticFloatMaterialModifier _FresnelMaskWidth; // 0x25F8
		::MoleMole::StaticFloatMaterialModifier _FresnelFlashing; // 0x2618
		::MoleMole::StaticBoolMaterialModifier _MarkAsVfxMask; // 0x2638
		::MoleMole::StaticFloatMaterialModifier _CurrentColorStagment; // 0x2650
		::MoleMole::StaticBoolMaterialModifier _AbnormalPropertyElectro; // 0x2670
		::MoleMole::StaticBoolMaterialModifier _AbnormalPropertyBurn; // 0x2688
		::MoleMole::StaticBoolMaterialModifier _AbnormalPropertyFreeze; // 0x26A0
		::MoleMole::StaticBoolMaterialModifier _GhostMask; // 0x26B8
		::MoleMole::StaticFloatMaterialModifier _MarkAsGhostMask; // 0x26D0
		::MoleMole::StaticBoolMaterialModifier _IgnisFatuusMask; // 0x26F0
		::MoleMole::StaticBoolMaterialModifier _MarkAsIgnisFatuusMask; // 0x2708
		::MoleMole::StaticColorMaterialModifier _BaseColor; // 0x2720
		::MoleMole::StaticFloatMaterialModifier _Smoothness; // 0x2758
		::MoleMole::StaticBoolMaterialModifier _SpecialWeaponEmission; // 0x2778
		::MoleMole::StaticTextureMaterialModifier _SpecialWeaponEmissionTex; // 0x2790
		::MoleMole::StaticColorMaterialModifier _SpecialWeaponEmissionColor; // 0x27C0
		::MoleMole::StaticVectorMaterialModifier _SpecialWeaponMergeParam01; // 0x27F8
		::MoleMole::StaticVectorMaterialModifier _SpecialWeaponMergeParam02; // 0x2820
		::MoleMole::StaticColorMaterialModifier _SpecialWeaponEmissionColor2; // 0x2848
		::MoleMole::StaticTextureMaterialModifier _SpecialWeaponEmissionMaskTex; // 0x2880
		::MoleMole::StaticVectorMaterialModifier _SpecialWeaponEmissionTexSpeed; // 0x28B0
		::MoleMole::StaticVectorMaterialModifier _SpecialWeaponMergeParam03; // 0x28D8
		::MoleMole::StaticBoolMaterialModifier _NoiseLerp; // 0x2900
		::MoleMole::StaticTextureMaterialModifier _NoiseLerpMask; // 0x2918
		::MoleMole::StaticColorMaterialModifier _NoiseLerpColor; // 0x2948
		::MoleMole::StaticBoolMaterialModifier _NoiseUseUV2; // 0x2980
		::MoleMole::StaticFloatMaterialModifier _NoiseLerpEdgeRange; // 0x2998
		::MoleMole::StaticFloatMaterialModifier _NoiseLerpValue; // 0x29B8
		::MoleMole::StaticBoolMaterialModifier _UseLerpEdgeColor; // 0x29D8
		::MoleMole::StaticColorMaterialModifier _NoiseLerpEdgeColor; // 0x29F0
		::MoleMole::StaticBoolMaterialModifier _Blush; // 0x2A28
		::MoleMole::StaticTextureMaterialModifier _BlushTexture; // 0x2A40
		::MoleMole::StaticColorMaterialModifier _BlushColor; // 0x2A70
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>* Field_6_274; // 0x2AA8
		::Il2CppArray<::System::Collections::Generic::List_1<::System::UInt32>*>* Field_6_275; // 0x2AB0
		::Il2CppArray<::System::Collections::Generic::List_1<::System::Int32>*>* Field_6_276; // 0x2AB8
		::Il2CppArray<::Il2CppArray<::Il2CppArray<::System::Int32>*>*>* Field_6_277; // 0x2AC0
		::Il2CppArray<::Il2CppArray<::System::Int32>*>* Field_6_278; // 0x2AC8
		::Il2CppArray<::System::Collections::Generic::List_1<::System::Int32>*>* Field_6_279; // 0x2AD0
		::Il2CppArray<::System::Collections::Generic::List_1<::System::Int32>*>* Field_6_280; // 0x2AD8
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Shader*>* Field_6_281; // 0x2AE0
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Int32>* Field_6_282; // 0x2AE8
		::Il2CppArray<::Il2CppArray<::System::Boolean>*>* Field_6_283; // 0x2AF0
		::Il2CppArray<::System::Boolean>* Field_6_284; // 0x2AF8

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

		::Class_1_A0B58236B258B7B2* TryCreateMaterialModifierInstance(::Enum_3_7F4644768973D415 a1)
		{
			return ((::Class_1_A0B58236B258B7B2*(*)(::PVOID, ::Enum_3_7F4644768973D415))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYCREATEMATERIALMODIFIERINSTANCE_OFFSET))(this, a1);
		}

		::System::Boolean TryGetMaterialModifier(::Enum_3_7F4644768973D415 a1, ::MoleMole::StaticFloatMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F4644768973D415, ::MoleMole::StaticFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMaterialModifier_1(::Enum_3_7F4644768973D415 a1, ::MoleMole::StaticTextureMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F4644768973D415, ::MoleMole::StaticTextureMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMaterialModifier_2(::Enum_3_7F4644768973D415 a1, ::MoleMole::StaticVectorMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F4644768973D415, ::MoleMole::StaticVectorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_2_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMaterialModifier_3(::Enum_3_7F4644768973D415 a1, ::MoleMole::StaticColorMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F4644768973D415, ::MoleMole::StaticColorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_3_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMaterialModifier_4(::Enum_3_7F4644768973D415 a1, ::MoleMole::StaticBoolMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F4644768973D415, ::MoleMole::StaticBoolMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_4_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMaterialModifier_5(::Enum_3_7F4644768973D415 a1, ::MoleMole::StaticKeywordMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F4644768973D415, ::MoleMole::StaticKeywordMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_5_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetMaterialModifier_6(::Enum_3_7F4644768973D415 a1, ::MoleMole::StaticKeywordFloatMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F4644768973D415, ::MoleMole::StaticKeywordFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_TRYGETMATERIALMODIFIER_6_OFFSET))(this, a1, a2);
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

		::Class_1_8019128448F0E9D5* SetupAndStartMatPropertiesPattern(::Class_1_413B2BDBE645DB66* a1)
		{
			return ((::Class_1_8019128448F0E9D5*(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_SETUPANDSTARTMATPROPERTIESPATTERN_OFFSET))(this, a1);
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

		::Class_1_8019128448F0E9D5* __base_SetupAndStartMatPropertiesPattern(::Class_1_413B2BDBE645DB66* a1)
		{
			return ((::Class_1_8019128448F0E9D5*(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_SETUPANDSTARTMATPROPERTIESPATTERN_OFFSET))(this, a1);
		}

		::Class_1_A0B58236B258B7B2* __base_TryCreateMaterialModifierInstance(::Enum_3_7F4644768973D415 a1)
		{
			return ((::Class_1_A0B58236B258B7B2*(*)(::PVOID, ::Enum_3_7F4644768973D415))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYCREATEMATERIALMODIFIERINSTANCE_OFFSET))(this, a1);
		}

		::System::Boolean __base_TryGetMaterialModifier(::Enum_3_7F4644768973D415 a1, ::MoleMole::StaticFloatMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F4644768973D415, ::MoleMole::StaticFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_OFFSET))(this, a1, a2);
		}

		::System::Boolean __base_TryGetMaterialModifier_1(::Enum_3_7F4644768973D415 a1, ::MoleMole::StaticTextureMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F4644768973D415, ::MoleMole::StaticTextureMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean __base_TryGetMaterialModifier_2(::Enum_3_7F4644768973D415 a1, ::MoleMole::StaticVectorMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F4644768973D415, ::MoleMole::StaticVectorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_2_OFFSET))(this, a1, a2);
		}

		::System::Boolean __base_TryGetMaterialModifier_3(::Enum_3_7F4644768973D415 a1, ::MoleMole::StaticColorMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F4644768973D415, ::MoleMole::StaticColorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_3_OFFSET))(this, a1, a2);
		}

		::System::Boolean __base_TryGetMaterialModifier_4(::Enum_3_7F4644768973D415 a1, ::MoleMole::StaticBoolMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F4644768973D415, ::MoleMole::StaticBoolMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_4_OFFSET))(this, a1, a2);
		}

		::System::Boolean __base_TryGetMaterialModifier_5(::Enum_3_7F4644768973D415 a1, ::MoleMole::StaticKeywordMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F4644768973D415, ::MoleMole::StaticKeywordMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_5_OFFSET))(this, a1, a2);
		}

		::System::Boolean __base_TryGetMaterialModifier_6(::Enum_3_7F4644768973D415 a1, ::MoleMole::StaticKeywordFloatMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F4644768973D415, ::MoleMole::StaticKeywordFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_TRYGETMATERIALMODIFIER_6_OFFSET))(this, a1, a2);
		}

		::System::Void __base_UpdateCommonSwitch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR___BASE_UPDATECOMMONSWITCH_OFFSET))(this);
		}

		::Class_1_A0B58236B258B7B2* Method_6_D624E2057E4C2061(::Enum_3_7F4644768973D415 a1)
		{
			return ((::Class_1_A0B58236B258B7B2*(*)(::PVOID, ::Enum_3_7F4644768973D415))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_D624E2057E4C2061_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_E9D90F1C7434F23D(::Enum_3_7F4644768973D415 a1, ::MoleMole::StaticKeywordFloatMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F4644768973D415, ::MoleMole::StaticKeywordFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_E9D90F1C7434F23D_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_6_6D3FB7CC639EF394(::Enum_3_7F4644768973D415 a1, ::MoleMole::StaticVectorMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F4644768973D415, ::MoleMole::StaticVectorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_6D3FB7CC639EF394_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_C0940C3855FBCBCA(::UnityEngine::Material* a1, ::UnityEngine::Shader* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_C0940C3855FBCBCA_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_62A845E20C4260F0(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::System::UInt32 a4, ::Il2CppArray<::System::Int32>* a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Material*, ::System::UInt32, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_62A845E20C4260F0_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::Class_1_8019128448F0E9D5* Method_6_96B03403C56455CD(::Class_1_413B2BDBE645DB66* a1)
		{
			return ((::Class_1_8019128448F0E9D5*(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_96B03403C56455CD_OFFSET))(this, a1);
		}

		::Class_1_A0B58236B258B7B2* Method_6_83D69C60802E274D(::Enum_3_7F4644768973D415 a1)
		{
			return ((::Class_1_A0B58236B258B7B2*(*)(::PVOID, ::Enum_3_7F4644768973D415))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_83D69C60802E274D_OFFSET))(this, a1);
		}

		::System::Void Method_6_36971FC3F16E2CEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_36971FC3F16E2CEB_OFFSET))(this);
		}

		::System::Void Method_6_A4B3435BD7C0679A(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_A4B3435BD7C0679A_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_6_D41D7B87AEBE6BD0(::Enum_3_7F4644768973D415 a1, ::MoleMole::StaticTextureMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F4644768973D415, ::MoleMole::StaticTextureMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_D41D7B87AEBE6BD0_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_6_5D5F16A6230C8F33(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Material* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_5D5F16A6230C8F33_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_6_7F349DA94A1B78DF(::Enum_3_7F4644768973D415 a1, ::MoleMole::StaticFloatMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F4644768973D415, ::MoleMole::StaticFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_7F349DA94A1B78DF_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean Method_6_93C64601FA6F7E9D(::MoleMole::MonoRenderHandlerForAvatar_Struct_2_7952382059FE8D18& a1)
		{
			return ((::System::Boolean(*)(::MoleMole::MonoRenderHandlerForAvatar_Struct_2_7952382059FE8D18&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_93C64601FA6F7E9D_OFFSET))(a1);
		}

		::System::Boolean Method_6_4D8DE63ACD68BAC3(::Enum_3_7F4644768973D415 a1, ::MoleMole::StaticBoolMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F4644768973D415, ::MoleMole::StaticBoolMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_4D8DE63ACD68BAC3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_77E3CF907BA6F8B7(::Enum_3_7F4644768973D415 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_7F4644768973D415))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_77E3CF907BA6F8B7_OFFSET))(this, a1);
		}

		::System::Void Method_6_3E5E39D0D3E9B5CD(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Boolean a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_3E5E39D0D3E9B5CD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_6_515C5D9412196CB3(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_515C5D9412196CB3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_6EFB9FF221105F53(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_6EFB9FF221105F53_OFFSET))(this, a1, a2);
		}

		static ::System::Int32 Method_6_E12043F46AB48C94(::UnityEngine::Material* a1)
		{
			return ((::System::Int32(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_E12043F46AB48C94_OFFSET))(a1);
		}

		::System::Boolean Method_6_A476CAA54063C150(::Enum_3_7F4644768973D415 a1, ::MoleMole::StaticColorMaterialModifier& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_7F4644768973D415, ::MoleMole::StaticColorMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_METHOD_6_A476CAA54063C150_OFFSET))(this, a1, a2);
		}
	};
}

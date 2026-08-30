#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIProceduralShapeExtentMode.h"
#include "unitysdk/RPG/Client/UIProceduralShapeFillMethod.h"
#include "unitysdk/RPG/Client/UIProceduralShapeGradientMode.h"
#include "unitysdk/RPG/Client/UIProceduralShapeImageType.h"
#include "unitysdk/RPG/Client/UIProceduralShapeShadowBlend.h"
#include "unitysdk/RPG/Client/UIProceduralShapeStrokeAlignment.h"
#include "unitysdk/RPG/Client/UIProceduralShapeType.h"
#include "unitysdk/RPG/Client/UIProceduralShape___c__DisplayClass290_0.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::UI { class VertexHelper; }

#define RPG_CLIENT_UIPROCEDURALSHAPE_CALCULATEPOLYGONMETRICS_OFFSET UNITYSDK_OFFSET(0xE3AD2B0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GETPOLYVERTEXEXTENT_OFFSET UNITYSDK_OFFSET(0xE3AA520)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GETPOLYVERTEXRADIUS_OFFSET UNITYSDK_OFFSET(0xE3A9F60)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_ARCCLOCKWISE_OFFSET UNITYSDK_OFFSET(0xE3AC6B0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_ARCEND_OFFSET UNITYSDK_OFFSET(0xE3AC480)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_ARCPROGRESS_OFFSET UNITYSDK_OFFSET(0xE3AC5E0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_ARCROUNDCAPS_OFFSET UNITYSDK_OFFSET(0xE3AC820)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_ARCSTART_OFFSET UNITYSDK_OFFSET(0xE3AC3D0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_ARCTHICKNESS_OFFSET UNITYSDK_OFFSET(0xE3AC760)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_ENABLEGLOW_OFFSET UNITYSDK_OFFSET(0xE3AAA50)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_ENABLEINNERGLOW_OFFSET UNITYSDK_OFFSET(0xE3AC320)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_ENABLEINNERSHADOW_OFFSET UNITYSDK_OFFSET(0xE3ABE70)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_ENABLEOUTERGLOW_OFFSET UNITYSDK_OFFSET(0xE3AA9A0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_ENABLESHADOW_OFFSET UNITYSDK_OFFSET(0xE3AAD70)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_EXTENTMODE_OFFSET UNITYSDK_OFFSET(0xE3AA150)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_FALLOFFDISTANCE_OFFSET UNITYSDK_OFFSET(0xE3AA800)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0xE3ABB70)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_FILLCLOCKWISE_OFFSET UNITYSDK_OFFSET(0xE3ABD80)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_FILLCOLOR_OFFSET UNITYSDK_OFFSET(0xE3A9650)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_FILLMETHOD_OFFSET UNITYSDK_OFFSET(0xE3ABA80)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_FILLORIGIN_OFFSET UNITYSDK_OFFSET(0xE3ABC90)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_GLOWCOLOR_OFFSET UNITYSDK_OFFSET(0xE3AAB00)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_GLOWSIZE_OFFSET UNITYSDK_OFFSET(0xE3AAC10)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_GLOWSPREAD_OFFSET UNITYSDK_OFFSET(0xE3AACC0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_GRADIENTANGLE_OFFSET UNITYSDK_OFFSET(0xE3AB320)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_GRADIENTCOLORA_OFFSET UNITYSDK_OFFSET(0xE3AB420)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_GRADIENTCOLORB_OFFSET UNITYSDK_OFFSET(0xE3AB530)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_GRADIENTCOLORC_OFFSET UNITYSDK_OFFSET(0xE3AB640)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_GRADIENTCOLORD_OFFSET UNITYSDK_OFFSET(0xE3AB750)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_GRADIENTMODE_OFFSET UNITYSDK_OFFSET(0xE3AB230)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_IMAGETYPE_OFFSET UNITYSDK_OFFSET(0xE3AB910)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_INDEPENDENTCHANNELALPHA_OFFSET UNITYSDK_OFFSET(0xE3AA8B0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_INNERSHADOWCOLOR_OFFSET UNITYSDK_OFFSET(0xE3ABF20)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_INNERSHADOWOFFSET_OFFSET UNITYSDK_OFFSET(0xE3AC030)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_INNERSHADOWSIZE_OFFSET UNITYSDK_OFFSET(0xE3AC120)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_INNERSHADOWSPREAD_OFFSET UNITYSDK_OFFSET(0xE3AC220)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0xE3AE110)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_PIXELSPERUNITMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xE3AB9C0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_POLYGONOFFSET_OFFSET UNITYSDK_OFFSET(0xE3A9FD0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_POLYGONSIDES_OFFSET UNITYSDK_OFFSET(0xE3A9C30)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_POLYGONUNIFORMITY_OFFSET UNITYSDK_OFFSET(0xE3A9CF0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_POLYVERTEXEXTENTS_OFFSET UNITYSDK_OFFSET(0xE3AA430)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_POLYVERTEXRADII_OFFSET UNITYSDK_OFFSET(0xE3A9E70)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_PRESERVEASPECT_OFFSET UNITYSDK_OFFSET(0xE3AC9D0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_RADIUSBOTTOMLEFT_OFFSET UNITYSDK_OFFSET(0xE3A9B80)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_RADIUSBOTTOMRIGHT_OFFSET UNITYSDK_OFFSET(0xE3A9AD0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_RADIUSINSOURCEPIXELS_OFFSET UNITYSDK_OFFSET(0xE3ACB30)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_RADIUSSOURCESCALE_OFFSET UNITYSDK_OFFSET(0xE3ACBE0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_RADIUSTOPLEFT_OFFSET UNITYSDK_OFFSET(0xE3A9970)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_RADIUSTOPRIGHT_OFFSET UNITYSDK_OFFSET(0xE3A9A20)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0xE3A9810)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_RAYCASTPADDING_OFFSET UNITYSDK_OFFSET(0xE3AC910)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xE3AA080)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_SHADOWBLEND_OFFSET UNITYSDK_OFFSET(0xE3AB140)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_SHADOWCOLOR_OFFSET UNITYSDK_OFFSET(0xE3AAE20)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_SHADOWOFFSET_OFFSET UNITYSDK_OFFSET(0xE3AAF30)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_SHADOWSIZE_OFFSET UNITYSDK_OFFSET(0xE3AAFE0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_SHADOWSPREAD_OFFSET UNITYSDK_OFFSET(0xE3AB090)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_SHAPERADIUSX_OFFSET UNITYSDK_OFFSET(0xE3AA200)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_SHAPERADIUSY_OFFSET UNITYSDK_OFFSET(0xE3AA2C0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_SHAPETYPE_OFFSET UNITYSDK_OFFSET(0xE3A9760)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_SPRITE_OFFSET UNITYSDK_OFFSET(0xE3AB860)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_STROKEALIGNMENT_OFFSET UNITYSDK_OFFSET(0xE3AA750)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_STROKECOLOR_OFFSET UNITYSDK_OFFSET(0xE3AA640)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_STROKEWIDTH_OFFSET UNITYSDK_OFFSET(0xE3AA590)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_USEARCPROGRESS_OFFSET UNITYSDK_OFFSET(0xE3AC530)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_USEPERCORNERRADIUS_OFFSET UNITYSDK_OFFSET(0xE3A98C0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_USEPERVERTEXEXTENT_OFFSET UNITYSDK_OFFSET(0xE3AA380)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_USEPERVERTEXRADIUS_OFFSET UNITYSDK_OFFSET(0xE3A9DC0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_GET_USESOURCEPIXELSCALE_OFFSET UNITYSDK_OFFSET(0xE3ACA80)
#define RPG_CLIENT_UIPROCEDURALSHAPE_METHOD_8_00033B651FB9F53D_OFFSET UNITYSDK_OFFSET(0xE3AF2E0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_METHOD_8_006F4D5C221D8114_OFFSET UNITYSDK_OFFSET(0xE3AE7E0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_METHOD_8_10E6005C55578E4A_OFFSET UNITYSDK_OFFSET(0xE3AD690)
#define RPG_CLIENT_UIPROCEDURALSHAPE_METHOD_8_163DC9A61F1D3AF0_OFFSET UNITYSDK_OFFSET(0xE3AE1A0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_METHOD_8_2D0BCE0D36736E0C_OFFSET UNITYSDK_OFFSET(0xE3AD950)
#define RPG_CLIENT_UIPROCEDURALSHAPE_METHOD_8_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xE3AE600)
#define RPG_CLIENT_UIPROCEDURALSHAPE_METHOD_8_3A6CA94423A5B9DB_OFFSET UNITYSDK_OFFSET(0xE3ADA10)
#define RPG_CLIENT_UIPROCEDURALSHAPE_METHOD_8_68A2CA32DC720C44_OFFSET UNITYSDK_OFFSET(0xE3AD200)
#define RPG_CLIENT_UIPROCEDURALSHAPE_METHOD_8_68D158D7FBF6D878_OFFSET UNITYSDK_OFFSET(0xE3AD800)
#define RPG_CLIENT_UIPROCEDURALSHAPE_METHOD_8_73321D22C595F259_OFFSET UNITYSDK_OFFSET(0xE3AD5A0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_METHOD_8_861970C5F2C21AB2_OFFSET UNITYSDK_OFFSET(0xE3ACD50)
#define RPG_CLIENT_UIPROCEDURALSHAPE_METHOD_8_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xE3ACE40)
#define RPG_CLIENT_UIPROCEDURALSHAPE_METHOD_8_B1508D96B5FD5094_OFFSET UNITYSDK_OFFSET(0xE3ACC40)
#define RPG_CLIENT_UIPROCEDURALSHAPE_METHOD_8_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0xE3AE240)
#define RPG_CLIENT_UIPROCEDURALSHAPE_METHOD_8_DF892EE47C651B9A_OFFSET UNITYSDK_OFFSET(0xE3AE860)
#define RPG_CLIENT_UIPROCEDURALSHAPE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE3AE430)
#define RPG_CLIENT_UIPROCEDURALSHAPE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE3AE540)
#define RPG_CLIENT_UIPROCEDURALSHAPE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0xE3AED50)
#define RPG_CLIENT_UIPROCEDURALSHAPE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0xE3AE740)
#define RPG_CLIENT_UIPROCEDURALSHAPE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0xE3AE690)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SETNATIVESIZE_OFFSET UNITYSDK_OFFSET(0xE3ACE80)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SETPOLYVERTEXEXTENT_OFFSET UNITYSDK_OFFSET(0xE3AA480)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SETPOLYVERTEXRADIUS_OFFSET UNITYSDK_OFFSET(0xE3A9EC0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_ARCCLOCKWISE_OFFSET UNITYSDK_OFFSET(0xE3AC700)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_ARCEND_OFFSET UNITYSDK_OFFSET(0xE3AC4D0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_ARCPROGRESS_OFFSET UNITYSDK_OFFSET(0xE3AC630)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_ARCROUNDCAPS_OFFSET UNITYSDK_OFFSET(0xE3AC870)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_ARCSTART_OFFSET UNITYSDK_OFFSET(0xE3AC420)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_ARCTHICKNESS_OFFSET UNITYSDK_OFFSET(0xE3AC7B0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_ENABLEGLOW_OFFSET UNITYSDK_OFFSET(0xE3AAAA0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_ENABLEINNERGLOW_OFFSET UNITYSDK_OFFSET(0xE3AC370)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_ENABLEINNERSHADOW_OFFSET UNITYSDK_OFFSET(0xE3ABEC0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_ENABLEOUTERGLOW_OFFSET UNITYSDK_OFFSET(0xE3AA9F0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_ENABLESHADOW_OFFSET UNITYSDK_OFFSET(0xE3AADC0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_EXTENTMODE_OFFSET UNITYSDK_OFFSET(0xE3AA1A0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_FALLOFFDISTANCE_OFFSET UNITYSDK_OFFSET(0xE3AA850)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0xE3ABBC0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_FILLCLOCKWISE_OFFSET UNITYSDK_OFFSET(0xE3ABDD0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_FILLCOLOR_OFFSET UNITYSDK_OFFSET(0xE3A96B0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_FILLMETHOD_OFFSET UNITYSDK_OFFSET(0xE3ABAD0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_FILLORIGIN_OFFSET UNITYSDK_OFFSET(0xE3ABCE0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_GLOWCOLOR_OFFSET UNITYSDK_OFFSET(0xE3AAB60)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_GLOWSIZE_OFFSET UNITYSDK_OFFSET(0xE3AAC60)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_GLOWSPREAD_OFFSET UNITYSDK_OFFSET(0xE3AAD10)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_GRADIENTANGLE_OFFSET UNITYSDK_OFFSET(0xE3AB370)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_GRADIENTCOLORA_OFFSET UNITYSDK_OFFSET(0xE3AB480)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_GRADIENTCOLORB_OFFSET UNITYSDK_OFFSET(0xE3AB590)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_GRADIENTCOLORC_OFFSET UNITYSDK_OFFSET(0xE3AB6A0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_GRADIENTCOLORD_OFFSET UNITYSDK_OFFSET(0xE3AB7B0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_GRADIENTMODE_OFFSET UNITYSDK_OFFSET(0xE3AB280)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_IMAGETYPE_OFFSET UNITYSDK_OFFSET(0xE3AB960)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_INDEPENDENTCHANNELALPHA_OFFSET UNITYSDK_OFFSET(0xE3AA900)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_INNERSHADOWCOLOR_OFFSET UNITYSDK_OFFSET(0xE3ABF80)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_INNERSHADOWOFFSET_OFFSET UNITYSDK_OFFSET(0xE3AC080)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_INNERSHADOWSIZE_OFFSET UNITYSDK_OFFSET(0xE3AC170)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_INNERSHADOWSPREAD_OFFSET UNITYSDK_OFFSET(0xE3AC270)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_PIXELSPERUNITMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xE3ABA10)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_POLYGONOFFSET_OFFSET UNITYSDK_OFFSET(0xE3AA020)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_POLYGONSIDES_OFFSET UNITYSDK_OFFSET(0xE3A9C80)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_POLYGONUNIFORMITY_OFFSET UNITYSDK_OFFSET(0xE3A9D40)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_PRESERVEASPECT_OFFSET UNITYSDK_OFFSET(0xE3ACA20)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_RADIUSBOTTOMLEFT_OFFSET UNITYSDK_OFFSET(0xE3A9BD0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_RADIUSBOTTOMRIGHT_OFFSET UNITYSDK_OFFSET(0xE3A9B20)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_RADIUSINSOURCEPIXELS_OFFSET UNITYSDK_OFFSET(0xE3ACB80)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_RADIUSTOPLEFT_OFFSET UNITYSDK_OFFSET(0xE3A99C0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_RADIUSTOPRIGHT_OFFSET UNITYSDK_OFFSET(0xE3A9A70)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0xE3A9860)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_RAYCASTPADDING_OFFSET UNITYSDK_OFFSET(0xE3AC970)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0xE3AA0D0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_SHADOWBLEND_OFFSET UNITYSDK_OFFSET(0xE3AB190)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_SHADOWCOLOR_OFFSET UNITYSDK_OFFSET(0xE3AAE80)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_SHADOWOFFSET_OFFSET UNITYSDK_OFFSET(0xE3AAF80)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_SHADOWSIZE_OFFSET UNITYSDK_OFFSET(0xE3AB030)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_SHADOWSPREAD_OFFSET UNITYSDK_OFFSET(0xE3AB0E0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_SHAPERADIUSX_OFFSET UNITYSDK_OFFSET(0xE3AA250)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_SHAPERADIUSY_OFFSET UNITYSDK_OFFSET(0xE3AA310)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_SHAPETYPE_OFFSET UNITYSDK_OFFSET(0xE3A97B0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_SPRITE_OFFSET UNITYSDK_OFFSET(0xE3AB8B0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_STROKEALIGNMENT_OFFSET UNITYSDK_OFFSET(0xE3AA7A0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_STROKECOLOR_OFFSET UNITYSDK_OFFSET(0xE3AA6A0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_STROKEWIDTH_OFFSET UNITYSDK_OFFSET(0xE3AA5E0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_USEARCPROGRESS_OFFSET UNITYSDK_OFFSET(0xE3AC580)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_USEPERCORNERRADIUS_OFFSET UNITYSDK_OFFSET(0xE3A9910)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_USEPERVERTEXEXTENT_OFFSET UNITYSDK_OFFSET(0xE3AA3D0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_USEPERVERTEXRADIUS_OFFSET UNITYSDK_OFFSET(0xE3A9E10)
#define RPG_CLIENT_UIPROCEDURALSHAPE_SET_USESOURCEPIXELSCALE_OFFSET UNITYSDK_OFFSET(0xE3ACAD0)
#define RPG_CLIENT_UIPROCEDURALSHAPE_UNITYENGINE_ICANVASRAYCASTFILTER_ISRAYCASTLOCATIONVALID_OFFSET UNITYSDK_OFFSET(0xE3B0E80)
#define RPG_CLIENT_UIPROCEDURALSHAPE_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0xE3B0D60)
#define RPG_CLIENT_UIPROCEDURALSHAPE__APPLYMATERIALPROPERTIES_G__E_290_0_OFFSET UNITYSDK_OFFSET(0xE3B0D10)
#define RPG_CLIENT_UIPROCEDURALSHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0xE3B15D0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIProceduralShape_TypeDefinitionIndex = 72630;

	class UIProceduralShape : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		static ::UnityEngine::Material** StaticGet_FEINDCDOBEN()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(UIProceduralShape_TypeDefinitionIndex)->GetStaticField(0x63D80);
		}
		// static const ::System::Single JDLFMBGKHHK; // 0x0
		// static const ::System::String* OJKDLHFPOEP; // 0x0
		::UnityEngine::Color m_FillColor; // 0xF0
		::RPG::Client::UIProceduralShapeType m_ShapeType; // 0x100
		::System::Single m_Radius; // 0x104
		::System::Boolean m_UsePerCornerRadius; // 0x108
		::System::Single m_RadiusTopLeft; // 0x10C
		::System::Single m_RadiusTopRight; // 0x110
		::System::Single m_RadiusBottomRight; // 0x114
		::System::Single m_RadiusBottomLeft; // 0x118
		::System::Int32 m_PolygonSides; // 0x11C
		::System::Single m_PolygonUniformity; // 0x120
		::System::Boolean m_UsePerVertexRadius; // 0x124
		::Il2CppArray<::System::Single>* m_PolyVertexRadii; // 0x128
		::UnityEngine::Vector2 m_PolygonOffset; // 0x130
		::System::Single m_Rotation; // 0x138
		::RPG::Client::UIProceduralShapeExtentMode m_ExtentMode; // 0x13C
		::System::Single m_ShapeRadiusX; // 0x140
		::System::Single m_ShapeRadiusY; // 0x144
		::System::Boolean m_UsePerVertexExtent; // 0x148
		::Il2CppArray<::System::Single>* m_PolyVertexExtents; // 0x150
		::System::Single m_StrokeWidth; // 0x158
		::UnityEngine::Color m_StrokeColor; // 0x15C
		::RPG::Client::UIProceduralShapeStrokeAlignment m_StrokeAlignment; // 0x16C
		::System::Single m_FalloffDistance; // 0x170
		::System::Boolean m_IndependentChannelAlpha; // 0x174
		::System::Boolean m_EnableOuterGlow; // 0x175
		::UnityEngine::Color m_GlowColor; // 0x178
		::System::Single m_GlowSize; // 0x188
		::System::Single m_GlowSpread; // 0x18C
		::System::Boolean m_EnableShadow; // 0x190
		::UnityEngine::Color m_ShadowColor; // 0x194
		::UnityEngine::Vector2 m_ShadowOffset; // 0x1A4
		::System::Single m_ShadowSize; // 0x1AC
		::System::Single m_ShadowSpread; // 0x1B0
		::RPG::Client::UIProceduralShapeShadowBlend m_ShadowBlend; // 0x1B4
		::RPG::Client::UIProceduralShapeGradientMode m_GradientMode; // 0x1B8
		::System::Single m_GradientAngle; // 0x1BC
		::UnityEngine::Color m_GradientColorA; // 0x1C0
		::UnityEngine::Color m_GradientColorB; // 0x1D0
		::UnityEngine::Color m_GradientColorC; // 0x1E0
		::UnityEngine::Color m_GradientColorD; // 0x1F0
		::UnityEngine::Sprite* m_Sprite; // 0x200
		::RPG::Client::UIProceduralShapeImageType m_ImageType; // 0x208
		::System::Single m_PixelsPerUnitMultiplier; // 0x20C
		::RPG::Client::UIProceduralShapeFillMethod m_FillMethod; // 0x210
		::System::Single m_FillAmount; // 0x214
		::System::Int32 m_FillOrigin; // 0x218
		::System::Boolean m_FillClockwise; // 0x21C
		::System::Boolean m_EnableInnerShadow; // 0x21D
		::UnityEngine::Color m_InnerShadowColor; // 0x220
		::UnityEngine::Vector2 m_InnerShadowOffset; // 0x230
		::System::Single m_InnerShadowSize; // 0x238
		::System::Single m_InnerShadowSpread; // 0x23C
		::System::Boolean m_EnableInnerGlow; // 0x240
		::System::Single m_ArcStart; // 0x244
		::System::Single m_ArcEnd; // 0x248
		::System::Boolean m_UseArcProgress; // 0x24C
		::System::Single m_ArcProgress; // 0x250
		::System::Boolean m_ArcClockwise; // 0x254
		::System::Single m_ArcThickness; // 0x258
		::System::Boolean m_ArcRoundCaps; // 0x25C
		::UnityEngine::Vector4 m_RaycastPadding; // 0x260
		::System::Boolean m_PreserveAspect; // 0x270
		::System::Boolean m_UseSourcePixelScale; // 0x271
		::UnityEngine::Material* HLJMOKHGNIK; // 0x278

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color get_fillColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_FILLCOLOR_OFFSET))(this);
		}

		::System::Void set_fillColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_FILLCOLOR_OFFSET))(this, a1);
		}

		::RPG::Client::UIProceduralShapeType get_shapeType()
		{
			return ((::RPG::Client::UIProceduralShapeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_SHAPETYPE_OFFSET))(this);
		}

		::System::Void set_shapeType(::RPG::Client::UIProceduralShapeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIProceduralShapeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_SHAPETYPE_OFFSET))(this, a1);
		}

		::System::Single get_radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_RADIUS_OFFSET))(this);
		}

		::System::Void set_radius(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_RADIUS_OFFSET))(this, a1);
		}

		::System::Boolean get_usePerCornerRadius()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_USEPERCORNERRADIUS_OFFSET))(this);
		}

		::System::Void set_usePerCornerRadius(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_USEPERCORNERRADIUS_OFFSET))(this, a1);
		}

		::System::Single get_radiusTopLeft()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_RADIUSTOPLEFT_OFFSET))(this);
		}

		::System::Void set_radiusTopLeft(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_RADIUSTOPLEFT_OFFSET))(this, a1);
		}

		::System::Single get_radiusTopRight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_RADIUSTOPRIGHT_OFFSET))(this);
		}

		::System::Void set_radiusTopRight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_RADIUSTOPRIGHT_OFFSET))(this, a1);
		}

		::System::Single get_radiusBottomRight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_RADIUSBOTTOMRIGHT_OFFSET))(this);
		}

		::System::Void set_radiusBottomRight(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_RADIUSBOTTOMRIGHT_OFFSET))(this, a1);
		}

		::System::Single get_radiusBottomLeft()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_RADIUSBOTTOMLEFT_OFFSET))(this);
		}

		::System::Void set_radiusBottomLeft(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_RADIUSBOTTOMLEFT_OFFSET))(this, a1);
		}

		::System::Int32 get_polygonSides()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_POLYGONSIDES_OFFSET))(this);
		}

		::System::Void set_polygonSides(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_POLYGONSIDES_OFFSET))(this, a1);
		}

		::System::Single get_polygonUniformity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_POLYGONUNIFORMITY_OFFSET))(this);
		}

		::System::Void set_polygonUniformity(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_POLYGONUNIFORMITY_OFFSET))(this, a1);
		}

		::System::Boolean get_usePerVertexRadius()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_USEPERVERTEXRADIUS_OFFSET))(this);
		}

		::System::Void set_usePerVertexRadius(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_USEPERVERTEXRADIUS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Single>* get_polyVertexRadii()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_POLYVERTEXRADII_OFFSET))(this);
		}

		::System::Void SetPolyVertexRadius(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SETPOLYVERTEXRADIUS_OFFSET))(this, a1, a2);
		}

		::System::Single GetPolyVertexRadius(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GETPOLYVERTEXRADIUS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_polygonOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_POLYGONOFFSET_OFFSET))(this);
		}

		::System::Void set_polygonOffset(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_POLYGONOFFSET_OFFSET))(this, a1);
		}

		::System::Single get_rotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_rotation(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_ROTATION_OFFSET))(this, a1);
		}

		::RPG::Client::UIProceduralShapeExtentMode get_extentMode()
		{
			return ((::RPG::Client::UIProceduralShapeExtentMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_EXTENTMODE_OFFSET))(this);
		}

		::System::Void set_extentMode(::RPG::Client::UIProceduralShapeExtentMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIProceduralShapeExtentMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_EXTENTMODE_OFFSET))(this, a1);
		}

		::System::Single get_shapeRadiusX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_SHAPERADIUSX_OFFSET))(this);
		}

		::System::Void set_shapeRadiusX(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_SHAPERADIUSX_OFFSET))(this, a1);
		}

		::System::Single get_shapeRadiusY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_SHAPERADIUSY_OFFSET))(this);
		}

		::System::Void set_shapeRadiusY(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_SHAPERADIUSY_OFFSET))(this, a1);
		}

		::System::Boolean get_usePerVertexExtent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_USEPERVERTEXEXTENT_OFFSET))(this);
		}

		::System::Void set_usePerVertexExtent(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_USEPERVERTEXEXTENT_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Single>* get_polyVertexExtents()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_POLYVERTEXEXTENTS_OFFSET))(this);
		}

		::System::Void SetPolyVertexExtent(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SETPOLYVERTEXEXTENT_OFFSET))(this, a1, a2);
		}

		::System::Single GetPolyVertexExtent(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GETPOLYVERTEXEXTENT_OFFSET))(this, a1);
		}

		::System::Single get_strokeWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_STROKEWIDTH_OFFSET))(this);
		}

		::System::Void set_strokeWidth(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_STROKEWIDTH_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_strokeColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_STROKECOLOR_OFFSET))(this);
		}

		::System::Void set_strokeColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_STROKECOLOR_OFFSET))(this, a1);
		}

		::RPG::Client::UIProceduralShapeStrokeAlignment get_strokeAlignment()
		{
			return ((::RPG::Client::UIProceduralShapeStrokeAlignment(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_STROKEALIGNMENT_OFFSET))(this);
		}

		::System::Void set_strokeAlignment(::RPG::Client::UIProceduralShapeStrokeAlignment a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIProceduralShapeStrokeAlignment))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_STROKEALIGNMENT_OFFSET))(this, a1);
		}

		::System::Single get_falloffDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_FALLOFFDISTANCE_OFFSET))(this);
		}

		::System::Void set_falloffDistance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_FALLOFFDISTANCE_OFFSET))(this, a1);
		}

		::System::Boolean get_independentChannelAlpha()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_INDEPENDENTCHANNELALPHA_OFFSET))(this);
		}

		::System::Void set_independentChannelAlpha(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_INDEPENDENTCHANNELALPHA_OFFSET))(this, a1);
		}

		::System::Boolean get_enableOuterGlow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_ENABLEOUTERGLOW_OFFSET))(this);
		}

		::System::Void set_enableOuterGlow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_ENABLEOUTERGLOW_OFFSET))(this, a1);
		}

		::System::Boolean get_enableGlow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_ENABLEGLOW_OFFSET))(this);
		}

		::System::Void set_enableGlow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_ENABLEGLOW_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_glowColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_GLOWCOLOR_OFFSET))(this);
		}

		::System::Void set_glowColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_GLOWCOLOR_OFFSET))(this, a1);
		}

		::System::Single get_glowSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_GLOWSIZE_OFFSET))(this);
		}

		::System::Void set_glowSize(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_GLOWSIZE_OFFSET))(this, a1);
		}

		::System::Single get_glowSpread()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_GLOWSPREAD_OFFSET))(this);
		}

		::System::Void set_glowSpread(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_GLOWSPREAD_OFFSET))(this, a1);
		}

		::System::Boolean get_enableShadow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_ENABLESHADOW_OFFSET))(this);
		}

		::System::Void set_enableShadow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_ENABLESHADOW_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_shadowColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_SHADOWCOLOR_OFFSET))(this);
		}

		::System::Void set_shadowColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_SHADOWCOLOR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_shadowOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_SHADOWOFFSET_OFFSET))(this);
		}

		::System::Void set_shadowOffset(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_SHADOWOFFSET_OFFSET))(this, a1);
		}

		::System::Single get_shadowSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_SHADOWSIZE_OFFSET))(this);
		}

		::System::Void set_shadowSize(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_SHADOWSIZE_OFFSET))(this, a1);
		}

		::System::Single get_shadowSpread()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_SHADOWSPREAD_OFFSET))(this);
		}

		::System::Void set_shadowSpread(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_SHADOWSPREAD_OFFSET))(this, a1);
		}

		::RPG::Client::UIProceduralShapeShadowBlend get_shadowBlend()
		{
			return ((::RPG::Client::UIProceduralShapeShadowBlend(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_SHADOWBLEND_OFFSET))(this);
		}

		::System::Void set_shadowBlend(::RPG::Client::UIProceduralShapeShadowBlend a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIProceduralShapeShadowBlend))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_SHADOWBLEND_OFFSET))(this, a1);
		}

		::RPG::Client::UIProceduralShapeGradientMode get_gradientMode()
		{
			return ((::RPG::Client::UIProceduralShapeGradientMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_GRADIENTMODE_OFFSET))(this);
		}

		::System::Void set_gradientMode(::RPG::Client::UIProceduralShapeGradientMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIProceduralShapeGradientMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_GRADIENTMODE_OFFSET))(this, a1);
		}

		::System::Single get_gradientAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_GRADIENTANGLE_OFFSET))(this);
		}

		::System::Void set_gradientAngle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_GRADIENTANGLE_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_gradientColorA()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_GRADIENTCOLORA_OFFSET))(this);
		}

		::System::Void set_gradientColorA(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_GRADIENTCOLORA_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_gradientColorB()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_GRADIENTCOLORB_OFFSET))(this);
		}

		::System::Void set_gradientColorB(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_GRADIENTCOLORB_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_gradientColorC()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_GRADIENTCOLORC_OFFSET))(this);
		}

		::System::Void set_gradientColorC(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_GRADIENTCOLORC_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_gradientColorD()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_GRADIENTCOLORD_OFFSET))(this);
		}

		::System::Void set_gradientColorD(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_GRADIENTCOLORD_OFFSET))(this, a1);
		}

		::UnityEngine::Sprite* get_sprite()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_SPRITE_OFFSET))(this);
		}

		::System::Void set_sprite(::UnityEngine::Sprite* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_SPRITE_OFFSET))(this, a1);
		}

		::RPG::Client::UIProceduralShapeImageType get_imageType()
		{
			return ((::RPG::Client::UIProceduralShapeImageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_IMAGETYPE_OFFSET))(this);
		}

		::System::Void set_imageType(::RPG::Client::UIProceduralShapeImageType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIProceduralShapeImageType))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_IMAGETYPE_OFFSET))(this, a1);
		}

		::System::Single get_pixelsPerUnitMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_PIXELSPERUNITMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_pixelsPerUnitMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_PIXELSPERUNITMULTIPLIER_OFFSET))(this, a1);
		}

		::RPG::Client::UIProceduralShapeFillMethod get_fillMethod()
		{
			return ((::RPG::Client::UIProceduralShapeFillMethod(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_FILLMETHOD_OFFSET))(this);
		}

		::System::Void set_fillMethod(::RPG::Client::UIProceduralShapeFillMethod a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIProceduralShapeFillMethod))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_FILLMETHOD_OFFSET))(this, a1);
		}

		::System::Single get_fillAmount()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_FILLAMOUNT_OFFSET))(this);
		}

		::System::Void set_fillAmount(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_FILLAMOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_fillOrigin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_FILLORIGIN_OFFSET))(this);
		}

		::System::Void set_fillOrigin(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_FILLORIGIN_OFFSET))(this, a1);
		}

		::System::Boolean get_fillClockwise()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_FILLCLOCKWISE_OFFSET))(this);
		}

		::System::Void set_fillClockwise(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_FILLCLOCKWISE_OFFSET))(this, a1);
		}

		::System::Boolean get_enableInnerShadow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_ENABLEINNERSHADOW_OFFSET))(this);
		}

		::System::Void set_enableInnerShadow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_ENABLEINNERSHADOW_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_innerShadowColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_INNERSHADOWCOLOR_OFFSET))(this);
		}

		::System::Void set_innerShadowColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_INNERSHADOWCOLOR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_innerShadowOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_INNERSHADOWOFFSET_OFFSET))(this);
		}

		::System::Void set_innerShadowOffset(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_INNERSHADOWOFFSET_OFFSET))(this, a1);
		}

		::System::Single get_innerShadowSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_INNERSHADOWSIZE_OFFSET))(this);
		}

		::System::Void set_innerShadowSize(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_INNERSHADOWSIZE_OFFSET))(this, a1);
		}

		::System::Single get_innerShadowSpread()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_INNERSHADOWSPREAD_OFFSET))(this);
		}

		::System::Void set_innerShadowSpread(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_INNERSHADOWSPREAD_OFFSET))(this, a1);
		}

		::System::Boolean get_enableInnerGlow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_ENABLEINNERGLOW_OFFSET))(this);
		}

		::System::Void set_enableInnerGlow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_ENABLEINNERGLOW_OFFSET))(this, a1);
		}

		::System::Single get_arcStart()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_ARCSTART_OFFSET))(this);
		}

		::System::Void set_arcStart(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_ARCSTART_OFFSET))(this, a1);
		}

		::System::Single get_arcEnd()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_ARCEND_OFFSET))(this);
		}

		::System::Void set_arcEnd(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_ARCEND_OFFSET))(this, a1);
		}

		::System::Boolean get_useArcProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_USEARCPROGRESS_OFFSET))(this);
		}

		::System::Void set_useArcProgress(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_USEARCPROGRESS_OFFSET))(this, a1);
		}

		::System::Single get_arcProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_ARCPROGRESS_OFFSET))(this);
		}

		::System::Void set_arcProgress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_ARCPROGRESS_OFFSET))(this, a1);
		}

		::System::Boolean get_arcClockwise()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_ARCCLOCKWISE_OFFSET))(this);
		}

		::System::Void set_arcClockwise(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_ARCCLOCKWISE_OFFSET))(this, a1);
		}

		::System::Single get_arcThickness()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_ARCTHICKNESS_OFFSET))(this);
		}

		::System::Void set_arcThickness(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_ARCTHICKNESS_OFFSET))(this, a1);
		}

		::System::Boolean get_arcRoundCaps()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_ARCROUNDCAPS_OFFSET))(this);
		}

		::System::Void set_arcRoundCaps(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_ARCROUNDCAPS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 get_raycastPadding()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_RAYCASTPADDING_OFFSET))(this);
		}

		::System::Void set_raycastPadding(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_RAYCASTPADDING_OFFSET))(this, a1);
		}

		::System::Boolean get_preserveAspect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_PRESERVEASPECT_OFFSET))(this);
		}

		::System::Void set_preserveAspect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_PRESERVEASPECT_OFFSET))(this, a1);
		}

		::System::Boolean get_useSourcePixelScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_USESOURCEPIXELSCALE_OFFSET))(this);
		}

		::System::Void set_useSourcePixelScale(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_USESOURCEPIXELSCALE_OFFSET))(this, a1);
		}

		::System::Boolean get_radiusInSourcePixels()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_RADIUSINSOURCEPIXELS_OFFSET))(this);
		}

		::System::Void set_radiusInSourcePixels(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SET_RADIUSINSOURCEPIXELS_OFFSET))(this, a1);
		}

		::System::Single get_radiusSourceScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_RADIUSSOURCESCALE_OFFSET))(this);
		}

		::UnityEngine::Vector4 Method_8_B1508D96B5FD5094()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_METHOD_8_B1508D96B5FD5094_OFFSET))(this);
		}

		::System::Single Method_8_861970C5F2C21AB2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_METHOD_8_861970C5F2C21AB2_OFFSET))(this);
		}

		::System::Single Method_8_A36150C5DCC8409E()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_METHOD_8_A36150C5DCC8409E_OFFSET))(this);
		}

		::System::Void SetNativeSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_SETNATIVESIZE_OFFSET))(this);
		}

		::System::Void CalculatePolygonMetrics(::UnityEngine::Rect a1, ::System::Single& a2, ::UnityEngine::Vector2& a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Single&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_CALCULATEPOLYGONMETRICS_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector2 Method_8_73321D22C595F259(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_METHOD_8_73321D22C595F259_OFFSET))(this, a1);
		}

		::System::Void Method_8_10E6005C55578E4A(::System::Single& a1, ::System::Single& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_METHOD_8_10E6005C55578E4A_OFFSET))(this, a1, a2);
		}

		static ::System::Single Method_8_68D158D7FBF6D878(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_METHOD_8_68D158D7FBF6D878_OFFSET))(a1, a2, a3);
		}

		::UnityEngine::Vector2 Method_8_2D0BCE0D36736E0C(::System::Single a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_METHOD_8_2D0BCE0D36736E0C_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_8_3A6CA94423A5B9DB(::UnityEngine::Vector2 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_METHOD_8_3A6CA94423A5B9DB_OFFSET))(this, a1, a2, a3);
		}

		::System::Single Method_8_68A2CA32DC720C44()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_METHOD_8_68A2CA32DC720C44_OFFSET))(this);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_GET_MAINTEXTURE_OFFSET))(this);
		}

		static ::System::Void Method_8_163DC9A61F1D3AF0()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_METHOD_8_163DC9A61F1D3AF0_OFFSET))();
		}

		::System::Void Method_8_B2C52ACF9D9B435B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_METHOD_8_B2C52ACF9D9B435B_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void Method_8_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_METHOD_8_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		static ::System::Void Method_8_006F4D5C221D8114(::UnityEngine::Material* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_METHOD_8_006F4D5C221D8114_OFFSET))(a1, a2, a3);
		}

		::System::Void Method_8_DF892EE47C651B9A(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_METHOD_8_DF892EE47C651B9A_OFFSET))(this, a1);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_ONPOPULATEMESH_OFFSET))(this, a1);
		}

		::System::Void Method_8_00033B651FB9F53D(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_METHOD_8_00033B651FB9F53D_OFFSET))(this, a1);
		}

		::System::Void UpdateMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_UPDATEMATERIAL_OFFSET))(this);
		}

		::System::Boolean UnityEngine_ICanvasRaycastFilter_IsRaycastLocationValid(::UnityEngine::Vector2 a1, ::UnityEngine::Camera* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE_UNITYENGINE_ICANVASRAYCASTFILTER_ISRAYCASTLOCATIONVALID_OFFSET))(this, a1, a2);
		}

		static ::System::Single _ApplyMaterialProperties_g__E_290_0(::System::Int32 a1, ::RPG::Client::UIProceduralShape___c__DisplayClass290_0& a2)
		{
			return ((::System::Single(*)(::System::Int32, ::RPG::Client::UIProceduralShape___c__DisplayClass290_0&))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROCEDURALSHAPE__APPLYMATERIALPROPERTIES_G__E_290_0_OFFSET))(a1, a2);
		}
	};
}

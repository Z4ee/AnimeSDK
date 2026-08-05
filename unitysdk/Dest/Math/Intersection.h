#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/AAB2.h"
#include "unitysdk/Dest/Math/AAB3.h"
#include "unitysdk/Dest/Math/Box2.h"
#include "unitysdk/Dest/Math/Box3.h"
#include "unitysdk/Dest/Math/Capsule3.h"
#include "unitysdk/Dest/Math/Circle2.h"
#include "unitysdk/Dest/Math/Circle2Circle2Intr.h"
#include "unitysdk/Dest/Math/Circle3.h"
#include "unitysdk/Dest/Math/IntersectionTypes.h"
#include "unitysdk/Dest/Math/Line2.h"
#include "unitysdk/Dest/Math/Line2AAB2Intr.h"
#include "unitysdk/Dest/Math/Line2Box2Intr.h"
#include "unitysdk/Dest/Math/Line2Circle2Intr.h"
#include "unitysdk/Dest/Math/Line2ConvexPolygon2Intr.h"
#include "unitysdk/Dest/Math/Line2Line2Intr.h"
#include "unitysdk/Dest/Math/Line2Ray2Intr.h"
#include "unitysdk/Dest/Math/Line2Segment2Intr.h"
#include "unitysdk/Dest/Math/Line2Triangle2Intr.h"
#include "unitysdk/Dest/Math/Line3.h"
#include "unitysdk/Dest/Math/Line3AAB3Intr.h"
#include "unitysdk/Dest/Math/Line3Box3Intr.h"
#include "unitysdk/Dest/Math/Line3Circle3Intr.h"
#include "unitysdk/Dest/Math/Line3Plane3Intr.h"
#include "unitysdk/Dest/Math/Line3Polygon3Intr.h"
#include "unitysdk/Dest/Math/Line3Rectangle3Intr.h"
#include "unitysdk/Dest/Math/Line3Sphere3Intr.h"
#include "unitysdk/Dest/Math/Line3Triangle3Intr.h"
#include "unitysdk/Dest/Math/Plane3.h"
#include "unitysdk/Dest/Math/Plane3Plane3Intr.h"
#include "unitysdk/Dest/Math/Plane3Sphere3Intr.h"
#include "unitysdk/Dest/Math/Plane3Triangle3Intr.h"
#include "unitysdk/Dest/Math/Ray2.h"
#include "unitysdk/Dest/Math/Ray2AAB2Intr.h"
#include "unitysdk/Dest/Math/Ray2Box2Intr.h"
#include "unitysdk/Dest/Math/Ray2Circle2Intr.h"
#include "unitysdk/Dest/Math/Ray2ConvexPolygon2Intr.h"
#include "unitysdk/Dest/Math/Ray2Polygon2Intr.h"
#include "unitysdk/Dest/Math/Ray2Ray2Intr.h"
#include "unitysdk/Dest/Math/Ray2Segment2Intr.h"
#include "unitysdk/Dest/Math/Ray2Triangle2Intr.h"
#include "unitysdk/Dest/Math/Ray3.h"
#include "unitysdk/Dest/Math/Ray3AAB3Intr.h"
#include "unitysdk/Dest/Math/Ray3Box3Intr.h"
#include "unitysdk/Dest/Math/Ray3Circle3Intr.h"
#include "unitysdk/Dest/Math/Ray3Plane3Intr.h"
#include "unitysdk/Dest/Math/Ray3Polygon3Intr.h"
#include "unitysdk/Dest/Math/Ray3Rectangle3Intr.h"
#include "unitysdk/Dest/Math/Ray3Sphere3Intr.h"
#include "unitysdk/Dest/Math/Ray3Triangle3Intr.h"
#include "unitysdk/Dest/Math/Rectangle3.h"
#include "unitysdk/Dest/Math/Segment2.h"
#include "unitysdk/Dest/Math/Segment2AAB2Intr.h"
#include "unitysdk/Dest/Math/Segment2Box2Intr.h"
#include "unitysdk/Dest/Math/Segment2Circle2Intr.h"
#include "unitysdk/Dest/Math/Segment2ConvexPolygon2Intr.h"
#include "unitysdk/Dest/Math/Segment2Segment2Intr.h"
#include "unitysdk/Dest/Math/Segment2Triangle2Intr.h"
#include "unitysdk/Dest/Math/Segment3.h"
#include "unitysdk/Dest/Math/Segment3AAB3Intr.h"
#include "unitysdk/Dest/Math/Segment3Box3Intr.h"
#include "unitysdk/Dest/Math/Segment3Circle3Intr.h"
#include "unitysdk/Dest/Math/Segment3Plane3Intr.h"
#include "unitysdk/Dest/Math/Segment3Polygon3Intr.h"
#include "unitysdk/Dest/Math/Segment3Rectangle3Intr.h"
#include "unitysdk/Dest/Math/Segment3Sphere3Intr.h"
#include "unitysdk/Dest/Math/Segment3Triangle3Intr.h"
#include "unitysdk/Dest/Math/Sphere3.h"
#include "unitysdk/Dest/Math/Sphere3Sphere3Intr.h"
#include "unitysdk/Dest/Math/Triangle2.h"
#include "unitysdk/Dest/Math/Triangle2Triangle2Intr.h"
#include "unitysdk/Dest/Math/Triangle3.h"
#include "unitysdk/Dest/Math/Triangle3Triangle3Intr.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Dest::Math { class Polygon2; }
namespace Dest::Math { class Polygon3; }

#define DEST_MATH_INTERSECTION_CLASSIFY_1_OFFSET UNITYSDK_OFFSET(0x1E1FEA30)
#define DEST_MATH_INTERSECTION_CLASSIFY_2_OFFSET UNITYSDK_OFFSET(0x1E1FF010)
#define DEST_MATH_INTERSECTION_CLASSIFY_3_OFFSET UNITYSDK_OFFSET(0x1E201C70)
#define DEST_MATH_INTERSECTION_CLASSIFY_4_OFFSET UNITYSDK_OFFSET(0x1E202320)
#define DEST_MATH_INTERSECTION_CLASSIFY_5_OFFSET UNITYSDK_OFFSET(0x1E203BA0)
#define DEST_MATH_INTERSECTION_CLASSIFY_OFFSET UNITYSDK_OFFSET(0x1E1FE610)
#define DEST_MATH_INTERSECTION_CLIPCONVEXPOLYGONAGAINSTLINE_OFFSET UNITYSDK_OFFSET(0x1E204E90)
#define DEST_MATH_INTERSECTION_CLIP_OFFSET UNITYSDK_OFFSET(0x1E1FD050)
#define DEST_MATH_INTERSECTION_CONTAINSPOINT_OFFSET UNITYSDK_OFFSET(0x1E213A80)
#define DEST_MATH_INTERSECTION_DOCLIPPING_1_OFFSET UNITYSDK_OFFSET(0x1E1FD300)
#define DEST_MATH_INTERSECTION_DOCLIPPING_2_OFFSET UNITYSDK_OFFSET(0x1E207CC0)
#define DEST_MATH_INTERSECTION_DOCLIPPING_3_OFFSET UNITYSDK_OFFSET(0x1E208720)
#define DEST_MATH_INTERSECTION_DOCLIPPING_OFFSET UNITYSDK_OFFSET(0x1E1FCB00)
#define DEST_MATH_INTERSECTION_FINDAAB2AAB2_OFFSET UNITYSDK_OFFSET(0x1E1FBE20)
#define DEST_MATH_INTERSECTION_FINDAAB3AAB3_OFFSET UNITYSDK_OFFSET(0x1E206990)
#define DEST_MATH_INTERSECTION_FINDCIRCLE2CIRCLE2_OFFSET UNITYSDK_OFFSET(0x1E1FC430)
#define DEST_MATH_INTERSECTION_FINDLINE2AAB2_OFFSET UNITYSDK_OFFSET(0x1E1FD260)
#define DEST_MATH_INTERSECTION_FINDLINE2BOX2_OFFSET UNITYSDK_OFFSET(0x1E1FD9D0)
#define DEST_MATH_INTERSECTION_FINDLINE2CIRCLE2_OFFSET UNITYSDK_OFFSET(0x1E1FDC70)
#define DEST_MATH_INTERSECTION_FINDLINE2CONVEXPOLYGON2_OFFSET UNITYSDK_OFFSET(0x1E1FE270)
#define DEST_MATH_INTERSECTION_FINDLINE2LINE2_OFFSET UNITYSDK_OFFSET(0x1E1FE950)
#define DEST_MATH_INTERSECTION_FINDLINE2RAY2_OFFSET UNITYSDK_OFFSET(0x1E1FEEB0)
#define DEST_MATH_INTERSECTION_FINDLINE2SEGMENT2_OFFSET UNITYSDK_OFFSET(0x1E1FF310)
#define DEST_MATH_INTERSECTION_FINDLINE2TRIANGLE2_OFFSET UNITYSDK_OFFSET(0x1E1FFE90)
#define DEST_MATH_INTERSECTION_FINDLINE3AAB3_OFFSET UNITYSDK_OFFSET(0x1E208680)
#define DEST_MATH_INTERSECTION_FINDLINE3BOX3_OFFSET UNITYSDK_OFFSET(0x1E209260)
#define DEST_MATH_INTERSECTION_FINDLINE3CIRCLE3_OFFSET UNITYSDK_OFFSET(0x1E209370)
#define DEST_MATH_INTERSECTION_FINDLINE3PLANE3_OFFSET UNITYSDK_OFFSET(0x1E2097D0)
#define DEST_MATH_INTERSECTION_FINDLINE3POLYGON3_OFFSET UNITYSDK_OFFSET(0x1E209AC0)
#define DEST_MATH_INTERSECTION_FINDLINE3RECTANGLE3_OFFSET UNITYSDK_OFFSET(0x1E209FC0)
#define DEST_MATH_INTERSECTION_FINDLINE3SPHERE3_OFFSET UNITYSDK_OFFSET(0x1E20A3F0)
#define DEST_MATH_INTERSECTION_FINDLINE3TRIANGLE3_1_OFFSET UNITYSDK_OFFSET(0x1E20B320)
#define DEST_MATH_INTERSECTION_FINDLINE3TRIANGLE3_2_OFFSET UNITYSDK_OFFSET(0x1E20B410)
#define DEST_MATH_INTERSECTION_FINDLINE3TRIANGLE3_OFFSET UNITYSDK_OFFSET(0x1E20AE00)
#define DEST_MATH_INTERSECTION_FINDPLANE3PLANE3_OFFSET UNITYSDK_OFFSET(0x1E20BA90)
#define DEST_MATH_INTERSECTION_FINDPLANE3SPHERE3_OFFSET UNITYSDK_OFFSET(0x1E20BF60)
#define DEST_MATH_INTERSECTION_FINDPLANE3TRIANGLE3_OFFSET UNITYSDK_OFFSET(0x1E20C610)
#define DEST_MATH_INTERSECTION_FINDRAY2AAB2_OFFSET UNITYSDK_OFFSET(0x1E200370)
#define DEST_MATH_INTERSECTION_FINDRAY2BOX2_OFFSET UNITYSDK_OFFSET(0x1E200670)
#define DEST_MATH_INTERSECTION_FINDRAY2CIRCLE2_OFFSET UNITYSDK_OFFSET(0x1E200780)
#define DEST_MATH_INTERSECTION_FINDRAY2CONVEXPOLYGON2_OFFSET UNITYSDK_OFFSET(0x1E200CD0)
#define DEST_MATH_INTERSECTION_FINDRAY2POLYGON2_1_OFFSET UNITYSDK_OFFSET(0x1E201AA0)
#define DEST_MATH_INTERSECTION_FINDRAY2POLYGON2_OFFSET UNITYSDK_OFFSET(0x1E2013F0)
#define DEST_MATH_INTERSECTION_FINDRAY2RAY2_OFFSET UNITYSDK_OFFSET(0x1E202110)
#define DEST_MATH_INTERSECTION_FINDRAY2SEGMENT2_OFFSET UNITYSDK_OFFSET(0x1E2017A0)
#define DEST_MATH_INTERSECTION_FINDRAY2TRIANGLE2_OFFSET UNITYSDK_OFFSET(0x1E202BA0)
#define DEST_MATH_INTERSECTION_FINDRAY3AAB3_OFFSET UNITYSDK_OFFSET(0x1E20D170)
#define DEST_MATH_INTERSECTION_FINDRAY3BOX3_OFFSET UNITYSDK_OFFSET(0x1E20D6B0)
#define DEST_MATH_INTERSECTION_FINDRAY3CIRCLE3_OFFSET UNITYSDK_OFFSET(0x1E20D7C0)
#define DEST_MATH_INTERSECTION_FINDRAY3PLANE3_OFFSET UNITYSDK_OFFSET(0x1E20DAB0)
#define DEST_MATH_INTERSECTION_FINDRAY3POLYGON3_OFFSET UNITYSDK_OFFSET(0x1E20DE80)
#define DEST_MATH_INTERSECTION_FINDRAY3RECTANGLE3_OFFSET UNITYSDK_OFFSET(0x1E20E240)
#define DEST_MATH_INTERSECTION_FINDRAY3SPHERE3_OFFSET UNITYSDK_OFFSET(0x1E20E6C0)
#define DEST_MATH_INTERSECTION_FINDRAY3TRIANGLE3_1_OFFSET UNITYSDK_OFFSET(0x1E20F830)
#define DEST_MATH_INTERSECTION_FINDRAY3TRIANGLE3_2_OFFSET UNITYSDK_OFFSET(0x1E20F920)
#define DEST_MATH_INTERSECTION_FINDRAY3TRIANGLE3_OFFSET UNITYSDK_OFFSET(0x1E20F290)
#define DEST_MATH_INTERSECTION_FINDSEGMENT1SEGMENT1_OFFSET UNITYSDK_OFFSET(0x1E1FFD00)
#define DEST_MATH_INTERSECTION_FINDSEGMENT2AAB2_OFFSET UNITYSDK_OFFSET(0x1E203090)
#define DEST_MATH_INTERSECTION_FINDSEGMENT2BOX2_OFFSET UNITYSDK_OFFSET(0x1E203370)
#define DEST_MATH_INTERSECTION_FINDSEGMENT2CIRCLE2_OFFSET UNITYSDK_OFFSET(0x1E2034D0)
#define DEST_MATH_INTERSECTION_FINDSEGMENT2CONVEXPOLYGON2_OFFSET UNITYSDK_OFFSET(0x1E203820)
#define DEST_MATH_INTERSECTION_FINDSEGMENT2SEGMENT2_OFFSET UNITYSDK_OFFSET(0x1E204130)
#define DEST_MATH_INTERSECTION_FINDSEGMENT2TRIANGLE2_OFFSET UNITYSDK_OFFSET(0x1E204870)
#define DEST_MATH_INTERSECTION_FINDSEGMENT3AAB3_OFFSET UNITYSDK_OFFSET(0x1E20FC90)
#define DEST_MATH_INTERSECTION_FINDSEGMENT3BOX3_OFFSET UNITYSDK_OFFSET(0x1E210190)
#define DEST_MATH_INTERSECTION_FINDSEGMENT3CIRCLE3_OFFSET UNITYSDK_OFFSET(0x1E2102C0)
#define DEST_MATH_INTERSECTION_FINDSEGMENT3PLANE3_OFFSET UNITYSDK_OFFSET(0x1E2107F0)
#define DEST_MATH_INTERSECTION_FINDSEGMENT3POLYGON3_OFFSET UNITYSDK_OFFSET(0x1E210B70)
#define DEST_MATH_INTERSECTION_FINDSEGMENT3RECTANGLE3_OFFSET UNITYSDK_OFFSET(0x1E210F40)
#define DEST_MATH_INTERSECTION_FINDSEGMENT3SPHERE3_OFFSET UNITYSDK_OFFSET(0x1E2113B0)
#define DEST_MATH_INTERSECTION_FINDSEGMENT3TRIANGLE3_1_OFFSET UNITYSDK_OFFSET(0x1E212510)
#define DEST_MATH_INTERSECTION_FINDSEGMENT3TRIANGLE3_2_OFFSET UNITYSDK_OFFSET(0x1E212600)
#define DEST_MATH_INTERSECTION_FINDSEGMENT3TRIANGLE3_OFFSET UNITYSDK_OFFSET(0x1E211FA0)
#define DEST_MATH_INTERSECTION_FINDSPHERE3SPHERE3_OFFSET UNITYSDK_OFFSET(0x1E212740)
#define DEST_MATH_INTERSECTION_FINDTRIANGLE2TRIANGLE2_OFFSET UNITYSDK_OFFSET(0x1E2067F0)
#define DEST_MATH_INTERSECTION_FINDTRIANGLE3TRIANGLE3_OFFSET UNITYSDK_OFFSET(0x1E216A00)
#define DEST_MATH_INTERSECTION_FIND_OFFSET UNITYSDK_OFFSET(0x1E1FDA70)
#define DEST_MATH_INTERSECTION_GETCOPLANARINTERSECTION_OFFSET UNITYSDK_OFFSET(0x1E213EE0)
#define DEST_MATH_INTERSECTION_GETINTERVAL_OFFSET UNITYSDK_OFFSET(0x1E1FF6A0)
#define DEST_MATH_INTERSECTION_GET_DISTANCETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1E217820)
#define DEST_MATH_INTERSECTION_GET_DOTTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1E217730)
#define DEST_MATH_INTERSECTION_GET_INTERVALTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1E217640)
#define DEST_MATH_INTERSECTION_INTERSECTSSEGMENT_OFFSET UNITYSDK_OFFSET(0x1E213280)
#define DEST_MATH_INTERSECTION_POINT3INSIDERECTANGLE3_OFFSET UNITYSDK_OFFSET(0x1E209E40)
#define DEST_MATH_INTERSECTION_PROJECTONTOAXIS_OFFSET UNITYSDK_OFFSET(0x1E212BE0)
#define DEST_MATH_INTERSECTION_QUERYTOLINE_OFFSET UNITYSDK_OFFSET(0x1E213890)
#define DEST_MATH_INTERSECTION_QUERYTOTRIANGLE_OFFSET UNITYSDK_OFFSET(0x1E2138E0)
#define DEST_MATH_INTERSECTION_SET_DISTANCETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1E217880)
#define DEST_MATH_INTERSECTION_SET_DOTTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1E217790)
#define DEST_MATH_INTERSECTION_SET_INTERVALTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1E2176A0)
#define DEST_MATH_INTERSECTION_TESTAAB2AAB2OVERLAPX_OFFSET UNITYSDK_OFFSET(0x1E1FBEC0)
#define DEST_MATH_INTERSECTION_TESTAAB2AAB2OVERLAPY_OFFSET UNITYSDK_OFFSET(0x1E1FBEE0)
#define DEST_MATH_INTERSECTION_TESTAAB2AAB2_OFFSET UNITYSDK_OFFSET(0x1E1FBDE0)
#define DEST_MATH_INTERSECTION_TESTAAB2CIRCLE2_OFFSET UNITYSDK_OFFSET(0x1E1FBF00)
#define DEST_MATH_INTERSECTION_TESTAAB3AAB3OVERLAPX_OFFSET UNITYSDK_OFFSET(0x1E206AA0)
#define DEST_MATH_INTERSECTION_TESTAAB3AAB3OVERLAPY_OFFSET UNITYSDK_OFFSET(0x1E206AC0)
#define DEST_MATH_INTERSECTION_TESTAAB3AAB3OVERLAPZ_OFFSET UNITYSDK_OFFSET(0x1E206AE0)
#define DEST_MATH_INTERSECTION_TESTAAB3AAB3_OFFSET UNITYSDK_OFFSET(0x1E206930)
#define DEST_MATH_INTERSECTION_TESTAAB3SPHERE3_OFFSET UNITYSDK_OFFSET(0x1E206B00)
#define DEST_MATH_INTERSECTION_TESTBOX2BOX2_OFFSET UNITYSDK_OFFSET(0x1E1FBF60)
#define DEST_MATH_INTERSECTION_TESTBOX2CIRCLE2_OFFSET UNITYSDK_OFFSET(0x1E1FC2A0)
#define DEST_MATH_INTERSECTION_TESTBOX3BOX3_OFFSET UNITYSDK_OFFSET(0x1E206B90)
#define DEST_MATH_INTERSECTION_TESTBOX3CAPSULE3_OFFSET UNITYSDK_OFFSET(0x1E207A30)
#define DEST_MATH_INTERSECTION_TESTBOX3SPHERE3_OFFSET UNITYSDK_OFFSET(0x1E207AE0)
#define DEST_MATH_INTERSECTION_TESTCIRCLE2CIRCLE2_OFFSET UNITYSDK_OFFSET(0x1E1FC3F0)
#define DEST_MATH_INTERSECTION_TESTCONVEXPOLYGON2CONVEXPOLYGON2_OFFSET UNITYSDK_OFFSET(0x1E1FC7F0)
#define DEST_MATH_INTERSECTION_TESTLINE2AAB2_OFFSET UNITYSDK_OFFSET(0x1E1FD0C0)
#define DEST_MATH_INTERSECTION_TESTLINE2BOX2_OFFSET UNITYSDK_OFFSET(0x1E1FD8D0)
#define DEST_MATH_INTERSECTION_TESTLINE2CIRCLE2_OFFSET UNITYSDK_OFFSET(0x1E1FDC00)
#define DEST_MATH_INTERSECTION_TESTLINE2CONVEXPOLYGON2_OFFSET UNITYSDK_OFFSET(0x1E1FDEC0)
#define DEST_MATH_INTERSECTION_TESTLINE2LINE2_1_OFFSET UNITYSDK_OFFSET(0x1E1FE890)
#define DEST_MATH_INTERSECTION_TESTLINE2LINE2_OFFSET UNITYSDK_OFFSET(0x1E1FE820)
#define DEST_MATH_INTERSECTION_TESTLINE2RAY2_1_OFFSET UNITYSDK_OFFSET(0x1E1FED70)
#define DEST_MATH_INTERSECTION_TESTLINE2RAY2_OFFSET UNITYSDK_OFFSET(0x1E1FEC80)
#define DEST_MATH_INTERSECTION_TESTLINE2SEGMENT2_1_OFFSET UNITYSDK_OFFSET(0x1E1FE160)
#define DEST_MATH_INTERSECTION_TESTLINE2SEGMENT2_OFFSET UNITYSDK_OFFSET(0x1E1FF260)
#define DEST_MATH_INTERSECTION_TESTLINE2TRIANGLE2_1_OFFSET UNITYSDK_OFFSET(0x1E1FFE20)
#define DEST_MATH_INTERSECTION_TESTLINE2TRIANGLE2_OFFSET UNITYSDK_OFFSET(0x1E1FF9D0)
#define DEST_MATH_INTERSECTION_TESTLINE3AAB3_OFFSET UNITYSDK_OFFSET(0x1E208430)
#define DEST_MATH_INTERSECTION_TESTLINE3BOX3_OFFSET UNITYSDK_OFFSET(0x1E208FA0)
#define DEST_MATH_INTERSECTION_TESTLINE3CIRCLE3_OFFSET UNITYSDK_OFFSET(0x1E209300)
#define DEST_MATH_INTERSECTION_TESTLINE3PLANE3_1_OFFSET UNITYSDK_OFFSET(0x1E209760)
#define DEST_MATH_INTERSECTION_TESTLINE3PLANE3_OFFSET UNITYSDK_OFFSET(0x1E2095A0)
#define DEST_MATH_INTERSECTION_TESTLINE3POLYGON3_OFFSET UNITYSDK_OFFSET(0x1E209A50)
#define DEST_MATH_INTERSECTION_TESTLINE3RECTANGLE3_OFFSET UNITYSDK_OFFSET(0x1E209F50)
#define DEST_MATH_INTERSECTION_TESTLINE3SPHERE3_OFFSET UNITYSDK_OFFSET(0x1E20A2C0)
#define DEST_MATH_INTERSECTION_TESTLINE3TRIANGLE3_1_OFFSET UNITYSDK_OFFSET(0x1E20A9F0)
#define DEST_MATH_INTERSECTION_TESTLINE3TRIANGLE3_2_OFFSET UNITYSDK_OFFSET(0x1E20AAE0)
#define DEST_MATH_INTERSECTION_TESTLINE3TRIANGLE3_3_OFFSET UNITYSDK_OFFSET(0x1E20ABD0)
#define DEST_MATH_INTERSECTION_TESTLINE3TRIANGLE3_4_OFFSET UNITYSDK_OFFSET(0x1E20AC40)
#define DEST_MATH_INTERSECTION_TESTLINE3TRIANGLE3_5_OFFSET UNITYSDK_OFFSET(0x1E20AD20)
#define DEST_MATH_INTERSECTION_TESTLINE3TRIANGLE3_OFFSET UNITYSDK_OFFSET(0x1E20A600)
#define DEST_MATH_INTERSECTION_TESTPLANE3AAB3_OFFSET UNITYSDK_OFFSET(0x1E20B500)
#define DEST_MATH_INTERSECTION_TESTPLANE3BOX3_OFFSET UNITYSDK_OFFSET(0x1E20B6F0)
#define DEST_MATH_INTERSECTION_TESTPLANE3PLANE3_OFFSET UNITYSDK_OFFSET(0x1E20B9E0)
#define DEST_MATH_INTERSECTION_TESTPLANE3SPHERE3_OFFSET UNITYSDK_OFFSET(0x1E20BEA0)
#define DEST_MATH_INTERSECTION_TESTPLANE3TRIANGLE3_OFFSET UNITYSDK_OFFSET(0x1E20C2D0)
#define DEST_MATH_INTERSECTION_TESTRAY2AAB2_OFFSET UNITYSDK_OFFSET(0x1E200260)
#define DEST_MATH_INTERSECTION_TESTRAY2BOX2_OFFSET UNITYSDK_OFFSET(0x1E200410)
#define DEST_MATH_INTERSECTION_TESTRAY2CIRCLE2_OFFSET UNITYSDK_OFFSET(0x1E200710)
#define DEST_MATH_INTERSECTION_TESTRAY2CONVEXPOLYGON2_OFFSET UNITYSDK_OFFSET(0x1E200A10)
#define DEST_MATH_INTERSECTION_TESTRAY2POLYGON2_1_OFFSET UNITYSDK_OFFSET(0x1E2012B0)
#define DEST_MATH_INTERSECTION_TESTRAY2POLYGON2_OFFSET UNITYSDK_OFFSET(0x1E201070)
#define DEST_MATH_INTERSECTION_TESTRAY2RAY2_1_OFFSET UNITYSDK_OFFSET(0x1E202090)
#define DEST_MATH_INTERSECTION_TESTRAY2RAY2_OFFSET UNITYSDK_OFFSET(0x1E201F00)
#define DEST_MATH_INTERSECTION_TESTRAY2SEGMENT2_1_OFFSET UNITYSDK_OFFSET(0x1E200C50)
#define DEST_MATH_INTERSECTION_TESTRAY2SEGMENT2_OFFSET UNITYSDK_OFFSET(0x1E2025F0)
#define DEST_MATH_INTERSECTION_TESTRAY2TRIANGLE2_1_OFFSET UNITYSDK_OFFSET(0x1E202B30)
#define DEST_MATH_INTERSECTION_TESTRAY2TRIANGLE2_OFFSET UNITYSDK_OFFSET(0x1E202810)
#define DEST_MATH_INTERSECTION_TESTRAY3AAB3_OFFSET UNITYSDK_OFFSET(0x1E20CEE0)
#define DEST_MATH_INTERSECTION_TESTRAY3BOX3_OFFSET UNITYSDK_OFFSET(0x1E20D210)
#define DEST_MATH_INTERSECTION_TESTRAY3CIRCLE3_OFFSET UNITYSDK_OFFSET(0x1E20D750)
#define DEST_MATH_INTERSECTION_TESTRAY3PLANE3_1_OFFSET UNITYSDK_OFFSET(0x1E20DDA0)
#define DEST_MATH_INTERSECTION_TESTRAY3PLANE3_OFFSET UNITYSDK_OFFSET(0x1E20DA30)
#define DEST_MATH_INTERSECTION_TESTRAY3POLYGON3_OFFSET UNITYSDK_OFFSET(0x1E20DE10)
#define DEST_MATH_INTERSECTION_TESTRAY3RECTANGLE3_OFFSET UNITYSDK_OFFSET(0x1E20E1D0)
#define DEST_MATH_INTERSECTION_TESTRAY3SPHERE3_OFFSET UNITYSDK_OFFSET(0x1E20E590)
#define DEST_MATH_INTERSECTION_TESTRAY3TRIANGLE3_1_OFFSET UNITYSDK_OFFSET(0x1E20EE80)
#define DEST_MATH_INTERSECTION_TESTRAY3TRIANGLE3_2_OFFSET UNITYSDK_OFFSET(0x1E20EF70)
#define DEST_MATH_INTERSECTION_TESTRAY3TRIANGLE3_3_OFFSET UNITYSDK_OFFSET(0x1E20F060)
#define DEST_MATH_INTERSECTION_TESTRAY3TRIANGLE3_4_OFFSET UNITYSDK_OFFSET(0x1E20F0D0)
#define DEST_MATH_INTERSECTION_TESTRAY3TRIANGLE3_5_OFFSET UNITYSDK_OFFSET(0x1E20F1B0)
#define DEST_MATH_INTERSECTION_TESTRAY3TRIANGLE3_OFFSET UNITYSDK_OFFSET(0x1E20E990)
#define DEST_MATH_INTERSECTION_TESTSEGMENT2AAB2_OFFSET UNITYSDK_OFFSET(0x1E202F70)
#define DEST_MATH_INTERSECTION_TESTSEGMENT2BOX2_OFFSET UNITYSDK_OFFSET(0x1E203150)
#define DEST_MATH_INTERSECTION_TESTSEGMENT2CIRCLE2_OFFSET UNITYSDK_OFFSET(0x1E203430)
#define DEST_MATH_INTERSECTION_TESTSEGMENT2CONVEXPOLYGON2_OFFSET UNITYSDK_OFFSET(0x1E2037B0)
#define DEST_MATH_INTERSECTION_TESTSEGMENT2SEGMENT2_1_OFFSET UNITYSDK_OFFSET(0x1E2040B0)
#define DEST_MATH_INTERSECTION_TESTSEGMENT2SEGMENT2_OFFSET UNITYSDK_OFFSET(0x1E203E70)
#define DEST_MATH_INTERSECTION_TESTSEGMENT2TRIANGLE2_1_OFFSET UNITYSDK_OFFSET(0x1E204800)
#define DEST_MATH_INTERSECTION_TESTSEGMENT2TRIANGLE2_OFFSET UNITYSDK_OFFSET(0x1E2044A0)
#define DEST_MATH_INTERSECTION_TESTSEGMENT3AAB3_OFFSET UNITYSDK_OFFSET(0x1E20FA10)
#define DEST_MATH_INTERSECTION_TESTSEGMENT3BOX3_OFFSET UNITYSDK_OFFSET(0x1E20FD50)
#define DEST_MATH_INTERSECTION_TESTSEGMENT3CIRCLE3_OFFSET UNITYSDK_OFFSET(0x1E210250)
#define DEST_MATH_INTERSECTION_TESTSEGMENT3PLANE3_1_OFFSET UNITYSDK_OFFSET(0x1E210780)
#define DEST_MATH_INTERSECTION_TESTSEGMENT3PLANE3_OFFSET UNITYSDK_OFFSET(0x1E210540)
#define DEST_MATH_INTERSECTION_TESTSEGMENT3POLYGON3_OFFSET UNITYSDK_OFFSET(0x1E210B00)
#define DEST_MATH_INTERSECTION_TESTSEGMENT3RECTANGLE3_OFFSET UNITYSDK_OFFSET(0x1E210ED0)
#define DEST_MATH_INTERSECTION_TESTSEGMENT3SPHERE3_OFFSET UNITYSDK_OFFSET(0x1E211290)
#define DEST_MATH_INTERSECTION_TESTSEGMENT3TRIANGLE3_1_OFFSET UNITYSDK_OFFSET(0x1E211B90)
#define DEST_MATH_INTERSECTION_TESTSEGMENT3TRIANGLE3_2_OFFSET UNITYSDK_OFFSET(0x1E211C80)
#define DEST_MATH_INTERSECTION_TESTSEGMENT3TRIANGLE3_3_OFFSET UNITYSDK_OFFSET(0x1E211D70)
#define DEST_MATH_INTERSECTION_TESTSEGMENT3TRIANGLE3_4_OFFSET UNITYSDK_OFFSET(0x1E211DE0)
#define DEST_MATH_INTERSECTION_TESTSEGMENT3TRIANGLE3_5_OFFSET UNITYSDK_OFFSET(0x1E211EC0)
#define DEST_MATH_INTERSECTION_TESTSEGMENT3TRIANGLE3_OFFSET UNITYSDK_OFFSET(0x1E2116D0)
#define DEST_MATH_INTERSECTION_TESTSPHERE3SPHERE3_OFFSET UNITYSDK_OFFSET(0x1E2126F0)
#define DEST_MATH_INTERSECTION_TESTTRIANGLE2TRIANGLE2_OFFSET UNITYSDK_OFFSET(0x1E206560)
#define DEST_MATH_INTERSECTION_TESTTRIANGLE3TRIANGLE3_1_OFFSET UNITYSDK_OFFSET(0x1E216990)
#define DEST_MATH_INTERSECTION_TESTTRIANGLE3TRIANGLE3_OFFSET UNITYSDK_OFFSET(0x1E214630)
#define DEST_MATH_INTERSECTION_TRIANGLELINERELATIONS_OFFSET UNITYSDK_OFFSET(0x1E1FF450)
#define DEST_MATH_INTERSECTION_TRIANGLEPLANERELATIONSQUICK_OFFSET UNITYSDK_OFFSET(0x1E212FF0)
#define DEST_MATH_INTERSECTION_TRIANGLEPLANERELATIONS_OFFSET UNITYSDK_OFFSET(0x1E212D40)
#define DEST_MATH_INTERSECTION_WHICHSIDE_1_OFFSET UNITYSDK_OFFSET(0x1E204C80)
#define DEST_MATH_INTERSECTION_WHICHSIDE_OFFSET UNITYSDK_OFFSET(0x1E1FC640)
#define DEST_MATH_INTERSECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E217910)

namespace Dest::Math
{
	inline static constexpr unsigned int Intersection_TypeDefinitionIndex = 35337;

	class Intersection : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet__distanceThreshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Intersection_TypeDefinitionIndex)->GetStaticField(0x8680);
		}
		static ::System::Single* StaticGet__intervalThreshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Intersection_TypeDefinitionIndex)->GetStaticField(0x8684);
		}
		static ::System::Single* StaticGet__dotThreshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Intersection_TypeDefinitionIndex)->GetStaticField(0x8688);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION__CCTOR_OFFSET))();
		}

		static ::System::Boolean TestAAB2AAB2(::Dest::Math::AAB2& box0, ::Dest::Math::AAB2& box1)
		{
			return ((::System::Boolean(*)(::Dest::Math::AAB2&, ::Dest::Math::AAB2&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTAAB2AAB2_OFFSET))(box0, box1);
		}

		static ::System::Boolean FindAAB2AAB2(::Dest::Math::AAB2& box0, ::Dest::Math::AAB2& box1, ::Dest::Math::AAB2& intersection)
		{
			return ((::System::Boolean(*)(::Dest::Math::AAB2&, ::Dest::Math::AAB2&, ::Dest::Math::AAB2&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDAAB2AAB2_OFFSET))(box0, box1, intersection);
		}

		static ::System::Boolean TestAAB2AAB2OverlapX(::Dest::Math::AAB2& box0, ::Dest::Math::AAB2& box1)
		{
			return ((::System::Boolean(*)(::Dest::Math::AAB2&, ::Dest::Math::AAB2&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTAAB2AAB2OVERLAPX_OFFSET))(box0, box1);
		}

		static ::System::Boolean TestAAB2AAB2OverlapY(::Dest::Math::AAB2& box0, ::Dest::Math::AAB2& box1)
		{
			return ((::System::Boolean(*)(::Dest::Math::AAB2&, ::Dest::Math::AAB2&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTAAB2AAB2OVERLAPY_OFFSET))(box0, box1);
		}

		static ::System::Boolean TestAAB2Circle2(::Dest::Math::AAB2& box, ::Dest::Math::Circle2& circle)
		{
			return ((::System::Boolean(*)(::Dest::Math::AAB2&, ::Dest::Math::Circle2&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTAAB2CIRCLE2_OFFSET))(box, circle);
		}

		static ::System::Boolean TestBox2Box2(::Dest::Math::Box2& box0, ::Dest::Math::Box2& box1)
		{
			return ((::System::Boolean(*)(::Dest::Math::Box2&, ::Dest::Math::Box2&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTBOX2BOX2_OFFSET))(box0, box1);
		}

		static ::System::Boolean TestBox2Circle2(::Dest::Math::Box2& box, ::Dest::Math::Circle2& circle)
		{
			return ((::System::Boolean(*)(::Dest::Math::Box2&, ::Dest::Math::Circle2&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTBOX2CIRCLE2_OFFSET))(box, circle);
		}

		static ::System::Boolean TestCircle2Circle2(::Dest::Math::Circle2& circle0, ::Dest::Math::Circle2& circle1)
		{
			return ((::System::Boolean(*)(::Dest::Math::Circle2&, ::Dest::Math::Circle2&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTCIRCLE2CIRCLE2_OFFSET))(circle0, circle1);
		}

		static ::System::Boolean FindCircle2Circle2(::Dest::Math::Circle2& circle0, ::Dest::Math::Circle2& circle1, ::Dest::Math::Circle2Circle2Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Circle2&, ::Dest::Math::Circle2&, ::Dest::Math::Circle2Circle2Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDCIRCLE2CIRCLE2_OFFSET))(circle0, circle1, info);
		}

		static ::System::Int32 WhichSide(::Dest::Math::Polygon2* V, ::UnityEngine::Vector2 P, ::UnityEngine::Vector2& D)
		{
			return ((::System::Int32(*)(::Dest::Math::Polygon2*, ::UnityEngine::Vector2, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_WHICHSIDE_OFFSET))(V, P, D);
		}

		static ::System::Boolean TestConvexPolygon2ConvexPolygon2(::Dest::Math::Polygon2* convexPolygon0, ::Dest::Math::Polygon2* convexPolygon1)
		{
			return ((::System::Boolean(*)(::Dest::Math::Polygon2*, ::Dest::Math::Polygon2*))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTCONVEXPOLYGON2CONVEXPOLYGON2_OFFSET))(convexPolygon0, convexPolygon1);
		}

		static ::System::Boolean DoClipping(::System::Single t0, ::System::Single t1, ::UnityEngine::Vector2& origin, ::UnityEngine::Vector2& direction, ::Dest::Math::AAB2& box, ::System::Boolean solid, ::System::Int32& quantity, ::UnityEngine::Vector2& point0, ::UnityEngine::Vector2& point1, ::Dest::Math::IntersectionTypes& intrType)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::Dest::Math::AAB2&, ::System::Boolean, ::System::Int32&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::Dest::Math::IntersectionTypes&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_DOCLIPPING_OFFSET))(t0, t1, origin, direction, box, solid, quantity, point0, point1, intrType);
		}

		static ::System::Boolean TestLine2AAB2(::Dest::Math::Line2& line, ::Dest::Math::AAB2& box)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line2&, ::Dest::Math::AAB2&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTLINE2AAB2_OFFSET))(line, box);
		}

		static ::System::Boolean FindLine2AAB2(::Dest::Math::Line2& line, ::Dest::Math::AAB2& box, ::Dest::Math::Line2AAB2Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line2&, ::Dest::Math::AAB2&, ::Dest::Math::Line2AAB2Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDLINE2AAB2_OFFSET))(line, box, info);
		}

		static ::System::Boolean Clip(::System::Single denom, ::System::Single numer, ::System::Single& t0, ::System::Single& t1)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_CLIP_OFFSET))(denom, numer, t0, t1);
		}

		static ::System::Boolean DoClipping_1(::System::Single t0, ::System::Single t1, ::UnityEngine::Vector2& origin, ::UnityEngine::Vector2& direction, ::Dest::Math::Box2& box, ::System::Boolean solid, ::System::Int32& quantity, ::UnityEngine::Vector2& point0, ::UnityEngine::Vector2& point1, ::Dest::Math::IntersectionTypes& intrType)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::Dest::Math::Box2&, ::System::Boolean, ::System::Int32&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::Dest::Math::IntersectionTypes&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_DOCLIPPING_1_OFFSET))(t0, t1, origin, direction, box, solid, quantity, point0, point1, intrType);
		}

		static ::System::Boolean TestLine2Box2(::Dest::Math::Line2& line, ::Dest::Math::Box2& box)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line2&, ::Dest::Math::Box2&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTLINE2BOX2_OFFSET))(line, box);
		}

		static ::System::Boolean FindLine2Box2(::Dest::Math::Line2& line, ::Dest::Math::Box2& box, ::Dest::Math::Line2Box2Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line2&, ::Dest::Math::Box2&, ::Dest::Math::Line2Box2Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDLINE2BOX2_OFFSET))(line, box, info);
		}

		static ::System::Boolean Find(::UnityEngine::Vector2& origin, ::UnityEngine::Vector2& direction, ::UnityEngine::Vector2& center, ::System::Single radius, ::System::Int32& rootCount, ::System::Single& t0, ::System::Single& t1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Single, ::System::Int32&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FIND_OFFSET))(origin, direction, center, radius, rootCount, t0, t1);
		}

		static ::System::Boolean TestLine2Circle2(::Dest::Math::Line2& line, ::Dest::Math::Circle2& circle)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line2&, ::Dest::Math::Circle2&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTLINE2CIRCLE2_OFFSET))(line, circle);
		}

		static ::System::Boolean FindLine2Circle2(::Dest::Math::Line2& line, ::Dest::Math::Circle2& circle, ::Dest::Math::Line2Circle2Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line2&, ::Dest::Math::Circle2&, ::Dest::Math::Line2Circle2Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDLINE2CIRCLE2_OFFSET))(line, circle, info);
		}

		static ::System::Boolean TestLine2ConvexPolygon2(::Dest::Math::Line2& line, ::Dest::Math::Polygon2* convexPolygon)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line2&, ::Dest::Math::Polygon2*))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTLINE2CONVEXPOLYGON2_OFFSET))(line, convexPolygon);
		}

		static ::System::Boolean FindLine2ConvexPolygon2(::Dest::Math::Line2& line, ::Dest::Math::Polygon2* convexPolygon, ::Dest::Math::Line2ConvexPolygon2Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line2&, ::Dest::Math::Polygon2*, ::Dest::Math::Line2ConvexPolygon2Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDLINE2CONVEXPOLYGON2_OFFSET))(line, convexPolygon, info);
		}

		static ::Dest::Math::IntersectionTypes Classify(::Dest::Math::Line2& line0, ::Dest::Math::Line2& line1, ::System::Single& s0)
		{
			return ((::Dest::Math::IntersectionTypes(*)(::Dest::Math::Line2&, ::Dest::Math::Line2&, ::System::Single&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_CLASSIFY_OFFSET))(line0, line1, s0);
		}

		static ::System::Boolean TestLine2Line2(::Dest::Math::Line2& line0, ::Dest::Math::Line2& line1, ::Dest::Math::IntersectionTypes& intersectionType)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line2&, ::Dest::Math::Line2&, ::Dest::Math::IntersectionTypes&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTLINE2LINE2_OFFSET))(line0, line1, intersectionType);
		}

		static ::System::Boolean TestLine2Line2_1(::Dest::Math::Line2& line0, ::Dest::Math::Line2& line1)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line2&, ::Dest::Math::Line2&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTLINE2LINE2_1_OFFSET))(line0, line1);
		}

		static ::System::Boolean FindLine2Line2(::Dest::Math::Line2& line0, ::Dest::Math::Line2& line1, ::Dest::Math::Line2Line2Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line2&, ::Dest::Math::Line2&, ::Dest::Math::Line2Line2Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDLINE2LINE2_OFFSET))(line0, line1, info);
		}

		static ::Dest::Math::IntersectionTypes Classify_1(::Dest::Math::Line2& line, ::Dest::Math::Ray2& ray, ::System::Single& s0, ::System::Single& s1)
		{
			return ((::Dest::Math::IntersectionTypes(*)(::Dest::Math::Line2&, ::Dest::Math::Ray2&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_CLASSIFY_1_OFFSET))(line, ray, s0, s1);
		}

		static ::System::Boolean TestLine2Ray2(::Dest::Math::Line2& line, ::Dest::Math::Ray2& ray, ::Dest::Math::IntersectionTypes& intersectionType)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line2&, ::Dest::Math::Ray2&, ::Dest::Math::IntersectionTypes&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTLINE2RAY2_OFFSET))(line, ray, intersectionType);
		}

		static ::System::Boolean TestLine2Ray2_1(::Dest::Math::Line2& line, ::Dest::Math::Ray2& ray)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line2&, ::Dest::Math::Ray2&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTLINE2RAY2_1_OFFSET))(line, ray);
		}

		static ::System::Boolean FindLine2Ray2(::Dest::Math::Line2& line, ::Dest::Math::Ray2& ray, ::Dest::Math::Line2Ray2Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line2&, ::Dest::Math::Ray2&, ::Dest::Math::Line2Ray2Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDLINE2RAY2_OFFSET))(line, ray, info);
		}

		static ::Dest::Math::IntersectionTypes Classify_2(::Dest::Math::Segment2& segment, ::Dest::Math::Line2& line, ::System::Single& s0, ::System::Single& s1)
		{
			return ((::Dest::Math::IntersectionTypes(*)(::Dest::Math::Segment2&, ::Dest::Math::Line2&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_CLASSIFY_2_OFFSET))(segment, line, s0, s1);
		}

		static ::System::Boolean TestLine2Segment2(::Dest::Math::Line2& line, ::Dest::Math::Segment2& segment, ::Dest::Math::IntersectionTypes& intersectionType)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line2&, ::Dest::Math::Segment2&, ::Dest::Math::IntersectionTypes&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTLINE2SEGMENT2_OFFSET))(line, segment, intersectionType);
		}

		static ::System::Boolean TestLine2Segment2_1(::Dest::Math::Line2& line, ::Dest::Math::Segment2& segment)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line2&, ::Dest::Math::Segment2&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTLINE2SEGMENT2_1_OFFSET))(line, segment);
		}

		static ::System::Boolean FindLine2Segment2(::Dest::Math::Line2& line, ::Dest::Math::Segment2& segment, ::Dest::Math::Line2Segment2Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line2&, ::Dest::Math::Segment2&, ::Dest::Math::Line2Segment2Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDLINE2SEGMENT2_OFFSET))(line, segment, info);
		}

		static ::System::Void TriangleLineRelations(::UnityEngine::Vector2& origin, ::UnityEngine::Vector2& direction, ::Dest::Math::Triangle2& triangle, ::System::Single& dist0, ::System::Single& dist1, ::System::Single& dist2, ::System::Int32& sign0, ::System::Int32& sign1, ::System::Int32& sign2, ::System::Int32& positive, ::System::Int32& negative, ::System::Int32& zero)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::Dest::Math::Triangle2&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Int32&, ::System::Int32&, ::System::Int32&, ::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TRIANGLELINERELATIONS_OFFSET))(origin, direction, triangle, dist0, dist1, dist2, sign0, sign1, sign2, positive, negative, zero);
		}

		static ::System::Boolean GetInterval(::UnityEngine::Vector2& origin, ::UnityEngine::Vector2& direction, ::Dest::Math::Triangle2& triangle, ::System::Single dist0, ::System::Single dist1, ::System::Single dist2, ::System::Int32 sign0, ::System::Int32 sign1, ::System::Int32 sign2, ::System::Single& param0, ::System::Single& param1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::Dest::Math::Triangle2&, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_GETINTERVAL_OFFSET))(origin, direction, triangle, dist0, dist1, dist2, sign0, sign1, sign2, param0, param1);
		}

		static ::System::Boolean TestLine2Triangle2(::Dest::Math::Line2& line, ::Dest::Math::Triangle2& triangle, ::Dest::Math::IntersectionTypes& intersectionType)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line2&, ::Dest::Math::Triangle2&, ::Dest::Math::IntersectionTypes&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTLINE2TRIANGLE2_OFFSET))(line, triangle, intersectionType);
		}

		static ::System::Boolean TestLine2Triangle2_1(::Dest::Math::Line2& line, ::Dest::Math::Triangle2& triangle)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line2&, ::Dest::Math::Triangle2&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTLINE2TRIANGLE2_1_OFFSET))(line, triangle);
		}

		static ::System::Boolean FindLine2Triangle2(::Dest::Math::Line2& line, ::Dest::Math::Triangle2& triangle, ::Dest::Math::Line2Triangle2Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line2&, ::Dest::Math::Triangle2&, ::Dest::Math::Line2Triangle2Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDLINE2TRIANGLE2_OFFSET))(line, triangle, info);
		}

		static ::System::Boolean TestRay2AAB2(::Dest::Math::Ray2& ray, ::Dest::Math::AAB2& box)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray2&, ::Dest::Math::AAB2&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTRAY2AAB2_OFFSET))(ray, box);
		}

		static ::System::Boolean FindRay2AAB2(::Dest::Math::Ray2& ray, ::Dest::Math::AAB2& box, ::Dest::Math::Ray2AAB2Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray2&, ::Dest::Math::AAB2&, ::Dest::Math::Ray2AAB2Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDRAY2AAB2_OFFSET))(ray, box, info);
		}

		static ::System::Boolean TestRay2Box2(::Dest::Math::Ray2& ray, ::Dest::Math::Box2& box)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray2&, ::Dest::Math::Box2&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTRAY2BOX2_OFFSET))(ray, box);
		}

		static ::System::Boolean FindRay2Box2(::Dest::Math::Ray2& ray, ::Dest::Math::Box2& box, ::Dest::Math::Ray2Box2Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray2&, ::Dest::Math::Box2&, ::Dest::Math::Ray2Box2Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDRAY2BOX2_OFFSET))(ray, box, info);
		}

		static ::System::Boolean TestRay2Circle2(::Dest::Math::Ray2& ray, ::Dest::Math::Circle2& circle)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray2&, ::Dest::Math::Circle2&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTRAY2CIRCLE2_OFFSET))(ray, circle);
		}

		static ::System::Boolean FindRay2Circle2(::Dest::Math::Ray2& ray, ::Dest::Math::Circle2& circle, ::Dest::Math::Ray2Circle2Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray2&, ::Dest::Math::Circle2&, ::Dest::Math::Ray2Circle2Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDRAY2CIRCLE2_OFFSET))(ray, circle, info);
		}

		static ::System::Boolean TestRay2ConvexPolygon2(::Dest::Math::Ray2& ray, ::Dest::Math::Polygon2* convexPolygon)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray2&, ::Dest::Math::Polygon2*))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTRAY2CONVEXPOLYGON2_OFFSET))(ray, convexPolygon);
		}

		static ::System::Boolean FindRay2ConvexPolygon2(::Dest::Math::Ray2& ray, ::Dest::Math::Polygon2* convexPolygon, ::Dest::Math::Ray2ConvexPolygon2Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray2&, ::Dest::Math::Polygon2*, ::Dest::Math::Ray2ConvexPolygon2Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDRAY2CONVEXPOLYGON2_OFFSET))(ray, convexPolygon, info);
		}

		static ::System::Boolean TestRay2Polygon2(::Dest::Math::Ray2& ray, ::Dest::Math::Polygon2* polygon)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray2&, ::Dest::Math::Polygon2*))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTRAY2POLYGON2_OFFSET))(ray, polygon);
		}

		static ::System::Boolean TestRay2Polygon2_1(::Dest::Math::Ray2& ray, ::Il2CppArray<::Dest::Math::Segment2>* segments)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray2&, ::Il2CppArray<::Dest::Math::Segment2>*))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTRAY2POLYGON2_1_OFFSET))(ray, segments);
		}

		static ::System::Boolean FindRay2Polygon2(::Dest::Math::Ray2& ray, ::Dest::Math::Polygon2* polygon, ::Dest::Math::Ray2Polygon2Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray2&, ::Dest::Math::Polygon2*, ::Dest::Math::Ray2Polygon2Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDRAY2POLYGON2_OFFSET))(ray, polygon, info);
		}

		static ::System::Boolean FindRay2Polygon2_1(::Dest::Math::Ray2& ray, ::Il2CppArray<::Dest::Math::Segment2>* segments, ::Dest::Math::Ray2Polygon2Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray2&, ::Il2CppArray<::Dest::Math::Segment2>*, ::Dest::Math::Ray2Polygon2Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDRAY2POLYGON2_1_OFFSET))(ray, segments, info);
		}

		static ::Dest::Math::IntersectionTypes Classify_3(::Dest::Math::Ray2& ray0, ::Dest::Math::Ray2& ray1, ::System::Single& s0, ::System::Single& s1)
		{
			return ((::Dest::Math::IntersectionTypes(*)(::Dest::Math::Ray2&, ::Dest::Math::Ray2&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_CLASSIFY_3_OFFSET))(ray0, ray1, s0, s1);
		}

		static ::System::Boolean TestRay2Ray2(::Dest::Math::Ray2& ray0, ::Dest::Math::Ray2& ray1, ::Dest::Math::IntersectionTypes& intersectionType)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray2&, ::Dest::Math::Ray2&, ::Dest::Math::IntersectionTypes&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTRAY2RAY2_OFFSET))(ray0, ray1, intersectionType);
		}

		static ::System::Boolean TestRay2Ray2_1(::Dest::Math::Ray2& ray0, ::Dest::Math::Ray2& ray1)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray2&, ::Dest::Math::Ray2&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTRAY2RAY2_1_OFFSET))(ray0, ray1);
		}

		static ::System::Boolean FindRay2Ray2(::Dest::Math::Ray2& ray0, ::Dest::Math::Ray2& ray1, ::Dest::Math::Ray2Ray2Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray2&, ::Dest::Math::Ray2&, ::Dest::Math::Ray2Ray2Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDRAY2RAY2_OFFSET))(ray0, ray1, info);
		}

		static ::Dest::Math::IntersectionTypes Classify_4(::Dest::Math::Ray2& ray, ::Dest::Math::Segment2& segment, ::System::Single& s0, ::System::Single& s1)
		{
			return ((::Dest::Math::IntersectionTypes(*)(::Dest::Math::Ray2&, ::Dest::Math::Segment2&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_CLASSIFY_4_OFFSET))(ray, segment, s0, s1);
		}

		static ::System::Boolean TestRay2Segment2(::Dest::Math::Ray2& ray, ::Dest::Math::Segment2& segment, ::Dest::Math::IntersectionTypes& intersectionType)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray2&, ::Dest::Math::Segment2&, ::Dest::Math::IntersectionTypes&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTRAY2SEGMENT2_OFFSET))(ray, segment, intersectionType);
		}

		static ::System::Boolean TestRay2Segment2_1(::Dest::Math::Ray2& ray, ::Dest::Math::Segment2& segment)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray2&, ::Dest::Math::Segment2&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTRAY2SEGMENT2_1_OFFSET))(ray, segment);
		}

		static ::System::Boolean FindRay2Segment2(::Dest::Math::Ray2& ray, ::Dest::Math::Segment2& segment, ::Dest::Math::Ray2Segment2Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray2&, ::Dest::Math::Segment2&, ::Dest::Math::Ray2Segment2Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDRAY2SEGMENT2_OFFSET))(ray, segment, info);
		}

		static ::System::Boolean TestRay2Triangle2(::Dest::Math::Ray2& ray, ::Dest::Math::Triangle2& triangle, ::Dest::Math::IntersectionTypes& intersectionType)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray2&, ::Dest::Math::Triangle2&, ::Dest::Math::IntersectionTypes&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTRAY2TRIANGLE2_OFFSET))(ray, triangle, intersectionType);
		}

		static ::System::Boolean TestRay2Triangle2_1(::Dest::Math::Ray2& ray, ::Dest::Math::Triangle2& triangle)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray2&, ::Dest::Math::Triangle2&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTRAY2TRIANGLE2_1_OFFSET))(ray, triangle);
		}

		static ::System::Boolean FindRay2Triangle2(::Dest::Math::Ray2& ray, ::Dest::Math::Triangle2& triangle, ::Dest::Math::Ray2Triangle2Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray2&, ::Dest::Math::Triangle2&, ::Dest::Math::Ray2Triangle2Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDRAY2TRIANGLE2_OFFSET))(ray, triangle, info);
		}

		static ::System::Boolean TestSegment2AAB2(::Dest::Math::Segment2& segment, ::Dest::Math::AAB2& box)
		{
			return ((::System::Boolean(*)(::Dest::Math::Segment2&, ::Dest::Math::AAB2&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTSEGMENT2AAB2_OFFSET))(segment, box);
		}

		static ::System::Boolean FindSegment2AAB2(::Dest::Math::Segment2& segment, ::Dest::Math::AAB2& box, ::Dest::Math::Segment2AAB2Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Segment2&, ::Dest::Math::AAB2&, ::Dest::Math::Segment2AAB2Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDSEGMENT2AAB2_OFFSET))(segment, box, info);
		}

		static ::System::Boolean TestSegment2Box2(::Dest::Math::Segment2& segment, ::Dest::Math::Box2& box)
		{
			return ((::System::Boolean(*)(::Dest::Math::Segment2&, ::Dest::Math::Box2&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTSEGMENT2BOX2_OFFSET))(segment, box);
		}

		static ::System::Boolean FindSegment2Box2(::Dest::Math::Segment2& segment, ::Dest::Math::Box2& box, ::Dest::Math::Segment2Box2Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Segment2&, ::Dest::Math::Box2&, ::Dest::Math::Segment2Box2Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDSEGMENT2BOX2_OFFSET))(segment, box, info);
		}

		static ::System::Boolean TestSegment2Circle2(::Dest::Math::Segment2& segment, ::Dest::Math::Circle2& circle)
		{
			return ((::System::Boolean(*)(::Dest::Math::Segment2&, ::Dest::Math::Circle2&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTSEGMENT2CIRCLE2_OFFSET))(segment, circle);
		}

		static ::System::Boolean FindSegment2Circle2(::Dest::Math::Segment2& segment, ::Dest::Math::Circle2& circle, ::Dest::Math::Segment2Circle2Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Segment2&, ::Dest::Math::Circle2&, ::Dest::Math::Segment2Circle2Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDSEGMENT2CIRCLE2_OFFSET))(segment, circle, info);
		}

		static ::System::Boolean TestSegment2ConvexPolygon2(::Dest::Math::Segment2& segment, ::Dest::Math::Polygon2* convexPolygon)
		{
			return ((::System::Boolean(*)(::Dest::Math::Segment2&, ::Dest::Math::Polygon2*))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTSEGMENT2CONVEXPOLYGON2_OFFSET))(segment, convexPolygon);
		}

		static ::System::Boolean FindSegment2ConvexPolygon2(::Dest::Math::Segment2& segment, ::Dest::Math::Polygon2* convexPolygon, ::Dest::Math::Segment2ConvexPolygon2Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Segment2&, ::Dest::Math::Polygon2*, ::Dest::Math::Segment2ConvexPolygon2Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDSEGMENT2CONVEXPOLYGON2_OFFSET))(segment, convexPolygon, info);
		}

		static ::Dest::Math::IntersectionTypes Classify_5(::Dest::Math::Segment2& segment0, ::Dest::Math::Segment2& segment1, ::System::Single& s0, ::System::Single& s1)
		{
			return ((::Dest::Math::IntersectionTypes(*)(::Dest::Math::Segment2&, ::Dest::Math::Segment2&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_CLASSIFY_5_OFFSET))(segment0, segment1, s0, s1);
		}

		static ::System::Boolean TestSegment2Segment2(::Dest::Math::Segment2& segment0, ::Dest::Math::Segment2& segment1, ::Dest::Math::IntersectionTypes& intersectionType)
		{
			return ((::System::Boolean(*)(::Dest::Math::Segment2&, ::Dest::Math::Segment2&, ::Dest::Math::IntersectionTypes&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTSEGMENT2SEGMENT2_OFFSET))(segment0, segment1, intersectionType);
		}

		static ::System::Boolean TestSegment2Segment2_1(::Dest::Math::Segment2& segment0, ::Dest::Math::Segment2& segment1)
		{
			return ((::System::Boolean(*)(::Dest::Math::Segment2&, ::Dest::Math::Segment2&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTSEGMENT2SEGMENT2_1_OFFSET))(segment0, segment1);
		}

		static ::System::Boolean FindSegment2Segment2(::Dest::Math::Segment2& segment0, ::Dest::Math::Segment2& segment1, ::Dest::Math::Segment2Segment2Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Segment2&, ::Dest::Math::Segment2&, ::Dest::Math::Segment2Segment2Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDSEGMENT2SEGMENT2_OFFSET))(segment0, segment1, info);
		}

		static ::System::Boolean TestSegment2Triangle2(::Dest::Math::Segment2& segment, ::Dest::Math::Triangle2& triangle, ::Dest::Math::IntersectionTypes& intersectionType)
		{
			return ((::System::Boolean(*)(::Dest::Math::Segment2&, ::Dest::Math::Triangle2&, ::Dest::Math::IntersectionTypes&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTSEGMENT2TRIANGLE2_OFFSET))(segment, triangle, intersectionType);
		}

		static ::System::Boolean TestSegment2Triangle2_1(::Dest::Math::Segment2& segment, ::Dest::Math::Triangle2& triangle)
		{
			return ((::System::Boolean(*)(::Dest::Math::Segment2&, ::Dest::Math::Triangle2&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTSEGMENT2TRIANGLE2_1_OFFSET))(segment, triangle);
		}

		static ::System::Boolean FindSegment2Triangle2(::Dest::Math::Segment2& segment, ::Dest::Math::Triangle2& triangle, ::Dest::Math::Segment2Triangle2Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Segment2&, ::Dest::Math::Triangle2&, ::Dest::Math::Segment2Triangle2Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDSEGMENT2TRIANGLE2_OFFSET))(segment, triangle, info);
		}

		static ::System::Int32 WhichSide_1(::Dest::Math::Triangle2& triangle, ::UnityEngine::Vector2& P, ::UnityEngine::Vector2& D)
		{
			return ((::System::Int32(*)(::Dest::Math::Triangle2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_WHICHSIDE_1_OFFSET))(triangle, P, D);
		}

		static ::System::Void ClipConvexPolygonAgainstLine(::UnityEngine::Vector2& edgeStart, ::UnityEngine::Vector2& edgeEnd, ::System::Int32& quantity, ::Dest::Math::Triangle2Triangle2Intr& info)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Int32&, ::Dest::Math::Triangle2Triangle2Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_CLIPCONVEXPOLYGONAGAINSTLINE_OFFSET))(edgeStart, edgeEnd, quantity, info);
		}

		static ::System::Boolean TestTriangle2Triangle2(::Dest::Math::Triangle2& triangle0, ::Dest::Math::Triangle2& triangle1)
		{
			return ((::System::Boolean(*)(::Dest::Math::Triangle2&, ::Dest::Math::Triangle2&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTTRIANGLE2TRIANGLE2_OFFSET))(triangle0, triangle1);
		}

		static ::System::Boolean FindTriangle2Triangle2(::Dest::Math::Triangle2& triangle0, ::Dest::Math::Triangle2& triangle1, ::Dest::Math::Triangle2Triangle2Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Triangle2&, ::Dest::Math::Triangle2&, ::Dest::Math::Triangle2Triangle2Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDTRIANGLE2TRIANGLE2_OFFSET))(triangle0, triangle1, info);
		}

		static ::System::Boolean TestAAB3AAB3(::Dest::Math::AAB3& box0, ::Dest::Math::AAB3& box1)
		{
			return ((::System::Boolean(*)(::Dest::Math::AAB3&, ::Dest::Math::AAB3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTAAB3AAB3_OFFSET))(box0, box1);
		}

		static ::System::Boolean FindAAB3AAB3(::Dest::Math::AAB3& box0, ::Dest::Math::AAB3& box1, ::Dest::Math::AAB3& intersection)
		{
			return ((::System::Boolean(*)(::Dest::Math::AAB3&, ::Dest::Math::AAB3&, ::Dest::Math::AAB3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDAAB3AAB3_OFFSET))(box0, box1, intersection);
		}

		static ::System::Boolean TestAAB3AAB3OverlapX(::Dest::Math::AAB3& box0, ::Dest::Math::AAB3& box1)
		{
			return ((::System::Boolean(*)(::Dest::Math::AAB3&, ::Dest::Math::AAB3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTAAB3AAB3OVERLAPX_OFFSET))(box0, box1);
		}

		static ::System::Boolean TestAAB3AAB3OverlapY(::Dest::Math::AAB3& box0, ::Dest::Math::AAB3& box1)
		{
			return ((::System::Boolean(*)(::Dest::Math::AAB3&, ::Dest::Math::AAB3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTAAB3AAB3OVERLAPY_OFFSET))(box0, box1);
		}

		static ::System::Boolean TestAAB3AAB3OverlapZ(::Dest::Math::AAB3& box0, ::Dest::Math::AAB3& box1)
		{
			return ((::System::Boolean(*)(::Dest::Math::AAB3&, ::Dest::Math::AAB3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTAAB3AAB3OVERLAPZ_OFFSET))(box0, box1);
		}

		static ::System::Boolean TestAAB3Sphere3(::Dest::Math::AAB3& box, ::Dest::Math::Sphere3& sphere)
		{
			return ((::System::Boolean(*)(::Dest::Math::AAB3&, ::Dest::Math::Sphere3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTAAB3SPHERE3_OFFSET))(box, sphere);
		}

		static ::System::Boolean TestBox3Box3(::Dest::Math::Box3& box0, ::Dest::Math::Box3& box1)
		{
			return ((::System::Boolean(*)(::Dest::Math::Box3&, ::Dest::Math::Box3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTBOX3BOX3_OFFSET))(box0, box1);
		}

		static ::System::Boolean TestBox3Capsule3(::Dest::Math::Box3& box, ::Dest::Math::Capsule3& capsule)
		{
			return ((::System::Boolean(*)(::Dest::Math::Box3&, ::Dest::Math::Capsule3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTBOX3CAPSULE3_OFFSET))(box, capsule);
		}

		static ::System::Boolean TestBox3Sphere3(::Dest::Math::Box3& box, ::Dest::Math::Sphere3& sphere)
		{
			return ((::System::Boolean(*)(::Dest::Math::Box3&, ::Dest::Math::Sphere3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTBOX3SPHERE3_OFFSET))(box, sphere);
		}

		static ::System::Boolean DoClipping_2(::System::Single t0, ::System::Single t1, ::UnityEngine::Vector3& origin, ::UnityEngine::Vector3& direction, ::Dest::Math::AAB3& box, ::System::Boolean solid, ::System::Int32& quantity, ::UnityEngine::Vector3& point0, ::UnityEngine::Vector3& point1, ::Dest::Math::IntersectionTypes& intrType)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::Dest::Math::AAB3&, ::System::Boolean, ::System::Int32&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::Dest::Math::IntersectionTypes&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_DOCLIPPING_2_OFFSET))(t0, t1, origin, direction, box, solid, quantity, point0, point1, intrType);
		}

		static ::System::Boolean TestLine3AAB3(::Dest::Math::Line3& line, ::Dest::Math::AAB3& box)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line3&, ::Dest::Math::AAB3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTLINE3AAB3_OFFSET))(line, box);
		}

		static ::System::Boolean FindLine3AAB3(::Dest::Math::Line3& line, ::Dest::Math::AAB3& box, ::Dest::Math::Line3AAB3Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line3&, ::Dest::Math::AAB3&, ::Dest::Math::Line3AAB3Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDLINE3AAB3_OFFSET))(line, box, info);
		}

		static ::System::Boolean DoClipping_3(::System::Single t0, ::System::Single t1, ::UnityEngine::Vector3& origin, ::UnityEngine::Vector3& direction, ::Dest::Math::Box3& box, ::System::Boolean solid, ::System::Int32& quantity, ::UnityEngine::Vector3& point0, ::UnityEngine::Vector3& point1, ::Dest::Math::IntersectionTypes& intrType)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::Dest::Math::Box3&, ::System::Boolean, ::System::Int32&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::Dest::Math::IntersectionTypes&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_DOCLIPPING_3_OFFSET))(t0, t1, origin, direction, box, solid, quantity, point0, point1, intrType);
		}

		static ::System::Boolean TestLine3Box3(::Dest::Math::Line3& line, ::Dest::Math::Box3& box)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line3&, ::Dest::Math::Box3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTLINE3BOX3_OFFSET))(line, box);
		}

		static ::System::Boolean FindLine3Box3(::Dest::Math::Line3& line, ::Dest::Math::Box3& box, ::Dest::Math::Line3Box3Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line3&, ::Dest::Math::Box3&, ::Dest::Math::Line3Box3Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDLINE3BOX3_OFFSET))(line, box, info);
		}

		static ::System::Boolean TestLine3Circle3(::Dest::Math::Line3& line, ::Dest::Math::Circle3& circle)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line3&, ::Dest::Math::Circle3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTLINE3CIRCLE3_OFFSET))(line, circle);
		}

		static ::System::Boolean FindLine3Circle3(::Dest::Math::Line3& line, ::Dest::Math::Circle3& circle, ::Dest::Math::Line3Circle3Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line3&, ::Dest::Math::Circle3&, ::Dest::Math::Line3Circle3Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDLINE3CIRCLE3_OFFSET))(line, circle, info);
		}

		static ::System::Boolean TestLine3Plane3(::Dest::Math::Line3& line, ::Dest::Math::Plane3& plane, ::Dest::Math::IntersectionTypes& intersectionType)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line3&, ::Dest::Math::Plane3&, ::Dest::Math::IntersectionTypes&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTLINE3PLANE3_OFFSET))(line, plane, intersectionType);
		}

		static ::System::Boolean TestLine3Plane3_1(::Dest::Math::Line3& line, ::Dest::Math::Plane3& plane)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line3&, ::Dest::Math::Plane3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTLINE3PLANE3_1_OFFSET))(line, plane);
		}

		static ::System::Boolean FindLine3Plane3(::Dest::Math::Line3& line, ::Dest::Math::Plane3& plane, ::Dest::Math::Line3Plane3Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line3&, ::Dest::Math::Plane3&, ::Dest::Math::Line3Plane3Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDLINE3PLANE3_OFFSET))(line, plane, info);
		}

		static ::System::Boolean TestLine3Polygon3(::Dest::Math::Line3& line, ::Dest::Math::Polygon3* polygon)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line3&, ::Dest::Math::Polygon3*))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTLINE3POLYGON3_OFFSET))(line, polygon);
		}

		static ::System::Boolean FindLine3Polygon3(::Dest::Math::Line3& line, ::Dest::Math::Polygon3* polygon, ::Dest::Math::Line3Polygon3Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line3&, ::Dest::Math::Polygon3*, ::Dest::Math::Line3Polygon3Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDLINE3POLYGON3_OFFSET))(line, polygon, info);
		}

		static ::System::Boolean Point3InsideRectangle3(::UnityEngine::Vector3& point, ::Dest::Math::Rectangle3& rectangle)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::Dest::Math::Rectangle3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_POINT3INSIDERECTANGLE3_OFFSET))(point, rectangle);
		}

		static ::System::Boolean TestLine3Rectangle3(::Dest::Math::Line3& line, ::Dest::Math::Rectangle3& rectangle)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line3&, ::Dest::Math::Rectangle3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTLINE3RECTANGLE3_OFFSET))(line, rectangle);
		}

		static ::System::Boolean FindLine3Rectangle3(::Dest::Math::Line3& line, ::Dest::Math::Rectangle3& rectangle, ::Dest::Math::Line3Rectangle3Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line3&, ::Dest::Math::Rectangle3&, ::Dest::Math::Line3Rectangle3Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDLINE3RECTANGLE3_OFFSET))(line, rectangle, info);
		}

		static ::System::Boolean TestLine3Sphere3(::Dest::Math::Line3& line, ::Dest::Math::Sphere3& sphere)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line3&, ::Dest::Math::Sphere3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTLINE3SPHERE3_OFFSET))(line, sphere);
		}

		static ::System::Boolean FindLine3Sphere3(::Dest::Math::Line3& line, ::Dest::Math::Sphere3& sphere, ::Dest::Math::Line3Sphere3Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line3&, ::Dest::Math::Sphere3&, ::Dest::Math::Line3Sphere3Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDLINE3SPHERE3_OFFSET))(line, sphere, info);
		}

		static ::System::Boolean TestLine3Triangle3(::Dest::Math::Line3& line, ::Dest::Math::Triangle3& triangle, ::Dest::Math::IntersectionTypes& intersectionType)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line3&, ::Dest::Math::Triangle3&, ::Dest::Math::IntersectionTypes&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTLINE3TRIANGLE3_OFFSET))(line, triangle, intersectionType);
		}

		static ::System::Boolean TestLine3Triangle3_1(::Dest::Math::Line3& line, ::UnityEngine::Vector3& v0, ::UnityEngine::Vector3& v1, ::UnityEngine::Vector3& v2, ::Dest::Math::IntersectionTypes& intersectionType)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::Dest::Math::IntersectionTypes&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTLINE3TRIANGLE3_1_OFFSET))(line, v0, v1, v2, intersectionType);
		}

		static ::System::Boolean TestLine3Triangle3_2(::Dest::Math::Line3& line, ::UnityEngine::Vector3 v0, ::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2, ::Dest::Math::IntersectionTypes& intersectionType)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line3&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Dest::Math::IntersectionTypes&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTLINE3TRIANGLE3_2_OFFSET))(line, v0, v1, v2, intersectionType);
		}

		static ::System::Boolean TestLine3Triangle3_3(::Dest::Math::Line3& line, ::Dest::Math::Triangle3& triangle)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line3&, ::Dest::Math::Triangle3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTLINE3TRIANGLE3_3_OFFSET))(line, triangle);
		}

		static ::System::Boolean TestLine3Triangle3_4(::Dest::Math::Line3& line, ::UnityEngine::Vector3& v0, ::UnityEngine::Vector3& v1, ::UnityEngine::Vector3& v2)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTLINE3TRIANGLE3_4_OFFSET))(line, v0, v1, v2);
		}

		static ::System::Boolean TestLine3Triangle3_5(::Dest::Math::Line3& line, ::UnityEngine::Vector3 v0, ::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line3&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTLINE3TRIANGLE3_5_OFFSET))(line, v0, v1, v2);
		}

		static ::System::Boolean FindLine3Triangle3(::Dest::Math::Line3& line, ::Dest::Math::Triangle3& triangle, ::Dest::Math::Line3Triangle3Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line3&, ::Dest::Math::Triangle3&, ::Dest::Math::Line3Triangle3Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDLINE3TRIANGLE3_OFFSET))(line, triangle, info);
		}

		static ::System::Boolean FindLine3Triangle3_1(::Dest::Math::Line3& line, ::UnityEngine::Vector3& v0, ::UnityEngine::Vector3& v1, ::UnityEngine::Vector3& v2, ::Dest::Math::Line3Triangle3Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::Dest::Math::Line3Triangle3Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDLINE3TRIANGLE3_1_OFFSET))(line, v0, v1, v2, info);
		}

		static ::System::Boolean FindLine3Triangle3_2(::Dest::Math::Line3& line, ::UnityEngine::Vector3 v0, ::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2, ::Dest::Math::Line3Triangle3Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Line3&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Dest::Math::Line3Triangle3Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDLINE3TRIANGLE3_2_OFFSET))(line, v0, v1, v2, info);
		}

		static ::System::Boolean TestPlane3AAB3(::Dest::Math::Plane3& plane, ::Dest::Math::AAB3& box)
		{
			return ((::System::Boolean(*)(::Dest::Math::Plane3&, ::Dest::Math::AAB3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTPLANE3AAB3_OFFSET))(plane, box);
		}

		static ::System::Boolean TestPlane3Box3(::Dest::Math::Plane3& plane, ::Dest::Math::Box3& box)
		{
			return ((::System::Boolean(*)(::Dest::Math::Plane3&, ::Dest::Math::Box3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTPLANE3BOX3_OFFSET))(plane, box);
		}

		static ::System::Boolean TestPlane3Plane3(::Dest::Math::Plane3& plane0, ::Dest::Math::Plane3& plane1)
		{
			return ((::System::Boolean(*)(::Dest::Math::Plane3&, ::Dest::Math::Plane3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTPLANE3PLANE3_OFFSET))(plane0, plane1);
		}

		static ::System::Boolean FindPlane3Plane3(::Dest::Math::Plane3& plane0, ::Dest::Math::Plane3& plane1, ::Dest::Math::Plane3Plane3Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Plane3&, ::Dest::Math::Plane3&, ::Dest::Math::Plane3Plane3Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDPLANE3PLANE3_OFFSET))(plane0, plane1, info);
		}

		static ::System::Boolean TestPlane3Sphere3(::Dest::Math::Plane3& plane, ::Dest::Math::Sphere3& sphere)
		{
			return ((::System::Boolean(*)(::Dest::Math::Plane3&, ::Dest::Math::Sphere3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTPLANE3SPHERE3_OFFSET))(plane, sphere);
		}

		static ::System::Boolean FindPlane3Sphere3(::Dest::Math::Plane3& plane, ::Dest::Math::Sphere3& sphere, ::Dest::Math::Plane3Sphere3Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Plane3&, ::Dest::Math::Sphere3&, ::Dest::Math::Plane3Sphere3Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDPLANE3SPHERE3_OFFSET))(plane, sphere, info);
		}

		static ::System::Boolean TestPlane3Triangle3(::Dest::Math::Plane3& plane, ::Dest::Math::Triangle3& triangle)
		{
			return ((::System::Boolean(*)(::Dest::Math::Plane3&, ::Dest::Math::Triangle3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTPLANE3TRIANGLE3_OFFSET))(plane, triangle);
		}

		static ::System::Boolean FindPlane3Triangle3(::Dest::Math::Plane3& plane, ::Dest::Math::Triangle3& triangle, ::Dest::Math::Plane3Triangle3Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Plane3&, ::Dest::Math::Triangle3&, ::Dest::Math::Plane3Triangle3Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDPLANE3TRIANGLE3_OFFSET))(plane, triangle, info);
		}

		static ::System::Boolean TestRay3AAB3(::Dest::Math::Ray3& ray, ::Dest::Math::AAB3& box)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray3&, ::Dest::Math::AAB3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTRAY3AAB3_OFFSET))(ray, box);
		}

		static ::System::Boolean FindRay3AAB3(::Dest::Math::Ray3& ray, ::Dest::Math::AAB3& box, ::Dest::Math::Ray3AAB3Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray3&, ::Dest::Math::AAB3&, ::Dest::Math::Ray3AAB3Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDRAY3AAB3_OFFSET))(ray, box, info);
		}

		static ::System::Boolean TestRay3Box3(::Dest::Math::Ray3& ray, ::Dest::Math::Box3& box)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray3&, ::Dest::Math::Box3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTRAY3BOX3_OFFSET))(ray, box);
		}

		static ::System::Boolean FindRay3Box3(::Dest::Math::Ray3& ray, ::Dest::Math::Box3& box, ::Dest::Math::Ray3Box3Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray3&, ::Dest::Math::Box3&, ::Dest::Math::Ray3Box3Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDRAY3BOX3_OFFSET))(ray, box, info);
		}

		static ::System::Boolean TestRay3Circle3(::Dest::Math::Ray3& ray, ::Dest::Math::Circle3& circle)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray3&, ::Dest::Math::Circle3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTRAY3CIRCLE3_OFFSET))(ray, circle);
		}

		static ::System::Boolean FindRay3Circle3(::Dest::Math::Ray3& ray, ::Dest::Math::Circle3& circle, ::Dest::Math::Ray3Circle3Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray3&, ::Dest::Math::Circle3&, ::Dest::Math::Ray3Circle3Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDRAY3CIRCLE3_OFFSET))(ray, circle, info);
		}

		static ::System::Boolean TestRay3Plane3(::Dest::Math::Ray3& ray, ::Dest::Math::Plane3& plane, ::Dest::Math::IntersectionTypes& intersectionType)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray3&, ::Dest::Math::Plane3&, ::Dest::Math::IntersectionTypes&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTRAY3PLANE3_OFFSET))(ray, plane, intersectionType);
		}

		static ::System::Boolean TestRay3Plane3_1(::Dest::Math::Ray3& ray, ::Dest::Math::Plane3& plane)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray3&, ::Dest::Math::Plane3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTRAY3PLANE3_1_OFFSET))(ray, plane);
		}

		static ::System::Boolean FindRay3Plane3(::Dest::Math::Ray3& ray, ::Dest::Math::Plane3& plane, ::Dest::Math::Ray3Plane3Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray3&, ::Dest::Math::Plane3&, ::Dest::Math::Ray3Plane3Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDRAY3PLANE3_OFFSET))(ray, plane, info);
		}

		static ::System::Boolean TestRay3Polygon3(::Dest::Math::Ray3& ray, ::Dest::Math::Polygon3* polygon)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray3&, ::Dest::Math::Polygon3*))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTRAY3POLYGON3_OFFSET))(ray, polygon);
		}

		static ::System::Boolean FindRay3Polygon3(::Dest::Math::Ray3& ray, ::Dest::Math::Polygon3* polygon, ::Dest::Math::Ray3Polygon3Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray3&, ::Dest::Math::Polygon3*, ::Dest::Math::Ray3Polygon3Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDRAY3POLYGON3_OFFSET))(ray, polygon, info);
		}

		static ::System::Boolean TestRay3Rectangle3(::Dest::Math::Ray3& ray, ::Dest::Math::Rectangle3& rectangle)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray3&, ::Dest::Math::Rectangle3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTRAY3RECTANGLE3_OFFSET))(ray, rectangle);
		}

		static ::System::Boolean FindRay3Rectangle3(::Dest::Math::Ray3& ray, ::Dest::Math::Rectangle3& rectangle, ::Dest::Math::Ray3Rectangle3Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray3&, ::Dest::Math::Rectangle3&, ::Dest::Math::Ray3Rectangle3Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDRAY3RECTANGLE3_OFFSET))(ray, rectangle, info);
		}

		static ::System::Boolean TestRay3Sphere3(::Dest::Math::Ray3& ray, ::Dest::Math::Sphere3& sphere)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray3&, ::Dest::Math::Sphere3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTRAY3SPHERE3_OFFSET))(ray, sphere);
		}

		static ::System::Boolean FindRay3Sphere3(::Dest::Math::Ray3& ray, ::Dest::Math::Sphere3& sphere, ::Dest::Math::Ray3Sphere3Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray3&, ::Dest::Math::Sphere3&, ::Dest::Math::Ray3Sphere3Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDRAY3SPHERE3_OFFSET))(ray, sphere, info);
		}

		static ::System::Boolean TestRay3Triangle3(::Dest::Math::Ray3& ray, ::Dest::Math::Triangle3& triangle, ::Dest::Math::IntersectionTypes& intersectionType)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray3&, ::Dest::Math::Triangle3&, ::Dest::Math::IntersectionTypes&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTRAY3TRIANGLE3_OFFSET))(ray, triangle, intersectionType);
		}

		static ::System::Boolean TestRay3Triangle3_1(::Dest::Math::Ray3& ray, ::UnityEngine::Vector3& v0, ::UnityEngine::Vector3& v1, ::UnityEngine::Vector3& v2, ::Dest::Math::IntersectionTypes& intersectionType)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::Dest::Math::IntersectionTypes&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTRAY3TRIANGLE3_1_OFFSET))(ray, v0, v1, v2, intersectionType);
		}

		static ::System::Boolean TestRay3Triangle3_2(::Dest::Math::Ray3& ray, ::UnityEngine::Vector3 v0, ::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2, ::Dest::Math::IntersectionTypes& intersectionType)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray3&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Dest::Math::IntersectionTypes&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTRAY3TRIANGLE3_2_OFFSET))(ray, v0, v1, v2, intersectionType);
		}

		static ::System::Boolean TestRay3Triangle3_3(::Dest::Math::Ray3& ray, ::Dest::Math::Triangle3& triangle)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray3&, ::Dest::Math::Triangle3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTRAY3TRIANGLE3_3_OFFSET))(ray, triangle);
		}

		static ::System::Boolean TestRay3Triangle3_4(::Dest::Math::Ray3& ray, ::UnityEngine::Vector3& v0, ::UnityEngine::Vector3& v1, ::UnityEngine::Vector3& v2)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTRAY3TRIANGLE3_4_OFFSET))(ray, v0, v1, v2);
		}

		static ::System::Boolean TestRay3Triangle3_5(::Dest::Math::Ray3& ray, ::UnityEngine::Vector3 v0, ::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray3&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTRAY3TRIANGLE3_5_OFFSET))(ray, v0, v1, v2);
		}

		static ::System::Boolean FindRay3Triangle3(::Dest::Math::Ray3& ray, ::Dest::Math::Triangle3& triangle, ::Dest::Math::Ray3Triangle3Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray3&, ::Dest::Math::Triangle3&, ::Dest::Math::Ray3Triangle3Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDRAY3TRIANGLE3_OFFSET))(ray, triangle, info);
		}

		static ::System::Boolean FindRay3Triangle3_1(::Dest::Math::Ray3& ray, ::UnityEngine::Vector3& v0, ::UnityEngine::Vector3& v1, ::UnityEngine::Vector3& v2, ::Dest::Math::Ray3Triangle3Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::Dest::Math::Ray3Triangle3Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDRAY3TRIANGLE3_1_OFFSET))(ray, v0, v1, v2, info);
		}

		static ::System::Boolean FindRay3Triangle3_2(::Dest::Math::Ray3& ray, ::UnityEngine::Vector3 v0, ::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2, ::Dest::Math::Ray3Triangle3Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Ray3&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Dest::Math::Ray3Triangle3Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDRAY3TRIANGLE3_2_OFFSET))(ray, v0, v1, v2, info);
		}

		static ::System::Boolean TestSegment3AAB3(::Dest::Math::Segment3& segment, ::Dest::Math::AAB3& box)
		{
			return ((::System::Boolean(*)(::Dest::Math::Segment3&, ::Dest::Math::AAB3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTSEGMENT3AAB3_OFFSET))(segment, box);
		}

		static ::System::Boolean FindSegment3AAB3(::Dest::Math::Segment3& segment, ::Dest::Math::AAB3& box, ::Dest::Math::Segment3AAB3Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Segment3&, ::Dest::Math::AAB3&, ::Dest::Math::Segment3AAB3Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDSEGMENT3AAB3_OFFSET))(segment, box, info);
		}

		static ::System::Boolean TestSegment3Box3(::Dest::Math::Segment3& segment, ::Dest::Math::Box3& box)
		{
			return ((::System::Boolean(*)(::Dest::Math::Segment3&, ::Dest::Math::Box3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTSEGMENT3BOX3_OFFSET))(segment, box);
		}

		static ::System::Boolean FindSegment3Box3(::Dest::Math::Segment3& segment, ::Dest::Math::Box3& box, ::Dest::Math::Segment3Box3Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Segment3&, ::Dest::Math::Box3&, ::Dest::Math::Segment3Box3Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDSEGMENT3BOX3_OFFSET))(segment, box, info);
		}

		static ::System::Boolean TestSegment3Circle3(::Dest::Math::Segment3& segment, ::Dest::Math::Circle3& circle)
		{
			return ((::System::Boolean(*)(::Dest::Math::Segment3&, ::Dest::Math::Circle3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTSEGMENT3CIRCLE3_OFFSET))(segment, circle);
		}

		static ::System::Boolean FindSegment3Circle3(::Dest::Math::Segment3& segment, ::Dest::Math::Circle3& circle, ::Dest::Math::Segment3Circle3Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Segment3&, ::Dest::Math::Circle3&, ::Dest::Math::Segment3Circle3Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDSEGMENT3CIRCLE3_OFFSET))(segment, circle, info);
		}

		static ::System::Boolean TestSegment3Plane3(::Dest::Math::Segment3& segment, ::Dest::Math::Plane3& plane, ::Dest::Math::IntersectionTypes& intersectionType)
		{
			return ((::System::Boolean(*)(::Dest::Math::Segment3&, ::Dest::Math::Plane3&, ::Dest::Math::IntersectionTypes&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTSEGMENT3PLANE3_OFFSET))(segment, plane, intersectionType);
		}

		static ::System::Boolean TestSegment3Plane3_1(::Dest::Math::Segment3& segment, ::Dest::Math::Plane3& plane)
		{
			return ((::System::Boolean(*)(::Dest::Math::Segment3&, ::Dest::Math::Plane3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTSEGMENT3PLANE3_1_OFFSET))(segment, plane);
		}

		static ::System::Boolean FindSegment3Plane3(::Dest::Math::Segment3& segment, ::Dest::Math::Plane3& plane, ::Dest::Math::Segment3Plane3Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Segment3&, ::Dest::Math::Plane3&, ::Dest::Math::Segment3Plane3Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDSEGMENT3PLANE3_OFFSET))(segment, plane, info);
		}

		static ::System::Boolean TestSegment3Polygon3(::Dest::Math::Segment3& segment, ::Dest::Math::Polygon3* polygon)
		{
			return ((::System::Boolean(*)(::Dest::Math::Segment3&, ::Dest::Math::Polygon3*))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTSEGMENT3POLYGON3_OFFSET))(segment, polygon);
		}

		static ::System::Boolean FindSegment3Polygon3(::Dest::Math::Segment3& segment, ::Dest::Math::Polygon3* polygon, ::Dest::Math::Segment3Polygon3Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Segment3&, ::Dest::Math::Polygon3*, ::Dest::Math::Segment3Polygon3Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDSEGMENT3POLYGON3_OFFSET))(segment, polygon, info);
		}

		static ::System::Boolean TestSegment3Rectangle3(::Dest::Math::Segment3& segment, ::Dest::Math::Rectangle3& rectangle)
		{
			return ((::System::Boolean(*)(::Dest::Math::Segment3&, ::Dest::Math::Rectangle3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTSEGMENT3RECTANGLE3_OFFSET))(segment, rectangle);
		}

		static ::System::Boolean FindSegment3Rectangle3(::Dest::Math::Segment3& segment, ::Dest::Math::Rectangle3& rectangle, ::Dest::Math::Segment3Rectangle3Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Segment3&, ::Dest::Math::Rectangle3&, ::Dest::Math::Segment3Rectangle3Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDSEGMENT3RECTANGLE3_OFFSET))(segment, rectangle, info);
		}

		static ::System::Boolean TestSegment3Sphere3(::Dest::Math::Segment3& segment, ::Dest::Math::Sphere3& sphere)
		{
			return ((::System::Boolean(*)(::Dest::Math::Segment3&, ::Dest::Math::Sphere3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTSEGMENT3SPHERE3_OFFSET))(segment, sphere);
		}

		static ::System::Boolean FindSegment3Sphere3(::Dest::Math::Segment3& segment, ::Dest::Math::Sphere3& sphere, ::Dest::Math::Segment3Sphere3Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Segment3&, ::Dest::Math::Sphere3&, ::Dest::Math::Segment3Sphere3Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDSEGMENT3SPHERE3_OFFSET))(segment, sphere, info);
		}

		static ::System::Boolean TestSegment3Triangle3(::Dest::Math::Segment3& segment, ::Dest::Math::Triangle3& triangle, ::Dest::Math::IntersectionTypes& intersectionType)
		{
			return ((::System::Boolean(*)(::Dest::Math::Segment3&, ::Dest::Math::Triangle3&, ::Dest::Math::IntersectionTypes&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTSEGMENT3TRIANGLE3_OFFSET))(segment, triangle, intersectionType);
		}

		static ::System::Boolean TestSegment3Triangle3_1(::Dest::Math::Segment3& segment, ::UnityEngine::Vector3& v0, ::UnityEngine::Vector3& v1, ::UnityEngine::Vector3& v2, ::Dest::Math::IntersectionTypes& intersectionType)
		{
			return ((::System::Boolean(*)(::Dest::Math::Segment3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::Dest::Math::IntersectionTypes&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTSEGMENT3TRIANGLE3_1_OFFSET))(segment, v0, v1, v2, intersectionType);
		}

		static ::System::Boolean TestSegment3Triangle3_2(::Dest::Math::Segment3& segment, ::UnityEngine::Vector3 v0, ::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2, ::Dest::Math::IntersectionTypes& intersectionType)
		{
			return ((::System::Boolean(*)(::Dest::Math::Segment3&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Dest::Math::IntersectionTypes&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTSEGMENT3TRIANGLE3_2_OFFSET))(segment, v0, v1, v2, intersectionType);
		}

		static ::System::Boolean TestSegment3Triangle3_3(::Dest::Math::Segment3& segment, ::Dest::Math::Triangle3& triangle)
		{
			return ((::System::Boolean(*)(::Dest::Math::Segment3&, ::Dest::Math::Triangle3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTSEGMENT3TRIANGLE3_3_OFFSET))(segment, triangle);
		}

		static ::System::Boolean TestSegment3Triangle3_4(::Dest::Math::Segment3& segment, ::UnityEngine::Vector3& v0, ::UnityEngine::Vector3& v1, ::UnityEngine::Vector3& v2)
		{
			return ((::System::Boolean(*)(::Dest::Math::Segment3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTSEGMENT3TRIANGLE3_4_OFFSET))(segment, v0, v1, v2);
		}

		static ::System::Boolean TestSegment3Triangle3_5(::Dest::Math::Segment3& segment, ::UnityEngine::Vector3 v0, ::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2)
		{
			return ((::System::Boolean(*)(::Dest::Math::Segment3&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTSEGMENT3TRIANGLE3_5_OFFSET))(segment, v0, v1, v2);
		}

		static ::System::Boolean FindSegment3Triangle3(::Dest::Math::Segment3& segment, ::Dest::Math::Triangle3& triangle, ::Dest::Math::Segment3Triangle3Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Segment3&, ::Dest::Math::Triangle3&, ::Dest::Math::Segment3Triangle3Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDSEGMENT3TRIANGLE3_OFFSET))(segment, triangle, info);
		}

		static ::System::Boolean FindSegment3Triangle3_1(::Dest::Math::Segment3& segment, ::UnityEngine::Vector3& v0, ::UnityEngine::Vector3& v1, ::UnityEngine::Vector3& v2, ::Dest::Math::Segment3Triangle3Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Segment3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::Dest::Math::Segment3Triangle3Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDSEGMENT3TRIANGLE3_1_OFFSET))(segment, v0, v1, v2, info);
		}

		static ::System::Boolean FindSegment3Triangle3_2(::Dest::Math::Segment3& segment, ::UnityEngine::Vector3 v0, ::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2, ::Dest::Math::Segment3Triangle3Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Segment3&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Dest::Math::Segment3Triangle3Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDSEGMENT3TRIANGLE3_2_OFFSET))(segment, v0, v1, v2, info);
		}

		static ::System::Boolean TestSphere3Sphere3(::Dest::Math::Sphere3& sphere0, ::Dest::Math::Sphere3& sphere1)
		{
			return ((::System::Boolean(*)(::Dest::Math::Sphere3&, ::Dest::Math::Sphere3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTSPHERE3SPHERE3_OFFSET))(sphere0, sphere1);
		}

		static ::System::Boolean FindSphere3Sphere3(::Dest::Math::Sphere3& sphere0, ::Dest::Math::Sphere3& sphere1, ::Dest::Math::Sphere3Sphere3Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Sphere3&, ::Dest::Math::Sphere3&, ::Dest::Math::Sphere3Sphere3Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDSPHERE3SPHERE3_OFFSET))(sphere0, sphere1, info);
		}

		static ::System::Void ProjectOntoAxis(::Dest::Math::Triangle3& triangle, ::UnityEngine::Vector3& axis, ::System::Single& fmin, ::System::Single& fmax)
		{
			return ((::System::Void(*)(::Dest::Math::Triangle3&, ::UnityEngine::Vector3&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_PROJECTONTOAXIS_OFFSET))(triangle, axis, fmin, fmax);
		}

		static ::System::Void TrianglePlaneRelations(::Dest::Math::Triangle3& triangle, ::Dest::Math::Plane3& plane, ::System::Single& dist0, ::System::Single& dist1, ::System::Single& dist2, ::System::Int32& sign0, ::System::Int32& sign1, ::System::Int32& sign2, ::System::Int32& positive, ::System::Int32& negative, ::System::Int32& zero)
		{
			return ((::System::Void(*)(::Dest::Math::Triangle3&, ::Dest::Math::Plane3&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Int32&, ::System::Int32&, ::System::Int32&, ::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TRIANGLEPLANERELATIONS_OFFSET))(triangle, plane, dist0, dist1, dist2, sign0, sign1, sign2, positive, negative, zero);
		}

		static ::System::Boolean TrianglePlaneRelationsQuick(::Dest::Math::Triangle3& triangle, ::Dest::Math::Plane3& plane)
		{
			return ((::System::Boolean(*)(::Dest::Math::Triangle3&, ::Dest::Math::Plane3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TRIANGLEPLANERELATIONSQUICK_OFFSET))(triangle, plane);
		}

		static ::System::Boolean IntersectsSegment(::Dest::Math::Plane3& plane, ::Dest::Math::Triangle3& triangle, ::UnityEngine::Vector3& end0, ::UnityEngine::Vector3& end1, ::System::Boolean grazing, ::Dest::Math::Triangle3Triangle3Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Plane3&, ::Dest::Math::Triangle3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Boolean, ::Dest::Math::Triangle3Triangle3Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_INTERSECTSSEGMENT_OFFSET))(plane, triangle, end0, end1, grazing, info);
		}

		static ::System::Int32 QueryToLine(::UnityEngine::Vector2& test, ::UnityEngine::Vector2& vec0, ::UnityEngine::Vector2& vec1)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_QUERYTOLINE_OFFSET))(test, vec0, vec1);
		}

		static ::System::Int32 QueryToTriangle(::UnityEngine::Vector2& test, ::UnityEngine::Vector2& v0, ::UnityEngine::Vector2& v1, ::UnityEngine::Vector2& v2)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_QUERYTOTRIANGLE_OFFSET))(test, v0, v1, v2);
		}

		static ::System::Boolean ContainsPoint(::Dest::Math::Triangle3& triangle, ::Dest::Math::Plane3& plane, ::UnityEngine::Vector3& point, ::Dest::Math::Triangle3Triangle3Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Triangle3&, ::Dest::Math::Plane3&, ::UnityEngine::Vector3&, ::Dest::Math::Triangle3Triangle3Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_CONTAINSPOINT_OFFSET))(triangle, plane, point, info);
		}

		static ::System::Boolean GetCoplanarIntersection(::Dest::Math::Plane3& plane, ::Dest::Math::Triangle3& tri0, ::Dest::Math::Triangle3& tri1, ::Dest::Math::Triangle3Triangle3Intr& info)
		{
			return ((::System::Boolean(*)(::Dest::Math::Plane3&, ::Dest::Math::Triangle3&, ::Dest::Math::Triangle3&, ::Dest::Math::Triangle3Triangle3Intr&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_GETCOPLANARINTERSECTION_OFFSET))(plane, tri0, tri1, info);
		}

		static ::System::Boolean TestTriangle3Triangle3(::Dest::Math::Triangle3& triangle0, ::Dest::Math::Triangle3& triangle1, ::Dest::Math::IntersectionTypes& intersectionType)
		{
			return ((::System::Boolean(*)(::Dest::Math::Triangle3&, ::Dest::Math::Triangle3&, ::Dest::Math::IntersectionTypes&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTTRIANGLE3TRIANGLE3_OFFSET))(triangle0, triangle1, intersectionType);
		}

		static ::System::Boolean TestTriangle3Triangle3_1(::Dest::Math::Triangle3& triangle0, ::Dest::Math::Triangle3& triangle1)
		{
			return ((::System::Boolean(*)(::Dest::Math::Triangle3&, ::Dest::Math::Triangle3&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_TESTTRIANGLE3TRIANGLE3_1_OFFSET))(triangle0, triangle1);
		}

		static ::System::Boolean FindTriangle3Triangle3(::Dest::Math::Triangle3& triangle0, ::Dest::Math::Triangle3& triangle1, ::Dest::Math::Triangle3Triangle3Intr& info, ::System::Boolean reportCoplanarIntersections)
		{
			return ((::System::Boolean(*)(::Dest::Math::Triangle3&, ::Dest::Math::Triangle3&, ::Dest::Math::Triangle3Triangle3Intr&, ::System::Boolean))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDTRIANGLE3TRIANGLE3_OFFSET))(triangle0, triangle1, info, reportCoplanarIntersections);
		}

		static ::System::Single get_IntervalThreshold()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_GET_INTERVALTHRESHOLD_OFFSET))();
		}

		static ::System::Void set_IntervalThreshold(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_SET_INTERVALTHRESHOLD_OFFSET))(value);
		}

		static ::System::Single get_DotThreshold()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_GET_DOTTHRESHOLD_OFFSET))();
		}

		static ::System::Void set_DotThreshold(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_SET_DOTTHRESHOLD_OFFSET))(value);
		}

		static ::System::Single get_DistanceThreshold()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_GET_DISTANCETHRESHOLD_OFFSET))();
		}

		static ::System::Void set_DistanceThreshold(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_SET_DISTANCETHRESHOLD_OFFSET))(value);
		}

		static ::System::Int32 FindSegment1Segment1(::System::Single seg0Start, ::System::Single seg0End, ::System::Single seg1Start, ::System::Single seg1End, ::System::Single& w0, ::System::Single& w1)
		{
			return ((::System::Int32(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + DEST_MATH_INTERSECTION_FINDSEGMENT1SEGMENT1_OFFSET))(seg0Start, seg0End, seg1Start, seg1End, w0, w1);
		}
	};
}

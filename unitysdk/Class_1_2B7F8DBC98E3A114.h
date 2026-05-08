#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2B7F8DBC98E3A114_Struct_2_4161BE185FEEB39A.h"
#include "unitysdk/Class_1_2B7F8DBC98E3A114_Struct_2_A7C0D552EBD368AE.h"
#include "unitysdk/Enum_3_010E9109C73EF1D1.h"
#include "unitysdk/Enum_3_231342C5F8BF8D7C.h"
#include "unitysdk/Enum_3_92EDBC2AD8437DA6.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EUILayoutPlatform.h"
#include "unitysdk/MoleMole/UIAdaptData_Enum_3_39283DF3D247B462.h"
#include "unitysdk/MoleMole/UIAspectRatioHandler_Enum_3_8133209C937485A0.h"
#include "unitysdk/MoleMole/UISafeAreaHandler_Enum_3_D5D7F86936BE5D0C.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraRenderType.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_2B7F8DBC98E3A114_Class_1_17337B415D77F6FB;
class Class_1_2B7F8DBC98E3A114_Class_1_AAD0F9E611D8A5E7;
class Class_1_2B7F8DBC98E3A114_Class_2_C9B90638FEF9B149;
class Class_1_2B7F8DBC98E3A114_Class_2_D0E5D08B5E00E7F3;
class Class_1_9B770640315E1C6B;
class Class_1_FC3A9C07FC781527;
namespace MoleMole { class UIAdaptData; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIBlackEdge; }
namespace MoleMole { class UIButtonPosDummyDialogPopWindowController; }
namespace MoleMole { class UIFormalVersionTipsPopWindowController; }
namespace MoleMole { class UIHorizontalBlackEdge; }
namespace MoleMole { class UIWindowController; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class EventSystem; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::UI { class Image; }

#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_00605CD46BC5ED28_1_OFFSET UNITYSDK_OFFSET(0x13829690)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_00605CD46BC5ED28_OFFSET UNITYSDK_OFFSET(0x13827150)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_046C2BFE6915DB71_OFFSET UNITYSDK_OFFSET(0x13824EF0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_08F456DAF4329D84_OFFSET UNITYSDK_OFFSET(0x1381EB30)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_0C29DEAAEA33A50D_OFFSET UNITYSDK_OFFSET(0x1382D7A0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_0D025125E9AE757D_OFFSET UNITYSDK_OFFSET(0x13828770)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_1006C351D0F01407_1_OFFSET UNITYSDK_OFFSET(0x1382C400)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_1006C351D0F01407_OFFSET UNITYSDK_OFFSET(0x13821900)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x138225B0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_1324762D97944213_OFFSET UNITYSDK_OFFSET(0x13827190)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_1591025242090421_1_OFFSET UNITYSDK_OFFSET(0x1381FC60)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_1591025242090421_2_OFFSET UNITYSDK_OFFSET(0x13827510)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_1591025242090421_3_OFFSET UNITYSDK_OFFSET(0x1382E730)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_1591025242090421_OFFSET UNITYSDK_OFFSET(0x1381B590)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_1B709936FC68B7D3_OFFSET UNITYSDK_OFFSET(0x13823820)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_1C17CA88F7039020_OFFSET UNITYSDK_OFFSET(0x13822D50)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_1DD8C13D1AC30847_OFFSET UNITYSDK_OFFSET(0x13822750)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_1DE63FE11FA0D5B4_OFFSET UNITYSDK_OFFSET(0x13826050)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_2027387AC7B01EC1_OFFSET UNITYSDK_OFFSET(0x1382DBB0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_228E3444D290BEE7_OFFSET UNITYSDK_OFFSET(0x13827FD0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_2358815C82467FA9_OFFSET UNITYSDK_OFFSET(0x13824C40)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_2479DB6829DABC35_OFFSET UNITYSDK_OFFSET(0x13829D30)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_28F41EBE92BC4E85_OFFSET UNITYSDK_OFFSET(0x1382EC10)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_2BBEBCAB803DA2B9_OFFSET UNITYSDK_OFFSET(0x13826890)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_2C1CB8E31145ABDA_OFFSET UNITYSDK_OFFSET(0x1382D940)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_2CBB0F6A48E46BD8_OFFSET UNITYSDK_OFFSET(0x1382AB10)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_2FF29BEE29C8F3AF_1_OFFSET UNITYSDK_OFFSET(0x138284F0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_2FF29BEE29C8F3AF_OFFSET UNITYSDK_OFFSET(0x13825FF0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x138211D0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_33C5253FE45F785C_OFFSET UNITYSDK_OFFSET(0x1381D7D0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_3454FEB5709E460D_1_OFFSET UNITYSDK_OFFSET(0x13822EC0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_3454FEB5709E460D_OFFSET UNITYSDK_OFFSET(0x13822970)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_351060D64F7F438E_OFFSET UNITYSDK_OFFSET(0x13824E50)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_3574512695A597AB_OFFSET UNITYSDK_OFFSET(0x1382E3A0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_361C06486F56B4E7_OFFSET UNITYSDK_OFFSET(0x1382B1C0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_3708CF9C01F023A9_OFFSET UNITYSDK_OFFSET(0x137C89A0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_3930520F0E246403_OFFSET UNITYSDK_OFFSET(0x1381E3D0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_3BC578EAB014DDA0_OFFSET UNITYSDK_OFFSET(0x13825030)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_3CA8E1DB376B0A02_OFFSET UNITYSDK_OFFSET(0x13822380)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_3D3BE5657B306B8B_OFFSET UNITYSDK_OFFSET(0x13821FE0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_41EC8E0AD6EE8093_OFFSET UNITYSDK_OFFSET(0x13820680)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_43405ADFBB5338CB_1_OFFSET UNITYSDK_OFFSET(0x1382BE00)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_43405ADFBB5338CB_OFFSET UNITYSDK_OFFSET(0x1381BC70)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_4536DE18DC294F06_1_OFFSET UNITYSDK_OFFSET(0x1381FFE0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_4536DE18DC294F06_2_OFFSET UNITYSDK_OFFSET(0x138265A0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_4536DE18DC294F06_3_OFFSET UNITYSDK_OFFSET(0x13826980)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_4536DE18DC294F06_OFFSET UNITYSDK_OFFSET(0x1381FD80)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_47678B0834F8438A_OFFSET UNITYSDK_OFFSET(0x1382C0C0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x138296D0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_4AB64A83443FB826_OFFSET UNITYSDK_OFFSET(0x1382A5E0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_4B4AB287981AAA45_OFFSET UNITYSDK_OFFSET(0x138257F0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_4BEFBBCBE4D0C052_OFFSET UNITYSDK_OFFSET(0x1381CBF0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_52C18C0DA8AC23E5_OFFSET UNITYSDK_OFFSET(0x1381E450)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_52D7762668092C01_OFFSET UNITYSDK_OFFSET(0x1382C3A0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_52F05A9FA300CA21_OFFSET UNITYSDK_OFFSET(0x1382EC70)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_5555B223E1B24E4D_OFFSET UNITYSDK_OFFSET(0x138246C0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_561A336AE697C2E7_1_OFFSET UNITYSDK_OFFSET(0x13828B80)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_561A336AE697C2E7_OFFSET UNITYSDK_OFFSET(0x13823C50)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1381EAF0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_59FC201B63A994EA_OFFSET UNITYSDK_OFFSET(0x1382CA60)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_5A2B373D7AACBAC6_1_OFFSET UNITYSDK_OFFSET(0x137C8920)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_5A2B373D7AACBAC6_OFFSET UNITYSDK_OFFSET(0x13826520)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_5ACE4689A2EA70A3_OFFSET UNITYSDK_OFFSET(0x1381FB20)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_5BE35B0FEB4A10AB_OFFSET UNITYSDK_OFFSET(0x13820340)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_678D73C32AB0B7F4_OFFSET UNITYSDK_OFFSET(0x137FAEA0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_67C5C9CBD485D5EC_OFFSET UNITYSDK_OFFSET(0x1381B930)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_6AA581BE0B50758A_OFFSET UNITYSDK_OFFSET(0x13821440)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x1381E180)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_6E94FC77130235DD_OFFSET UNITYSDK_OFFSET(0x1382ADE0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_72542D6B52D4A0D9_OFFSET UNITYSDK_OFFSET(0x138277A0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_73E933E1F20A9B8E_1_OFFSET UNITYSDK_OFFSET(0x138288E0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_73E933E1F20A9B8E_2_OFFSET UNITYSDK_OFFSET(0x1382C8B0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_73E933E1F20A9B8E_OFFSET UNITYSDK_OFFSET(0x138275F0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_740C7E7AC2B70698_OFFSET UNITYSDK_OFFSET(0x1382C6D0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_7D008406A3311600_1_OFFSET UNITYSDK_OFFSET(0x1382A740)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_7D008406A3311600_2_OFFSET UNITYSDK_OFFSET(0x1382CFD0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_7D008406A3311600_3_OFFSET UNITYSDK_OFFSET(0x1382D290)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_7D008406A3311600_OFFSET UNITYSDK_OFFSET(0x1381B670)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x1382AA00)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_80EB5729F71633D3_OFFSET UNITYSDK_OFFSET(0x13823310)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_81A208F27DC70FE1_OFFSET UNITYSDK_OFFSET(0x1382E310)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_81E9B794F20E5530_OFFSET UNITYSDK_OFFSET(0x13826800)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_81FBB65B87DD9C7C_OFFSET UNITYSDK_OFFSET(0x1382E980)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_85605416D9FEC024_OFFSET UNITYSDK_OFFSET(0x1382A500)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_87AE162B26227D62_OFFSET UNITYSDK_OFFSET(0x13829250)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_89029C5C04554B5A_1_OFFSET UNITYSDK_OFFSET(0x13828A90)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_89029C5C04554B5A_OFFSET UNITYSDK_OFFSET(0x13828460)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_8DF47EF45ABD2A6C_OFFSET UNITYSDK_OFFSET(0x13829020)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_94E61FAF94E8BB68_OFFSET UNITYSDK_OFFSET(0x1382DFE0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_97095D132C79BDB6_OFFSET UNITYSDK_OFFSET(0x1382BF50)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_976E8FC3F80FD669_OFFSET UNITYSDK_OFFSET(0x1382D820)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x13820F20)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_9B08052B40B4CA88_OFFSET UNITYSDK_OFFSET(0x13828250)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0x138237C0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_9CB1E19D9AB035C7_OFFSET UNITYSDK_OFFSET(0x138245F0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_A0ECCE7BE1C3463C_OFFSET UNITYSDK_OFFSET(0x1382C850)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_A6544B958241856F_1_OFFSET UNITYSDK_OFFSET(0x1382AB50)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_A6544B958241856F_2_OFFSET UNITYSDK_OFFSET(0x1382B2E0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0x13826290)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_A66194F2452EB71A_OFFSET UNITYSDK_OFFSET(0x13821A10)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_A69FA5E6168C596B_OFFSET UNITYSDK_OFFSET(0x1382DC60)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_A916AA0EA1B6E7C3_1_OFFSET UNITYSDK_OFFSET(0x13827C70)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_A916AA0EA1B6E7C3_OFFSET UNITYSDK_OFFSET(0x13825480)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_AB023B529554A421_OFFSET UNITYSDK_OFFSET(0x138286F0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_AE6D44E5602930B4_OFFSET UNITYSDK_OFFSET(0x13825220)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_AF536B4FA9CCEAB1_OFFSET UNITYSDK_OFFSET(0x1382D880)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x13820240)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_B5CA07811A0FF93E_OFFSET UNITYSDK_OFFSET(0x1382A120)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_B732DC7FA82BA621_OFFSET UNITYSDK_OFFSET(0x13829C40)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_B7A1773B239604AE_OFFSET UNITYSDK_OFFSET(0x1382E810)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_B892007B9247C983_OFFSET UNITYSDK_OFFSET(0x138207D0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_BB471A493C07AFDD_OFFSET UNITYSDK_OFFSET(0x13825CB0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_BCDB700847639204_1_OFFSET UNITYSDK_OFFSET(0x13822A90)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_BCDB700847639204_2_OFFSET UNITYSDK_OFFSET(0x13822BF0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_BCDB700847639204_OFFSET UNITYSDK_OFFSET(0x138221C0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_BD7A35330179A0D1_OFFSET UNITYSDK_OFFSET(0x13825E00)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_BF273DF77E3F120D_OFFSET UNITYSDK_OFFSET(0x13825160)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_BF3A97FF800F0C24_OFFSET UNITYSDK_OFFSET(0x13828550)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_BFAD4C99E9F71448_OFFSET UNITYSDK_OFFSET(0x1382D8E0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_C01B934C750A499D_1_OFFSET UNITYSDK_OFFSET(0x1381E9D0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_C01B934C750A499D_2_OFFSET UNITYSDK_OFFSET(0x1382A3E0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_C01B934C750A499D_OFFSET UNITYSDK_OFFSET(0x1381E8B0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_C0A65B048C8DFBEB_OFFSET UNITYSDK_OFFSET(0x1382DE90)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_C785EDDA4E40810E_OFFSET UNITYSDK_OFFSET(0x1381BDC0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_CC05DA97EA1F6B71_OFFSET UNITYSDK_OFFSET(0x1382CD00)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0x138280E0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_CE34EA208837238D_1_OFFSET UNITYSDK_OFFSET(0x13828B20)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_CE34EA208837238D_2_OFFSET UNITYSDK_OFFSET(0x1382A0C0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_CE34EA208837238D_3_OFFSET UNITYSDK_OFFSET(0x1382E6D0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x13822320)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_CEC148CBBF17D7FA_OFFSET UNITYSDK_OFFSET(0x1382CE50)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_CFA546D6485CBBE9_1_OFFSET UNITYSDK_OFFSET(0x13827B50)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_CFA546D6485CBBE9_OFFSET UNITYSDK_OFFSET(0x13821320)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_D38261AE637DE579_OFFSET UNITYSDK_OFFSET(0x1382B8B0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_D3F021A111FDC1ED_OFFSET UNITYSDK_OFFSET(0x1382C510)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_D7FD223B1C7725DB_OFFSET UNITYSDK_OFFSET(0x1381D1C0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_DAA55E2C66DABEB7_OFFSET UNITYSDK_OFFSET(0x13824910)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_DDD89A8FCB76301A_OFFSET UNITYSDK_OFFSET(0x13826BE0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_E1BCA48B9C253544_1_OFFSET UNITYSDK_OFFSET(0x13822FE0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_E1BCA48B9C253544_2_OFFSET UNITYSDK_OFFSET(0x138242C0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_E1BCA48B9C253544_3_OFFSET UNITYSDK_OFFSET(0x13829310)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_E1BCA48B9C253544_OFFSET UNITYSDK_OFFSET(0x138215D0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_E34FC0C9D344902E_OFFSET UNITYSDK_OFFSET(0x13827060)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_E3812F04B2228A8B_1_OFFSET UNITYSDK_OFFSET(0x1382BD50)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_E3812F04B2228A8B_OFFSET UNITYSDK_OFFSET(0x1381BBC0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_E7C23E2BE6DA1D19_OFFSET UNITYSDK_OFFSET(0x13821AC0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x138282B0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_E9D938B6A30770AD_OFFSET UNITYSDK_OFFSET(0x1382B160)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_EA6B0E809A0B8006_OFFSET UNITYSDK_OFFSET(0x1381E7F0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_EB77E3EEF08CBAF2_OFFSET UNITYSDK_OFFSET(0x13829F50)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_EC178BD852BE8117_OFFSET UNITYSDK_OFFSET(0x137CEF70)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_EF3D64A6B19EC565_OFFSET UNITYSDK_OFFSET(0x1382D550)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x138212E0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1381FD40)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_F76A12B07E6355C4_OFFSET UNITYSDK_OFFSET(0x138240F0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_F7CCB9B57C3ED3D5_OFFSET UNITYSDK_OFFSET(0x1381E770)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_FB412E022C7694AA_OFFSET UNITYSDK_OFFSET(0x13823A90)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_FD05468BC349B911_OFFSET UNITYSDK_OFFSET(0x1382CAE0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_FD388C2755B5FCCC_OFFSET UNITYSDK_OFFSET(0x13829640)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_FDBF597D0828B2D4_OFFSET UNITYSDK_OFFSET(0x13820A50)
#define CLASS_1_2B7F8DBC98E3A114__CCTOR_OFFSET UNITYSDK_OFFSET(0x1381AC60)
#define CLASS_1_2B7F8DBC98E3A114__CTOR_OFFSET UNITYSDK_OFFSET(0x1381AC50)

inline static constexpr unsigned int Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex = 82380;

class Class_1_2B7F8DBC98E3A114 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_4()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BE60);
	}
	static ::UnityEngine::Rendering::Volume** StaticGet_Field_1_51()
	{
		return (::UnityEngine::Rendering::Volume**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BE68);
	}
	static ::Class_1_2B7F8DBC98E3A114_Class_2_C9B90638FEF9B149** StaticGet_Field_1_19()
	{
		return (::Class_1_2B7F8DBC98E3A114_Class_2_C9B90638FEF9B149**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BE70);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>** StaticGet_Field_1_48()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BE78);
	}
	static ::Class_1_FC3A9C07FC781527** StaticGet_Field_1_30()
	{
		return (::Class_1_FC3A9C07FC781527**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BE80);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_Field_1_69()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BE88);
	}
	static ::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>** StaticGet_Field_1_35()
	{
		return (::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BE90);
	}
	static ::System::String** StaticGet_Field_1_3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BE98);
	}
	static ::MoleMole::UIFormalVersionTipsPopWindowController** StaticGet_Field_1_52()
	{
		return (::MoleMole::UIFormalVersionTipsPopWindowController**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BEA0);
	}
	static ::UnityEngine::Material** StaticGet_Field_1_58()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BEA8);
	}
	static ::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>** StaticGet_Field_1_36()
	{
		return (::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BEB0);
	}
	static ::Class_1_9B770640315E1C6B** StaticGet_Field_1_21()
	{
		return (::Class_1_9B770640315E1C6B**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BEB8);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::UIHorizontalBlackEdge*>** StaticGet_Field_1_46()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::UIHorizontalBlackEdge*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BEC0);
	}
	static ::UnityEngine::Camera** StaticGet_Field_1_38()
	{
		return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BEC8);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::UIBlackEdge*>** StaticGet_Field_1_43()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::UIBlackEdge*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BED0);
	}
	static ::UnityEngine::Camera** StaticGet_Field_1_39()
	{
		return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BED8);
	}
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_010E9109C73EF1D1, ::System::Boolean>** StaticGet_Field_1_67()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_010E9109C73EF1D1, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BEE0);
	}
	static ::Foundation::AssetRequestHandle* StaticGet_Field_1_62()
	{
		return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BEE8);
	}
	static ::Foundation::AssetRequestHandle* StaticGet_Field_1_64()
	{
		return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BF08);
	}
	static ::UnityEngine::Material** StaticGet_Field_1_63()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BF28);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>** StaticGet_Field_1_42()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BF30);
	}
	static ::Foundation::AssetRequestHandle* StaticGet_Field_1_59()
	{
		return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BF38);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Canvas*>** StaticGet_Field_1_41()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Canvas*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BF58);
	}
	static ::System::String** StaticGet_Field_1_32()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BF60);
	}
	static ::UnityEngine::Material** StaticGet_Field_1_60()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BF68);
	}
	static ::UnityEngine::Material** StaticGet_Field_1_61()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BF70);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_37()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BF78);
	}
	static ::UnityEngine::EventSystems::EventSystem** StaticGet_Field_1_40()
	{
		return (::UnityEngine::EventSystems::EventSystem**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BF80);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::UIBlackEdge*>** StaticGet_Field_1_44()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::UIBlackEdge*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BF88);
	}
	static ::Foundation::AssetRequestHandle* StaticGet_Field_1_57()
	{
		return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BF90);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_2B7F8DBC98E3A114_Class_2_D0E5D08B5E00E7F3*>** StaticGet_Field_1_66()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_2B7F8DBC98E3A114_Class_2_D0E5D08B5E00E7F3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BFB0);
	}
	static ::UnityEngine::UI::Image** StaticGet_Field_1_50()
	{
		return (::UnityEngine::UI::Image**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BFB8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_Field_1_33()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BFC0);
	}
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BFC8);
	}
	static ::UnityEngine::Material** StaticGet_Field_1_56()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BFD0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_2B7F8DBC98E3A114_Class_1_17337B415D77F6FB*>** StaticGet_Field_1_65()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_2B7F8DBC98E3A114_Class_1_17337B415D77F6FB*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BFD8);
	}
	static ::Class_1_2B7F8DBC98E3A114_Class_1_AAD0F9E611D8A5E7** StaticGet_Field_1_49()
	{
		return (::Class_1_2B7F8DBC98E3A114_Class_1_AAD0F9E611D8A5E7**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BFE0);
	}
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_231342C5F8BF8D7C, ::System::Boolean>** StaticGet_Field_1_34()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_231342C5F8BF8D7C, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BFE8);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BFF0);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::UIHorizontalBlackEdge*>** StaticGet_Field_1_45()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::UIHorizontalBlackEdge*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2BFF8);
	}
	static ::MoleMole::UIButtonPosDummyDialogPopWindowController** StaticGet_Field_1_53()
	{
		return (::MoleMole::UIButtonPosDummyDialogPopWindowController**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2C000);
	}
	static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_Field_1_24()
	{
		return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2C008);
	}
	static ::UnityEngine::RectTransform** StaticGet_Field_1_47()
	{
		return (::UnityEngine::RectTransform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2C010);
	}
	static ::UnityEngine::GameObject** StaticGet_Field_1_55()
	{
		return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2C018);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::EUILayoutPlatform>** StaticGet_Field_1_70()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::EUILayoutPlatform>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2C020);
	}
	static ::System::Single* StaticGet_Field_1_7()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0xA1E0);
	}
	static ::System::Boolean* StaticGet_Field_1_28()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0xA1E4);
	}
	static ::System::Boolean* StaticGet_Field_1_22()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0xA1E5);
	}
	static ::System::Boolean* StaticGet_Field_1_27()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0xA1E6);
	}
	static ::System::Boolean* StaticGet_Field_1_25()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0xA1E7);
	}
	static ::System::Int32* StaticGet_Field_1_68()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0xA1E8);
	}
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0xA1EC);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_1_5()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0xA1F0);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_1_6()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0xA1F8);
	}
	static ::System::Boolean* StaticGet_Field_1_54()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0xA200);
	}
	static ::System::Boolean* StaticGet_Field_1_26()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0xA201);
	}
	static ::System::Boolean* StaticGet_Field_1_8()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0xA202);
	}
	static ::System::Boolean* StaticGet_Field_1_18()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0xA203);
	}
	static ::Enum_3_92EDBC2AD8437DA6* StaticGet_Field_1_29()
	{
		return (::Enum_3_92EDBC2AD8437DA6*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0xA204);
	}
	static ::System::Boolean* StaticGet_Field_1_23()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0xA208);
	}
	static ::System::Boolean* StaticGet_Field_1_20()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0xA209);
	}
	static ::System::Boolean* StaticGet_Field_1_31()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0xA20A);
	}
	// static const ::System::Int32 Field_1_9 = 0x0; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x1E; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x3C; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x64; // 0x0
	// static const ::System::Int32 Field_1_15 = 0x3E8; // 0x0
	// static const ::System::String* Field_1_16; // 0x0
	// static const ::System::String* Field_1_17; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_1591025242090421(::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_1591025242090421_OFFSET))(a1);
	}

	static ::System::Void Method_1_7D008406A3311600()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_7D008406A3311600_OFFSET))();
	}

	static ::System::Void Method_1_67C5C9CBD485D5EC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_67C5C9CBD485D5EC_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_E3812F04B2228A8B(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_E3812F04B2228A8B_OFFSET))(a1);
	}

	static ::System::Void Method_1_C785EDDA4E40810E(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_C785EDDA4E40810E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4BEFBBCBE4D0C052(::Class_1_2B7F8DBC98E3A114_Struct_2_A7C0D552EBD368AE& a1)
	{
		return ((::System::Void(*)(::Class_1_2B7F8DBC98E3A114_Struct_2_A7C0D552EBD368AE&))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_4BEFBBCBE4D0C052_OFFSET))(a1);
	}

	static ::System::Void Method_1_6D93101E4CE10A96()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_6D93101E4CE10A96_OFFSET))();
	}

	static ::System::Void Method_1_52C18C0DA8AC23E5()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_52C18C0DA8AC23E5_OFFSET))();
	}

	static ::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_1_F7CCB9B57C3ED3D5(::System::Action* a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_F7CCB9B57C3ED3D5_OFFSET))(a1);
	}

	static ::MoleMole::EUILayoutPlatform Method_1_EA6B0E809A0B8006()
	{
		return ((::MoleMole::EUILayoutPlatform(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_EA6B0E809A0B8006_OFFSET))();
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_1_08F456DAF4329D84(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_08F456DAF4329D84_OFFSET))(a1);
	}

	static ::UnityEngine::RectTransform* Method_1_5ACE4689A2EA70A3(::System::Int32 a1)
	{
		return ((::UnityEngine::RectTransform*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_5ACE4689A2EA70A3_OFFSET))(a1);
	}

	static ::System::Void Method_1_1591025242090421_1(::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_1591025242090421_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::UnityEngine::Material* Method_1_4536DE18DC294F06()
	{
		return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_4536DE18DC294F06_OFFSET))();
	}

	static ::UnityEngine::Material* Method_1_4536DE18DC294F06_1()
	{
		return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_4536DE18DC294F06_1_OFFSET))();
	}

	static ::MoleMole::EUILayoutPlatform Method_1_C01B934C750A499D()
	{
		return ((::MoleMole::EUILayoutPlatform(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_C01B934C750A499D_OFFSET))();
	}

	static ::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_B09E78EE7EE4F8FA_OFFSET))();
	}

	static ::System::Boolean Method_1_41EC8E0AD6EE8093()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_41EC8E0AD6EE8093_OFFSET))();
	}

	static ::System::Void Method_1_3930520F0E246403(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_3930520F0E246403_OFFSET))(a1);
	}

	static ::System::Void Method_1_B892007B9247C983(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_B892007B9247C983_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_3708CF9C01F023A9(::MoleMole::EUILayoutPlatform a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::MoleMole::EUILayoutPlatform, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_3708CF9C01F023A9_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_97D83E4CB3B11935_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::MoleMole::UIBlackEdge* Method_1_CFA546D6485CBBE9(::System::Int32 a1)
	{
		return ((::MoleMole::UIBlackEdge*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_CFA546D6485CBBE9_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_6AA581BE0B50758A()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_6AA581BE0B50758A_OFFSET))();
	}

	static ::System::Void Method_1_E1BCA48B9C253544(::System::Int32 a1, ::MoleMole::UIAdaptData_Enum_3_39283DF3D247B462 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::UIAdaptData_Enum_3_39283DF3D247B462, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_E1BCA48B9C253544_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_1006C351D0F01407(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_1006C351D0F01407_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_A66194F2452EB71A(::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* a1, ::UnityEngine::Transform* a2, ::UnityEngine::RectTransform*& a3)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*, ::UnityEngine::Transform*, ::UnityEngine::RectTransform*&))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_A66194F2452EB71A_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_E7C23E2BE6DA1D19(::Enum_3_010E9109C73EF1D1 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::Enum_3_010E9109C73EF1D1, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_E7C23E2BE6DA1D19_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3D3BE5657B306B8B(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_3D3BE5657B306B8B_OFFSET))(a1);
	}

	static ::System::Void Method_1_BCDB700847639204(::MoleMole::EUILayoutPlatform a1)
	{
		return ((::System::Void(*)(::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_BCDB700847639204_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::System::Void Method_1_3CA8E1DB376B0A02(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_3CA8E1DB376B0A02_OFFSET))(a1, a2);
	}

	static ::Class_1_2B7F8DBC98E3A114_Struct_2_4161BE185FEEB39A Method_1_33C5253FE45F785C(::UnityEngine::RectTransform* a1, ::System::Nullable_1<::System::Int32> a2)
	{
		return ((::Class_1_2B7F8DBC98E3A114_Struct_2_4161BE185FEEB39A(*)(::UnityEngine::RectTransform*, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_33C5253FE45F785C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_1290EA767C459179_OFFSET))();
	}

	static ::System::Void Method_1_FDBF597D0828B2D4(::Enum_3_010E9109C73EF1D1 a1)
	{
		return ((::System::Void(*)(::Enum_3_010E9109C73EF1D1))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_FDBF597D0828B2D4_OFFSET))(a1);
	}

	static ::System::Void Method_1_1DD8C13D1AC30847(::System::Action* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_1DD8C13D1AC30847_OFFSET))(a1, a2);
	}

	static ::MoleMole::UIHorizontalBlackEdge* Method_1_3454FEB5709E460D(::System::Int32 a1)
	{
		return ((::MoleMole::UIHorizontalBlackEdge*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_3454FEB5709E460D_OFFSET))(a1);
	}

	static ::UnityEngine::RectTransform* Method_1_D7FD223B1C7725DB(::UnityEngine::RectTransform* a1, ::System::String* a2)
	{
		return ((::UnityEngine::RectTransform*(*)(::UnityEngine::RectTransform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_D7FD223B1C7725DB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BCDB700847639204_1(::MoleMole::EUILayoutPlatform a1)
	{
		return ((::System::Void(*)(::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_BCDB700847639204_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_BCDB700847639204_2(::MoleMole::EUILayoutPlatform a1)
	{
		return ((::System::Void(*)(::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_BCDB700847639204_2_OFFSET))(a1);
	}

	static ::UnityEngine::RectTransform* Method_1_1C17CA88F7039020(::UnityEngine::RectTransform* a1, ::MoleMole::UIAspectRatioHandler_Enum_3_8133209C937485A0 a2)
	{
		return ((::UnityEngine::RectTransform*(*)(::UnityEngine::RectTransform*, ::MoleMole::UIAspectRatioHandler_Enum_3_8133209C937485A0))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_1C17CA88F7039020_OFFSET))(a1, a2);
	}

	static ::MoleMole::UIHorizontalBlackEdge* Method_1_3454FEB5709E460D_1(::System::Int32 a1)
	{
		return ((::MoleMole::UIHorizontalBlackEdge*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_3454FEB5709E460D_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_E1BCA48B9C253544_1(::System::Int32 a1, ::MoleMole::UIAdaptData_Enum_3_39283DF3D247B462 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::UIAdaptData_Enum_3_39283DF3D247B462, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_E1BCA48B9C253544_1_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::EUILayoutPlatform Method_1_80EB5729F71633D3(::System::Boolean a1)
	{
		return ((::MoleMole::EUILayoutPlatform(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_80EB5729F71633D3_OFFSET))(a1);
	}

	static ::Class_1_FC3A9C07FC781527* Method_1_9C06C768B25E4E13()
	{
		return ((::Class_1_FC3A9C07FC781527*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_9C06C768B25E4E13_OFFSET))();
	}

	static ::System::Void Method_1_1B709936FC68B7D3()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_1B709936FC68B7D3_OFFSET))();
	}

	static ::System::String* Method_1_561A336AE697C2E7(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_561A336AE697C2E7_OFFSET))(a1);
	}

	static ::System::Void Method_1_F76A12B07E6355C4(::UnityEngine::Camera* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::UnityEngine::Camera*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_F76A12B07E6355C4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E1BCA48B9C253544_2(::System::Int32 a1, ::MoleMole::UIAdaptData_Enum_3_39283DF3D247B462 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::UIAdaptData_Enum_3_39283DF3D247B462, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_E1BCA48B9C253544_2_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::RectTransform* Method_1_9CB1E19D9AB035C7(::UnityEngine::RectTransform* a1, ::MoleMole::UISafeAreaHandler_Enum_3_D5D7F86936BE5D0C a2)
	{
		return ((::UnityEngine::RectTransform*(*)(::UnityEngine::RectTransform*, ::MoleMole::UISafeAreaHandler_Enum_3_D5D7F86936BE5D0C))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_9CB1E19D9AB035C7_OFFSET))(a1, a2);
	}

	static ::UnityEngine::GameObject* Method_1_5555B223E1B24E4D()
	{
		return ((::UnityEngine::GameObject*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_5555B223E1B24E4D_OFFSET))();
	}

	static ::System::Void Method_1_DAA55E2C66DABEB7(::UnityEngine::Camera* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_DAA55E2C66DABEB7_OFFSET))(a1);
	}

	static ::UnityEngine::Vector2 Method_1_351060D64F7F438E()
	{
		return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_351060D64F7F438E_OFFSET))();
	}

	static ::System::Int32 Method_1_046C2BFE6915DB71(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_046C2BFE6915DB71_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_3BC578EAB014DDA0()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_3BC578EAB014DDA0_OFFSET))();
	}

	static ::UnityEngine::RectTransform* Method_1_BF273DF77E3F120D(::UnityEngine::Transform* a1)
	{
		return ((::UnityEngine::RectTransform*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_BF273DF77E3F120D_OFFSET))(a1);
	}

	static ::System::Void Method_1_5BE35B0FEB4A10AB(::System::Boolean a1, ::Enum_3_231342C5F8BF8D7C a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::Enum_3_231342C5F8BF8D7C))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_5BE35B0FEB4A10AB_OFFSET))(a1, a2);
	}

	static ::MoleMole::EUILayoutPlatform Method_1_C01B934C750A499D_1()
	{
		return ((::MoleMole::EUILayoutPlatform(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_C01B934C750A499D_1_OFFSET))();
	}

	static ::UnityEngine::RectTransform* Method_1_A916AA0EA1B6E7C3(::MoleMole::UIWindowController* a1)
	{
		return ((::UnityEngine::RectTransform*(*)(::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_A916AA0EA1B6E7C3_OFFSET))(a1);
	}

	static ::System::Void Method_1_BD7A35330179A0D1(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_BD7A35330179A0D1_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Camera* Method_1_2FF29BEE29C8F3AF()
	{
		return ((::UnityEngine::Camera*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_2FF29BEE29C8F3AF_OFFSET))();
	}

	static ::System::Void Method_1_1DE63FE11FA0D5B4()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_1DE63FE11FA0D5B4_OFFSET))();
	}

	static ::System::Void Method_1_678D73C32AB0B7F4(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_678D73C32AB0B7F4_OFFSET))(a1);
	}

	static ::System::Void Method_1_A6544B958241856F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_A6544B958241856F_OFFSET))();
	}

	static ::UnityEngine::Camera* Method_1_5A2B373D7AACBAC6()
	{
		return ((::UnityEngine::Camera*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_5A2B373D7AACBAC6_OFFSET))();
	}

	static ::UnityEngine::Material* Method_1_4536DE18DC294F06_2()
	{
		return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_4536DE18DC294F06_2_OFFSET))();
	}

	static ::Class_1_2B7F8DBC98E3A114_Class_1_17337B415D77F6FB* Method_1_43405ADFBB5338CB(::System::Int32 a1)
	{
		return ((::Class_1_2B7F8DBC98E3A114_Class_1_17337B415D77F6FB*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_43405ADFBB5338CB_OFFSET))(a1);
	}

	static ::UnityEngine::RectTransform* Method_1_81E9B794F20E5530(::MoleMole::UIBaseController* a1)
	{
		return ((::UnityEngine::RectTransform*(*)(::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_81E9B794F20E5530_OFFSET))(a1);
	}

	static ::UnityEngine::Material* Method_1_4536DE18DC294F06_3()
	{
		return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_4536DE18DC294F06_3_OFFSET))();
	}

	static ::System::Void Method_1_DDD89A8FCB76301A(::System::Boolean a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_DDD89A8FCB76301A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AE6D44E5602930B4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_AE6D44E5602930B4_OFFSET))(a1);
	}

	static ::System::Void Method_1_E34FC0C9D344902E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_E34FC0C9D344902E_OFFSET))();
	}

	static ::System::Void Method_1_00605CD46BC5ED28(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_00605CD46BC5ED28_OFFSET))(a1);
	}

	static ::System::Nullable_1<::System::Int32> Method_1_1324762D97944213(::UnityEngine::Transform* a1)
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_1324762D97944213_OFFSET))(a1);
	}

	static ::System::Void Method_1_1591025242090421_2(::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_1591025242090421_2_OFFSET))(a1);
	}

	static ::System::Void Method_1_73E933E1F20A9B8E(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_73E933E1F20A9B8E_OFFSET))(a1);
	}

	static ::MoleMole::EUILayoutPlatform Method_1_72542D6B52D4A0D9()
	{
		return ((::MoleMole::EUILayoutPlatform(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_72542D6B52D4A0D9_OFFSET))();
	}

	static ::UnityEngine::RectTransform* Method_1_4B4AB287981AAA45(::UnityEngine::RectTransform* a1, ::System::String* a2)
	{
		return ((::UnityEngine::RectTransform*(*)(::UnityEngine::RectTransform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_4B4AB287981AAA45_OFFSET))(a1, a2);
	}

	static ::MoleMole::UIBlackEdge* Method_1_CFA546D6485CBBE9_1(::System::Int32 a1)
	{
		return ((::MoleMole::UIBlackEdge*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_CFA546D6485CBBE9_1_OFFSET))(a1);
	}

	static ::UnityEngine::RectTransform* Method_1_A916AA0EA1B6E7C3_1(::MoleMole::UIWindowController* a1)
	{
		return ((::UnityEngine::RectTransform*(*)(::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_A916AA0EA1B6E7C3_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_228E3444D290BEE7()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_228E3444D290BEE7_OFFSET))();
	}

	static ::System::Void Method_1_CD8EB704BDED69B6()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_CD8EB704BDED69B6_OFFSET))();
	}

	static ::System::Void Method_1_9B08052B40B4CA88(::Class_1_2B7F8DBC98E3A114_Class_1_AAD0F9E611D8A5E7* a1)
	{
		return ((::System::Void(*)(::Class_1_2B7F8DBC98E3A114_Class_1_AAD0F9E611D8A5E7*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_9B08052B40B4CA88_OFFSET))(a1);
	}

	static ::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_E7EF6BC52B28648C_OFFSET))();
	}

	static ::System::Boolean Method_1_89029C5C04554B5A(::MoleMole::EUILayoutPlatform a1)
	{
		return ((::System::Boolean(*)(::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_89029C5C04554B5A_OFFSET))(a1);
	}

	static ::UnityEngine::Camera* Method_1_2FF29BEE29C8F3AF_1()
	{
		return ((::UnityEngine::Camera*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_2FF29BEE29C8F3AF_1_OFFSET))();
	}

	static ::System::Void Method_1_BF3A97FF800F0C24(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_BF3A97FF800F0C24_OFFSET))(a1);
	}

	static ::System::Void Method_1_AB023B529554A421(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_AB023B529554A421_OFFSET))(a1);
	}

	static ::System::Void Method_1_73E933E1F20A9B8E_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_73E933E1F20A9B8E_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_F0E307B84478A272_1_OFFSET))();
	}

	static ::System::Boolean Method_1_89029C5C04554B5A_1(::MoleMole::EUILayoutPlatform a1)
	{
		return ((::System::Boolean(*)(::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_89029C5C04554B5A_1_OFFSET))(a1);
	}

	static ::UnityEngine::Camera* Method_1_5A2B373D7AACBAC6_1()
	{
		return ((::UnityEngine::Camera*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_5A2B373D7AACBAC6_1_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_CE34EA208837238D_1_OFFSET))();
	}

	static ::System::String* Method_1_561A336AE697C2E7_1(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_561A336AE697C2E7_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_8DF47EF45ABD2A6C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_8DF47EF45ABD2A6C_OFFSET))();
	}

	static ::System::Void Method_1_87AE162B26227D62(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_87AE162B26227D62_OFFSET))(a1);
	}

	static ::System::Void Method_1_E1BCA48B9C253544_3(::System::Int32 a1, ::MoleMole::UIAdaptData_Enum_3_39283DF3D247B462 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::UIAdaptData_Enum_3_39283DF3D247B462, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_E1BCA48B9C253544_3_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_FD388C2755B5FCCC(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_FD388C2755B5FCCC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_00605CD46BC5ED28_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_00605CD46BC5ED28_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_497833CF065C1894()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_497833CF065C1894_OFFSET))();
	}

	static ::System::Void Method_1_B732DC7FA82BA621()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_B732DC7FA82BA621_OFFSET))();
	}

	static ::System::Boolean Method_1_2479DB6829DABC35()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_2479DB6829DABC35_OFFSET))();
	}

	static ::UnityEngine::Vector2 Method_1_EB77E3EEF08CBAF2(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector2(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_EB77E3EEF08CBAF2_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CE34EA208837238D_2()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_CE34EA208837238D_2_OFFSET))();
	}

	static ::System::Boolean Method_1_B5CA07811A0FF93E()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_B5CA07811A0FF93E_OFFSET))();
	}

	static ::MoleMole::EUILayoutPlatform Method_1_C01B934C750A499D_2()
	{
		return ((::MoleMole::EUILayoutPlatform(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_C01B934C750A499D_2_OFFSET))();
	}

	static ::System::Void Method_1_85605416D9FEC024(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_85605416D9FEC024_OFFSET))(a1);
	}

	static ::System::Void Method_1_4AB64A83443FB826(::UnityEngine::RectTransform* a1)
	{
		return ((::System::Void(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_4AB64A83443FB826_OFFSET))(a1);
	}

	static ::System::Void Method_1_7D008406A3311600_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_7D008406A3311600_1_OFFSET))();
	}

	static ::System::Void Method_1_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_7FBAA229ED524F8E_OFFSET))();
	}

	static ::System::Void Method_1_FB412E022C7694AA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_FB412E022C7694AA_OFFSET))(a1);
	}

	static ::MoleMole::EUILayoutPlatform Method_1_2CBB0F6A48E46BD8()
	{
		return ((::MoleMole::EUILayoutPlatform(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_2CBB0F6A48E46BD8_OFFSET))();
	}

	static ::System::Void Method_1_A6544B958241856F_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_A6544B958241856F_1_OFFSET))();
	}

	static ::System::Void Method_1_6E94FC77130235DD(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_6E94FC77130235DD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E9D938B6A30770AD(::Class_1_FC3A9C07FC781527* a1)
	{
		return ((::System::Void(*)(::Class_1_FC3A9C07FC781527*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_E9D938B6A30770AD_OFFSET))(a1);
	}

	static ::System::Void Method_1_361C06486F56B4E7()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_361C06486F56B4E7_OFFSET))();
	}

	static ::System::Void Method_1_D38261AE637DE579(::MoleMole::EUILayoutPlatform a1, ::System::Boolean a2, ::MoleMole::EUILayoutPlatform a3)
	{
		return ((::System::Void(*)(::MoleMole::EUILayoutPlatform, ::System::Boolean, ::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_D38261AE637DE579_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_E3812F04B2228A8B_1(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_E3812F04B2228A8B_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_97095D132C79BDB6(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_97095D132C79BDB6_OFFSET))(a1);
	}

	static ::System::Void Method_1_2358815C82467FA9(::UnityEngine::NAPRenderPipeline0::CameraRenderType a1)
	{
		return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::CameraRenderType))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_2358815C82467FA9_OFFSET))(a1);
	}

	static ::UnityEngine::UI::Image* Method_1_52D7762668092C01()
	{
		return ((::UnityEngine::UI::Image*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_52D7762668092C01_OFFSET))();
	}

	static ::System::Void Method_1_1006C351D0F01407_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_1006C351D0F01407_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_0D025125E9AE757D(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_0D025125E9AE757D_OFFSET))(a1);
	}

	static ::System::Void Method_1_A6544B958241856F_2()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_A6544B958241856F_2_OFFSET))();
	}

	static ::System::Void Method_1_D3F021A111FDC1ED(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_D3F021A111FDC1ED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_740C7E7AC2B70698()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_740C7E7AC2B70698_OFFSET))();
	}

	static ::Class_1_2B7F8DBC98E3A114_Class_1_AAD0F9E611D8A5E7* Method_1_A0ECCE7BE1C3463C()
	{
		return ((::Class_1_2B7F8DBC98E3A114_Class_1_AAD0F9E611D8A5E7*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_A0ECCE7BE1C3463C_OFFSET))();
	}

	static ::System::Void Method_1_73E933E1F20A9B8E_2(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_73E933E1F20A9B8E_2_OFFSET))(a1);
	}

	static ::UnityEngine::EventSystems::EventSystem* Method_1_59FC201B63A994EA()
	{
		return ((::UnityEngine::EventSystems::EventSystem*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_59FC201B63A994EA_OFFSET))();
	}

	static ::System::Void Method_1_FD05468BC349B911(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_FD05468BC349B911_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CC05DA97EA1F6B71(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_CC05DA97EA1F6B71_OFFSET))(a1);
	}

	static ::System::Void Method_1_7D008406A3311600_2()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_7D008406A3311600_2_OFFSET))();
	}

	static ::System::Void Method_1_7D008406A3311600_3()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_7D008406A3311600_3_OFFSET))();
	}

	static ::System::Void Method_1_EF3D64A6B19EC565(::UnityEngine::Camera* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_EF3D64A6B19EC565_OFFSET))(a1);
	}

	static ::UnityEngine::Rendering::Volume* Method_1_0C29DEAAEA33A50D()
	{
		return ((::UnityEngine::Rendering::Volume*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_0C29DEAAEA33A50D_OFFSET))();
	}

	static ::System::Void Method_1_976E8FC3F80FD669(::UnityEngine::UI::Image* a1)
	{
		return ((::System::Void(*)(::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_976E8FC3F80FD669_OFFSET))(a1);
	}

	static ::System::Void Method_1_AF536B4FA9CCEAB1(::System::Boolean a1, ::MoleMole::Config::ScreenEffectType a2, ::System::String* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Config::ScreenEffectType, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_AF536B4FA9CCEAB1_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::UIFormalVersionTipsPopWindowController* Method_1_BFAD4C99E9F71448()
	{
		return ((::MoleMole::UIFormalVersionTipsPopWindowController*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_BFAD4C99E9F71448_OFFSET))();
	}

	static ::UnityEngine::Material* Method_1_2C1CB8E31145ABDA()
	{
		return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_2C1CB8E31145ABDA_OFFSET))();
	}

	static ::UnityEngine::RectTransform* Method_1_2027387AC7B01EC1(::UnityEngine::RectTransform* a1)
	{
		return ((::UnityEngine::RectTransform*(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_2027387AC7B01EC1_OFFSET))(a1);
	}

	static ::System::Void Method_1_A69FA5E6168C596B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_A69FA5E6168C596B_OFFSET))(a1);
	}

	static ::System::Void Method_1_C0A65B048C8DFBEB(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_C0A65B048C8DFBEB_OFFSET))(a1);
	}

	static ::System::Void Method_1_94E61FAF94E8BB68(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_94E61FAF94E8BB68_OFFSET))(a1);
	}

	static ::System::Void Method_1_81A208F27DC70FE1(::MoleMole::EUILayoutPlatform a1)
	{
		return ((::System::Void(*)(::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_81A208F27DC70FE1_OFFSET))(a1);
	}

	static ::Class_1_2B7F8DBC98E3A114_Class_1_17337B415D77F6FB* Method_1_43405ADFBB5338CB_1(::System::Int32 a1)
	{
		return ((::Class_1_2B7F8DBC98E3A114_Class_1_17337B415D77F6FB*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_43405ADFBB5338CB_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_3574512695A597AB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_3574512695A597AB_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D_3()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_CE34EA208837238D_3_OFFSET))();
	}

	static ::System::Void Method_1_1591025242090421_3(::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_1591025242090421_3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_B7A1773B239604AE(::Enum_3_231342C5F8BF8D7C a1)
	{
		return ((::System::Boolean(*)(::Enum_3_231342C5F8BF8D7C))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_B7A1773B239604AE_OFFSET))(a1);
	}

	static ::System::Void Method_1_CEC148CBBF17D7FA(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_CEC148CBBF17D7FA_OFFSET))(a1);
	}

	static ::MoleMole::UIAspectRatioHandler_Enum_3_8133209C937485A0 Method_1_BB471A493C07AFDD(::MoleMole::UIWindowController* a1)
	{
		return ((::MoleMole::UIAspectRatioHandler_Enum_3_8133209C937485A0(*)(::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_BB471A493C07AFDD_OFFSET))(a1);
	}

	static ::System::Void Method_1_47678B0834F8438A(::UnityEngine::Transform* a1, ::UnityEngine::Transform*& a2, ::MoleMole::UIAdaptData* a3)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*&, ::MoleMole::UIAdaptData*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_47678B0834F8438A_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Canvas* Method_1_EC178BD852BE8117(::System::Int32 a1)
	{
		return ((::UnityEngine::Canvas*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_EC178BD852BE8117_OFFSET))(a1);
	}

	static ::System::Void Method_1_81FBB65B87DD9C7C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_81FBB65B87DD9C7C_OFFSET))(a1);
	}

	static ::UnityEngine::RectTransform* Method_1_2BBEBCAB803DA2B9(::System::Int32 a1)
	{
		return ((::UnityEngine::RectTransform*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_2BBEBCAB803DA2B9_OFFSET))(a1);
	}

	static ::UnityEngine::Transform* Method_1_28F41EBE92BC4E85()
	{
		return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_28F41EBE92BC4E85_OFFSET))();
	}

	static ::UnityEngine::Vector2 Method_1_52F05A9FA300CA21()
	{
		return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_52F05A9FA300CA21_OFFSET))();
	}
};

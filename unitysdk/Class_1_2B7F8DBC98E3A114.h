#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2B7F8DBC98E3A114_Struct_2_4161BE185FEEB39A.h"
#include "unitysdk/Class_1_2B7F8DBC98E3A114_Struct_2_A7C0D552EBD368AE.h"
#include "unitysdk/Enum_3_010E9109C73EF1D1.h"
#include "unitysdk/Enum_3_0277FE49450CA4D5.h"
#include "unitysdk/Enum_3_231342C5F8BF8D7C.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EUILayoutPlatform.h"
#include "unitysdk/MoleMole/UIAdaptData_Enum_3_7F749845F1B2356D.h"
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
class Class_1_3573CA47DF091249;
class Class_1_5A17F85799580BCA;
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

#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_00605CD46BC5ED28_1_OFFSET UNITYSDK_OFFSET(0x15B514F0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_00605CD46BC5ED28_OFFSET UNITYSDK_OFFSET(0x15B4E460)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_046C2BFE6915DB71_OFFSET UNITYSDK_OFFSET(0x15B469E0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_08F456DAF4329D84_OFFSET UNITYSDK_OFFSET(0x15B4B9C0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_0C29DEAAEA33A50D_OFFSET UNITYSDK_OFFSET(0x15B438E0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_0D025125E9AE757D_OFFSET UNITYSDK_OFFSET(0x15B51530)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_0EC98D735A7A6F8C_1_OFFSET UNITYSDK_OFFSET(0x15B513E0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_0EC98D735A7A6F8C_OFFSET UNITYSDK_OFFSET(0x15B45030)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x15B50970)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_1591025242090421_1_OFFSET UNITYSDK_OFFSET(0x15B43800)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_1591025242090421_2_OFFSET UNITYSDK_OFFSET(0x15B43FD0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_1591025242090421_3_OFFSET UNITYSDK_OFFSET(0x15B48120)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_1591025242090421_OFFSET UNITYSDK_OFFSET(0x15B415B0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_1B709936FC68B7D3_OFFSET UNITYSDK_OFFSET(0x15B4B300)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_1C17CA88F7039020_OFFSET UNITYSDK_OFFSET(0x15B47F50)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_1DD8C13D1AC30847_OFFSET UNITYSDK_OFFSET(0x15B36690)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_1DE63FE11FA0D5B4_OFFSET UNITYSDK_OFFSET(0x15B53190)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_2027387AC7B01EC1_OFFSET UNITYSDK_OFFSET(0x15B44F80)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_228E3444D290BEE7_OFFSET UNITYSDK_OFFSET(0x15B4FB50)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_2358815C82467FA9_OFFSET UNITYSDK_OFFSET(0x15B48950)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_2479DB6829DABC35_OFFSET UNITYSDK_OFFSET(0x15B505B0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_28F41EBE92BC4E85_OFFSET UNITYSDK_OFFSET(0x15B51380)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_2BBEBCAB803DA2B9_OFFSET UNITYSDK_OFFSET(0x15B4B770)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_2C1CB8E31145ABDA_OFFSET UNITYSDK_OFFSET(0x15B486E0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_2CBB0F6A48E46BD8_OFFSET UNITYSDK_OFFSET(0x15B486A0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_2FF29BEE29C8F3AF_1_OFFSET UNITYSDK_OFFSET(0x15B4D450)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_2FF29BEE29C8F3AF_OFFSET UNITYSDK_OFFSET(0x15B467E0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_306509F525415A3C_OFFSET UNITYSDK_OFFSET(0x15B535A0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x15B52A30)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_33C5253FE45F785C_OFFSET UNITYSDK_OFFSET(0x15B42590)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_3454FEB5709E460D_1_OFFSET UNITYSDK_OFFSET(0x15B51E00)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_3454FEB5709E460D_OFFSET UNITYSDK_OFFSET(0x15B46840)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_351060D64F7F438E_OFFSET UNITYSDK_OFFSET(0x15B50F60)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_3574512695A597AB_OFFSET UNITYSDK_OFFSET(0x15B53F50)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_361C06486F56B4E7_OFFSET UNITYSDK_OFFSET(0x15B53A90)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_3708CF9C01F023A9_OFFSET UNITYSDK_OFFSET(0x15B0DE60)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_3930520F0E246403_OFFSET UNITYSDK_OFFSET(0x15B47D80)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_3BC578EAB014DDA0_OFFSET UNITYSDK_OFFSET(0x15B46B20)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_3CA8E1DB376B0A02_OFFSET UNITYSDK_OFFSET(0x15B4E760)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_3D3BE5657B306B8B_OFFSET UNITYSDK_OFFSET(0x15B51000)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_41EC8E0AD6EE8093_OFFSET UNITYSDK_OFFSET(0x15B4EAA0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_43405ADFBB5338CB_1_OFFSET UNITYSDK_OFFSET(0x15B47E00)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_43405ADFBB5338CB_OFFSET UNITYSDK_OFFSET(0x15B41460)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_4536DE18DC294F06_1_OFFSET UNITYSDK_OFFSET(0x15B478D0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_4536DE18DC294F06_2_OFFSET UNITYSDK_OFFSET(0x15B4DE20)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_4536DE18DC294F06_3_OFFSET UNITYSDK_OFFSET(0x15B4F090)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_4536DE18DC294F06_OFFSET UNITYSDK_OFFSET(0x15B45A80)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_47678B0834F8438A_OFFSET UNITYSDK_OFFSET(0x15B44710)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x15B49E90)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_4AB64A83443FB826_OFFSET UNITYSDK_OFFSET(0x15B4B860)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_4B4AB287981AAA45_OFFSET UNITYSDK_OFFSET(0x15B449F0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_4BEFBBCBE4D0C052_OFFSET UNITYSDK_OFFSET(0x15B419B0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_52C18C0DA8AC23E5_OFFSET UNITYSDK_OFFSET(0x15B41690)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_52D7762668092C01_OFFSET UNITYSDK_OFFSET(0x15B49400)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_52F05A9FA300CA21_OFFSET UNITYSDK_OFFSET(0x15B53E70)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_55012212E75222E9_1_OFFSET UNITYSDK_OFFSET(0x15B46520)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_55012212E75222E9_2_OFFSET UNITYSDK_OFFSET(0x15B463C0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_55012212E75222E9_OFFSET UNITYSDK_OFFSET(0x15B46680)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_5555B223E1B24E4D_OFFSET UNITYSDK_OFFSET(0x15B43120)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_561A336AE697C2E7_1_OFFSET UNITYSDK_OFFSET(0x15B48200)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_561A336AE697C2E7_OFFSET UNITYSDK_OFFSET(0x15B452C0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x15B36650)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_59FC201B63A994EA_OFFSET UNITYSDK_OFFSET(0x15B4CB20)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_5A2B373D7AACBAC6_1_OFFSET UNITYSDK_OFFSET(0x15B47850)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_5A2B373D7AACBAC6_OFFSET UNITYSDK_OFFSET(0x15B46960)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_5ACE4689A2EA70A3_OFFSET UNITYSDK_OFFSET(0x15B511E0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_5BE35B0FEB4A10AB_OFFSET UNITYSDK_OFFSET(0x15B43A60)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_678D73C32AB0B7F4_OFFSET UNITYSDK_OFFSET(0x15B4E080)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_67C5C9CBD485D5EC_OFFSET UNITYSDK_OFFSET(0x15B4E1D0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_6AA581BE0B50758A_OFFSET UNITYSDK_OFFSET(0x15B4EBF0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x15B47B30)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_72542D6B52D4A0D9_OFFSET UNITYSDK_OFFSET(0x15B4D630)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_73E933E1F20A9B8E_1_OFFSET UNITYSDK_OFFSET(0x15B4CC50)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_73E933E1F20A9B8E_2_OFFSET UNITYSDK_OFFSET(0x15B507D0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_73E933E1F20A9B8E_OFFSET UNITYSDK_OFFSET(0x15B491B0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_740C7E7AC2B70698_OFFSET UNITYSDK_OFFSET(0x15B4D4B0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_7D008406A3311600_1_OFFSET UNITYSDK_OFFSET(0x15B524B0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_7D008406A3311600_2_OFFSET UNITYSDK_OFFSET(0x15B52770)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_7D008406A3311600_3_OFFSET UNITYSDK_OFFSET(0x15B52ED0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_7D008406A3311600_OFFSET UNITYSDK_OFFSET(0x15B45760)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x15B4E990)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_80EB5729F71633D3_OFFSET UNITYSDK_OFFSET(0x15B46C50)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_81A208F27DC70FE1_OFFSET UNITYSDK_OFFSET(0x15B4FAC0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_81E9B794F20E5530_OFFSET UNITYSDK_OFFSET(0x15B4B6E0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_81FBB65B87DD9C7C_OFFSET UNITYSDK_OFFSET(0x15B50320)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_85605416D9FEC024_OFFSET UNITYSDK_OFFSET(0x15B4E5C0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_87AE162B26227D62_OFFSET UNITYSDK_OFFSET(0x15B4EFD0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_89029C5C04554B5A_1_OFFSET UNITYSDK_OFFSET(0x15B13F80)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_89029C5C04554B5A_OFFSET UNITYSDK_OFFSET(0x15B434E0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_8C4D28766DA22FB3_OFFSET UNITYSDK_OFFSET(0x15B43570)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_8CD4ED41DC556E7A_OFFSET UNITYSDK_OFFSET(0x15B4F2F0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_8DF47EF45ABD2A6C_OFFSET UNITYSDK_OFFSET(0x15B516A0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_94E61FAF94E8BB68_OFFSET UNITYSDK_OFFSET(0x15B52BA0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_97095D132C79BDB6_OFFSET UNITYSDK_OFFSET(0x15B53920)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_976E8FC3F80FD669_OFFSET UNITYSDK_OFFSET(0x15B4F730)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x15B4FC60)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_9B08052B40B4CA88_OFFSET UNITYSDK_OFFSET(0x15B48BA0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0x15B51320)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_9CB1E19D9AB035C7_OFFSET UNITYSDK_OFFSET(0x15B44EB0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_A0ECCE7BE1C3463C_OFFSET UNITYSDK_OFFSET(0x15B52B40)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_A6544B958241856F_1_OFFSET UNITYSDK_OFFSET(0x15B4DB90)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_A6544B958241856F_2_OFFSET UNITYSDK_OFFSET(0x15B50090)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0x15B497E0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_A66194F2452EB71A_OFFSET UNITYSDK_OFFSET(0x15B48C40)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_A916AA0EA1B6E7C3_1_OFFSET UNITYSDK_OFFSET(0x15B49460)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_A916AA0EA1B6E7C3_OFFSET UNITYSDK_OFFSET(0x15B48CF0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_AB023B529554A421_OFFSET UNITYSDK_OFFSET(0x15B533D0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_AE6D44E5602930B4_OFFSET UNITYSDK_OFFSET(0x15B52250)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_AF536B4FA9CCEAB1_OFFSET UNITYSDK_OFFSET(0x15B45A20)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x15B43960)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_B5CA07811A0FF93E_OFFSET UNITYSDK_OFFSET(0x15B53BB0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_B5FC22E4448C673E_1_OFFSET UNITYSDK_OFFSET(0x15B462A0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_B5FC22E4448C673E_2_OFFSET UNITYSDK_OFFSET(0x15B46180)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_B5FC22E4448C673E_OFFSET UNITYSDK_OFFSET(0x15B451A0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_B732DC7FA82BA621_OFFSET UNITYSDK_OFFSET(0x15B49DA0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_B7A1773B239604AE_OFFSET UNITYSDK_OFFSET(0x15B4C9B0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_B892007B9247C983_OFFSET UNITYSDK_OFFSET(0x15B47100)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_BB471A493C07AFDD_OFFSET UNITYSDK_OFFSET(0x15B49060)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_BD7A35330179A0D1_OFFSET UNITYSDK_OFFSET(0x15B42F30)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_BF273DF77E3F120D_OFFSET UNITYSDK_OFFSET(0x15B518D0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_BFAD4C99E9F71448_OFFSET UNITYSDK_OFFSET(0x15B53EF0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_C06F4841C461F529_1_OFFSET UNITYSDK_OFFSET(0x15B443E0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_C06F4841C461F529_2_OFFSET UNITYSDK_OFFSET(0x15B4F790)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_C06F4841C461F529_3_OFFSET UNITYSDK_OFFSET(0x15B4D120)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_C06F4841C461F529_OFFSET UNITYSDK_OFFSET(0x15B440B0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_C0A65B048C8DFBEB_OFFSET UNITYSDK_OFFSET(0x15B2DB60)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_C785EDDA4E40810E_OFFSET UNITYSDK_OFFSET(0x15B4A400)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_CBE9026C6B9DC823_OFFSET UNITYSDK_OFFSET(0x15B43DA0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_CC05DA97EA1F6B71_OFFSET UNITYSDK_OFFSET(0x15B53450)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0x15B4B570)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_CE34EA208837238D_1_OFFSET UNITYSDK_OFFSET(0x15B480C0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_CE34EA208837238D_2_OFFSET UNITYSDK_OFFSET(0x15B4E6A0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_CE34EA208837238D_3_OFFSET UNITYSDK_OFFSET(0x15B4FF10)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x15B45140)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_CEC148CBBF17D7FA_OFFSET UNITYSDK_OFFSET(0x15B4CFA0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_CFA546D6485CBBE9_1_OFFSET UNITYSDK_OFFSET(0x15B4FF70)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_CFA546D6485CBBE9_OFFSET UNITYSDK_OFFSET(0x15B4E4A0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_D38261AE637DE579_OFFSET UNITYSDK_OFFSET(0x15B45CE0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_D3F021A111FDC1ED_OFFSET UNITYSDK_OFFSET(0x15B50B10)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_D7FD223B1C7725DB_OFFSET UNITYSDK_OFFSET(0x15B41F80)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_DAA55E2C66DABEB7_OFFSET UNITYSDK_OFFSET(0x15B51F20)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_DDD89A8FCB76301A_OFFSET UNITYSDK_OFFSET(0x15B51990)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_DDE8C69CB0733B0E_OFFSET UNITYSDK_OFFSET(0x15B50DC0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_E34FC0C9D344902E_OFFSET UNITYSDK_OFFSET(0x15B4B210)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_E3812F04B2228A8B_1_OFFSET UNITYSDK_OFFSET(0x15B4CBA0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_E3812F04B2228A8B_OFFSET UNITYSDK_OFFSET(0x15B49350)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_E7C23E2BE6DA1D19_OFFSET UNITYSDK_OFFSET(0x15B40F50)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x15B4CDF0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_E9D938B6A30770AD_OFFSET UNITYSDK_OFFSET(0x15B4E700)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_EB77E3EEF08CBAF2_OFFSET UNITYSDK_OFFSET(0x15B43370)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_EC178BD852BE8117_OFFSET UNITYSDK_OFFSET(0x15B50CD0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_EF3D64A6B19EC565_OFFSET UNITYSDK_OFFSET(0x15B4ED80)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x15B48C00)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x15B48B60)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_F76A12B07E6355C4_OFFSET UNITYSDK_OFFSET(0x15B43630)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_F7CCB9B57C3ED3D5_OFFSET UNITYSDK_OFFSET(0x15B4F660)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_FB412E022C7694AA_OFFSET UNITYSDK_OFFSET(0x15B4D9D0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_FD05468BC349B911_OFFSET UNITYSDK_OFFSET(0x15B40D30)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_FD388C2755B5FCCC_OFFSET UNITYSDK_OFFSET(0x15B4F6E0)
#define CLASS_1_2B7F8DBC98E3A114_METHOD_1_FDBF597D0828B2D4_OFFSET UNITYSDK_OFFSET(0x15B47380)
#define CLASS_1_2B7F8DBC98E3A114__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B40350)
#define CLASS_1_2B7F8DBC98E3A114__CTOR_OFFSET UNITYSDK_OFFSET(0x15B40340)

inline static constexpr unsigned int Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex = 47432;

class Class_1_2B7F8DBC98E3A114 : public ::System::Object
{
public:
	static ::UnityEngine::Material** StaticGet_Field_1_62()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2D990);
	}
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_231342C5F8BF8D7C, ::System::Boolean>** StaticGet_Field_1_38()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_231342C5F8BF8D7C, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2D998);
	}
	static ::Foundation::AssetRequestHandle* StaticGet_Field_1_64()
	{
		return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2D9A0);
	}
	static ::Class_1_2B7F8DBC98E3A114_Class_2_C9B90638FEF9B149** StaticGet_Field_1_21()
	{
		return (::Class_1_2B7F8DBC98E3A114_Class_2_C9B90638FEF9B149**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2D9C0);
	}
	static ::System::String** StaticGet_Field_1_5()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2D9C8);
	}
	static ::UnityEngine::Camera** StaticGet_Field_1_41()
	{
		return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2D9D0);
	}
	static ::UnityEngine::Material** StaticGet_Field_1_60()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2D9D8);
	}
	static ::Foundation::AssetRequestHandle* StaticGet_Field_1_63()
	{
		return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2D9E0);
	}
	static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_Field_1_24()
	{
		return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2DA00);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>** StaticGet_Field_1_46()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2DA08);
	}
	static ::UnityEngine::GameObject** StaticGet_Field_1_57()
	{
		return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2DA10);
	}
	static ::System::String** StaticGet_Field_1_4()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2DA18);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_Field_1_39()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2DA20);
	}
	static ::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>** StaticGet_Field_1_37()
	{
		return (::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2DA28);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Canvas*>** StaticGet_Field_1_47()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Canvas*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2DA30);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_2B7F8DBC98E3A114_Class_2_D0E5D08B5E00E7F3*>** StaticGet_Field_1_70()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_2B7F8DBC98E3A114_Class_2_D0E5D08B5E00E7F3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2DA38);
	}
	static ::MoleMole::UIButtonPosDummyDialogPopWindowController** StaticGet_Field_1_59()
	{
		return (::MoleMole::UIButtonPosDummyDialogPopWindowController**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2DA40);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_Field_1_75()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2DA48);
	}
	static ::Class_1_5A17F85799580BCA** StaticGet_Field_1_34()
	{
		return (::Class_1_5A17F85799580BCA**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2DA50);
	}
	static ::Foundation::AssetRequestHandle* StaticGet_Field_1_66()
	{
		return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2DA58);
	}
	static ::UnityEngine::Material** StaticGet_Field_1_56()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2DA78);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::UIBlackEdge*>** StaticGet_Field_1_45()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::UIBlackEdge*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2DA80);
	}
	static ::UnityEngine::EventSystems::EventSystem** StaticGet_Field_1_40()
	{
		return (::UnityEngine::EventSystems::EventSystem**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2DA88);
	}
	static ::UnityEngine::Transform** StaticGet_Field_1_43()
	{
		return (::UnityEngine::Transform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2DA90);
	}
	static ::Class_1_3573CA47DF091249** StaticGet_Field_1_27()
	{
		return (::Class_1_3573CA47DF091249**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2DA98);
	}
	static ::System::String** StaticGet_Field_1_32()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2DAA0);
	}
	static ::UnityEngine::UI::Image** StaticGet_Field_1_54()
	{
		return (::UnityEngine::UI::Image**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2DAA8);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>** StaticGet_Field_1_48()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2DAB0);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::UIHorizontalBlackEdge*>** StaticGet_Field_1_50()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::UIHorizontalBlackEdge*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2DAB8);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::UIBlackEdge*>** StaticGet_Field_1_44()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::UIBlackEdge*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2DAC0);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::UIHorizontalBlackEdge*>** StaticGet_Field_1_51()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::UIHorizontalBlackEdge*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2DAC8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_2B7F8DBC98E3A114_Class_1_17337B415D77F6FB*>** StaticGet_Field_1_71()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_2B7F8DBC98E3A114_Class_1_17337B415D77F6FB*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2DAD0);
	}
	static ::Foundation::AssetRequestHandle* StaticGet_Field_1_61()
	{
		return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2DAD8);
	}
	static ::UnityEngine::Camera** StaticGet_Field_1_42()
	{
		return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2DAF8);
	}
	static ::UnityEngine::RectTransform** StaticGet_Field_1_49()
	{
		return (::UnityEngine::RectTransform**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2DB00);
	}
	static ::UnityEngine::Rendering::Volume** StaticGet_Field_1_53()
	{
		return (::UnityEngine::Rendering::Volume**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2DB08);
	}
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_010E9109C73EF1D1, ::System::Boolean>** StaticGet_Field_1_69()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_010E9109C73EF1D1, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2DB10);
	}
	static ::System::String** StaticGet_Field_1_6()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2DB18);
	}
	static ::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>** StaticGet_Field_1_36()
	{
		return (::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2DB20);
	}
	static ::Class_1_2B7F8DBC98E3A114_Class_1_AAD0F9E611D8A5E7** StaticGet_Field_1_55()
	{
		return (::Class_1_2B7F8DBC98E3A114_Class_1_AAD0F9E611D8A5E7**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2DB28);
	}
	static ::UnityEngine::Material** StaticGet_Field_1_67()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2DB30);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::EUILayoutPlatform>** StaticGet_Field_1_74()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::EUILayoutPlatform>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2DB38);
	}
	static ::System::String** StaticGet_Field_1_7()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2DB40);
	}
	static ::MoleMole::UIFormalVersionTipsPopWindowController** StaticGet_Field_1_52()
	{
		return (::MoleMole::UIFormalVersionTipsPopWindowController**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2DB48);
	}
	static ::UnityEngine::Material** StaticGet_Field_1_65()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x2DB50);
	}
	static ::System::Single* StaticGet_Field_1_9()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x9AE0);
	}
	static ::Enum_3_0277FE49450CA4D5* StaticGet_Field_1_35()
	{
		return (::Enum_3_0277FE49450CA4D5*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x9AE4);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_1_11()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x9AE8);
	}
	static ::System::Boolean* StaticGet_Field_1_33()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x9AF0);
	}
	static ::System::Boolean* StaticGet_Field_1_58()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x9AF1);
	}
	static ::System::Boolean* StaticGet_Field_1_26()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x9AF2);
	}
	static ::System::Boolean* StaticGet_Field_1_22()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x9AF3);
	}
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x9AF4);
	}
	static ::System::Int32* StaticGet_Field_1_68()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x9AF8);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_1_10()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x9AFC);
	}
	static ::System::Boolean* StaticGet_Field_1_29()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x9B04);
	}
	static ::System::Boolean* StaticGet_Field_1_30()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x9B05);
	}
	static ::System::Boolean* StaticGet_Field_1_8()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x9B06);
	}
	static ::System::Boolean* StaticGet_Field_1_20()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x9B07);
	}
	static ::System::Boolean* StaticGet_Field_1_25()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x9B08);
	}
	static ::System::Boolean* StaticGet_Field_1_28()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x9B09);
	}
	static ::System::Boolean* StaticGet_Field_1_31()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2B7F8DBC98E3A114_TypeDefinitionIndex)->GetStaticField(0x9B0A);
	}
	// static const ::System::Int32 Field_1_15 = 0x0; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x1E; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x3C; // 0x0
	// static const ::System::Int32 Field_1_19 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_18 = 0x64; // 0x0
	// static const ::System::Int32 Field_1_17 = 0x3E8; // 0x0
	// static const ::System::String* Field_1_16; // 0x0
	// static const ::System::String* Field_1_23; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_FD05468BC349B911(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_FD05468BC349B911_OFFSET))(a1, a2);
	}

	static ::Class_1_2B7F8DBC98E3A114_Class_1_17337B415D77F6FB* Method_1_43405ADFBB5338CB(::System::Int32 a1)
	{
		return ((::Class_1_2B7F8DBC98E3A114_Class_1_17337B415D77F6FB*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_43405ADFBB5338CB_OFFSET))(a1);
	}

	static ::System::Void Method_1_1591025242090421(::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_1591025242090421_OFFSET))(a1);
	}

	static ::System::Void Method_1_52C18C0DA8AC23E5()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_52C18C0DA8AC23E5_OFFSET))();
	}

	static ::System::Void Method_1_4BEFBBCBE4D0C052(::Class_1_2B7F8DBC98E3A114_Struct_2_A7C0D552EBD368AE& a1)
	{
		return ((::System::Void(*)(::Class_1_2B7F8DBC98E3A114_Struct_2_A7C0D552EBD368AE&))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_4BEFBBCBE4D0C052_OFFSET))(a1);
	}

	static ::System::Void Method_1_BD7A35330179A0D1(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_BD7A35330179A0D1_OFFSET))(a1, a2);
	}

	static ::UnityEngine::GameObject* Method_1_5555B223E1B24E4D()
	{
		return ((::UnityEngine::GameObject*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_5555B223E1B24E4D_OFFSET))();
	}

	static ::UnityEngine::Vector2 Method_1_EB77E3EEF08CBAF2(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector2(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_EB77E3EEF08CBAF2_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_89029C5C04554B5A(::MoleMole::EUILayoutPlatform a1)
	{
		return ((::System::Boolean(*)(::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_89029C5C04554B5A_OFFSET))(a1);
	}

	static ::System::Void Method_1_F76A12B07E6355C4(::UnityEngine::Camera* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::UnityEngine::Camera*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_F76A12B07E6355C4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1591025242090421_1(::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_1591025242090421_1_OFFSET))(a1);
	}

	static ::UnityEngine::Rendering::Volume* Method_1_0C29DEAAEA33A50D()
	{
		return ((::UnityEngine::Rendering::Volume*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_0C29DEAAEA33A50D_OFFSET))();
	}

	static ::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_B09E78EE7EE4F8FA_OFFSET))();
	}

	static ::System::Void Method_1_CBE9026C6B9DC823(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_CBE9026C6B9DC823_OFFSET))(a1);
	}

	static ::System::Void Method_1_1591025242090421_2(::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_1591025242090421_2_OFFSET))(a1);
	}

	static ::System::Void Method_1_C06F4841C461F529(::System::Int32 a1, ::MoleMole::UIAdaptData_Enum_3_7F749845F1B2356D a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::UIAdaptData_Enum_3_7F749845F1B2356D, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_C06F4841C461F529_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_C06F4841C461F529_1(::System::Int32 a1, ::MoleMole::UIAdaptData_Enum_3_7F749845F1B2356D a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::UIAdaptData_Enum_3_7F749845F1B2356D, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_C06F4841C461F529_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_47678B0834F8438A(::UnityEngine::Transform* a1, ::UnityEngine::Transform*& a2, ::MoleMole::UIAdaptData* a3)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*&, ::MoleMole::UIAdaptData*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_47678B0834F8438A_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0EC98D735A7A6F8C(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_0EC98D735A7A6F8C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::MoleMole::EUILayoutPlatform Method_1_B5FC22E4448C673E()
	{
		return ((::MoleMole::EUILayoutPlatform(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_B5FC22E4448C673E_OFFSET))();
	}

	static ::System::String* Method_1_561A336AE697C2E7(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_561A336AE697C2E7_OFFSET))(a1);
	}

	static ::System::Void Method_1_7D008406A3311600()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_7D008406A3311600_OFFSET))();
	}

	static ::System::Void Method_1_AF536B4FA9CCEAB1(::System::Boolean a1, ::MoleMole::Config::ScreenEffectType a2, ::System::String* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Config::ScreenEffectType, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_AF536B4FA9CCEAB1_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Material* Method_1_4536DE18DC294F06()
	{
		return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_4536DE18DC294F06_OFFSET))();
	}

	static ::System::Void Method_1_D38261AE637DE579(::MoleMole::EUILayoutPlatform a1, ::System::Boolean a2, ::MoleMole::EUILayoutPlatform a3)
	{
		return ((::System::Void(*)(::MoleMole::EUILayoutPlatform, ::System::Boolean, ::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_D38261AE637DE579_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::EUILayoutPlatform Method_1_B5FC22E4448C673E_1()
	{
		return ((::MoleMole::EUILayoutPlatform(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_B5FC22E4448C673E_1_OFFSET))();
	}

	static ::UnityEngine::Camera* Method_1_2FF29BEE29C8F3AF()
	{
		return ((::UnityEngine::Camera*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_2FF29BEE29C8F3AF_OFFSET))();
	}

	static ::System::Boolean Method_1_3708CF9C01F023A9(::MoleMole::EUILayoutPlatform a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::MoleMole::EUILayoutPlatform, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_3708CF9C01F023A9_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::UIHorizontalBlackEdge* Method_1_3454FEB5709E460D(::System::Int32 a1)
	{
		return ((::MoleMole::UIHorizontalBlackEdge*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_3454FEB5709E460D_OFFSET))(a1);
	}

	static ::UnityEngine::Camera* Method_1_5A2B373D7AACBAC6()
	{
		return ((::UnityEngine::Camera*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_5A2B373D7AACBAC6_OFFSET))();
	}

	static ::System::Int32 Method_1_046C2BFE6915DB71(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_046C2BFE6915DB71_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_3BC578EAB014DDA0()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_3BC578EAB014DDA0_OFFSET))();
	}

	static ::MoleMole::EUILayoutPlatform Method_1_80EB5729F71633D3(::System::Boolean a1)
	{
		return ((::MoleMole::EUILayoutPlatform(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_80EB5729F71633D3_OFFSET))(a1);
	}

	static ::System::Void Method_1_E7C23E2BE6DA1D19(::Enum_3_010E9109C73EF1D1 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::Enum_3_010E9109C73EF1D1, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_E7C23E2BE6DA1D19_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B892007B9247C983(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_B892007B9247C983_OFFSET))(a1);
	}

	static ::UnityEngine::Camera* Method_1_5A2B373D7AACBAC6_1()
	{
		return ((::UnityEngine::Camera*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_5A2B373D7AACBAC6_1_OFFSET))();
	}

	static ::UnityEngine::Material* Method_1_4536DE18DC294F06_1()
	{
		return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_4536DE18DC294F06_1_OFFSET))();
	}

	static ::System::Void Method_1_6D93101E4CE10A96()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_6D93101E4CE10A96_OFFSET))();
	}

	static ::Class_1_2B7F8DBC98E3A114_Class_1_17337B415D77F6FB* Method_1_43405ADFBB5338CB_1(::System::Int32 a1)
	{
		return ((::Class_1_2B7F8DBC98E3A114_Class_1_17337B415D77F6FB*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_43405ADFBB5338CB_1_OFFSET))(a1);
	}

	static ::UnityEngine::RectTransform* Method_1_1C17CA88F7039020(::UnityEngine::RectTransform* a1, ::MoleMole::UIAspectRatioHandler_Enum_3_8133209C937485A0 a2)
	{
		return ((::UnityEngine::RectTransform*(*)(::UnityEngine::RectTransform*, ::MoleMole::UIAspectRatioHandler_Enum_3_8133209C937485A0))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_1C17CA88F7039020_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_CE34EA208837238D_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_CE34EA208837238D_1_OFFSET))();
	}

	static ::System::Void Method_1_1591025242090421_3(::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::System::Action_3<::System::Int32, ::System::Int32, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_1591025242090421_3_OFFSET))(a1);
	}

	static ::System::String* Method_1_561A336AE697C2E7_1(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_561A336AE697C2E7_1_OFFSET))(a1);
	}

	static ::MoleMole::EUILayoutPlatform Method_1_2CBB0F6A48E46BD8()
	{
		return ((::MoleMole::EUILayoutPlatform(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_2CBB0F6A48E46BD8_OFFSET))();
	}

	static ::UnityEngine::Material* Method_1_2C1CB8E31145ABDA()
	{
		return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_2C1CB8E31145ABDA_OFFSET))();
	}

	static ::System::Void Method_1_2358815C82467FA9(::UnityEngine::NAPRenderPipeline0::CameraRenderType a1)
	{
		return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::CameraRenderType))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_2358815C82467FA9_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_9B08052B40B4CA88(::Class_1_2B7F8DBC98E3A114_Class_1_AAD0F9E611D8A5E7* a1)
	{
		return ((::System::Void(*)(::Class_1_2B7F8DBC98E3A114_Class_1_AAD0F9E611D8A5E7*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_9B08052B40B4CA88_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_F0E307B84478A272_1_OFFSET))();
	}

	static ::System::Boolean Method_1_A66194F2452EB71A(::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* a1, ::UnityEngine::Transform* a2, ::UnityEngine::RectTransform*& a3)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*, ::UnityEngine::Transform*, ::UnityEngine::RectTransform*&))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_A66194F2452EB71A_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::RectTransform* Method_1_A916AA0EA1B6E7C3(::MoleMole::UIWindowController* a1)
	{
		return ((::UnityEngine::RectTransform*(*)(::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_A916AA0EA1B6E7C3_OFFSET))(a1);
	}

	static ::System::Void Method_1_73E933E1F20A9B8E(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_73E933E1F20A9B8E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_E3812F04B2228A8B(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_E3812F04B2228A8B_OFFSET))(a1);
	}

	static ::UnityEngine::RectTransform* Method_1_4B4AB287981AAA45(::UnityEngine::RectTransform* a1, ::System::String* a2)
	{
		return ((::UnityEngine::RectTransform*(*)(::UnityEngine::RectTransform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_4B4AB287981AAA45_OFFSET))(a1, a2);
	}

	static ::UnityEngine::UI::Image* Method_1_52D7762668092C01()
	{
		return ((::UnityEngine::UI::Image*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_52D7762668092C01_OFFSET))();
	}

	static ::System::Void Method_1_55012212E75222E9(::MoleMole::EUILayoutPlatform a1)
	{
		return ((::System::Void(*)(::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_55012212E75222E9_OFFSET))(a1);
	}

	static ::UnityEngine::RectTransform* Method_1_A916AA0EA1B6E7C3_1(::MoleMole::UIWindowController* a1)
	{
		return ((::UnityEngine::RectTransform*(*)(::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_A916AA0EA1B6E7C3_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_A6544B958241856F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_A6544B958241856F_OFFSET))();
	}

	static ::UnityEngine::RectTransform* Method_1_81E9B794F20E5530(::MoleMole::UIBaseController* a1)
	{
		return ((::UnityEngine::RectTransform*(*)(::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_81E9B794F20E5530_OFFSET))(a1);
	}

	static ::System::Void Method_1_4AB64A83443FB826(::UnityEngine::RectTransform* a1)
	{
		return ((::System::Void(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_4AB64A83443FB826_OFFSET))(a1);
	}

	static ::System::Void Method_1_08F456DAF4329D84(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_08F456DAF4329D84_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_B7A1773B239604AE(::Enum_3_231342C5F8BF8D7C a1)
	{
		return ((::System::Boolean(*)(::Enum_3_231342C5F8BF8D7C))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_B7A1773B239604AE_OFFSET))(a1);
	}

	static ::UnityEngine::EventSystems::EventSystem* Method_1_59FC201B63A994EA()
	{
		return ((::UnityEngine::EventSystems::EventSystem*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_59FC201B63A994EA_OFFSET))();
	}

	static ::System::Void Method_1_B732DC7FA82BA621()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_B732DC7FA82BA621_OFFSET))();
	}

	static ::MoleMole::UIAspectRatioHandler_Enum_3_8133209C937485A0 Method_1_BB471A493C07AFDD(::MoleMole::UIWindowController* a1)
	{
		return ((::MoleMole::UIAspectRatioHandler_Enum_3_8133209C937485A0(*)(::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_BB471A493C07AFDD_OFFSET))(a1);
	}

	static ::System::Void Method_1_73E933E1F20A9B8E_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_73E933E1F20A9B8E_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_E7EF6BC52B28648C_OFFSET))();
	}

	static ::System::Void Method_1_CEC148CBBF17D7FA(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_CEC148CBBF17D7FA_OFFSET))(a1);
	}

	static ::UnityEngine::Camera* Method_1_2FF29BEE29C8F3AF_1()
	{
		return ((::UnityEngine::Camera*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_2FF29BEE29C8F3AF_1_OFFSET))();
	}

	static ::System::Void Method_1_740C7E7AC2B70698()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_740C7E7AC2B70698_OFFSET))();
	}

	static ::MoleMole::EUILayoutPlatform Method_1_72542D6B52D4A0D9()
	{
		return ((::MoleMole::EUILayoutPlatform(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_72542D6B52D4A0D9_OFFSET))();
	}

	static ::System::Void Method_1_FB412E022C7694AA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_FB412E022C7694AA_OFFSET))(a1);
	}

	static ::System::Void Method_1_A6544B958241856F_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_A6544B958241856F_1_OFFSET))();
	}

	static ::UnityEngine::Material* Method_1_4536DE18DC294F06_2()
	{
		return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_4536DE18DC294F06_2_OFFSET))();
	}

	static ::System::Void Method_1_678D73C32AB0B7F4(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_678D73C32AB0B7F4_OFFSET))(a1);
	}

	static ::System::Void Method_1_67C5C9CBD485D5EC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_67C5C9CBD485D5EC_OFFSET))(a1);
	}

	static ::System::Void Method_1_55012212E75222E9_1(::MoleMole::EUILayoutPlatform a1)
	{
		return ((::System::Void(*)(::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_55012212E75222E9_1_OFFSET))(a1);
	}

	static ::MoleMole::EUILayoutPlatform Method_1_B5FC22E4448C673E_2()
	{
		return ((::MoleMole::EUILayoutPlatform(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_B5FC22E4448C673E_2_OFFSET))();
	}

	static ::System::Void Method_1_00605CD46BC5ED28(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_00605CD46BC5ED28_OFFSET))(a1);
	}

	static ::MoleMole::UIBlackEdge* Method_1_CFA546D6485CBBE9(::System::Int32 a1)
	{
		return ((::MoleMole::UIBlackEdge*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_CFA546D6485CBBE9_OFFSET))(a1);
	}

	static ::System::Void Method_1_85605416D9FEC024(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_85605416D9FEC024_OFFSET))(a1);
	}

	static ::UnityEngine::RectTransform* Method_1_2027387AC7B01EC1(::UnityEngine::RectTransform* a1)
	{
		return ((::UnityEngine::RectTransform*(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_2027387AC7B01EC1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CE34EA208837238D_2()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_CE34EA208837238D_2_OFFSET))();
	}

	static ::System::Void Method_1_E34FC0C9D344902E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_E34FC0C9D344902E_OFFSET))();
	}

	static ::System::Void Method_1_E9D938B6A30770AD(::Class_1_5A17F85799580BCA* a1)
	{
		return ((::System::Void(*)(::Class_1_5A17F85799580BCA*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_E9D938B6A30770AD_OFFSET))(a1);
	}

	static ::System::Void Method_1_3CA8E1DB376B0A02(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_3CA8E1DB376B0A02_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_7FBAA229ED524F8E_OFFSET))();
	}

	static ::System::Boolean Method_1_41EC8E0AD6EE8093()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_41EC8E0AD6EE8093_OFFSET))();
	}

	static ::System::Boolean Method_1_6AA581BE0B50758A()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_6AA581BE0B50758A_OFFSET))();
	}

	static ::System::Void Method_1_EF3D64A6B19EC565(::UnityEngine::Camera* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_EF3D64A6B19EC565_OFFSET))(a1);
	}

	static ::System::Void Method_1_497833CF065C1894()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_497833CF065C1894_OFFSET))();
	}

	static ::System::Void Method_1_87AE162B26227D62(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_87AE162B26227D62_OFFSET))(a1);
	}

	static ::System::Void Method_1_55012212E75222E9_2(::MoleMole::EUILayoutPlatform a1)
	{
		return ((::System::Void(*)(::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_55012212E75222E9_2_OFFSET))(a1);
	}

	static ::System::Void Method_1_CD8EB704BDED69B6()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_CD8EB704BDED69B6_OFFSET))();
	}

	static ::System::Void Method_1_C0A65B048C8DFBEB(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_C0A65B048C8DFBEB_OFFSET))(a1);
	}

	static ::UnityEngine::Material* Method_1_4536DE18DC294F06_3()
	{
		return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_4536DE18DC294F06_3_OFFSET))();
	}

	static ::System::Void Method_1_8CD4ED41DC556E7A(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_8CD4ED41DC556E7A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C785EDDA4E40810E(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_C785EDDA4E40810E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1DD8C13D1AC30847(::System::Action* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_1DD8C13D1AC30847_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FD388C2755B5FCCC(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_FD388C2755B5FCCC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_976E8FC3F80FD669(::UnityEngine::UI::Image* a1)
	{
		return ((::System::Void(*)(::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_976E8FC3F80FD669_OFFSET))(a1);
	}

	static ::System::Void Method_1_C06F4841C461F529_2(::System::Int32 a1, ::MoleMole::UIAdaptData_Enum_3_7F749845F1B2356D a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::UIAdaptData_Enum_3_7F749845F1B2356D, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_C06F4841C461F529_2_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_81A208F27DC70FE1(::MoleMole::EUILayoutPlatform a1)
	{
		return ((::System::Void(*)(::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_81A208F27DC70FE1_OFFSET))(a1);
	}

	static ::System::Void Method_1_228E3444D290BEE7()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_228E3444D290BEE7_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D_3()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_CE34EA208837238D_3_OFFSET))();
	}

	static ::MoleMole::UIBlackEdge* Method_1_CFA546D6485CBBE9_1(::System::Int32 a1)
	{
		return ((::MoleMole::UIBlackEdge*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_CFA546D6485CBBE9_1_OFFSET))(a1);
	}

	static ::UnityEngine::RectTransform* Method_1_9CB1E19D9AB035C7(::UnityEngine::RectTransform* a1, ::MoleMole::UISafeAreaHandler_Enum_3_D5D7F86936BE5D0C a2)
	{
		return ((::UnityEngine::RectTransform*(*)(::UnityEngine::RectTransform*, ::MoleMole::UISafeAreaHandler_Enum_3_D5D7F86936BE5D0C))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_9CB1E19D9AB035C7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A6544B958241856F_2()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_A6544B958241856F_2_OFFSET))();
	}

	static ::System::Void Method_1_81FBB65B87DD9C7C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_81FBB65B87DD9C7C_OFFSET))(a1);
	}

	static ::System::Void Method_1_3930520F0E246403(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_3930520F0E246403_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_2479DB6829DABC35()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_2479DB6829DABC35_OFFSET))();
	}

	static ::System::Void Method_1_73E933E1F20A9B8E_2(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_73E933E1F20A9B8E_2_OFFSET))(a1);
	}

	static ::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_1290EA767C459179_OFFSET))();
	}

	static ::System::Void Method_1_D3F021A111FDC1ED(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_D3F021A111FDC1ED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DDE8C69CB0733B0E(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_DDE8C69CB0733B0E_OFFSET))(a1);
	}

	static ::UnityEngine::Vector2 Method_1_351060D64F7F438E()
	{
		return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_351060D64F7F438E_OFFSET))();
	}

	static ::System::Void Method_1_3D3BE5657B306B8B(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_3D3BE5657B306B8B_OFFSET))(a1);
	}

	static ::UnityEngine::RectTransform* Method_1_5ACE4689A2EA70A3(::System::Int32 a1)
	{
		return ((::UnityEngine::RectTransform*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_5ACE4689A2EA70A3_OFFSET))(a1);
	}

	static ::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_97D83E4CB3B11935_OFFSET))();
	}

	static ::System::Boolean Method_1_E3812F04B2228A8B_1(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_E3812F04B2228A8B_1_OFFSET))(a1);
	}

	static ::Class_1_5A17F85799580BCA* Method_1_9C06C768B25E4E13()
	{
		return ((::Class_1_5A17F85799580BCA*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_9C06C768B25E4E13_OFFSET))();
	}

	static ::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_1_F7CCB9B57C3ED3D5(::System::Action* a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_F7CCB9B57C3ED3D5_OFFSET))(a1);
	}

	static ::UnityEngine::Transform* Method_1_28F41EBE92BC4E85()
	{
		return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_28F41EBE92BC4E85_OFFSET))();
	}

	static ::System::Void Method_1_0EC98D735A7A6F8C_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_0EC98D735A7A6F8C_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_00605CD46BC5ED28_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_00605CD46BC5ED28_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_FDBF597D0828B2D4(::Enum_3_010E9109C73EF1D1 a1)
	{
		return ((::System::Void(*)(::Enum_3_010E9109C73EF1D1))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_FDBF597D0828B2D4_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_89029C5C04554B5A_1(::MoleMole::EUILayoutPlatform a1)
	{
		return ((::System::Boolean(*)(::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_89029C5C04554B5A_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_0D025125E9AE757D(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_0D025125E9AE757D_OFFSET))(a1);
	}

	static ::UnityEngine::Canvas* Method_1_EC178BD852BE8117(::System::Int32 a1)
	{
		return ((::UnityEngine::Canvas*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_EC178BD852BE8117_OFFSET))(a1);
	}

	static ::System::Void Method_1_8DF47EF45ABD2A6C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_8DF47EF45ABD2A6C_OFFSET))();
	}

	static ::UnityEngine::RectTransform* Method_1_D7FD223B1C7725DB(::UnityEngine::RectTransform* a1, ::System::String* a2)
	{
		return ((::UnityEngine::RectTransform*(*)(::UnityEngine::RectTransform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_D7FD223B1C7725DB_OFFSET))(a1, a2);
	}

	static ::UnityEngine::RectTransform* Method_1_BF273DF77E3F120D(::UnityEngine::Transform* a1)
	{
		return ((::UnityEngine::RectTransform*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_BF273DF77E3F120D_OFFSET))(a1);
	}

	static ::System::Void Method_1_DDD89A8FCB76301A(::System::Boolean a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_DDD89A8FCB76301A_OFFSET))(a1, a2);
	}

	static ::MoleMole::UIHorizontalBlackEdge* Method_1_3454FEB5709E460D_1(::System::Int32 a1)
	{
		return ((::MoleMole::UIHorizontalBlackEdge*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_3454FEB5709E460D_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_DAA55E2C66DABEB7(::UnityEngine::Camera* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_DAA55E2C66DABEB7_OFFSET))(a1);
	}

	static ::System::Void Method_1_AE6D44E5602930B4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_AE6D44E5602930B4_OFFSET))(a1);
	}

	static ::UnityEngine::RectTransform* Method_1_2BBEBCAB803DA2B9(::System::Int32 a1)
	{
		return ((::UnityEngine::RectTransform*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_2BBEBCAB803DA2B9_OFFSET))(a1);
	}

	static ::System::Void Method_1_7D008406A3311600_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_7D008406A3311600_1_OFFSET))();
	}

	static ::Class_1_2B7F8DBC98E3A114_Struct_2_4161BE185FEEB39A Method_1_33C5253FE45F785C(::UnityEngine::RectTransform* a1, ::System::Nullable_1<::System::Int32> a2)
	{
		return ((::Class_1_2B7F8DBC98E3A114_Struct_2_4161BE185FEEB39A(*)(::UnityEngine::RectTransform*, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_33C5253FE45F785C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_7D008406A3311600_2()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_7D008406A3311600_2_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::Class_1_2B7F8DBC98E3A114_Class_1_AAD0F9E611D8A5E7* Method_1_A0ECCE7BE1C3463C()
	{
		return ((::Class_1_2B7F8DBC98E3A114_Class_1_AAD0F9E611D8A5E7*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_A0ECCE7BE1C3463C_OFFSET))();
	}

	static ::System::Void Method_1_94E61FAF94E8BB68(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_94E61FAF94E8BB68_OFFSET))(a1);
	}

	static ::System::Void Method_1_7D008406A3311600_3()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_7D008406A3311600_3_OFFSET))();
	}

	static ::System::Void Method_1_1DE63FE11FA0D5B4()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_1DE63FE11FA0D5B4_OFFSET))();
	}

	static ::MoleMole::EUILayoutPlatform Method_1_8C4D28766DA22FB3()
	{
		return ((::MoleMole::EUILayoutPlatform(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_8C4D28766DA22FB3_OFFSET))();
	}

	static ::System::Void Method_1_AB023B529554A421(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_AB023B529554A421_OFFSET))(a1);
	}

	static ::System::Void Method_1_CC05DA97EA1F6B71(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_CC05DA97EA1F6B71_OFFSET))(a1);
	}

	static ::System::Void Method_1_1B709936FC68B7D3()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_1B709936FC68B7D3_OFFSET))();
	}

	static ::System::Nullable_1<::System::Int32> Method_1_306509F525415A3C(::UnityEngine::Transform* a1)
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_306509F525415A3C_OFFSET))(a1);
	}

	static ::System::Void Method_1_97095D132C79BDB6(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_97095D132C79BDB6_OFFSET))(a1);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_1_361C06486F56B4E7()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_361C06486F56B4E7_OFFSET))();
	}

	static ::System::Boolean Method_1_B5CA07811A0FF93E()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_B5CA07811A0FF93E_OFFSET))();
	}

	static ::UnityEngine::Vector2 Method_1_52F05A9FA300CA21()
	{
		return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_52F05A9FA300CA21_OFFSET))();
	}

	static ::System::Void Method_1_C06F4841C461F529_3(::System::Int32 a1, ::MoleMole::UIAdaptData_Enum_3_7F749845F1B2356D a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::UIAdaptData_Enum_3_7F749845F1B2356D, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_C06F4841C461F529_3_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_5BE35B0FEB4A10AB(::System::Boolean a1, ::Enum_3_231342C5F8BF8D7C a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::Enum_3_231342C5F8BF8D7C))((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_5BE35B0FEB4A10AB_OFFSET))(a1, a2);
	}

	static ::MoleMole::UIFormalVersionTipsPopWindowController* Method_1_BFAD4C99E9F71448()
	{
		return ((::MoleMole::UIFormalVersionTipsPopWindowController*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_BFAD4C99E9F71448_OFFSET))();
	}

	static ::System::Void Method_1_3574512695A597AB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2B7F8DBC98E3A114_METHOD_1_3574512695A597AB_OFFSET))();
	}
};

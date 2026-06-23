#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E87E347C649FDDBC_Enum_3_9CA0D4E7230BAB54.h"
#include "unitysdk/Class_4_DA19DD65175B97CF.h"
#include "unitysdk/Class_5_A6F8D19602712D95_Enum_3_4D5FFF8B0CC63972.h"
#include "unitysdk/Class_5_A6F8D19602712D95_Struct_2_6B9789F61C82B731.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Enum_3_356D99BCC6A2E194.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_11.h"
#include "unitysdk/Enum_3_625EA19CD353E00F.h"
#include "unitysdk/Enum_3_7A4252233BCEB3A9.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_BigTVMoveFireEffect_RuntimeEffectInfo.h"
#include "unitysdk/MoleMole/HollowChessboard/GeometryHeightType.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/ScreenSwitchType.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/MoleMole/UIHollowChessPieceParticle_TransformType.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/Share/GridDir.h"
#include "unitysdk/Struct_2_6E23A591AC26A31E.h"
#include "unitysdk/Struct_2_9F5D7A8EAA940D1A.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_273;
class Class_1_0AEBFEBDADDA07AC;
class Class_1_34B3048095D388ED;
class Class_1_3F9A20B8022097A7;
class Class_1_5F3ED31AAEDA15B0;
class Class_1_EBACA96C31DAB7D8;
class Class_1_F5B35B1B6669CF16;
class Class_1_FA793AB1D49D0132;
class Class_2_208CC9941471731A_965;
class Class_2_F5737224A0253470;
class Class_3_01A715AD62081B7F;
class Class_5_A6F8D19602712D95_Class_1_22A8D76759698EC6;
class Class_5_FCAF801AC482D3B5;
class ConfigTextureColor;
namespace DG::Tweening { class Tween; }
namespace MoleMole { class ConfigAnimationCurveGroup; }
namespace MoleMole { class IVideoPlayer; }
namespace MoleMole { class TextureSheetData; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace MoleMole { class UIHollowChessboard3DModelController_CanvasRTHandler; }
namespace MoleMole { class UIWindowController; }
namespace MoleMole::Config { class ChessboardSwitchEffect; }
namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace MoleMole::Config { class ConfigHollowChessboard_CameraEffect; }
namespace MoleMole::Config { class ConfigHollowChessboard_CameraShake; }
namespace MoleMole::Config { class ConfigHollowChessboard_ChessPieceEffect; }
namespace MoleMole::Config { class ConfigHollowChessboard_Flash; }
namespace MoleMole::Config { class ConfigHollowChessboard_Move; }
namespace MoleMole::Config { class ConfigHollowChessboard_MoveXY; }
namespace MoleMole::Config { class ConfigHollowChessboard_PieceChangeStructConfig; }
namespace MoleMole::Config { class ConfigHollowChessboard_PostEffect; }
namespace MoleMole::Config { class ConfigHollowChessboard_RiseOrSink; }
namespace MoleMole::Config { class ConfigHollowChessboard_Rotate; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_5_A6F8D19602712D95_METHOD_5_0118DE6EDC86816A_OFFSET UNITYSDK_OFFSET(0x147A3C10)
#define CLASS_5_A6F8D19602712D95_METHOD_5_047C0F8A16B2B100_OFFSET UNITYSDK_OFFSET(0x147AD0D0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_059C1E624E4C4CB6_OFFSET UNITYSDK_OFFSET(0x147A5C30)
#define CLASS_5_A6F8D19602712D95_METHOD_5_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x147A5200)
#define CLASS_5_A6F8D19602712D95_METHOD_5_0B6C3969A0985ADD_OFFSET UNITYSDK_OFFSET(0x147AA1A0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_0EB2899F45F512FE_OFFSET UNITYSDK_OFFSET(0x147A53C0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_107247B6331E64C6_OFFSET UNITYSDK_OFFSET(0x147ADFB0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_124E7DAB85EAFECD_OFFSET UNITYSDK_OFFSET(0x147A9E70)
#define CLASS_5_A6F8D19602712D95_METHOD_5_1676349FAEF4B05E_OFFSET UNITYSDK_OFFSET(0x147A29A0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x147AA420)
#define CLASS_5_A6F8D19602712D95_METHOD_5_18B43C7F9F3156FD_OFFSET UNITYSDK_OFFSET(0x147A8DC0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_18D1AAAAA5CC635E_OFFSET UNITYSDK_OFFSET(0x147A1C50)
#define CLASS_5_A6F8D19602712D95_METHOD_5_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x147A8A30)
#define CLASS_5_A6F8D19602712D95_METHOD_5_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x147A8F00)
#define CLASS_5_A6F8D19602712D95_METHOD_5_1BF00A41CF2C4F12_OFFSET UNITYSDK_OFFSET(0x147A8210)
#define CLASS_5_A6F8D19602712D95_METHOD_5_1C5E97ED8DD75A8A_OFFSET UNITYSDK_OFFSET(0x11459340)
#define CLASS_5_A6F8D19602712D95_METHOD_5_1DF57FDE114E5C66_OFFSET UNITYSDK_OFFSET(0x114596A0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0x11458A80)
#define CLASS_5_A6F8D19602712D95_METHOD_5_1FC86D2BFE10815E_OFFSET UNITYSDK_OFFSET(0x147AC4F0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_20C1DDBD285DAB3C_OFFSET UNITYSDK_OFFSET(0x147A11E0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_215556991F31CB2D_OFFSET UNITYSDK_OFFSET(0x147AB3E0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_21D22E033EB920F8_OFFSET UNITYSDK_OFFSET(0x147AA5D0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_228E3444D290BEE7_OFFSET UNITYSDK_OFFSET(0x147A3AF0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_2983F8A9AFDFA1A1_OFFSET UNITYSDK_OFFSET(0x147A5600)
#define CLASS_5_A6F8D19602712D95_METHOD_5_2BA4FD73FC0332B8_OFFSET UNITYSDK_OFFSET(0x147A8570)
#define CLASS_5_A6F8D19602712D95_METHOD_5_2BD5D416BE8183AF_OFFSET UNITYSDK_OFFSET(0x147A37F0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_2CBA24E50F81A5B9_OFFSET UNITYSDK_OFFSET(0x147A4950)
#define CLASS_5_A6F8D19602712D95_METHOD_5_31AE1DAAA54840D4_OFFSET UNITYSDK_OFFSET(0x147ACE20)
#define CLASS_5_A6F8D19602712D95_METHOD_5_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x147AA1B0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_35F5B874CBA7A118_OFFSET UNITYSDK_OFFSET(0x147ADF00)
#define CLASS_5_A6F8D19602712D95_METHOD_5_36C15FDD2675F568_OFFSET UNITYSDK_OFFSET(0x147A8F60)
#define CLASS_5_A6F8D19602712D95_METHOD_5_3766BE4458C9425D_OFFSET UNITYSDK_OFFSET(0x147A7770)
#define CLASS_5_A6F8D19602712D95_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x147A2090)
#define CLASS_5_A6F8D19602712D95_METHOD_5_3D52A1A2D5439DBD_OFFSET UNITYSDK_OFFSET(0x147AC440)
#define CLASS_5_A6F8D19602712D95_METHOD_5_3D5E4AF00755B665_OFFSET UNITYSDK_OFFSET(0x147A0FB0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_3EAF23F199CBB578_OFFSET UNITYSDK_OFFSET(0x147A0D80)
#define CLASS_5_A6F8D19602712D95_METHOD_5_3F22E1B45976ADD0_OFFSET UNITYSDK_OFFSET(0x147A9D50)
#define CLASS_5_A6F8D19602712D95_METHOD_5_424C9FA207DBFFDB_OFFSET UNITYSDK_OFFSET(0x147A3750)
#define CLASS_5_A6F8D19602712D95_METHOD_5_42C5BADE1C9EFC80_OFFSET UNITYSDK_OFFSET(0x147A3130)
#define CLASS_5_A6F8D19602712D95_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x147A8EA0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_43CB3F4F72E9EC39_OFFSET UNITYSDK_OFFSET(0x147A99F0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_43E290A0B26B39F6_OFFSET UNITYSDK_OFFSET(0x147A9630)
#define CLASS_5_A6F8D19602712D95_METHOD_5_449C091B2D106C94_OFFSET UNITYSDK_OFFSET(0x147A9F20)
#define CLASS_5_A6F8D19602712D95_METHOD_5_4532BD255B8C36AB_OFFSET UNITYSDK_OFFSET(0x147A9CD0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_454385D5944B07AD_OFFSET UNITYSDK_OFFSET(0x147A7990)
#define CLASS_5_A6F8D19602712D95_METHOD_5_46206B56BD30B28B_OFFSET UNITYSDK_OFFSET(0x147A0630)
#define CLASS_5_A6F8D19602712D95_METHOD_5_474DA5956978BDEA_OFFSET UNITYSDK_OFFSET(0x147AA7F0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_479759059E440327_OFFSET UNITYSDK_OFFSET(0x147A4820)
#define CLASS_5_A6F8D19602712D95_METHOD_5_50DDC384D99AC5A6_OFFSET UNITYSDK_OFFSET(0x11458FD0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_50E69F72BDB8312F_OFFSET UNITYSDK_OFFSET(0x147AA840)
#define CLASS_5_A6F8D19602712D95_METHOD_5_51031B8CCF75DCBB_OFFSET UNITYSDK_OFFSET(0x147A3190)
#define CLASS_5_A6F8D19602712D95_METHOD_5_513B65BEABCE291E_OFFSET UNITYSDK_OFFSET(0x147A5310)
#define CLASS_5_A6F8D19602712D95_METHOD_5_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x147AB440)
#define CLASS_5_A6F8D19602712D95_METHOD_5_524E5A49AF6D7E2E_OFFSET UNITYSDK_OFFSET(0x147AE3E0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_54ECB6F8D1A09C9B_OFFSET UNITYSDK_OFFSET(0x147AB1F0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_5835DC16FC46989B_OFFSET UNITYSDK_OFFSET(0x147A12C0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_585D04119FBD24B7_OFFSET UNITYSDK_OFFSET(0x147A4400)
#define CLASS_5_A6F8D19602712D95_METHOD_5_595B05197A6196EC_OFFSET UNITYSDK_OFFSET(0x147A0680)
#define CLASS_5_A6F8D19602712D95_METHOD_5_5B35ABB5DACF382C_OFFSET UNITYSDK_OFFSET(0x147A2160)
#define CLASS_5_A6F8D19602712D95_METHOD_5_5C00C2EE4FCF347E_1_OFFSET UNITYSDK_OFFSET(0x147A9E60)
#define CLASS_5_A6F8D19602712D95_METHOD_5_5C00C2EE4FCF347E_OFFSET UNITYSDK_OFFSET(0x147A83C0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_5CF543F05ED4A2B9_OFFSET UNITYSDK_OFFSET(0x11459070)
#define CLASS_5_A6F8D19602712D95_METHOD_5_5F144E2E1B89F12E_OFFSET UNITYSDK_OFFSET(0x147AC290)
#define CLASS_5_A6F8D19602712D95_METHOD_5_5F681CDC1D423614_OFFSET UNITYSDK_OFFSET(0x147A3460)
#define CLASS_5_A6F8D19602712D95_METHOD_5_6105334A729F22E3_OFFSET UNITYSDK_OFFSET(0x147A9570)
#define CLASS_5_A6F8D19602712D95_METHOD_5_626C719A884DEF9A_OFFSET UNITYSDK_OFFSET(0x147A6200)
#define CLASS_5_A6F8D19602712D95_METHOD_5_664C062015F0C2D3_OFFSET UNITYSDK_OFFSET(0x147A96E0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_672D0D1B42272B56_OFFSET UNITYSDK_OFFSET(0x147A2C10)
#define CLASS_5_A6F8D19602712D95_METHOD_5_67ACFE5D529B55D7_OFFSET UNITYSDK_OFFSET(0x147AB590)
#define CLASS_5_A6F8D19602712D95_METHOD_5_67C142C8523FB4DC_OFFSET UNITYSDK_OFFSET(0x147A97E0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_68C4A7852AC80D95_OFFSET UNITYSDK_OFFSET(0x147A16F0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_6945F06F6ABC2ED5_OFFSET UNITYSDK_OFFSET(0x11458E60)
#define CLASS_5_A6F8D19602712D95_METHOD_5_6E0EC42BA575B9DE_OFFSET UNITYSDK_OFFSET(0x147AC860)
#define CLASS_5_A6F8D19602712D95_METHOD_5_72D9D09A23E0B593_OFFSET UNITYSDK_OFFSET(0x11458C80)
#define CLASS_5_A6F8D19602712D95_METHOD_5_742346BCD75E39DD_OFFSET UNITYSDK_OFFSET(0x147A6390)
#define CLASS_5_A6F8D19602712D95_METHOD_5_7DAF5B3ADF494895_1_OFFSET UNITYSDK_OFFSET(0x147AC8C0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_7DAF5B3ADF494895_OFFSET UNITYSDK_OFFSET(0x147A9560)
#define CLASS_5_A6F8D19602712D95_METHOD_5_809094DEBF13B21A_OFFSET UNITYSDK_OFFSET(0x147A2380)
#define CLASS_5_A6F8D19602712D95_METHOD_5_818ADFFE82968689_OFFSET UNITYSDK_OFFSET(0x147AD130)
#define CLASS_5_A6F8D19602712D95_METHOD_5_82ABFE24D5168B0C_1_OFFSET UNITYSDK_OFFSET(0x147AAC30)
#define CLASS_5_A6F8D19602712D95_METHOD_5_82ABFE24D5168B0C_OFFSET UNITYSDK_OFFSET(0x147A30A0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_82E29AD00B1A0960_OFFSET UNITYSDK_OFFSET(0x147A77C0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_84AEAAAF541100E8_OFFSET UNITYSDK_OFFSET(0x147A2CD0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_860CBB8AF094D2C5_OFFSET UNITYSDK_OFFSET(0x147AE040)
#define CLASS_5_A6F8D19602712D95_METHOD_5_8C6E66D260CC37AD_OFFSET UNITYSDK_OFFSET(0x147A9FF0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_8C97B82C2DF519AF_OFFSET UNITYSDK_OFFSET(0x147AC390)
#define CLASS_5_A6F8D19602712D95_METHOD_5_8DF9C9FB834622A6_OFFSET UNITYSDK_OFFSET(0x147A4A60)
#define CLASS_5_A6F8D19602712D95_METHOD_5_92B540916F43AC48_OFFSET UNITYSDK_OFFSET(0x147AA540)
#define CLASS_5_A6F8D19602712D95_METHOD_5_946ABD198D8DACF4_OFFSET UNITYSDK_OFFSET(0x147A8AA0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0x147AB770)
#define CLASS_5_A6F8D19602712D95_METHOD_5_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x147A7860)
#define CLASS_5_A6F8D19602712D95_METHOD_5_9681042564541CD6_2_OFFSET UNITYSDK_OFFSET(0x147AB310)
#define CLASS_5_A6F8D19602712D95_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x147A4ED0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_9B0C43B0B6D3BA9B_OFFSET UNITYSDK_OFFSET(0x147AACC0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_9C73488944707DA0_OFFSET UNITYSDK_OFFSET(0x147A0390)
#define CLASS_5_A6F8D19602712D95_METHOD_5_9F0BFBB54901794B_OFFSET UNITYSDK_OFFSET(0x147ADB50)
#define CLASS_5_A6F8D19602712D95_METHOD_5_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x147A82A0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x147A83D0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x147AC4E0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x147A8A40)
#define CLASS_5_A6F8D19602712D95_METHOD_5_A9DAF3FE2888211B_OFFSET UNITYSDK_OFFSET(0x147ADA60)
#define CLASS_5_A6F8D19602712D95_METHOD_5_ABC8EBD30E8338DF_OFFSET UNITYSDK_OFFSET(0x147AA310)
#define CLASS_5_A6F8D19602712D95_METHOD_5_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0x147ACD60)
#define CLASS_5_A6F8D19602712D95_METHOD_5_AE5AA9EC4ECA708E_OFFSET UNITYSDK_OFFSET(0x147AA760)
#define CLASS_5_A6F8D19602712D95_METHOD_5_AFC8215C57A0845A_OFFSET UNITYSDK_OFFSET(0x147AB760)
#define CLASS_5_A6F8D19602712D95_METHOD_5_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x147AA390)
#define CLASS_5_A6F8D19602712D95_METHOD_5_B44142C8BED75D98_OFFSET UNITYSDK_OFFSET(0x11458D80)
#define CLASS_5_A6F8D19602712D95_METHOD_5_B6A66CD6EA2C7CFB_OFFSET UNITYSDK_OFFSET(0x147A82F0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_BD6C45009051B38B_OFFSET UNITYSDK_OFFSET(0x147A9E10)
#define CLASS_5_A6F8D19602712D95_METHOD_5_BE04A7B3B5051979_OFFSET UNITYSDK_OFFSET(0x147AC8D0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_BEA748C409B0E6B1_OFFSET UNITYSDK_OFFSET(0x147ACBD0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_BF9BB9E2BBF3B6F4_OFFSET UNITYSDK_OFFSET(0x147A47C0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_C68650213AFA02A9_1_OFFSET UNITYSDK_OFFSET(0x147A9F90)
#define CLASS_5_A6F8D19602712D95_METHOD_5_C68650213AFA02A9_OFFSET UNITYSDK_OFFSET(0x147A48E0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x147ADA50)
#define CLASS_5_A6F8D19602712D95_METHOD_5_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x147ACE10)
#define CLASS_5_A6F8D19602712D95_METHOD_5_C7945ECCA67CBBF0_OFFSET UNITYSDK_OFFSET(0x147A6290)
#define CLASS_5_A6F8D19602712D95_METHOD_5_C8241DD280C80D25_OFFSET UNITYSDK_OFFSET(0x147A5D60)
#define CLASS_5_A6F8D19602712D95_METHOD_5_D67046CBB357BF79_OFFSET UNITYSDK_OFFSET(0x147A6160)
#define CLASS_5_A6F8D19602712D95_METHOD_5_D7B7C909A67BD350_1_OFFSET UNITYSDK_OFFSET(0x147AA490)
#define CLASS_5_A6F8D19602712D95_METHOD_5_D7B7C909A67BD350_OFFSET UNITYSDK_OFFSET(0x147A1130)
#define CLASS_5_A6F8D19602712D95_METHOD_5_D8C9D457F1AEC5A6_OFFSET UNITYSDK_OFFSET(0x147AD6F0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_D8EAC85EAAA29C4A_OFFSET UNITYSDK_OFFSET(0x147A1B40)
#define CLASS_5_A6F8D19602712D95_METHOD_5_D8FD81FB74270BB0_OFFSET UNITYSDK_OFFSET(0x147A8470)
#define CLASS_5_A6F8D19602712D95_METHOD_5_DBBEB514B9CCAA6D_OFFSET UNITYSDK_OFFSET(0x147A9C10)
#define CLASS_5_A6F8D19602712D95_METHOD_5_DD75E85104C7F4F0_OFFSET UNITYSDK_OFFSET(0x147A8900)
#define CLASS_5_A6F8D19602712D95_METHOD_5_DE85BBD0691AC6D6_OFFSET UNITYSDK_OFFSET(0x147A1450)
#define CLASS_5_A6F8D19602712D95_METHOD_5_DFD04F4FB9D4909C_OFFSET UNITYSDK_OFFSET(0x147ADAC0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_E06ECA39EB16C571_OFFSET UNITYSDK_OFFSET(0x147A02F0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_E2D8E94B87A09275_OFFSET UNITYSDK_OFFSET(0x147A5580)
#define CLASS_5_A6F8D19602712D95_METHOD_5_E45E9914AEBC220C_OFFSET UNITYSDK_OFFSET(0x147A0CE0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_E82E2569B5AD252F_OFFSET UNITYSDK_OFFSET(0x147A98C0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x147ADEF0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x147A2C00)
#define CLASS_5_A6F8D19602712D95_METHOD_5_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x147AE3B0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_F29D7A7F508EABE1_OFFSET UNITYSDK_OFFSET(0x147A1010)
#define CLASS_5_A6F8D19602712D95_METHOD_5_F5BCA34E1157E704_OFFSET UNITYSDK_OFFSET(0x147AB3F0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_FB17DAAC8E216749_OFFSET UNITYSDK_OFFSET(0x147A3880)
#define CLASS_5_A6F8D19602712D95_METHOD_5_FD47801121AE27FC_OFFSET UNITYSDK_OFFSET(0x147A4FA0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_FD9F094CFF7AC651_OFFSET UNITYSDK_OFFSET(0x147AAF40)
#define CLASS_5_A6F8D19602712D95_METHOD_5_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x147AB6C0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_FF7351B39D5FBEB5_1_OFFSET UNITYSDK_OFFSET(0x147AB280)
#define CLASS_5_A6F8D19602712D95_METHOD_5_FF7351B39D5FBEB5_OFFSET UNITYSDK_OFFSET(0x147AAEB0)
#define CLASS_5_A6F8D19602712D95_METHOD_5_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x147A20E0)
#define CLASS_5_A6F8D19602712D95__CCTOR_OFFSET UNITYSDK_OFFSET(0x11458F10)
#define CLASS_5_A6F8D19602712D95__CTOR_OFFSET UNITYSDK_OFFSET(0x11458810)

inline static constexpr unsigned int Class_5_A6F8D19602712D95_TypeDefinitionIndex = 42399;

class Class_5_A6F8D19602712D95 : public ::Class_4_DA19DD65175B97CF
{
public:
	static ::System::String** StaticGet_Field_5_21()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_5_A6F8D19602712D95_TypeDefinitionIndex)->GetStaticField(0x320D0);
	}
	static ::MoleMole::UIHollowChessboard3DModelController** StaticGet_Field_5_2()
	{
		return (::MoleMole::UIHollowChessboard3DModelController**)Il2CppClass::FromTypeDefinitionIndex(Class_5_A6F8D19602712D95_TypeDefinitionIndex)->GetStaticField(0x320D8);
	}
	static ::System::String** StaticGet_Field_5_26()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_5_A6F8D19602712D95_TypeDefinitionIndex)->GetStaticField(0x320E0);
	}
	static ::System::String** StaticGet_Field_5_22()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_5_A6F8D19602712D95_TypeDefinitionIndex)->GetStaticField(0x320E8);
	}
	static ::System::String** StaticGet_Field_5_24()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_5_A6F8D19602712D95_TypeDefinitionIndex)->GetStaticField(0x320F0);
	}
	static ::System::String** StaticGet_Field_5_19()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_5_A6F8D19602712D95_TypeDefinitionIndex)->GetStaticField(0x320F8);
	}
	static ::System::String** StaticGet_Field_5_23()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_5_A6F8D19602712D95_TypeDefinitionIndex)->GetStaticField(0x32100);
	}
	static ::System::String** StaticGet_Field_5_25()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_5_A6F8D19602712D95_TypeDefinitionIndex)->GetStaticField(0x32108);
	}
	static ::System::String** StaticGet_Field_5_20()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_5_A6F8D19602712D95_TypeDefinitionIndex)->GetStaticField(0x32110);
	}
	static ::System::String** StaticGet_Field_5_18()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_5_A6F8D19602712D95_TypeDefinitionIndex)->GetStaticField(0x32118);
	}
	::MoleMole::Config::ConfigHollowChessboard* Field_5_37; // 0x688
	::UnityEngine::Texture2D* Field_5_31; // 0x690
	::System::String* Field_5_27; // 0x698
	::Class_0_16E4307DCC419505_273* Field_5_16; // 0x6A0
	::UnityEngine::Texture2D* Field_5_30; // 0x6A8
	::Il2CppArray<::UnityEngine::Color>* Field_5_1; // 0x6B0
	::UnityEngine::Texture2D* Field_5_29; // 0x6B8
	::MoleMole::Config::ChessboardSwitchEffect* Field_5_9; // 0x6C0
	::Class_2_F5737224A0253470* Field_5_12; // 0x6C8
	::Class_1_F5B35B1B6669CF16* Field_5_15; // 0x6D0
	::DG::Tweening::Tween* Field_5_14; // 0x6D8
	::Class_0_16E4307DCC419505_273* Field_5_17; // 0x6E0
	::MoleMole::Config::ChessboardSwitchEffect* Field_5_11; // 0x6E8
	::Class_1_F5B35B1B6669CF16* Field_5_5; // 0x6F0
	::Class_5_A6F8D19602712D95_Class_1_22A8D76759698EC6* Field_5_6; // 0x6F8
	::UnityEngine::Texture2D* Field_5_28; // 0x700
	::MoleMole::UIHollowChessboard3DModelController_CanvasRTHandler* Field_5_32; // 0x708
	::MoleMole::Config::ChessboardSwitchEffect* Field_5_10; // 0x710
	::System::Threading::CancellationTokenSource* Field_5_7; // 0x718
	::Class_1_0AEBFEBDADDA07AC* Field_5_8; // 0x720
	::UnityEngine::Color Field_5_42; // 0x728
	::Class_5_A6F8D19602712D95_Enum_3_4D5FFF8B0CC63972 Field_5_38; // 0x738
	::System::Single Field_5_40; // 0x73C
	::System::Single Field_5_39; // 0x740
	::System::Int32 Field_5_33; // 0x744
	::Enum_3_356D99BCC6A2E194 Field_5_35; // 0x748
	::System::Int32 Field_5_3; // 0x74C
	::System::Boolean Field_5_4; // 0x750
	::System::Boolean Field_5_36; // 0x751
	::System::Boolean Field_5_0; // 0x752
	::System::Single Field_5_13; // 0x754
	::System::Int32 Field_5_41; // 0x758
	::Enum_3_625EA19CD353E00F Field_5_34; // 0x75C

	::System::Void _ctor(::Struct_2_9F5D7A8EAA940D1A a1, ::Struct_2_6E23A591AC26A31E a2, ::MoleMole::HollowChessboard::HollowCell a3, ::MoleMole::UIHollowChessboard3DModelController* a4, ::Class_5_FCAF801AC482D3B5* a5, ::Class_1_3F9A20B8022097A7* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_9F5D7A8EAA940D1A, ::Struct_2_6E23A591AC26A31E, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::UIHollowChessboard3DModelController*, ::Class_5_FCAF801AC482D3B5*, ::Class_1_3F9A20B8022097A7*))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95__CCTOR_OFFSET))();
	}

	::System::Void Method_5_1F130271093617A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_1F130271093617A5_OFFSET))(this);
	}

	::System::Void Method_5_72D9D09A23E0B593()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_72D9D09A23E0B593_OFFSET))(this);
	}

	::System::Void Method_5_B44142C8BED75D98(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_B44142C8BED75D98_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_6945F06F6ABC2ED5(::Class_1_5F3ED31AAEDA15B0* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5F3ED31AAEDA15B0*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_6945F06F6ABC2ED5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_50DDC384D99AC5A6(::Class_1_5F3ED31AAEDA15B0* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5F3ED31AAEDA15B0*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_50DDC384D99AC5A6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_5CF543F05ED4A2B9(::MoleMole::Config::ConfigHollowChessboard_ChessPieceEffect* a1, ::System::Action* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_ChessPieceEffect*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_5CF543F05ED4A2B9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_5_1C5E97ED8DD75A8A(::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig* a1, ::System::Action* a2, ::System::Boolean a3, ::Class_1_34B3048095D388ED* a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig*, ::System::Action*, ::System::Boolean, ::Class_1_34B3048095D388ED*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_1C5E97ED8DD75A8A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_5_1DF57FDE114E5C66(::Share::GridDir a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Share::GridDir))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_1DF57FDE114E5C66_OFFSET))(this, a1);
	}

	::System::Int32 Method_5_E06ECA39EB16C571()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_E06ECA39EB16C571_OFFSET))(this);
	}

	::System::Void Method_5_9C73488944707DA0(::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig* a1, ::System::Action* a2, ::System::Boolean a3, ::System::Boolean a4, ::MoleMole::HollowChessboard::GeometryHeightType a5, ::System::Boolean a6, ::Class_1_34B3048095D388ED* a7, ::System::Single a8)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig*, ::System::Action*, ::System::Boolean, ::System::Boolean, ::MoleMole::HollowChessboard::GeometryHeightType, ::System::Boolean, ::Class_1_34B3048095D388ED*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_9C73488944707DA0_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::Class_3_01A715AD62081B7F* Method_5_46206B56BD30B28B()
	{
		return ((::Class_3_01A715AD62081B7F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_46206B56BD30B28B_OFFSET))(this);
	}

	::System::Void Method_5_595B05197A6196EC(::Class_2_208CC9941471731A_965* a1, ::System::Action* a2, ::System::Action* a3, ::System::Action* a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_965*, ::System::Action*, ::System::Action*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_595B05197A6196EC_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_5_3EAF23F199CBB578(::MoleMole::ConfigAnimationCurveGroup* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Action_1<::MoleMole::UICameraAtom>* a4, ::System::Single a5, ::System::Action* a6, ::System::Action* a7)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigAnimationCurveGroup*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action_1<::MoleMole::UICameraAtom>*, ::System::Single, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_3EAF23F199CBB578_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_5_3D5E4AF00755B665(::Class_1_0AEBFEBDADDA07AC* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0AEBFEBDADDA07AC*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_3D5E4AF00755B665_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_5_D7B7C909A67BD350()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_D7B7C909A67BD350_OFFSET))(this);
	}

	::System::Void Method_5_20C1DDBD285DAB3C(::MoleMole::UIWindowController* a1, ::MoleMole::Vector2Int a2, ::Class_1_FA793AB1D49D0132* a3, ::MoleMole::UIControllerContextBase* a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::MoleMole::Vector2Int, ::Class_1_FA793AB1D49D0132*, ::MoleMole::UIControllerContextBase*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_20C1DDBD285DAB3C_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_5_68C4A7852AC80D95(::MoleMole::Config::ConfigHollowChessboard_Flash* a1, ::System::Action* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_Flash*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_68C4A7852AC80D95_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_5_18D1AAAAA5CC635E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_18D1AAAAA5CC635E_OFFSET))(this, a1);
	}

	::System::Void Method_5_809094DEBF13B21A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_809094DEBF13B21A_OFFSET))(this);
	}

	::System::Boolean Method_5_1676349FAEF4B05E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_1676349FAEF4B05E_OFFSET))(this);
	}

	::System::Boolean Method_5_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_5_672D0D1B42272B56(::Class_1_0AEBFEBDADDA07AC* a1, ::Class_1_E87E347C649FDDBC_Enum_3_9CA0D4E7230BAB54 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0AEBFEBDADDA07AC*, ::Class_1_E87E347C649FDDBC_Enum_3_9CA0D4E7230BAB54))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_672D0D1B42272B56_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_84AEAAAF541100E8(::System::String* a1, ::System::Boolean a2, ::System::Single a3, ::System::Single a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_84AEAAAF541100E8_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_5_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_391A84BCD9F51317_OFFSET))(this);
	}

	::Class_1_F5B35B1B6669CF16* Method_5_82ABFE24D5168B0C()
	{
		return ((::Class_1_F5B35B1B6669CF16*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_82ABFE24D5168B0C_OFFSET))(this);
	}

	::System::Boolean Method_5_42C5BADE1C9EFC80()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_42C5BADE1C9EFC80_OFFSET))(this);
	}

	::System::Void Method_5_51031B8CCF75DCBB(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_51031B8CCF75DCBB_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_5_424C9FA207DBFFDB(::System::Single a1, ::System::Action* a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_424C9FA207DBFFDB_OFFSET))(this, a1, a2);
	}

	::ConfigTextureColor* Method_5_2BD5D416BE8183AF()
	{
		return ((::ConfigTextureColor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_2BD5D416BE8183AF_OFFSET))(this);
	}

	::System::Void Method_5_FB17DAAC8E216749(::System::String* a1, ::System::Action* a2, ::System::Single a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_FB17DAAC8E216749_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_5_0118DE6EDC86816A(::System::String* a1, ::System::Boolean a2, ::System::Action_1<::MoleMole::IVideoPlayer*>* a3, ::System::Action* a4, ::System::Action* a5, ::System::Boolean a6, ::System::Int32 a7, ::System::String* a8)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action_1<::MoleMole::IVideoPlayer*>*, ::System::Action*, ::System::Action*, ::System::Boolean, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_0118DE6EDC86816A_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_5_BF9BB9E2BBF3B6F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_BF9BB9E2BBF3B6F4_OFFSET))(this);
	}

	::System::Void Method_5_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_5_C68650213AFA02A9(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_C68650213AFA02A9_OFFSET))(this, a1);
	}

	::System::String* Method_5_2CBA24E50F81A5B9(::MoleMole::ScreenSwitchType a1)
	{
		return ((::System::String*(*)(::PVOID, ::MoleMole::ScreenSwitchType))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_2CBA24E50F81A5B9_OFFSET))(this, a1);
	}

	::System::Void Method_5_8DF9C9FB834622A6(::System::Action* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_8DF9C9FB834622A6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean Method_5_0B1EB5C9B94BAB66()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_0B1EB5C9B94BAB66_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_5_D8EAC85EAAA29C4A(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_D8EAC85EAAA29C4A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Cysharp::Threading::Tasks::UniTask Method_5_513B65BEABCE291E(::MoleMole::IVideoPlayer* a1, ::System::Action* a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::MoleMole::IVideoPlayer*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_513B65BEABCE291E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_5_0EB2899F45F512FE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_0EB2899F45F512FE_OFFSET))(this);
	}

	::System::Void Method_5_E2D8E94B87A09275(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_E2D8E94B87A09275_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_5_2983F8A9AFDFA1A1(::MoleMole::Config::ConfigHollowChessboard_Rotate* a1, ::System::Action* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_Rotate*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_2983F8A9AFDFA1A1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_5_059C1E624E4C4CB6(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_059C1E624E4C4CB6_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_5_C8241DD280C80D25(::Share::GridDir a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Share::GridDir))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_C8241DD280C80D25_OFFSET))(this, a1);
	}

	::System::Void Method_5_626C719A884DEF9A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_626C719A884DEF9A_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_5_C7945ECCA67CBBF0(::MoleMole::Config::ConfigHollowChessboard_BigTVMoveFireEffect_RuntimeEffectInfo a1, ::System::Action* a2, ::System::Single a3)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_BigTVMoveFireEffect_RuntimeEffectInfo, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_C7945ECCA67CBBF0_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Color Method_5_742346BCD75E39DD()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_742346BCD75E39DD_OFFSET))(this);
	}

	::System::Void Method_5_3766BE4458C9425D(::Class_5_A6F8D19602712D95_Enum_3_4D5FFF8B0CC63972 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_A6F8D19602712D95_Enum_3_4D5FFF8B0CC63972))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_3766BE4458C9425D_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_5_82E29AD00B1A0960(::MoleMole::Config::ConfigHollowChessboard_PostEffect* a1, ::System::Action* a2, ::System::Single a3)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_PostEffect*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_82E29AD00B1A0960_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_5_F29D7A7F508EABE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_F29D7A7F508EABE1_OFFSET))(this);
	}

	::System::Void Method_5_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Boolean Method_5_454385D5944B07AD(::MoleMole::HollowChessboard::HollowCell a1, ::MoleMole::HollowChessboard::HollowCell a2, ::MoleMole::HollowChessboard::HollowCell a3, ::MoleMole::HollowChessboard::HollowCell a4, ::System::Boolean a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_454385D5944B07AD_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_5_1BF00A41CF2C4F12(::System::Boolean a1, ::UnityEngine::Color a2, ::UnityEngine::Texture2D* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Color, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_1BF00A41CF2C4F12_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_5_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_5_B6A66CD6EA2C7CFB(::MoleMole::Config::ConfigHollowChessboard_RiseOrSink* a1, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig* a2, ::System::Action* a3, ::System::Single a4)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_RiseOrSink*, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_B6A66CD6EA2C7CFB_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_0_16E4307DCC419505_273* Method_5_5C00C2EE4FCF347E()
	{
		return ((::Class_0_16E4307DCC419505_273*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_5C00C2EE4FCF347E_OFFSET))(this);
	}

	::System::Boolean Method_5_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_5_5835DC16FC46989B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_5835DC16FC46989B_OFFSET))(this);
	}

	::System::Boolean Method_5_D8FD81FB74270BB0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_D8FD81FB74270BB0_OFFSET))(this);
	}

	::System::Void Method_5_2BA4FD73FC0332B8(::System::Action* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_2BA4FD73FC0332B8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_DD75E85104C7F4F0(::System::Nullable_1<::System::Single> a1, ::Class_5_A6F8D19602712D95_Struct_2_6B9789F61C82B731& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Single>, ::Class_5_A6F8D19602712D95_Struct_2_6B9789F61C82B731&))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_DD75E85104C7F4F0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_5_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_A984848EA3E436DA_OFFSET))(this);
	}

	::System::Void Method_5_946ABD198D8DACF4(::MoleMole::Config::ConfigHollowChessboard_BigTVMoveFireEffect_RuntimeEffectInfo a1, ::System::Action* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_BigTVMoveFireEffect_RuntimeEffectInfo, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_946ABD198D8DACF4_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_5_18B43C7F9F3156FD(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::String* a5)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_18B43C7F9F3156FD_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_5_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_5_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_5_36C15FDD2675F568(::MoleMole::Config::ConfigHollowChessboard_MoveXY* a1, ::System::Action* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_MoveXY*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_36C15FDD2675F568_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_5_7DAF5B3ADF494895(::Class_0_16E4307DCC419505_273* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_273*))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_7DAF5B3ADF494895_OFFSET))(this, a1);
	}

	::System::Void Method_5_6105334A729F22E3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_6105334A729F22E3_OFFSET))(this, a1);
	}

	::System::Single Method_5_43E290A0B26B39F6(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_43E290A0B26B39F6_OFFSET))(this, a1, a2);
	}

	::System::Single Method_5_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Void Method_5_664C062015F0C2D3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_664C062015F0C2D3_OFFSET))(this, a1);
	}

	::System::Boolean Method_5_67C142C8523FB4DC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_67C142C8523FB4DC_OFFSET))(this);
	}

	::System::Void Method_5_E82E2569B5AD252F(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_E82E2569B5AD252F_OFFSET))(this, a1);
	}

	::System::Int32 Method_5_43CB3F4F72E9EC39(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_43CB3F4F72E9EC39_OFFSET))(this, a1);
	}

	::System::Void Method_5_DBBEB514B9CCAA6D(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_DBBEB514B9CCAA6D_OFFSET))(this, a1);
	}

	::System::UInt32 Method_5_4532BD255B8C36AB(::Class_2_208CC9941471731A_965* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_208CC9941471731A_965*))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_4532BD255B8C36AB_OFFSET))(this, a1);
	}

	::System::Boolean Method_5_3F22E1B45976ADD0(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_3F22E1B45976ADD0_OFFSET))(this, a1, a2, a3);
	}

	::Class_5_A6F8D19602712D95_Enum_3_4D5FFF8B0CC63972 Method_5_BD6C45009051B38B()
	{
		return ((::Class_5_A6F8D19602712D95_Enum_3_4D5FFF8B0CC63972(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_BD6C45009051B38B_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_273* Method_5_5C00C2EE4FCF347E_1()
	{
		return ((::Class_0_16E4307DCC419505_273*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_5C00C2EE4FCF347E_1_OFFSET))(this);
	}

	::System::Single Method_5_124E7DAB85EAFECD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_124E7DAB85EAFECD_OFFSET))(this);
	}

	::MoleMole::TextureSheetData* Method_5_449C091B2D106C94(::System::String* a1)
	{
		return ((::MoleMole::TextureSheetData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_449C091B2D106C94_OFFSET))(this, a1);
	}

	::System::Void Method_5_C68650213AFA02A9_1(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_C68650213AFA02A9_1_OFFSET))(this, a1);
	}

	::System::Void Method_5_8C6E66D260CC37AD(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_8C6E66D260CC37AD_OFFSET))(this, a1);
	}

	::System::Void Method_5_0B6C3969A0985ADD(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_0B6C3969A0985ADD_OFFSET))(this, a1, a2);
	}

	::System::Single Method_5_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_3422201382CE593B_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowCell Method_5_ABC8EBD30E8338DF()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_ABC8EBD30E8338DF_OFFSET))(this);
	}

	::System::Void Method_5_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Boolean Method_5_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_5_DE85BBD0691AC6D6(::MoleMole::Vector2Int a1, ::MoleMole::UIWindowController* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Vector2Int, ::MoleMole::UIWindowController*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_DE85BBD0691AC6D6_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_5_D7B7C909A67BD350_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_D7B7C909A67BD350_1_OFFSET))(this);
	}

	::System::Boolean Method_5_92B540916F43AC48(::Enum_3_4608E37A1B3D374A_11 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_11))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_92B540916F43AC48_OFFSET))(this, a1);
	}

	::System::Single Method_5_21D22E033EB920F8(::System::String* a1, ::System::Action* a2, ::System::Action* a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Action*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_21D22E033EB920F8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::IEnumerator* Method_5_AE5AA9EC4ECA708E(::MoleMole::Config::ConfigHollowChessboard_CameraEffect* a1, ::System::Action* a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_CameraEffect*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_AE5AA9EC4ECA708E_OFFSET))(this, a1, a2);
	}

	::Class_5_A6F8D19602712D95_Class_1_22A8D76759698EC6* Method_5_474DA5956978BDEA()
	{
		return ((::Class_5_A6F8D19602712D95_Class_1_22A8D76759698EC6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_474DA5956978BDEA_OFFSET))(this);
	}

	::System::Void Method_5_50E69F72BDB8312F(::MoleMole::Config::ChessboardSwitchEffect* a1, ::UnityEngine::Events::UnityAction* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ChessboardSwitchEffect*, ::UnityEngine::Events::UnityAction*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_50E69F72BDB8312F_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_F5B35B1B6669CF16* Method_5_82ABFE24D5168B0C_1()
	{
		return ((::Class_1_F5B35B1B6669CF16*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_82ABFE24D5168B0C_1_OFFSET))(this);
	}

	::System::Boolean Method_5_9B0C43B0B6D3BA9B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_9B0C43B0B6D3BA9B_OFFSET))(this);
	}

	::System::Void Method_5_228E3444D290BEE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_228E3444D290BEE7_OFFSET))(this);
	}

	::System::Boolean Method_5_D67046CBB357BF79()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_D67046CBB357BF79_OFFSET))(this);
	}

	::System::Void Method_5_FF7351B39D5FBEB5(::UnityEngine::Events::UnityAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_FF7351B39D5FBEB5_OFFSET))(this, a1);
	}

	::System::Void Method_5_FD9F094CFF7AC651(::MoleMole::Config::ConfigHollowChessboard_CameraShake* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_CameraShake*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_FD9F094CFF7AC651_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_FF7351B39D5FBEB5_1(::UnityEngine::Events::UnityAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_FF7351B39D5FBEB5_1_OFFSET))(this, a1);
	}

	::Il2CppArray<::UnityEngine::Color>* Method_5_215556991F31CB2D()
	{
		return ((::Il2CppArray<::UnityEngine::Color>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_215556991F31CB2D_OFFSET))(this);
	}

	::UnityEngine::Color& Method_5_F5BCA34E1157E704()
	{
		return ((::UnityEngine::Color&(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_F5BCA34E1157E704_OFFSET))(this);
	}

	::System::Void Method_5_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_5_5B35ABB5DACF382C(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_5B35ABB5DACF382C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_5_67ACFE5D529B55D7(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_67ACFE5D529B55D7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_5_AFC8215C57A0845A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_AFC8215C57A0845A_OFFSET))(this);
	}

	::System::Void Method_5_96189EDEF38976A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_96189EDEF38976A6_OFFSET))(this);
	}

	::System::Void Method_5_5F144E2E1B89F12E(::System::Boolean a1, ::MoleMole::UIHollowChessPieceParticle_TransformType a2, ::System::Nullable_1<::Foundation::Unreal::FTransform> a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::UIHollowChessPieceParticle_TransformType, ::System::Nullable_1<::Foundation::Unreal::FTransform>))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_5F144E2E1B89F12E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_5_8C97B82C2DF519AF(::UnityEngine::Events::UnityAction* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_8C97B82C2DF519AF_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_5_FD47801121AE27FC(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3, ::MoleMole::UIHollowChessPieceParticle_TransformType a4, ::System::Nullable_1<::Foundation::Unreal::FTransform> a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::MoleMole::UIHollowChessPieceParticle_TransformType, ::System::Nullable_1<::Foundation::Unreal::FTransform>))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_FD47801121AE27FC_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_5_3D52A1A2D5439DBD(::Class_1_E87E347C649FDDBC_Enum_3_9CA0D4E7230BAB54 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E87E347C649FDDBC_Enum_3_9CA0D4E7230BAB54))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_3D52A1A2D5439DBD_OFFSET))(this, a1);
	}

	::Enum_3_625EA19CD353E00F Method_5_A96DCA30C6927810()
	{
		return ((::Enum_3_625EA19CD353E00F(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Boolean Method_5_1FC86D2BFE10815E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_1FC86D2BFE10815E_OFFSET))(this);
	}

	::MoleMole::TextureSheetData* Method_5_E45E9914AEBC220C(::Class_2_208CC9941471731A_965* a1)
	{
		return ((::MoleMole::TextureSheetData*(*)(::PVOID, ::Class_2_208CC9941471731A_965*))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_E45E9914AEBC220C_OFFSET))(this, a1);
	}

	static ::System::Void Method_5_6E0EC42BA575B9DE(::MoleMole::UIHollowChessboard3DModelController* a1)
	{
		return ((::System::Void(*)(::MoleMole::UIHollowChessboard3DModelController*))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_6E0EC42BA575B9DE_OFFSET))(a1);
	}

	::System::Void Method_5_7DAF5B3ADF494895_1(::Class_0_16E4307DCC419505_273* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_273*))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_7DAF5B3ADF494895_1_OFFSET))(this, a1);
	}

	::System::Void Method_5_BE04A7B3B5051979(::MoleMole::Config::ConfigHollowChessboard_PostEffect* a1, ::System::Action* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_PostEffect*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_BE04A7B3B5051979_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_5_BEA748C409B0E6B1(::Class_1_5F3ED31AAEDA15B0* a1, ::Class_1_EBACA96C31DAB7D8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5F3ED31AAEDA15B0*, ::Class_1_EBACA96C31DAB7D8*))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_BEA748C409B0E6B1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_AD23FDCC7576BB32(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_AD23FDCC7576BB32_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_5_54ECB6F8D1A09C9B(::MoleMole::Config::ConfigHollowChessboard_CameraShake* a1, ::System::Action* a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_CameraShake*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_54ECB6F8D1A09C9B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_5_31AE1DAAA54840D4(::MoleMole::Config::ConfigHollowChessboard_CameraEffect* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_CameraEffect*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_31AE1DAAA54840D4_OFFSET))(this, a1, a2);
	}

	static ::MoleMole::UIHollowChessboard3DModelController* Method_5_047C0F8A16B2B100()
	{
		return ((::MoleMole::UIHollowChessboard3DModelController*(*)())((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_047C0F8A16B2B100_OFFSET))();
	}

	::System::Void Method_5_818ADFFE82968689(::MoleMole::Config::ConfigHollowChessboard_Move* a1, ::System::Action* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_Move*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_818ADFFE82968689_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_5_D8C9D457F1AEC5A6(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_D8C9D457F1AEC5A6_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_5_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_5_A9DAF3FE2888211B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_A9DAF3FE2888211B_OFFSET))(this, a1);
	}

	::System::Boolean Method_5_DFD04F4FB9D4909C(::System::Single a1, ::System::Action* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_DFD04F4FB9D4909C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_9F0BFBB54901794B(::MoleMole::Config::ConfigHollowChessboard_RiseOrSink* a1, ::System::Action* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_RiseOrSink*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_9F0BFBB54901794B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_5_5F681CDC1D423614(::System::Collections::Generic::List_1<::MoleMole::Config::ChessboardSwitchEffect*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ChessboardSwitchEffect*>*))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_5F681CDC1D423614_OFFSET))(this, a1);
	}

	::System::Boolean Method_5_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_5_35F5B874CBA7A118(::MoleMole::Config::ConfigHollowChessboard_ChessPieceEffect* a1, ::System::Action* a2, ::System::Single a3)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_ChessPieceEffect*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_35F5B874CBA7A118_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_5_107247B6331E64C6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_107247B6331E64C6_OFFSET))(this);
	}

	::System::Void Method_5_860CBB8AF094D2C5(::Class_0_16E4307DCC419505_273*& a1, ::UnityEngine::AnimationCurve* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_273*&, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_860CBB8AF094D2C5_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_5_585D04119FBD24B7(::System::String* a1, ::System::Boolean a2, ::System::Action_1<::MoleMole::IVideoPlayer*>* a3, ::System::Action* a4, ::System::Action* a5, ::System::Boolean a6, ::System::String* a7)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action_1<::MoleMole::IVideoPlayer*>*, ::System::Action*, ::System::Action*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_585D04119FBD24B7_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_5_9681042564541CD6_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_9681042564541CD6_2_OFFSET))(this);
	}

	::System::Boolean Method_5_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_5_524E5A49AF6D7E2E(::System::String* a1, ::System::Boolean a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_METHOD_5_524E5A49AF6D7E2E_OFFSET))(this, a1, a2, a3);
	}
};

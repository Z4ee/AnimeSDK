#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B0798E1629E01207.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VREffects_NativeSRP_ColorBlendMethod.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ChannelMapping.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DistanceDistortionBlendMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ScanMaskType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ScanType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ScanlineBlendMode.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityVREffectsEffect; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class VREffects; }

#define CLASS_3_DDABE4FBB0E07033_METHOD_3_40520B068178F3C7_OFFSET UNITYSDK_OFFSET(0x1A7B8D70)
#define CLASS_3_DDABE4FBB0E07033_METHOD_3_4BE2275A1B2E5358_OFFSET UNITYSDK_OFFSET(0x1A7A8370)
#define CLASS_3_DDABE4FBB0E07033_METHOD_3_4DDDBF2C561F74E4_OFFSET UNITYSDK_OFFSET(0x19529430)
#define CLASS_3_DDABE4FBB0E07033_METHOD_3_9391AE4DB03BA811_OFFSET UNITYSDK_OFFSET(0x1951B140)
#define CLASS_3_DDABE4FBB0E07033_METHOD_3_D6DBEF2833541C34_OFFSET UNITYSDK_OFFSET(0x1A7995C0)
#define CLASS_3_DDABE4FBB0E07033_METHOD_3_F6FC91902EC5E1A2_OFFSET UNITYSDK_OFFSET(0x195085C0)
#define CLASS_3_DDABE4FBB0E07033_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A7C0920)
#define CLASS_3_DDABE4FBB0E07033__CTOR_OFFSET UNITYSDK_OFFSET(0x19507010)

inline static constexpr unsigned int Class_3_DDABE4FBB0E07033_TypeDefinitionIndex = 49016;

class Class_3_DDABE4FBB0E07033 : public ::Class_2_B0798E1629E01207<::UnityEngine::Rendering::Universal::VREffects*, ::MoleMole::Config::ConfigEntityVREffectsEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_213; // 0xA8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_239; // 0xB0
	::UnityEngine::Texture* Field_3_222; // 0xB8
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_109; // 0xC0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_205; // 0xC8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_251; // 0xD0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_169; // 0xD8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_271; // 0xE0
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_123; // 0xE8
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::DistanceDistortionBlendMode>* Field_3_245; // 0xF0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_175; // 0xF8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_91; // 0x100
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_179; // 0x108
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_41; // 0x110
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_119; // 0x118
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_133; // 0x120
	::MoleMole::TwoValue_1<::System::Single>* Field_3_173; // 0x128
	::UnityEngine::Texture* Field_3_38; // 0x130
	::MoleMole::TwoValue_1<::System::Single>* Field_3_45; // 0x138
	::MoleMole::TwoValue_1<::System::Single>* Field_3_235; // 0x140
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_167; // 0x148
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_1; // 0x150
	::MoleMole::TwoValue_1<::System::Single>* Field_3_207; // 0x158
	::MoleMole::TwoValue_1<::System::Single>* Field_3_7; // 0x160
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_249; // 0x168
	::MoleMole::TwoValue_1<::System::Single>* Field_3_241; // 0x170
	::MoleMole::TwoValue_1<::System::Single>* Field_3_227; // 0x178
	::MoleMole::TwoValue_1<::System::Single>* Field_3_73; // 0x180
	::MoleMole::TwoValue_1<::System::Single>* Field_3_97; // 0x188
	::MoleMole::TwoValue_1<::System::Single>* Field_3_65; // 0x190
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_49; // 0x198
	::MoleMole::TwoValue_1<::System::Single>* Field_3_11; // 0x1A0
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_189; // 0x1A8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_153; // 0x1B0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_55; // 0x1B8
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_79; // 0x1C0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_255; // 0x1C8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_149; // 0x1D0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_35; // 0x1D8
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_185; // 0x1E0
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_191; // 0x1E8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_177; // 0x1F0
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::ScanlineBlendMode>* Field_3_263; // 0x1F8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_69; // 0x200
	::MoleMole::TwoValue_1<::System::Single>* Field_3_221; // 0x208
	::MoleMole::TwoValue_1<::UnityEngine::Vector3>* Field_3_233; // 0x210
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_257; // 0x218
	::MoleMole::TwoValue_1<::System::Single>* Field_3_229; // 0x220
	::MoleMole::TwoValue_1<::System::Single>* Field_3_87; // 0x228
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_19; // 0x230
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod>* Field_3_99; // 0x238
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_145; // 0x240
	::MoleMole::TwoValue_1<::System::Single>* Field_3_237; // 0x248
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_117; // 0x250
	::MoleMole::TwoValue_1<::System::Single>* Field_3_103; // 0x258
	::MoleMole::TwoValue_1<::System::Single>* Field_3_9; // 0x260
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_183; // 0x268
	::MoleMole::TwoValue_1<::System::Single>* Field_3_159; // 0x270
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_199; // 0x278
	::MoleMole::TwoValue_1<::System::Single>* Field_3_51; // 0x280
	::MoleMole::TwoValue_1<::System::Single>* Field_3_89; // 0x288
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_63; // 0x290
	::MoleMole::TwoValue_1<::System::Single>* Field_3_25; // 0x298
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod>* Field_3_67; // 0x2A0
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::ScanMaskType>* Field_3_33; // 0x2A8
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_223; // 0x2B0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_161; // 0x2B8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_5; // 0x2C0
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_61; // 0x2C8
	::UnityEngine::Texture* Field_3_198; // 0x2D0
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_155; // 0x2D8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_261; // 0x2E0
	::MoleMole::TwoValue_1<::UnityEngine::Vector3>* Field_3_259; // 0x2E8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_29; // 0x2F0
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_125; // 0x2F8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_85; // 0x300
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_111; // 0x308
	::MoleMole::TwoValue_1<::System::Single>* Field_3_225; // 0x310
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_121; // 0x318
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_95; // 0x320
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod>* Field_3_83; // 0x328
	::MoleMole::TwoValue_1<::System::Single>* Field_3_17; // 0x330
	::UnityEngine::Texture* Field_3_252; // 0x338
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_43; // 0x340
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_203; // 0x348
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_267; // 0x350
	::MoleMole::TwoValue_1<::System::Single>* Field_3_269; // 0x358
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_197; // 0x360
	::MoleMole::TwoValue_1<::System::Single>* Field_3_101; // 0x368
	::MoleMole::TwoValue_1<::System::Single>* Field_3_165; // 0x370
	::MoleMole::TwoValue_1<::System::Single>* Field_3_57; // 0x378
	::MoleMole::TwoValue_1<::System::Single>* Field_3_215; // 0x380
	::UnityEngine::Texture* Field_3_216; // 0x388
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_247; // 0x390
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_23; // 0x398
	::MoleMole::TwoValue_1<::System::Single>* Field_3_75; // 0x3A0
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_77; // 0x3A8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_105; // 0x3B0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_171; // 0x3B8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_139; // 0x3C0
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_195; // 0x3C8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_231; // 0x3D0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_113; // 0x3D8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_157; // 0x3E0
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_127; // 0x3E8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_53; // 0x3F0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_131; // 0x3F8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_71; // 0x400
	::MoleMole::TwoValue_1<::System::Single>* Field_3_151; // 0x408
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_217; // 0x410
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_181; // 0x418
	::MoleMole::TwoValue_1<::System::Single>* Field_3_59; // 0x420
	::MoleMole::TwoValue_1<::System::Single>* Field_3_129; // 0x428
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::ScanType>* Field_3_31; // 0x430
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_187; // 0x438
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_201; // 0x440
	::MoleMole::TwoValue_1<::System::Single>* Field_3_211; // 0x448
	::MoleMole::TwoValue_1<::System::Single>* Field_3_107; // 0x450
	::MoleMole::TwoValue_1<::System::Single>* Field_3_275; // 0x458
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_39; // 0x460
	::MoleMole::TwoValue_1<::System::Single>* Field_3_21; // 0x468
	::MoleMole::TwoValue_1<::System::Single>* Field_3_15; // 0x470
	::MoleMole::TwoValue_1<::UnityEngine::Vector3>* Field_3_243; // 0x478
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod>* Field_3_115; // 0x480
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_47; // 0x488
	::MoleMole::TwoValue_1<::System::Single>* Field_3_81; // 0x490
	::MoleMole::TwoValue_1<::System::Single>* Field_3_265; // 0x498
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod>* Field_3_143; // 0x4A0
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_141; // 0x4A8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_135; // 0x4B0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_193; // 0x4B8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_27; // 0x4C0
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_93; // 0x4C8
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_209; // 0x4D0
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::ChannelMapping>* Field_3_37; // 0x4D8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_163; // 0x4E0
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod>* Field_3_147; // 0x4E8
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_137; // 0x4F0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_219; // 0x4F8
	::UnityEngine::Texture* Field_3_180; // 0x500
	::MoleMole::TwoValue_1<::System::Single>* Field_3_13; // 0x508
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_253; // 0x510
	::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod Field_3_146; // 0x518
	::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod Field_3_142; // 0x51C
	::System::Single Field_3_72; // 0x520
	::System::Single Field_3_164; // 0x524
	::System::Single Field_3_210; // 0x528
	::System::Single Field_3_134; // 0x52C
	::System::Single Field_3_274; // 0x530
	::System::Single Field_3_270; // 0x534
	::UnityEngine::Vector2 Field_3_46; // 0x538
	::UnityEngine::Vector2 Field_3_42; // 0x540
	::System::Single Field_3_100; // 0x548
	::UnityEngine::Vector2 Field_3_126; // 0x54C
	::System::Single Field_3_44; // 0x554
	::System::Single Field_3_112; // 0x558
	::UnityEngine::Vector3 Field_3_258; // 0x55C
	::System::Single Field_3_88; // 0x568
	::System::Single Field_3_54; // 0x56C
	::System::Single Field_3_20; // 0x570
	::System::Single Field_3_264; // 0x574
	::System::Single Field_3_12; // 0x578
	::System::Single Field_3_150; // 0x57C
	::System::Single Field_3_64; // 0x580
	::System::Single Field_3_58; // 0x584
	::System::Single Field_3_4; // 0x588
	::System::Single Field_3_52; // 0x58C
	::System::Single Field_3_8; // 0x590
	::System::Single Field_3_16; // 0x594
	::System::Single Field_3_84; // 0x598
	::System::Single Field_3_170; // 0x59C
	::UnityEngine::Color Field_3_200; // 0x5A0
	::System::Single Field_3_226; // 0x5B0
	::System::Single Field_3_238; // 0x5B4
	::UnityEngine::Color Field_3_18; // 0x5B8
	::System::Single Field_3_152; // 0x5C8
	::System::Single Field_3_224; // 0x5CC
	::UnityEngine::Color Field_3_124; // 0x5D0
	::System::Single Field_3_10; // 0x5E0
	::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod Field_3_66; // 0x5E4
	::System::Single Field_3_168; // 0x5E8
	::System::Single Field_3_220; // 0x5EC
	::UnityEngine::Color Field_3_246; // 0x5F0
	::System::Boolean Field_3_212; // 0x600
	::System::Boolean Field_3_182; // 0x601
	::System::Boolean Field_3_254; // 0x602
	::System::Boolean Field_3_260; // 0x603
	::System::Single Field_3_174; // 0x604
	::System::Single Field_3_90; // 0x608
	::System::Single Field_3_86; // 0x60C
	::UnityEngine::Vector3 Field_3_242; // 0x610
	::UnityEngine::Rendering::Universal::ChannelMapping Field_3_36; // 0x61C
	::UnityEngine::Color Field_3_60; // 0x620
	::System::Single Field_3_34; // 0x630
	::UnityEngine::Vector2 Field_3_266; // 0x634
	::UnityEngine::Vector2 Field_3_118; // 0x63C
	::System::Single Field_3_240; // 0x644
	::System::Single Field_3_234; // 0x648
	::UnityEngine::Color Field_3_140; // 0x64C
	::System::Single Field_3_74; // 0x65C
	::UnityEngine::Rendering::Universal::ScanlineBlendMode Field_3_262; // 0x660
	::UnityEngine::Color Field_3_78; // 0x664
	::System::Single Field_3_80; // 0x674
	::UnityEngine::Color Field_3_116; // 0x678
	::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod Field_3_98; // 0x688
	::System::Single Field_3_102; // 0x68C
	::UnityEngine::Vector2 Field_3_194; // 0x690
	::System::Single Field_3_158; // 0x698
	::System::Single Field_3_236; // 0x69C
	::UnityEngine::Vector3 Field_3_232; // 0x6A0
	::UnityEngine::Vector4 Field_3_256; // 0x6AC
	::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod Field_3_82; // 0x6BC
	::System::Int32 Field_3_202; // 0x6C0
	::System::Single Field_3_50; // 0x6C4
	::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod Field_3_114; // 0x6C8
	::UnityEngine::Vector2 Field_3_186; // 0x6CC
	::UnityEngine::Vector2 Field_3_190; // 0x6D4
	::System::Single Field_3_70; // 0x6DC
	::UnityEngine::Rendering::Universal::ScanMaskType Field_3_32; // 0x6E0
	::System::Single Field_3_6; // 0x6E4
	::System::Single Field_3_218; // 0x6E8
	::UnityEngine::Color Field_3_62; // 0x6EC
	::System::Single Field_3_26; // 0x6FC
	::UnityEngine::Vector2 Field_3_208; // 0x700
	::System::Single Field_3_14; // 0x708
	::System::Single Field_3_106; // 0x70C
	::System::Single Field_3_138; // 0x710
	::System::Boolean Field_3_144; // 0x714
	::System::Boolean Field_3_166; // 0x715
	::System::Boolean Field_3_0; // 0x716
	::System::Boolean Field_3_176; // 0x717
	::UnityEngine::Color Field_3_110; // 0x718
	::UnityEngine::Color Field_3_120; // 0x728
	::UnityEngine::Color Field_3_154; // 0x738
	::System::Single Field_3_206; // 0x748
	::UnityEngine::Color Field_3_22; // 0x74C
	::UnityEngine::Rendering::Universal::DistanceDistortionBlendMode Field_3_244; // 0x75C
	::System::Single Field_3_228; // 0x760
	::System::Single Field_3_204; // 0x764
	::System::Single Field_3_96; // 0x768
	::UnityEngine::Rendering::Universal::ScanType Field_3_30; // 0x76C
	::System::Boolean Field_3_28; // 0x770
	::System::Boolean Field_3_132; // 0x771
	::System::Boolean Field_3_192; // 0x772
	::System::Boolean Field_3_250; // 0x773
	::UnityEngine::Vector2 Field_3_196; // 0x774
	::UnityEngine::Vector2 Field_3_188; // 0x77C
	::System::Single Field_3_214; // 0x784
	::System::Single Field_3_68; // 0x788
	::System::Single Field_3_104; // 0x78C
	::System::Single Field_3_268; // 0x790
	::UnityEngine::Vector2 Field_3_122; // 0x794
	::System::Single Field_3_162; // 0x79C
	::UnityEngine::Color Field_3_94; // 0x7A0
	::UnityEngine::Color Field_3_76; // 0x7B0
	::UnityEngine::Vector2 Field_3_184; // 0x7C0
	::UnityEngine::Color Field_3_178; // 0x7C8
	::System::Boolean Field_3_48; // 0x7D8
	::System::Boolean Field_3_160; // 0x7D9
	::System::Boolean Field_3_148; // 0x7DA
	::System::Boolean Field_3_248; // 0x7DB
	::System::Single Field_3_156; // 0x7DC
	::UnityEngine::Color Field_3_92; // 0x7E0
	::System::Single Field_3_128; // 0x7F0
	::UnityEngine::Color Field_3_136; // 0x7F4
	::UnityEngine::Vector2 Field_3_40; // 0x804
	::System::Single Field_3_230; // 0x80C
	::System::Single Field_3_172; // 0x810
	::System::Single Field_3_130; // 0x814
	::System::Single Field_3_56; // 0x818
	::UnityEngine::Color Field_3_108; // 0x81C
	::System::Single Field_3_24; // 0x82C

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityVREffectsEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityVREffectsEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_DDABE4FBB0E07033__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_F6FC91902EC5E1A2(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::VREffects* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::VREffects*))((::PBYTE)hIl2Cpp + CLASS_3_DDABE4FBB0E07033_METHOD_3_F6FC91902EC5E1A2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_9391AE4DB03BA811(::UnityEngine::Rendering::Universal::VREffects* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::VREffects*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DDABE4FBB0E07033_METHOD_3_9391AE4DB03BA811_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4DDDBF2C561F74E4(::UnityEngine::Rendering::Universal::VREffects* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::VREffects*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DDABE4FBB0E07033_METHOD_3_4DDDBF2C561F74E4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D6DBEF2833541C34(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::VREffects* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::VREffects*))((::PBYTE)hIl2Cpp + CLASS_3_DDABE4FBB0E07033_METHOD_3_D6DBEF2833541C34_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4BE2275A1B2E5358(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::VREffects* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::VREffects*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DDABE4FBB0E07033_METHOD_3_4BE2275A1B2E5358_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_40520B068178F3C7(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::VREffects* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::VREffects*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_DDABE4FBB0E07033_METHOD_3_40520B068178F3C7_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DDABE4FBB0E07033_TOSTRING_OFFSET))(this);
	}
};

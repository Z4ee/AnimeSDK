#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_24712879E1FE9433.h"
#include "unitysdk/Enum_3_4C95A49D02E2426B.h"
#include "unitysdk/Enum_3_7CF6DCCA0AF3DB5F.h"
#include "unitysdk/Enum_3_E6B87005B34F5A77.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ModifierStacking.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_41557767124BA48C;
class Class_1_7D004EF68E427E0B;
class Class_1_D8E5417044FE13EF;
class Class_1_E631FD14D6BC8365;
class Class_2_0F138252A5783001;
class Class_2_2A56CCCB20A346FA;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_417A24669F2F689C_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BB525D0)
#define CLASS_1_417A24669F2F689C_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1BB35240)
#define CLASS_1_417A24669F2F689C_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1BB33C90)
#define CLASS_1_417A24669F2F689C_METHOD_1_4426A8B0B9C13AC5_OFFSET UNITYSDK_OFFSET(0x1BB52630)
#define CLASS_1_417A24669F2F689C_METHOD_1_992710328EBB4193_OFFSET UNITYSDK_OFFSET(0x1BB32370)
#define CLASS_1_417A24669F2F689C_METHOD_1_BEE7E00881422F07_OFFSET UNITYSDK_OFFSET(0x1BB352C0)
#define CLASS_1_417A24669F2F689C_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1BB5E0F0)
#define CLASS_1_417A24669F2F689C_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x1BB5E100)
#define CLASS_1_417A24669F2F689C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1BB5E0E0)
#define CLASS_1_417A24669F2F689C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB5DFC0)
#define CLASS_1_417A24669F2F689C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB322E0)

inline static constexpr unsigned int Class_1_417A24669F2F689C_TypeDefinitionIndex = 81358;

class Class_1_417A24669F2F689C : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Enum_3_4C95A49D02E2426B>** StaticGet_Field_1_7()
	{
		return (::System::Collections::Generic::List_1<::Enum_3_4C95A49D02E2426B>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_417A24669F2F689C_TypeDefinitionIndex)->GetStaticField(0x2D590);
	}
	static ::System::Collections::Generic::List_1<::Enum_3_7CF6DCCA0AF3DB5F>** StaticGet_Field_1_6()
	{
		return (::System::Collections::Generic::List_1<::Enum_3_7CF6DCCA0AF3DB5F>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_417A24669F2F689C_TypeDefinitionIndex)->GetStaticField(0x2D598);
	}
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_417A24669F2F689C_TypeDefinitionIndex)->GetStaticField(0x9A20);
	}
	static ::Enum_3_7CF6DCCA0AF3DB5F* StaticGet_Field_1_5()
	{
		return (::Enum_3_7CF6DCCA0AF3DB5F*)Il2CppClass::FromTypeDefinitionIndex(Class_1_417A24669F2F689C_TypeDefinitionIndex)->GetStaticField(0x9A24);
	}
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_293; // 0x10
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_114; // 0x18
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_106; // 0x20
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_265; // 0x28
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_70; // 0x30
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_50; // 0x38
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_305; // 0x40
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_44; // 0x48
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_188; // 0x50
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_81; // 0x58
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_71; // 0x60
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_119; // 0x68
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_66; // 0x70
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_47; // 0x78
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_58; // 0x80
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_73; // 0x88
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_242; // 0x90
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_179; // 0x98
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_94; // 0xA0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_98; // 0xA8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_234; // 0xB0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_276; // 0xB8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_185; // 0xC0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_235; // 0xC8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_246; // 0xD0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_90; // 0xD8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_153; // 0xE0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_178; // 0xE8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_102; // 0xF0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_116; // 0xF8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_238; // 0x100
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_220; // 0x108
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_112; // 0x110
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_193; // 0x118
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_52; // 0x120
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_122; // 0x128
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_190; // 0x130
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_133; // 0x138
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_196; // 0x140
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_287; // 0x148
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_252; // 0x150
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_93; // 0x158
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_167; // 0x160
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_158; // 0x168
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_173; // 0x170
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_256; // 0x178
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_62; // 0x180
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_127; // 0x188
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_80; // 0x190
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_82; // 0x198
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_223; // 0x1A0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_255; // 0x1A8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_273; // 0x1B0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_251; // 0x1B8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_225; // 0x1C0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_97; // 0x1C8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_40; // 0x1D0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_279; // 0x1D8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_217; // 0x1E0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_56; // 0x1E8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_68; // 0x1F0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_59; // 0x1F8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_271; // 0x200
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_181; // 0x208
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_65; // 0x210
	::System::Collections::Generic::List_1<::Class_1_E631FD14D6BC8365*>* Field_1_27; // 0x218
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_39; // 0x220
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_160; // 0x228
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_248; // 0x230
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_299; // 0x238
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_198; // 0x240
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_297; // 0x248
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_201; // 0x250
	::System::Collections::Generic::List_1<::Enum_3_7CF6DCCA0AF3DB5F>* Field_1_26; // 0x258
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_87; // 0x260
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_187; // 0x268
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_219; // 0x270
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_57; // 0x278
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_236; // 0x280
	::System::Collections::Generic::List_1<::Class_1_41557767124BA48C*>* Field_1_10; // 0x288
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_241; // 0x290
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_33; // 0x298
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_245; // 0x2A0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_233; // 0x2A8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_166; // 0x2B0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_88; // 0x2B8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_138; // 0x2C0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_74; // 0x2C8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_274; // 0x2D0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_249; // 0x2D8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_84; // 0x2E0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_168; // 0x2E8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_213; // 0x2F0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_152; // 0x2F8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_140; // 0x300
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_192; // 0x308
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_171; // 0x310
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_155; // 0x318
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_43; // 0x320
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_282; // 0x328
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_51; // 0x330
	::System::Collections::Generic::List_1<::Class_2_0F138252A5783001*>* Field_1_22; // 0x338
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_208; // 0x340
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_126; // 0x348
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_77; // 0x350
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_100; // 0x358
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::DynamicFloat*>* Field_1_21; // 0x360
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_147; // 0x368
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_240; // 0x370
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_136; // 0x378
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_216; // 0x380
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_128; // 0x388
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_169; // 0x390
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_259; // 0x398
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_150; // 0x3A0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_135; // 0x3A8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_117; // 0x3B0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_96; // 0x3B8
	::MoleMole::Config::DynamicInt* Field_1_20; // 0x3C0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_163; // 0x3C8
	::System::Collections::Generic::List_1<::Enum_3_4C95A49D02E2426B>* Field_1_14; // 0x3D0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_230; // 0x3D8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_54; // 0x3E0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_64; // 0x3E8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_253; // 0x3F0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_300; // 0x3F8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_34; // 0x400
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_104; // 0x408
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_174; // 0x410
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_224; // 0x418
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_292; // 0x420
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_280; // 0x428
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_46; // 0x430
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_275; // 0x438
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_306; // 0x440
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_301; // 0x448
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_45; // 0x450
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_110; // 0x458
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_120; // 0x460
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_149; // 0x468
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_250; // 0x470
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_183; // 0x478
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_35; // 0x480
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_228; // 0x488
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_186; // 0x490
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_303; // 0x498
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_83; // 0x4A0
	::MoleMole::Config::DynamicFloat* Field_1_17; // 0x4A8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_206; // 0x4B0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_266; // 0x4B8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_227; // 0x4C0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_215; // 0x4C8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_105; // 0x4D0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_199; // 0x4D8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_28; // 0x4E0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_69; // 0x4E8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_146; // 0x4F0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_78; // 0x4F8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_272; // 0x500
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_115; // 0x508
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_307; // 0x510
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_30; // 0x518
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_124; // 0x520
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_268; // 0x528
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_260; // 0x530
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_197; // 0x538
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_203; // 0x540
	::Class_1_7D004EF68E427E0B* Field_1_12; // 0x548
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_278; // 0x550
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_137; // 0x558
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_36; // 0x560
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_288; // 0x568
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_294; // 0x570
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_247; // 0x578
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_125; // 0x580
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_194; // 0x588
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_184; // 0x590
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_134; // 0x598
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_164; // 0x5A0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_218; // 0x5A8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_221; // 0x5B0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_111; // 0x5B8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_212; // 0x5C0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_75; // 0x5C8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_86; // 0x5D0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_237; // 0x5D8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_226; // 0x5E0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_159; // 0x5E8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_270; // 0x5F0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_55; // 0x5F8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_32; // 0x600
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_177; // 0x608
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_170; // 0x610
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_145; // 0x618
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_60; // 0x620
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_38; // 0x628
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_229; // 0x630
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_143; // 0x638
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_244; // 0x640
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_182; // 0x648
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_254; // 0x650
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_144; // 0x658
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_99; // 0x660
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_165; // 0x668
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_269; // 0x670
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_285; // 0x678
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_142; // 0x680
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_264; // 0x688
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_209; // 0x690
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_243; // 0x698
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_298; // 0x6A0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_302; // 0x6A8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_154; // 0x6B0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_180; // 0x6B8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_207; // 0x6C0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_92; // 0x6C8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_48; // 0x6D0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_172; // 0x6D8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_176; // 0x6E0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_261; // 0x6E8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_61; // 0x6F0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_277; // 0x6F8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_289; // 0x700
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_231; // 0x708
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_211; // 0x710
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_191; // 0x718
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_79; // 0x720
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_210; // 0x728
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_148; // 0x730
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_290; // 0x738
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_37; // 0x740
	::Class_1_D8E5417044FE13EF* Field_1_19; // 0x748
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_162; // 0x750
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_141; // 0x758
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_130; // 0x760
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_295; // 0x768
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_232; // 0x770
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_175; // 0x778
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_113; // 0x780
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_205; // 0x788
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_151; // 0x790
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_91; // 0x798
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_95; // 0x7A0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_107; // 0x7A8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_258; // 0x7B0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_283; // 0x7B8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_202; // 0x7C0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_132; // 0x7C8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_131; // 0x7D0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_129; // 0x7D8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_123; // 0x7E0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_291; // 0x7E8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_284; // 0x7F0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_49; // 0x7F8
	::System::String* Field_1_9; // 0x800
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_239; // 0x808
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_101; // 0x810
	::MoleMole::Config::DynamicFloat* Field_1_16; // 0x818
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_189; // 0x820
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_222; // 0x828
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_214; // 0x830
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_118; // 0x838
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_263; // 0x840
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_42; // 0x848
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_103; // 0x850
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_121; // 0x858
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_304; // 0x860
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_139; // 0x868
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_41; // 0x870
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_63; // 0x878
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_67; // 0x880
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_109; // 0x888
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_76; // 0x890
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_200; // 0x898
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_296; // 0x8A0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_108; // 0x8A8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_286; // 0x8B0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_29; // 0x8B8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_281; // 0x8C0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_262; // 0x8C8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_85; // 0x8D0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_53; // 0x8D8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_161; // 0x8E0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_257; // 0x8E8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_204; // 0x8F0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_89; // 0x8F8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_157; // 0x900
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_72; // 0x908
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_156; // 0x910
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_267; // 0x918
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_195; // 0x920
	::Enum_3_E6B87005B34F5A77 Field_1_13; // 0x928
	::MoleMole::Config::ModifierStacking Field_1_18; // 0x92C
	::System::Boolean Field_1_24; // 0x930
	::System::Boolean Field_1_15; // 0x931
	::System::Boolean Field_1_23; // 0x932
	::System::Boolean Field_1_8; // 0x933
	::System::Single Field_1_25; // 0x934
	::System::Int32 Field_1_4; // 0x938
	::System::Int32 Field_1_11; // 0x93C
	::Enum_3_24712879E1FE9433 Field_1_31; // 0x940

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_417A24669F2F689C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_417A24669F2F689C__CCTOR_OFFSET))();
	}

	::System::Void Method_1_992710328EBB4193(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_417A24669F2F689C_METHOD_1_992710328EBB4193_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_417A24669F2F689C_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_417A24669F2F689C_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_417A24669F2F689C_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_417A24669F2F689C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_417A24669F2F689C_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_417A24669F2F689C_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Boolean Method_1_BEE7E00881422F07(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_417A24669F2F689C_METHOD_1_BEE7E00881422F07_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4426A8B0B9C13AC5(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_417A24669F2F689C_METHOD_1_4426A8B0B9C13AC5_OFFSET))(this, a1, a2);
	}
};

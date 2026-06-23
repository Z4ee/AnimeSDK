#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4C95A49D02E2426B.h"
#include "unitysdk/Enum_3_7CF6DCCA0AF3DB5F.h"
#include "unitysdk/Enum_3_E6B87005B34F5A77.h"
#include "unitysdk/Enum_3_F8FDEF91E968B386.h"
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
class Class_2_828B2711AF58BA0B;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_417A24669F2F689C_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A861400)
#define CLASS_1_417A24669F2F689C_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A846C00)
#define CLASS_1_417A24669F2F689C_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1A845840)
#define CLASS_1_417A24669F2F689C_METHOD_1_4426A8B0B9C13AC5_OFFSET UNITYSDK_OFFSET(0x1A861460)
#define CLASS_1_417A24669F2F689C_METHOD_1_992710328EBB4193_OFFSET UNITYSDK_OFFSET(0x1A844150)
#define CLASS_1_417A24669F2F689C_METHOD_1_BEE7E00881422F07_OFFSET UNITYSDK_OFFSET(0x1A846C80)
#define CLASS_1_417A24669F2F689C_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1A86BEE0)
#define CLASS_1_417A24669F2F689C_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x1A86BEF0)
#define CLASS_1_417A24669F2F689C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A86BED0)
#define CLASS_1_417A24669F2F689C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A86BDB0)
#define CLASS_1_417A24669F2F689C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8440C0)

inline static constexpr unsigned int Class_1_417A24669F2F689C_TypeDefinitionIndex = 67977;

class Class_1_417A24669F2F689C : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Enum_3_7CF6DCCA0AF3DB5F>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::List_1<::Enum_3_7CF6DCCA0AF3DB5F>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_417A24669F2F689C_TypeDefinitionIndex)->GetStaticField(0x360F0);
	}
	static ::System::Collections::Generic::List_1<::Enum_3_4C95A49D02E2426B>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::Enum_3_4C95A49D02E2426B>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_417A24669F2F689C_TypeDefinitionIndex)->GetStaticField(0x360F8);
	}
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_417A24669F2F689C_TypeDefinitionIndex)->GetStaticField(0xD580);
	}
	static ::Enum_3_7CF6DCCA0AF3DB5F* StaticGet_Field_1_3()
	{
		return (::Enum_3_7CF6DCCA0AF3DB5F*)Il2CppClass::FromTypeDefinitionIndex(Class_1_417A24669F2F689C_TypeDefinitionIndex)->GetStaticField(0xD584);
	}
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_73; // 0x10
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_249; // 0x18
	::System::Collections::Generic::List_1<::Enum_3_4C95A49D02E2426B>* Field_1_10; // 0x20
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_253; // 0x28
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_230; // 0x30
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_184; // 0x38
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_198; // 0x40
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_46; // 0x48
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_226; // 0x50
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_79; // 0x58
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_104; // 0x60
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_273; // 0x68
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_138; // 0x70
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_248; // 0x78
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_254; // 0x80
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_168; // 0x88
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_247; // 0x90
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_126; // 0x98
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_188; // 0xA0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_150; // 0xA8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_114; // 0xB0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_57; // 0xB8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_141; // 0xC0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_197; // 0xC8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::DynamicFloat*>* Field_1_18; // 0xD0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_209; // 0xD8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_131; // 0xE0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_221; // 0xE8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_48; // 0xF0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_164; // 0xF8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_268; // 0x100
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_227; // 0x108
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_78; // 0x110
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_36; // 0x118
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_199; // 0x120
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_101; // 0x128
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_265; // 0x130
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_111; // 0x138
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_31; // 0x140
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_88; // 0x148
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_251; // 0x150
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_29; // 0x158
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_191; // 0x160
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_237; // 0x168
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_99; // 0x170
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_117; // 0x178
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_183; // 0x180
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_142; // 0x188
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_189; // 0x190
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_145; // 0x198
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_233; // 0x1A0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_231; // 0x1A8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_35; // 0x1B0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_236; // 0x1B8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_263; // 0x1C0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_228; // 0x1C8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_42; // 0x1D0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_72; // 0x1D8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_65; // 0x1E0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_267; // 0x1E8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_94; // 0x1F0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_74; // 0x1F8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_43; // 0x200
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_264; // 0x208
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_260; // 0x210
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_153; // 0x218
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_162; // 0x220
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_259; // 0x228
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_93; // 0x230
	::MoleMole::Config::DynamicFloat* Field_1_16; // 0x238
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_70; // 0x240
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_32; // 0x248
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_112; // 0x250
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_127; // 0x258
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_170; // 0x260
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_135; // 0x268
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_51; // 0x270
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_44; // 0x278
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_97; // 0x280
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_26; // 0x288
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_39; // 0x290
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_175; // 0x298
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_121; // 0x2A0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_161; // 0x2A8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_148; // 0x2B0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_174; // 0x2B8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_215; // 0x2C0
	::MoleMole::Config::DynamicInt* Field_1_19; // 0x2C8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_133; // 0x2D0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_59; // 0x2D8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_129; // 0x2E0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_172; // 0x2E8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_125; // 0x2F0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_100; // 0x2F8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_214; // 0x300
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_229; // 0x308
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_200; // 0x310
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_96; // 0x318
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_171; // 0x320
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_130; // 0x328
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_64; // 0x330
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_202; // 0x338
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_255; // 0x340
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_45; // 0x348
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_180; // 0x350
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_113; // 0x358
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_68; // 0x360
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_120; // 0x368
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_69; // 0x370
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_60; // 0x378
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_239; // 0x380
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_89; // 0x388
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_33; // 0x390
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_119; // 0x398
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_62; // 0x3A0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_128; // 0x3A8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_224; // 0x3B0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_85; // 0x3B8
	::System::Collections::Generic::List_1<::Class_1_E631FD14D6BC8365*>* Field_1_20; // 0x3C0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_82; // 0x3C8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_234; // 0x3D0
	::System::Collections::Generic::List_1<::Enum_3_7CF6DCCA0AF3DB5F>* Field_1_21; // 0x3D8
	::MoleMole::Config::DynamicFloat* Field_1_15; // 0x3E0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_92; // 0x3E8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_86; // 0x3F0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_84; // 0x3F8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_81; // 0x400
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_103; // 0x408
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_166; // 0x410
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_272; // 0x418
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_105; // 0x420
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_207; // 0x428
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_256; // 0x430
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_275; // 0x438
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_108; // 0x440
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_160; // 0x448
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_225; // 0x450
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_98; // 0x458
	::Class_1_7D004EF68E427E0B* Field_1_12; // 0x460
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_71; // 0x468
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_177; // 0x470
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_122; // 0x478
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_137; // 0x480
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_41; // 0x488
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_276; // 0x490
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_211; // 0x498
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_252; // 0x4A0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_38; // 0x4A8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_193; // 0x4B0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_47; // 0x4B8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_262; // 0x4C0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_115; // 0x4C8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_242; // 0x4D0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_67; // 0x4D8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_139; // 0x4E0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_102; // 0x4E8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_235; // 0x4F0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_25; // 0x4F8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_179; // 0x500
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_269; // 0x508
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_201; // 0x510
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_257; // 0x518
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_146; // 0x520
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_212; // 0x528
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_240; // 0x530
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_75; // 0x538
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_181; // 0x540
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_140; // 0x548
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_30; // 0x550
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_149; // 0x558
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_63; // 0x560
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_56; // 0x568
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_185; // 0x570
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_163; // 0x578
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_186; // 0x580
	::System::Collections::Generic::List_1<::Class_2_0F138252A5783001*>* Field_1_17; // 0x588
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_167; // 0x590
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_151; // 0x598
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_110; // 0x5A0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_192; // 0x5A8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_144; // 0x5B0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_54; // 0x5B8
	::Class_1_D8E5417044FE13EF* Field_1_13; // 0x5C0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_66; // 0x5C8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_277; // 0x5D0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_157; // 0x5D8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_152; // 0x5E0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_165; // 0x5E8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_123; // 0x5F0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_241; // 0x5F8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_50; // 0x600
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_246; // 0x608
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_258; // 0x610
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_158; // 0x618
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_77; // 0x620
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_109; // 0x628
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_182; // 0x630
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_187; // 0x638
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_83; // 0x640
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_136; // 0x648
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_195; // 0x650
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_132; // 0x658
	::System::String* Field_1_7; // 0x660
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_116; // 0x668
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_58; // 0x670
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_219; // 0x678
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_203; // 0x680
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_208; // 0x688
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_106; // 0x690
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_34; // 0x698
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_190; // 0x6A0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_243; // 0x6A8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_220; // 0x6B0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_216; // 0x6B8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_194; // 0x6C0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_266; // 0x6C8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_134; // 0x6D0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_49; // 0x6D8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_238; // 0x6E0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_222; // 0x6E8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_213; // 0x6F0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_178; // 0x6F8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_217; // 0x700
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_95; // 0x708
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_155; // 0x710
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_118; // 0x718
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_223; // 0x720
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_245; // 0x728
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_156; // 0x730
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_274; // 0x738
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_76; // 0x740
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_210; // 0x748
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_53; // 0x750
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_176; // 0x758
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_37; // 0x760
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_205; // 0x768
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_28; // 0x770
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_55; // 0x778
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_206; // 0x780
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_232; // 0x788
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_159; // 0x790
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_204; // 0x798
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_250; // 0x7A0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_143; // 0x7A8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_40; // 0x7B0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_27; // 0x7B8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_169; // 0x7C0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_218; // 0x7C8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_91; // 0x7D0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_90; // 0x7D8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_80; // 0x7E0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_61; // 0x7E8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_147; // 0x7F0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_270; // 0x7F8
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_52; // 0x800
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_244; // 0x808
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_261; // 0x810
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_107; // 0x818
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_87; // 0x820
	::System::Collections::Generic::List_1<::Class_1_41557767124BA48C*>* Field_1_6; // 0x828
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_271; // 0x830
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_154; // 0x838
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_196; // 0x840
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_173; // 0x848
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_1_124; // 0x850
	::System::Int32 Field_1_4; // 0x858
	::System::Single Field_1_22; // 0x85C
	::Enum_3_F8FDEF91E968B386 Field_1_24; // 0x860
	::MoleMole::Config::ModifierStacking Field_1_14; // 0x864
	::System::Boolean Field_1_9; // 0x868
	::System::Boolean Field_1_8; // 0x869
	::System::Boolean Field_1_23; // 0x86A
	::System::Int32 Field_1_5; // 0x86C
	::Enum_3_E6B87005B34F5A77 Field_1_11; // 0x870

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

	::System::Boolean Method_1_BEE7E00881422F07(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_417A24669F2F689C_METHOD_1_BEE7E00881422F07_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4426A8B0B9C13AC5(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_417A24669F2F689C_METHOD_1_4426A8B0B9C13AC5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_417A24669F2F689C_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_417A24669F2F689C_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}
};

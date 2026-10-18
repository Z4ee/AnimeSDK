#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_30163A2B0962161E_Struct_2_FD8E1D4014EE315F_1.h"
#include "unitysdk/RPGTools/Timeline/ColorGradingMaskWhitelist.h"
#include "unitysdk/RPGTools/Timeline/ColorGradingMaskWhitelist_MapEntity.h"
#include "unitysdk/RPGTools/Timeline/ColorGradingMaskWhitelist_StageItem.h"
#include "unitysdk/RPGTools/Timeline/ColorGradingMaskWhitelist_StoryVFX.h"
#include "unitysdk/System/Object.h"

class Class_1_1342B57709FD7AC5;
class Class_1_30163A2B0962161E_Class_0_16E7307DCC43CB2C_26;
class Class_1_30163A2B0962161E_Class_1_34F5F592BF79D142;
class Class_1_30163A2B0962161E_Class_1_89EBAB81A5FBED07;
class Class_1_30163A2B0962161E_Class_1_D1A35168415AF2B1;
class Class_1_30163A2B0962161E_Class_1_E413106683C1BCF6;
class Class_1_4B703F2764047929;
namespace RPG::Client { class MonoEffect; }
namespace RPG::CustomRP { class ColorGradingMaskController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline { class ColorGradingMaskWhitelist_StoryCharacter; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define CLASS_1_30163A2B0962161E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164943B0)
#define CLASS_1_30163A2B0962161E_METHOD_1_00C5E99C9B0EC08D_OFFSET UNITYSDK_OFFSET(0x16498950)
#define CLASS_1_30163A2B0962161E_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x16495910)
#define CLASS_1_30163A2B0962161E_METHOD_1_1087AD0F8965C834_OFFSET UNITYSDK_OFFSET(0x16496230)
#define CLASS_1_30163A2B0962161E_METHOD_1_11B208B1C728AD60_OFFSET UNITYSDK_OFFSET(0x16496740)
#define CLASS_1_30163A2B0962161E_METHOD_1_151E25A63D14DDB0_1_OFFSET UNITYSDK_OFFSET(0x164960A0)
#define CLASS_1_30163A2B0962161E_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x164945B0)
#define CLASS_1_30163A2B0962161E_METHOD_1_17318B659BF1B7FF_OFFSET UNITYSDK_OFFSET(0x16494CB0)
#define CLASS_1_30163A2B0962161E_METHOD_1_21975F4165350387_OFFSET UNITYSDK_OFFSET(0x16499180)
#define CLASS_1_30163A2B0962161E_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x16494D50)
#define CLASS_1_30163A2B0962161E_METHOD_1_2642017472070F4E_OFFSET UNITYSDK_OFFSET(0x16496EC0)
#define CLASS_1_30163A2B0962161E_METHOD_1_2F78080C2F1633F5_OFFSET UNITYSDK_OFFSET(0x16496140)
#define CLASS_1_30163A2B0962161E_METHOD_1_32EBC163F3801B60_OFFSET UNITYSDK_OFFSET(0x16499080)
#define CLASS_1_30163A2B0962161E_METHOD_1_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x16494E30)
#define CLASS_1_30163A2B0962161E_METHOD_1_3D803E030A17C966_OFFSET UNITYSDK_OFFSET(0x16497390)
#define CLASS_1_30163A2B0962161E_METHOD_1_51866CD3EAE44967_OFFSET UNITYSDK_OFFSET(0x16495340)
#define CLASS_1_30163A2B0962161E_METHOD_1_5C4F929D49CEC993_OFFSET UNITYSDK_OFFSET(0x164982B0)
#define CLASS_1_30163A2B0962161E_METHOD_1_6124C43070FBAB89_OFFSET UNITYSDK_OFFSET(0x16497A30)
#define CLASS_1_30163A2B0962161E_METHOD_1_620AEFD238AB7299_OFFSET UNITYSDK_OFFSET(0x164955B0)
#define CLASS_1_30163A2B0962161E_METHOD_1_68EC631415F9E158_OFFSET UNITYSDK_OFFSET(0x164978A0)
#define CLASS_1_30163A2B0962161E_METHOD_1_6BEBCB897EA60343_OFFSET UNITYSDK_OFFSET(0x16495400)
#define CLASS_1_30163A2B0962161E_METHOD_1_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x16495210)
#define CLASS_1_30163A2B0962161E_METHOD_1_6E599DB966BD2DAC_OFFSET UNITYSDK_OFFSET(0x164996E0)
#define CLASS_1_30163A2B0962161E_METHOD_1_6EB69F73EE69B452_OFFSET UNITYSDK_OFFSET(0x164970F0)
#define CLASS_1_30163A2B0962161E_METHOD_1_896B6F39973725DF_OFFSET UNITYSDK_OFFSET(0x16494B70)
#define CLASS_1_30163A2B0962161E_METHOD_1_8D1CAE97D7179E4E_OFFSET UNITYSDK_OFFSET(0x16497410)
#define CLASS_1_30163A2B0962161E_METHOD_1_8F6A1B72899F4EA4_OFFSET UNITYSDK_OFFSET(0x164944C0)
#define CLASS_1_30163A2B0962161E_METHOD_1_946459140666B510_OFFSET UNITYSDK_OFFSET(0x16495A20)
#define CLASS_1_30163A2B0962161E_METHOD_1_95C83763619AF4F1_OFFSET UNITYSDK_OFFSET(0x16495D60)
#define CLASS_1_30163A2B0962161E_METHOD_1_A1C7122184516C18_OFFSET UNITYSDK_OFFSET(0x16496380)
#define CLASS_1_30163A2B0962161E_METHOD_1_A7029523B3A90818_OFFSET UNITYSDK_OFFSET(0x16499750)
#define CLASS_1_30163A2B0962161E_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x16494660)
#define CLASS_1_30163A2B0962161E_METHOD_1_B99F15974E901307_OFFSET UNITYSDK_OFFSET(0x164961A0)
#define CLASS_1_30163A2B0962161E_METHOD_1_C1C98FCB8A510915_OFFSET UNITYSDK_OFFSET(0x16495F00)
#define CLASS_1_30163A2B0962161E_METHOD_1_C2FFE4E1A307B812_OFFSET UNITYSDK_OFFSET(0x164966E0)
#define CLASS_1_30163A2B0962161E_METHOD_1_C4183A2A40AC8B8F_OFFSET UNITYSDK_OFFSET(0x16495090)
#define CLASS_1_30163A2B0962161E_METHOD_1_C961E85BEB4AF615_OFFSET UNITYSDK_OFFSET(0x16496C00)
#define CLASS_1_30163A2B0962161E_METHOD_1_CA3FACBFA15D1A4E_OFFSET UNITYSDK_OFFSET(0x16496F30)
#define CLASS_1_30163A2B0962161E_METHOD_1_CE017E2A52468EF8_OFFSET UNITYSDK_OFFSET(0x16495270)
#define CLASS_1_30163A2B0962161E_METHOD_1_D437D090E63BE8A7_1_OFFSET UNITYSDK_OFFSET(0x16499670)
#define CLASS_1_30163A2B0962161E_METHOD_1_D437D090E63BE8A7_OFFSET UNITYSDK_OFFSET(0x16498880)
#define CLASS_1_30163A2B0962161E_METHOD_1_D76C984A37344ED0_OFFSET UNITYSDK_OFFSET(0x16497170)
#define CLASS_1_30163A2B0962161E_METHOD_1_E140669A6A884463_1_OFFSET UNITYSDK_OFFSET(0x16497070)
#define CLASS_1_30163A2B0962161E_METHOD_1_E140669A6A884463_2_OFFSET UNITYSDK_OFFSET(0x16497340)
#define CLASS_1_30163A2B0962161E_METHOD_1_E140669A6A884463_3_OFFSET UNITYSDK_OFFSET(0x16497820)
#define CLASS_1_30163A2B0962161E_METHOD_1_E140669A6A884463_OFFSET UNITYSDK_OFFSET(0x16496B80)
#define CLASS_1_30163A2B0962161E_METHOD_1_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x164946E0)
#define CLASS_1_30163A2B0962161E_METHOD_1_EA5A5F4B30865B21_OFFSET UNITYSDK_OFFSET(0x16495BC0)
#define CLASS_1_30163A2B0962161E_METHOD_1_EE494FA2AAD21D55_OFFSET UNITYSDK_OFFSET(0x164967A0)
#define CLASS_1_30163A2B0962161E_METHOD_1_F16162DCA65E9A3F_OFFSET UNITYSDK_OFFSET(0x16494BD0)
#define CLASS_1_30163A2B0962161E_METHOD_1_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x16494400)
#define CLASS_1_30163A2B0962161E_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x164959A0)
#define CLASS_1_30163A2B0962161E_METHOD_1_FF6E0CAEBCDD8413_OFFSET UNITYSDK_OFFSET(0x16496E70)
#define CLASS_1_30163A2B0962161E_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x164988F0)
#define CLASS_1_30163A2B0962161E__CTOR_OFFSET UNITYSDK_OFFSET(0x16493DD0)

inline static constexpr unsigned int Class_1_30163A2B0962161E_TypeDefinitionIndex = 60706;

class Class_1_30163A2B0962161E : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::UnityEngine::Renderer*>* KFCOHOPKIAO; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* LBFJGFAOALN; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_30163A2B0962161E_Class_1_89EBAB81A5FBED07*>* DKPJKINJMAA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_30163A2B0962161E_Class_1_E413106683C1BCF6*>* LBPHPMGLPBF; // 0x28
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Int32>* IOCOBLPCCGO; // 0x30
	::Class_1_4B703F2764047929* AEEKINDJLDO; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* KMBFPPCIBHB; // 0x40
	::RPG::CustomRP::ColorGradingMaskController* FAOAPEIDIPH; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* CCILLPLEOIJ; // 0x50
	::System::Collections::Generic::List_1<::Class_1_1342B57709FD7AC5*>* DKCOIGNAENF; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_30163A2B0962161E_Class_1_D1A35168415AF2B1*>* ABOBKDPKBDA; // 0x60
	::System::Collections::Generic::HashSet_1<::System::String*>* LCFMOFNHDDH; // 0x68
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* JKIOENGGKBF; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_30163A2B0962161E_Class_1_34F5F592BF79D142*>* PJGHGFDOJMI; // 0x78
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* IKIPMIEOGEA; // 0x80
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Class_1_30163A2B0962161E_Struct_2_FD8E1D4014EE315F_1>* BIGCCEEFEDG; // 0x88
	::System::Collections::Generic::HashSet_1<::System::String*>* GOFOGEIOFHD; // 0x90
	::System::Boolean BNINAAHJBDN; // 0x98
	::System::Boolean GEOHNLMMLKM; // 0x99
	::System::Boolean NBGHGLAMCHE; // 0x9A
	::System::Boolean NFJCBOGHIDL; // 0x9B

	::System::Void _ctor(::Class_1_4B703F2764047929* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4B703F2764047929*))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_F7BA13C72A6B3F58_OFFSET))(this);
	}

	::System::Void Method_1_896B6F39973725DF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_896B6F39973725DF_OFFSET))(this, a1);
	}

	::System::Void Method_1_17318B659BF1B7FF(::RPGTools::Timeline::ColorGradingMaskWhitelist a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ColorGradingMaskWhitelist))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_17318B659BF1B7FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_6D93101E4CE10A96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_6D93101E4CE10A96_OFFSET))(this);
	}

	::System::Void Method_1_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_367B9590522079D1_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_1_8F6A1B72899F4EA4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_8F6A1B72899F4EA4_OFFSET))(this);
	}

	::System::Void Method_1_CE017E2A52468EF8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_CE017E2A52468EF8_OFFSET))(this, a1);
	}

	::System::Void Method_1_6BEBCB897EA60343(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_6BEBCB897EA60343_OFFSET))(this, a1);
	}

	::System::Void Method_1_C4183A2A40AC8B8F(::RPGTools::Timeline::ColorGradingMaskWhitelist a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ColorGradingMaskWhitelist))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_C4183A2A40AC8B8F_OFFSET))(this, a1);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_151E25A63D14DDB0_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Method_1_2F78080C2F1633F5()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_2F78080C2F1633F5_OFFSET))(this);
	}

	::System::Void Method_1_B99F15974E901307(::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_B99F15974E901307_OFFSET))(this, a1);
	}

	::System::Void Method_1_1087AD0F8965C834(::UnityEngine::Renderer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_1087AD0F8965C834_OFFSET))(this, a1);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_1_946459140666B510(::Il2CppArray<::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryCharacter*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryCharacter*>*))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_946459140666B510_OFFSET))(this, a1);
	}

	::System::String* Method_1_C2FFE4E1A307B812(::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryCharacter* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryCharacter*))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_C2FFE4E1A307B812_OFFSET))(this, a1);
	}

	::System::Void Method_1_11B208B1C728AD60(::Class_1_30163A2B0962161E_Class_1_89EBAB81A5FBED07* a1, ::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryCharacter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_30163A2B0962161E_Class_1_89EBAB81A5FBED07*, ::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryCharacter*))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_11B208B1C728AD60_OFFSET))(this, a1, a2);
	}

	::Class_1_30163A2B0962161E_Class_1_89EBAB81A5FBED07* Method_1_EE494FA2AAD21D55(::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryCharacter* a1)
	{
		return ((::Class_1_30163A2B0962161E_Class_1_89EBAB81A5FBED07*(*)(::PVOID, ::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryCharacter*))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_EE494FA2AAD21D55_OFFSET))(this, a1);
	}

	::System::Void Method_1_E140669A6A884463(::Class_1_30163A2B0962161E_Class_1_89EBAB81A5FBED07* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_30163A2B0962161E_Class_1_89EBAB81A5FBED07*))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_E140669A6A884463_OFFSET))(this, a1);
	}

	::System::Void Method_1_EA5A5F4B30865B21(::Il2CppArray<::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryVFX>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryVFX>*))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_EA5A5F4B30865B21_OFFSET))(this, a1);
	}

	::System::String* Method_1_FF6E0CAEBCDD8413(::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryVFX a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryVFX))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_FF6E0CAEBCDD8413_OFFSET))(this, a1);
	}

	::System::Void Method_1_2642017472070F4E(::Class_1_30163A2B0962161E_Class_1_34F5F592BF79D142* a1, ::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryVFX a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_30163A2B0962161E_Class_1_34F5F592BF79D142*, ::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryVFX))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_2642017472070F4E_OFFSET))(this, a1, a2);
	}

	::Class_1_30163A2B0962161E_Class_1_34F5F592BF79D142* Method_1_CA3FACBFA15D1A4E(::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryVFX a1)
	{
		return ((::Class_1_30163A2B0962161E_Class_1_34F5F592BF79D142*(*)(::PVOID, ::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryVFX))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_CA3FACBFA15D1A4E_OFFSET))(this, a1);
	}

	::System::Void Method_1_E140669A6A884463_1(::Class_1_30163A2B0962161E_Class_1_34F5F592BF79D142* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_30163A2B0962161E_Class_1_34F5F592BF79D142*))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_E140669A6A884463_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_95C83763619AF4F1(::Il2CppArray<::RPGTools::Timeline::ColorGradingMaskWhitelist_StageItem>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPGTools::Timeline::ColorGradingMaskWhitelist_StageItem>*))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_95C83763619AF4F1_OFFSET))(this, a1);
	}

	::System::Void Method_1_6EB69F73EE69B452(::Class_1_30163A2B0962161E_Class_1_D1A35168415AF2B1* a1, ::RPGTools::Timeline::ColorGradingMaskWhitelist_StageItem a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_30163A2B0962161E_Class_1_D1A35168415AF2B1*, ::RPGTools::Timeline::ColorGradingMaskWhitelist_StageItem))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_6EB69F73EE69B452_OFFSET))(this, a1, a2);
	}

	::Class_1_30163A2B0962161E_Class_1_D1A35168415AF2B1* Method_1_D76C984A37344ED0(::RPGTools::Timeline::ColorGradingMaskWhitelist_StageItem a1)
	{
		return ((::Class_1_30163A2B0962161E_Class_1_D1A35168415AF2B1*(*)(::PVOID, ::RPGTools::Timeline::ColorGradingMaskWhitelist_StageItem))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_D76C984A37344ED0_OFFSET))(this, a1);
	}

	::System::Void Method_1_E140669A6A884463_2(::Class_1_30163A2B0962161E_Class_1_D1A35168415AF2B1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_30163A2B0962161E_Class_1_D1A35168415AF2B1*))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_E140669A6A884463_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_C1C98FCB8A510915(::Il2CppArray<::RPGTools::Timeline::ColorGradingMaskWhitelist_MapEntity>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPGTools::Timeline::ColorGradingMaskWhitelist_MapEntity>*))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_C1C98FCB8A510915_OFFSET))(this, a1);
	}

	::System::Void Method_1_3D803E030A17C966(::Class_1_30163A2B0962161E_Class_1_E413106683C1BCF6* a1, ::RPGTools::Timeline::ColorGradingMaskWhitelist_MapEntity a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_30163A2B0962161E_Class_1_E413106683C1BCF6*, ::RPGTools::Timeline::ColorGradingMaskWhitelist_MapEntity))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_3D803E030A17C966_OFFSET))(this, a1, a2);
	}

	::Class_1_30163A2B0962161E_Class_1_E413106683C1BCF6* Method_1_8D1CAE97D7179E4E(::RPGTools::Timeline::ColorGradingMaskWhitelist_MapEntity a1)
	{
		return ((::Class_1_30163A2B0962161E_Class_1_E413106683C1BCF6*(*)(::PVOID, ::RPGTools::Timeline::ColorGradingMaskWhitelist_MapEntity))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_8D1CAE97D7179E4E_OFFSET))(this, a1);
	}

	::System::Void Method_1_E140669A6A884463_3(::Class_1_30163A2B0962161E_Class_1_E413106683C1BCF6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_30163A2B0962161E_Class_1_E413106683C1BCF6*))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_E140669A6A884463_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_51866CD3EAE44967(::RPG::Client::MonoEffect* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_51866CD3EAE44967_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_620AEFD238AB7299(::Class_1_30163A2B0962161E_Class_0_16E7307DCC43CB2C_26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_30163A2B0962161E_Class_0_16E7307DCC43CB2C_26*))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_620AEFD238AB7299_OFFSET))(this, a1);
	}

	::System::Void Method_1_C961E85BEB4AF615(::Class_1_30163A2B0962161E_Class_0_16E7307DCC43CB2C_26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_30163A2B0962161E_Class_0_16E7307DCC43CB2C_26*))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_C961E85BEB4AF615_OFFSET))(this, a1);
	}

	::System::Void Method_1_68EC631415F9E158(::Class_1_30163A2B0962161E_Class_0_16E7307DCC43CB2C_26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_30163A2B0962161E_Class_0_16E7307DCC43CB2C_26*))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_68EC631415F9E158_OFFSET))(this, a1);
	}

	::System::Void Method_1_6124C43070FBAB89(::Class_1_1342B57709FD7AC5* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1342B57709FD7AC5*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_6124C43070FBAB89_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5C4F929D49CEC993(::Class_1_1342B57709FD7AC5* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1342B57709FD7AC5*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_5C4F929D49CEC993_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F16162DCA65E9A3F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_F16162DCA65E9A3F_OFFSET))(this, a1);
	}

	::System::Void Method_1_32EBC163F3801B60(::Class_1_30163A2B0962161E_Class_0_16E7307DCC43CB2C_26* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_30163A2B0962161E_Class_0_16E7307DCC43CB2C_26*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_32EBC163F3801B60_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_21975F4165350387(::Class_1_1342B57709FD7AC5* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1342B57709FD7AC5*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_21975F4165350387_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_00C5E99C9B0EC08D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_00C5E99C9B0EC08D_OFFSET))(this, a1);
	}

	::System::Void Method_1_A1C7122184516C18()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_A1C7122184516C18_OFFSET))(this);
	}

	::System::Single Method_1_D437D090E63BE8A7(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_D437D090E63BE8A7_OFFSET))(this, a1);
	}

	::System::Single Method_1_D437D090E63BE8A7_1(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_D437D090E63BE8A7_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::String* Method_1_6E599DB966BD2DAC(::RPGTools::Timeline::ColorGradingMaskWhitelist_StageItem a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPGTools::Timeline::ColorGradingMaskWhitelist_StageItem))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_6E599DB966BD2DAC_OFFSET))(this, a1);
	}

	::System::String* Method_1_A7029523B3A90818(::RPGTools::Timeline::ColorGradingMaskWhitelist_MapEntity a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPGTools::Timeline::ColorGradingMaskWhitelist_MapEntity))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_A7029523B3A90818_OFFSET))(this, a1);
	}

	::System::Void Method_1_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30163A2B0962161E_METHOD_1_E69AA2E64A20143D_OFFSET))(this);
	}
};

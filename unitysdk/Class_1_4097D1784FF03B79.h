#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4097D1784FF03B79_Struct_2_FD8E1D4014EE315F_1.h"
#include "unitysdk/RPGTools/Timeline/ColorGradingMaskWhitelist.h"
#include "unitysdk/RPGTools/Timeline/ColorGradingMaskWhitelist_MapEntity.h"
#include "unitysdk/RPGTools/Timeline/ColorGradingMaskWhitelist_StageItem.h"
#include "unitysdk/RPGTools/Timeline/ColorGradingMaskWhitelist_StoryVFX.h"
#include "unitysdk/System/Object.h"

class Class_1_1342B57709FD7AC5;
class Class_1_4097D1784FF03B79_Class_0_16E7307DCC43CB2C_17;
class Class_1_4097D1784FF03B79_Class_1_35110A488AF98562;
class Class_1_4097D1784FF03B79_Class_1_89EBAB81A5FBED07;
class Class_1_4097D1784FF03B79_Class_1_E3E15074B0EFC2E9;
class Class_1_4097D1784FF03B79_Class_1_E413106683C1BCF6;
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

#define CLASS_1_4097D1784FF03B79_DISPOSE_OFFSET UNITYSDK_OFFSET(0x141B4920)
#define CLASS_1_4097D1784FF03B79_METHOD_1_00A968F776BCC204_OFFSET UNITYSDK_OFFSET(0x141B8AE0)
#define CLASS_1_4097D1784FF03B79_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x141B5D80)
#define CLASS_1_4097D1784FF03B79_METHOD_1_1087AD0F8965C834_OFFSET UNITYSDK_OFFSET(0x141B6630)
#define CLASS_1_4097D1784FF03B79_METHOD_1_11B208B1C728AD60_OFFSET UNITYSDK_OFFSET(0x141B6B40)
#define CLASS_1_4097D1784FF03B79_METHOD_1_14245B339C99E5FA_OFFSET UNITYSDK_OFFSET(0x141B5990)
#define CLASS_1_4097D1784FF03B79_METHOD_1_151E25A63D14DDB0_1_OFFSET UNITYSDK_OFFSET(0x141B64A0)
#define CLASS_1_4097D1784FF03B79_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x141B4B20)
#define CLASS_1_4097D1784FF03B79_METHOD_1_17318B659BF1B7FF_OFFSET UNITYSDK_OFFSET(0x141B5220)
#define CLASS_1_4097D1784FF03B79_METHOD_1_23F77A1C8929E55B_OFFSET UNITYSDK_OFFSET(0x141B7B60)
#define CLASS_1_4097D1784FF03B79_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x141B52C0)
#define CLASS_1_4097D1784FF03B79_METHOD_1_2642017472070F4E_OFFSET UNITYSDK_OFFSET(0x141B71F0)
#define CLASS_1_4097D1784FF03B79_METHOD_1_2F78080C2F1633F5_OFFSET UNITYSDK_OFFSET(0x141B6540)
#define CLASS_1_4097D1784FF03B79_METHOD_1_32EBC163F3801B60_OFFSET UNITYSDK_OFFSET(0x141B9190)
#define CLASS_1_4097D1784FF03B79_METHOD_1_3CCA0B8A31B650A8_1_OFFSET UNITYSDK_OFFSET(0x141B4C50)
#define CLASS_1_4097D1784FF03B79_METHOD_1_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x141B53A0)
#define CLASS_1_4097D1784FF03B79_METHOD_1_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x141B4970)
#define CLASS_1_4097D1784FF03B79_METHOD_1_3D803E030A17C966_OFFSET UNITYSDK_OFFSET(0x141B7650)
#define CLASS_1_4097D1784FF03B79_METHOD_1_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x141B5750)
#define CLASS_1_4097D1784FF03B79_METHOD_1_5C4F929D49CEC993_OFFSET UNITYSDK_OFFSET(0x141B8470)
#define CLASS_1_4097D1784FF03B79_METHOD_1_6475E723DA064157_OFFSET UNITYSDK_OFFSET(0x141B5EA0)
#define CLASS_1_4097D1784FF03B79_METHOD_1_6E599DB966BD2DAC_OFFSET UNITYSDK_OFFSET(0x141B97D0)
#define CLASS_1_4097D1784FF03B79_METHOD_1_6EB69F73EE69B452_OFFSET UNITYSDK_OFFSET(0x141B7430)
#define CLASS_1_4097D1784FF03B79_METHOD_1_7102643637429C2B_1_OFFSET UNITYSDK_OFFSET(0x141B73B0)
#define CLASS_1_4097D1784FF03B79_METHOD_1_7102643637429C2B_2_OFFSET UNITYSDK_OFFSET(0x141B7AE0)
#define CLASS_1_4097D1784FF03B79_METHOD_1_7102643637429C2B_OFFSET UNITYSDK_OFFSET(0x141B6F50)
#define CLASS_1_4097D1784FF03B79_METHOD_1_7BFCC71874B4195E_OFFSET UNITYSDK_OFFSET(0x141B58F0)
#define CLASS_1_4097D1784FF03B79_METHOD_1_896B6F39973725DF_OFFSET UNITYSDK_OFFSET(0x141B50E0)
#define CLASS_1_4097D1784FF03B79_METHOD_1_8D1CAE97D7179E4E_OFFSET UNITYSDK_OFFSET(0x141B76D0)
#define CLASS_1_4097D1784FF03B79_METHOD_1_8E89D719D8DE21BA_OFFSET UNITYSDK_OFFSET(0x141B6320)
#define CLASS_1_4097D1784FF03B79_METHOD_1_9C6B09FEB2A4A6C8_OFFSET UNITYSDK_OFFSET(0x141B74B0)
#define CLASS_1_4097D1784FF03B79_METHOD_1_A1C7122184516C18_OFFSET UNITYSDK_OFFSET(0x141B6780)
#define CLASS_1_4097D1784FF03B79_METHOD_1_A7029523B3A90818_OFFSET UNITYSDK_OFFSET(0x141B9840)
#define CLASS_1_4097D1784FF03B79_METHOD_1_AA7E7D1E175DAB81_OFFSET UNITYSDK_OFFSET(0x141B57B0)
#define CLASS_1_4097D1784FF03B79_METHOD_1_B09208268EB27BC3_OFFSET UNITYSDK_OFFSET(0x141B4A30)
#define CLASS_1_4097D1784FF03B79_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x141B4BD0)
#define CLASS_1_4097D1784FF03B79_METHOD_1_B2F767B70339A9FE_OFFSET UNITYSDK_OFFSET(0x141B7C80)
#define CLASS_1_4097D1784FF03B79_METHOD_1_B99F15974E901307_OFFSET UNITYSDK_OFFSET(0x141B65A0)
#define CLASS_1_4097D1784FF03B79_METHOD_1_C2FFE4E1A307B812_OFFSET UNITYSDK_OFFSET(0x141B6AE0)
#define CLASS_1_4097D1784FF03B79_METHOD_1_C4183A2A40AC8B8F_OFFSET UNITYSDK_OFFSET(0x141B55D0)
#define CLASS_1_4097D1784FF03B79_METHOD_1_CA3FACBFA15D1A4E_OFFSET UNITYSDK_OFFSET(0x141B7260)
#define CLASS_1_4097D1784FF03B79_METHOD_1_D437D090E63BE8A7_1_OFFSET UNITYSDK_OFFSET(0x141B9760)
#define CLASS_1_4097D1784FF03B79_METHOD_1_D437D090E63BE8A7_OFFSET UNITYSDK_OFFSET(0x141B8A10)
#define CLASS_1_4097D1784FF03B79_METHOD_1_DDF9A0AD1E2B0C36_OFFSET UNITYSDK_OFFSET(0x141B6020)
#define CLASS_1_4097D1784FF03B79_METHOD_1_DEEE8FFCDA0D1C7C_OFFSET UNITYSDK_OFFSET(0x141B5140)
#define CLASS_1_4097D1784FF03B79_METHOD_1_E4BD5AF6A6A7D2A5_OFFSET UNITYSDK_OFFSET(0x141B9290)
#define CLASS_1_4097D1784FF03B79_METHOD_1_E60CD3A1FE801028_OFFSET UNITYSDK_OFFSET(0x141B7600)
#define CLASS_1_4097D1784FF03B79_METHOD_1_E6908CD1C726A6D8_OFFSET UNITYSDK_OFFSET(0x141B5B10)
#define CLASS_1_4097D1784FF03B79_METHOD_1_E72E1AE9F37C8D86_OFFSET UNITYSDK_OFFSET(0x141B61A0)
#define CLASS_1_4097D1784FF03B79_METHOD_1_F25A89C7A5A2A18C_OFFSET UNITYSDK_OFFSET(0x141B6BA0)
#define CLASS_1_4097D1784FF03B79_METHOD_1_F29B78B7C6996FD2_OFFSET UNITYSDK_OFFSET(0x141B6FD0)
#define CLASS_1_4097D1784FF03B79_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x141B5E20)
#define CLASS_1_4097D1784FF03B79_METHOD_1_FF6E0CAEBCDD8413_OFFSET UNITYSDK_OFFSET(0x141B71A0)
#define CLASS_1_4097D1784FF03B79_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x141B8A80)
#define CLASS_1_4097D1784FF03B79__CTOR_OFFSET UNITYSDK_OFFSET(0x141B4360)

inline static constexpr unsigned int Class_1_4097D1784FF03B79_TypeDefinitionIndex = 56737;

class Class_1_4097D1784FF03B79 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::UnityEngine::Renderer*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Int32>* Field_1_2; // 0x20
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* Field_1_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Class_1_4097D1784FF03B79_Struct_2_FD8E1D4014EE315F_1>* Field_1_4; // 0x30
	::RPG::CustomRP::ColorGradingMaskController* Field_1_5; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_1_6; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_4097D1784FF03B79_Class_1_E413106683C1BCF6*>* Field_1_7; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_4097D1784FF03B79_Class_1_35110A488AF98562*>* Field_1_8; // 0x50
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_9; // 0x58
	::System::Collections::Generic::List_1<::Class_1_1342B57709FD7AC5*>* Field_1_10; // 0x60
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_11; // 0x68
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_1_12; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_4097D1784FF03B79_Class_1_E3E15074B0EFC2E9*>* Field_1_13; // 0x78
	::Class_1_4B703F2764047929* Field_1_14; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_4097D1784FF03B79_Class_1_89EBAB81A5FBED07*>* Field_1_15; // 0x88
	::System::Collections::Generic::List_1<::System::String*>* Field_1_16; // 0x90
	::System::Boolean Field_1_17; // 0x98
	::System::Boolean Field_1_18; // 0x99
	::System::Boolean Field_1_19; // 0x9A
	::System::Boolean Field_1_20; // 0x9B

	::System::Void _ctor(::Class_1_4B703F2764047929* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4B703F2764047929*))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Void Method_1_896B6F39973725DF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_896B6F39973725DF_OFFSET))(this, a1);
	}

	::System::Void Method_1_17318B659BF1B7FF(::RPGTools::Timeline::ColorGradingMaskWhitelist a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ColorGradingMaskWhitelist))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_17318B659BF1B7FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::Void Method_1_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_3CCA0B8A31B650A8_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_1_B09208268EB27BC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_B09208268EB27BC3_OFFSET))(this);
	}

	::System::Void Method_1_AA7E7D1E175DAB81(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_AA7E7D1E175DAB81_OFFSET))(this, a1);
	}

	::System::Void Method_1_14245B339C99E5FA(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_14245B339C99E5FA_OFFSET))(this, a1);
	}

	::System::Void Method_1_C4183A2A40AC8B8F(::RPGTools::Timeline::ColorGradingMaskWhitelist a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ColorGradingMaskWhitelist))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_C4183A2A40AC8B8F_OFFSET))(this, a1);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_151E25A63D14DDB0_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Method_1_2F78080C2F1633F5()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_2F78080C2F1633F5_OFFSET))(this);
	}

	::System::Void Method_1_B99F15974E901307(::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_B99F15974E901307_OFFSET))(this, a1);
	}

	::System::Void Method_1_1087AD0F8965C834(::UnityEngine::Renderer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_1087AD0F8965C834_OFFSET))(this, a1);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_1_6475E723DA064157(::Il2CppArray<::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryCharacter*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryCharacter*>*))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_6475E723DA064157_OFFSET))(this, a1);
	}

	::System::String* Method_1_C2FFE4E1A307B812(::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryCharacter* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryCharacter*))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_C2FFE4E1A307B812_OFFSET))(this, a1);
	}

	::System::Void Method_1_11B208B1C728AD60(::Class_1_4097D1784FF03B79_Class_1_89EBAB81A5FBED07* a1, ::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryCharacter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4097D1784FF03B79_Class_1_89EBAB81A5FBED07*, ::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryCharacter*))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_11B208B1C728AD60_OFFSET))(this, a1, a2);
	}

	::Class_1_4097D1784FF03B79_Class_1_89EBAB81A5FBED07* Method_1_F25A89C7A5A2A18C(::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryCharacter* a1)
	{
		return ((::Class_1_4097D1784FF03B79_Class_1_89EBAB81A5FBED07*(*)(::PVOID, ::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryCharacter*))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_F25A89C7A5A2A18C_OFFSET))(this, a1);
	}

	::System::Void Method_1_7102643637429C2B(::Class_1_4097D1784FF03B79_Class_1_89EBAB81A5FBED07* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4097D1784FF03B79_Class_1_89EBAB81A5FBED07*))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_7102643637429C2B_OFFSET))(this, a1);
	}

	::System::Void Method_1_DDF9A0AD1E2B0C36(::Il2CppArray<::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryVFX>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryVFX>*))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_DDF9A0AD1E2B0C36_OFFSET))(this, a1);
	}

	::System::String* Method_1_FF6E0CAEBCDD8413(::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryVFX a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryVFX))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_FF6E0CAEBCDD8413_OFFSET))(this, a1);
	}

	::System::Void Method_1_2642017472070F4E(::Class_1_4097D1784FF03B79_Class_1_35110A488AF98562* a1, ::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryVFX a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4097D1784FF03B79_Class_1_35110A488AF98562*, ::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryVFX))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_2642017472070F4E_OFFSET))(this, a1, a2);
	}

	::Class_1_4097D1784FF03B79_Class_1_35110A488AF98562* Method_1_CA3FACBFA15D1A4E(::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryVFX a1)
	{
		return ((::Class_1_4097D1784FF03B79_Class_1_35110A488AF98562*(*)(::PVOID, ::RPGTools::Timeline::ColorGradingMaskWhitelist_StoryVFX))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_CA3FACBFA15D1A4E_OFFSET))(this, a1);
	}

	::System::Void Method_1_7102643637429C2B_1(::Class_1_4097D1784FF03B79_Class_1_35110A488AF98562* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4097D1784FF03B79_Class_1_35110A488AF98562*))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_7102643637429C2B_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_E72E1AE9F37C8D86(::Il2CppArray<::RPGTools::Timeline::ColorGradingMaskWhitelist_StageItem>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPGTools::Timeline::ColorGradingMaskWhitelist_StageItem>*))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_E72E1AE9F37C8D86_OFFSET))(this, a1);
	}

	::System::Void Method_1_6EB69F73EE69B452(::Class_1_4097D1784FF03B79_Class_1_E3E15074B0EFC2E9* a1, ::RPGTools::Timeline::ColorGradingMaskWhitelist_StageItem a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4097D1784FF03B79_Class_1_E3E15074B0EFC2E9*, ::RPGTools::Timeline::ColorGradingMaskWhitelist_StageItem))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_6EB69F73EE69B452_OFFSET))(this, a1, a2);
	}

	::Class_1_4097D1784FF03B79_Class_1_E3E15074B0EFC2E9* Method_1_9C6B09FEB2A4A6C8(::RPGTools::Timeline::ColorGradingMaskWhitelist_StageItem a1)
	{
		return ((::Class_1_4097D1784FF03B79_Class_1_E3E15074B0EFC2E9*(*)(::PVOID, ::RPGTools::Timeline::ColorGradingMaskWhitelist_StageItem))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_9C6B09FEB2A4A6C8_OFFSET))(this, a1);
	}

	::System::Void Method_1_E60CD3A1FE801028(::Class_1_4097D1784FF03B79_Class_1_E3E15074B0EFC2E9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4097D1784FF03B79_Class_1_E3E15074B0EFC2E9*))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_E60CD3A1FE801028_OFFSET))(this, a1);
	}

	::System::Void Method_1_8E89D719D8DE21BA(::Il2CppArray<::RPGTools::Timeline::ColorGradingMaskWhitelist_MapEntity>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPGTools::Timeline::ColorGradingMaskWhitelist_MapEntity>*))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_8E89D719D8DE21BA_OFFSET))(this, a1);
	}

	::System::Void Method_1_3D803E030A17C966(::Class_1_4097D1784FF03B79_Class_1_E413106683C1BCF6* a1, ::RPGTools::Timeline::ColorGradingMaskWhitelist_MapEntity a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4097D1784FF03B79_Class_1_E413106683C1BCF6*, ::RPGTools::Timeline::ColorGradingMaskWhitelist_MapEntity))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_3D803E030A17C966_OFFSET))(this, a1, a2);
	}

	::Class_1_4097D1784FF03B79_Class_1_E413106683C1BCF6* Method_1_8D1CAE97D7179E4E(::RPGTools::Timeline::ColorGradingMaskWhitelist_MapEntity a1)
	{
		return ((::Class_1_4097D1784FF03B79_Class_1_E413106683C1BCF6*(*)(::PVOID, ::RPGTools::Timeline::ColorGradingMaskWhitelist_MapEntity))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_8D1CAE97D7179E4E_OFFSET))(this, a1);
	}

	::System::Void Method_1_7102643637429C2B_2(::Class_1_4097D1784FF03B79_Class_1_E413106683C1BCF6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4097D1784FF03B79_Class_1_E413106683C1BCF6*))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_7102643637429C2B_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_7BFCC71874B4195E(::RPG::Client::MonoEffect* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_7BFCC71874B4195E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E6908CD1C726A6D8(::Class_1_4097D1784FF03B79_Class_0_16E7307DCC43CB2C_17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4097D1784FF03B79_Class_0_16E7307DCC43CB2C_17*))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_E6908CD1C726A6D8_OFFSET))(this, a1);
	}

	::System::Void Method_1_F29B78B7C6996FD2(::Class_1_4097D1784FF03B79_Class_0_16E7307DCC43CB2C_17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4097D1784FF03B79_Class_0_16E7307DCC43CB2C_17*))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_F29B78B7C6996FD2_OFFSET))(this, a1);
	}

	::System::Void Method_1_23F77A1C8929E55B(::Class_1_4097D1784FF03B79_Class_0_16E7307DCC43CB2C_17* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4097D1784FF03B79_Class_0_16E7307DCC43CB2C_17*))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_23F77A1C8929E55B_OFFSET))(this, a1);
	}

	::System::Void Method_1_B2F767B70339A9FE(::Class_1_1342B57709FD7AC5* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1342B57709FD7AC5*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_B2F767B70339A9FE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5C4F929D49CEC993(::Class_1_1342B57709FD7AC5* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1342B57709FD7AC5*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_5C4F929D49CEC993_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DEEE8FFCDA0D1C7C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_DEEE8FFCDA0D1C7C_OFFSET))(this, a1);
	}

	::System::Void Method_1_32EBC163F3801B60(::Class_1_4097D1784FF03B79_Class_0_16E7307DCC43CB2C_17* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4097D1784FF03B79_Class_0_16E7307DCC43CB2C_17*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_32EBC163F3801B60_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E4BD5AF6A6A7D2A5(::Class_1_1342B57709FD7AC5* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1342B57709FD7AC5*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_E4BD5AF6A6A7D2A5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_00A968F776BCC204(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_00A968F776BCC204_OFFSET))(this, a1);
	}

	::System::Void Method_1_A1C7122184516C18()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_A1C7122184516C18_OFFSET))(this);
	}

	::System::Single Method_1_D437D090E63BE8A7(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_D437D090E63BE8A7_OFFSET))(this, a1);
	}

	::System::Single Method_1_D437D090E63BE8A7_1(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_D437D090E63BE8A7_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::String* Method_1_6E599DB966BD2DAC(::RPGTools::Timeline::ColorGradingMaskWhitelist_StageItem a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPGTools::Timeline::ColorGradingMaskWhitelist_StageItem))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_6E599DB966BD2DAC_OFFSET))(this, a1);
	}

	::System::String* Method_1_A7029523B3A90818(::RPGTools::Timeline::ColorGradingMaskWhitelist_MapEntity a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPGTools::Timeline::ColorGradingMaskWhitelist_MapEntity))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_A7029523B3A90818_OFFSET))(this, a1);
	}

	::System::Void Method_1_3CCA0B8A31B650A8_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4097D1784FF03B79_METHOD_1_3CCA0B8A31B650A8_1_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace RPG::GameCore { class LevelEntityEscape; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_A6ADA61841F038A3_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x18A113D0)
#define CLASS_2_A6ADA61841F038A3_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x18A11550)
#define CLASS_2_A6ADA61841F038A3_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x18A0FEB0)
#define CLASS_2_A6ADA61841F038A3_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x18A0FED0)
#define CLASS_2_A6ADA61841F038A3_METHOD_2_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x18A0FF10)
#define CLASS_2_A6ADA61841F038A3_METHOD_2_19844080C13BA28F_OFFSET UNITYSDK_OFFSET(0x18A107F0)
#define CLASS_2_A6ADA61841F038A3_METHOD_2_24B2CA816EFA1FA5_OFFSET UNITYSDK_OFFSET(0x18A10430)
#define CLASS_2_A6ADA61841F038A3_METHOD_2_3D6722B9F8F20694_OFFSET UNITYSDK_OFFSET(0x18A10150)
#define CLASS_2_A6ADA61841F038A3_METHOD_2_3FF9C4D9874672D5_OFFSET UNITYSDK_OFFSET(0x18A10CF0)
#define CLASS_2_A6ADA61841F038A3_METHOD_2_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x18A10690)
#define CLASS_2_A6ADA61841F038A3_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x18A105D0)
#define CLASS_2_A6ADA61841F038A3_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x18A11030)
#define CLASS_2_A6ADA61841F038A3_METHOD_2_71915706CE77067A_OFFSET UNITYSDK_OFFSET(0x18A10720)
#define CLASS_2_A6ADA61841F038A3_METHOD_2_926A87EF7B2C87F9_OFFSET UNITYSDK_OFFSET(0x18A110B0)
#define CLASS_2_A6ADA61841F038A3_METHOD_2_A57FA722AB2A8938_OFFSET UNITYSDK_OFFSET(0x18A10E20)
#define CLASS_2_A6ADA61841F038A3_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x18A10B80)
#define CLASS_2_A6ADA61841F038A3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18A100F0)
#define CLASS_2_A6ADA61841F038A3_METHOD_2_EEB7AD9AD74B5FBF_OFFSET UNITYSDK_OFFSET(0x18A10A30)
#define CLASS_2_A6ADA61841F038A3_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x18A112C0)
#define CLASS_2_A6ADA61841F038A3_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x18A11200)
#define CLASS_2_A6ADA61841F038A3_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x18A0FEC0)
#define CLASS_2_A6ADA61841F038A3__CTOR_OFFSET UNITYSDK_OFFSET(0x18A116B0)
#define CLASS_2_A6ADA61841F038A3__ONBIND_OFFSET UNITYSDK_OFFSET(0x18A0FC70)
#define CLASS_2_A6ADA61841F038A3__ONTICK_OFFSET UNITYSDK_OFFSET(0x18A10D70)

inline static constexpr unsigned int Class_2_A6ADA61841F038A3_TypeDefinitionIndex = 72036;

class Class_2_A6ADA61841F038A3 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	// static const ::System::Single GODJBGOCFOC; // 0x0
	// static const ::System::Single KOJDBNHGKJI; // 0x0
	::RPG::Client::LocalizedText* BIGGNHHLLOA; // 0x60
	::UnityEngine::Animation* PMOJILOJEPE; // 0x68
	::UnityEngine::UI::Image* BHMFMBBLADC; // 0x70
	::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x78
	::UnityEngine::Transform* COBCKPCNFCN; // 0x80
	::RPG::GameCore::LevelDataComponent* KEKOPPIHDLJ; // 0x88
	::UnityEngine::Transform* CHIFNDEFKKM; // 0x90
	::UnityEngine::RectTransform* BKOHPMFAMPM; // 0x98
	::System::Collections::Generic::HashSet_1<::System::UInt32>* BAOGBCAJLKI; // 0xA0
	::System::Single BFKCADADNCA; // 0xA8
	::System::Single HEKAGAJGKEB; // 0xAC
	::System::UInt32 AANAPBBIPGO; // 0xB0
	::System::Int32 _Index_k__BackingField; // 0xB4
	::System::Single CLEBBBABPEI; // 0xB8
	::System::Single FAFIAGJFGEF; // 0xBC
	::System::Single IODBJGNMKND; // 0xC0
	::System::Boolean IANFNCDIEHH; // 0xC4
	::System::Boolean AKBPMCJFCFM; // 0xC5
	::System::Boolean HAFCOEMEHNH; // 0xC6

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_METHOD_2_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_71915706CE77067A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_METHOD_2_71915706CE77067A_OFFSET))(this, a1);
	}

	::System::Void Method_2_3D6722B9F8F20694()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_METHOD_2_3D6722B9F8F20694_OFFSET))(this);
	}

	::System::Void Method_2_19844080C13BA28F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_METHOD_2_19844080C13BA28F_OFFSET))(this);
	}

	::System::Void Method_2_EEB7AD9AD74B5FBF(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_METHOD_2_EEB7AD9AD74B5FBF_OFFSET))(this, a1);
	}

	::System::Void Method_2_3FF9C4D9874672D5(::RPG::GameCore::LevelEntityEscape* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityEscape*))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_METHOD_2_3FF9C4D9874672D5_OFFSET))(this, a1);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_2_24B2CA816EFA1FA5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_METHOD_2_24B2CA816EFA1FA5_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_2_A57FA722AB2A8938(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_METHOD_2_A57FA722AB2A8938_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_METHOD_2_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_2_926A87EF7B2C87F9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_METHOD_2_926A87EF7B2C87F9_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6ADA61841F038A3_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

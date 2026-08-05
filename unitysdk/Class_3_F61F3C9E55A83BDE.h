#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_F61F3C9E55A83BDE_Enum_3_57065CF6DA0D68CE.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_EA973170E0B2CCF6;
namespace MoleMole { class UIActivityHotpotFoodItemRightWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class Rigidbody2D; }
namespace UnityEngine { class Transform; }

#define CLASS_3_F61F3C9E55A83BDE_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1479B8D0)
#define CLASS_3_F61F3C9E55A83BDE_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1479BBF0)
#define CLASS_3_F61F3C9E55A83BDE_METHOD_3_61DC8545148AF227_OFFSET UNITYSDK_OFFSET(0x1479B9B0)
#define CLASS_3_F61F3C9E55A83BDE_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1479BB60)
#define CLASS_3_F61F3C9E55A83BDE_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x1479BC50)
#define CLASS_3_F61F3C9E55A83BDE_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1479BCD0)
#define CLASS_3_F61F3C9E55A83BDE_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1479B870)
#define CLASS_3_F61F3C9E55A83BDE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1479B920)
#define CLASS_3_F61F3C9E55A83BDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1479B9A0)

inline static constexpr unsigned int Class_3_F61F3C9E55A83BDE_TypeDefinitionIndex = 90008;

class Class_3_F61F3C9E55A83BDE : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_13 = 0xC0; // 0x0
	::UnityEngine::Rigidbody2D* Field_3_6; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Field_3_4; // 0x50
	::UnityEngine::Transform* Field_3_11; // 0x58
	::UnityEngine::Collider2D* Field_3_5; // 0x60
	::UnityEngine::Transform* Field_3_10; // 0x68
	::Class_2_EA973170E0B2CCF6* Field_3_0; // 0x70
	::MoleMole::UIActivityHotpotFoodItemRightWidgetController* Field_3_9; // 0x78
	::System::Boolean Field_3_14; // 0x80
	::System::Single Field_3_15; // 0x84
	::Class_3_F61F3C9E55A83BDE_Enum_3_57065CF6DA0D68CE Field_3_7; // 0x88
	::System::Int32 Field_3_1; // 0x8C
	::System::Single Field_3_8; // 0x90

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F61F3C9E55A83BDE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F61F3C9E55A83BDE__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F61F3C9E55A83BDE_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F61F3C9E55A83BDE_GETCLASSID_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_3_61DC8545148AF227()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F61F3C9E55A83BDE_METHOD_3_61DC8545148AF227_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F61F3C9E55A83BDE_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F61F3C9E55A83BDE_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	static ::Class_3_F61F3C9E55A83BDE* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_F61F3C9E55A83BDE*(*)())((::PBYTE)hIl2Cpp + CLASS_3_F61F3C9E55A83BDE_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F61F3C9E55A83BDE_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/UnityEngine/Animations/AnimationMixerPlayable.h"

class Class_1_9B349D65552A3207;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define CLASS_3_E0FF2D319FB4F148_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x12AA23A0)
#define CLASS_3_E0FF2D319FB4F148_METHOD_3_10AF6C8D71C89541_OFFSET UNITYSDK_OFFSET(0x12AA3BE0)
#define CLASS_3_E0FF2D319FB4F148_METHOD_3_411DD46E152C7A11_OFFSET UNITYSDK_OFFSET(0x12AA2FC0)
#define CLASS_3_E0FF2D319FB4F148_METHOD_3_5FB0DC4E8DAA3EC5_OFFSET UNITYSDK_OFFSET(0x12AA2500)
#define CLASS_3_E0FF2D319FB4F148_METHOD_3_62053EF65C1E2E75_OFFSET UNITYSDK_OFFSET(0x12AA2B50)
#define CLASS_3_E0FF2D319FB4F148_METHOD_3_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x12AA37D0)
#define CLASS_3_E0FF2D319FB4F148_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x12AA2E30)
#define CLASS_3_E0FF2D319FB4F148_METHOD_3_D93EC3DDD756C47C_OFFSET UNITYSDK_OFFSET(0x12AA2EC0)
#define CLASS_3_E0FF2D319FB4F148_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x12AA2100)
#define CLASS_3_E0FF2D319FB4F148__CCTOR_OFFSET UNITYSDK_OFFSET(0x12AA23F0)
#define CLASS_3_E0FF2D319FB4F148__CTOR_OFFSET UNITYSDK_OFFSET(0x12AA2470)

inline static constexpr unsigned int Class_3_E0FF2D319FB4F148_TypeDefinitionIndex = 40195;

class Class_3_E0FF2D319FB4F148 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_0 = 0x1; // 0x0
	// static const ::System::Int32 Field_3_1 = 0x0; // 0x0
	// static const ::System::Int32 Field_3_11 = 0x55; // 0x0
	::UnityEngine::Animator* Field_3_9; // 0x48
	::System::Collections::Generic::List_1<::Class_1_9B349D65552A3207*>* Field_3_6; // 0x50
	::System::Boolean Field_3_7; // 0x58
	::System::Boolean Field_3_10; // 0x59
	::UnityEngine::Animations::AnimationMixerPlayable Field_3_2; // 0x60
	::System::Single Field_3_3; // 0x70
	::System::Single Field_3_4; // 0x74
	::System::Int32 Field_3_8; // 0x78
	::System::Single Field_3_5; // 0x7C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_E0FF2D319FB4F148__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E0FF2D319FB4F148__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E0FF2D319FB4F148_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E0FF2D319FB4F148_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_5FB0DC4E8DAA3EC5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E0FF2D319FB4F148_METHOD_3_5FB0DC4E8DAA3EC5_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E0FF2D319FB4F148_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_E0FF2D319FB4F148* Method_3_D93EC3DDD756C47C()
	{
		return ((::Class_3_E0FF2D319FB4F148*(*)())((::PBYTE)hIl2Cpp + CLASS_3_E0FF2D319FB4F148_METHOD_3_D93EC3DDD756C47C_OFFSET))();
	}

	::System::Void Method_3_411DD46E152C7A11(::Foundation::AssetPath a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E0FF2D319FB4F148_METHOD_3_411DD46E152C7A11_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_10AF6C8D71C89541(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E0FF2D319FB4F148_METHOD_3_10AF6C8D71C89541_OFFSET))(this, a1);
	}

	::UnityEngine::Animator* Method_3_62053EF65C1E2E75()
	{
		return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E0FF2D319FB4F148_METHOD_3_62053EF65C1E2E75_OFFSET))(this);
	}

	::System::Void Method_3_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E0FF2D319FB4F148_METHOD_3_A1781348F0A89177_OFFSET))(this);
	}
};

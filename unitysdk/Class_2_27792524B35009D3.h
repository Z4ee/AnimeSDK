#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace RPG::GameCore { class ClockFaceEmotion; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_27792524B35009D3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16A0A260)
#define CLASS_2_27792524B35009D3_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16A0A7B0)
#define CLASS_2_27792524B35009D3_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x16A0A370)
#define CLASS_2_27792524B35009D3_METHOD_2_21EF1E5312EEE5C3_OFFSET UNITYSDK_OFFSET(0x16A0AE20)
#define CLASS_2_27792524B35009D3_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x16A0A890)
#define CLASS_2_27792524B35009D3_METHOD_2_4A13BD8A67015544_OFFSET UNITYSDK_OFFSET(0x16A0AAF0)
#define CLASS_2_27792524B35009D3_METHOD_2_89FADE33F34E4AE0_OFFSET UNITYSDK_OFFSET(0x16A0ADA0)
#define CLASS_2_27792524B35009D3_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x16A0A730)
#define CLASS_2_27792524B35009D3_METHOD_2_9C45022812211693_OFFSET UNITYSDK_OFFSET(0x16A0AF90)
#define CLASS_2_27792524B35009D3_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x16A0AA10)
#define CLASS_2_27792524B35009D3_METHOD_2_DEF989BF0A5D4373_OFFSET UNITYSDK_OFFSET(0x16A0A950)
#define CLASS_2_27792524B35009D3_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x16A0A320)
#define CLASS_2_27792524B35009D3_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x16A0A2D0)
#define CLASS_2_27792524B35009D3__CTOR_OFFSET UNITYSDK_OFFSET(0x16A0B170)

inline static constexpr unsigned int Class_2_27792524B35009D3_TypeDefinitionIndex = 54672;

class Class_2_27792524B35009D3 : public ::RPG::GameCore::GameComponentBase
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::Int32 Field_2_2 = 0x168; // 0x0
	// static const ::System::Int32 Field_2_3 = 0xC; // 0x0
	// static const ::System::Int32 Field_2_4 = 0x3C; // 0x0
	// static const ::System::Int32 Field_2_5 = 0x2D0; // 0x0
	// static const ::System::Single Field_2_6; // 0x0
	// static const ::System::Single Field_2_7; // 0x0
	// static const ::System::Single Field_2_8; // 0x0
	::UnityEngine::Transform* Field_2_9; // 0x18
	::RPG::GameCore::ClockFaceEmotion* Field_2_10; // 0x20
	::UnityEngine::Transform* Field_2_11; // 0x28
	::System::Single Field_2_12; // 0x30
	::System::Int32 Field_2_13; // 0x34
	::System::Single Field_2_14; // 0x38
	::System::Single Field_2_15; // 0x3C
	::System::Single Field_2_16; // 0x40
	::System::Single Field_2_17; // 0x44
	::System::Single Field_2_18; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27792524B35009D3__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27792524B35009D3_DISPOSE_OFFSET))(this);
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27792524B35009D3_ONMODELARTLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27792524B35009D3_ONMODELARTUNLOADED_OFFSET))(this);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_27792524B35009D3_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_DEF989BF0A5D4373(::RPG::GameCore::ClockFaceEmotion* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ClockFaceEmotion*))((::PBYTE)hIl2Cpp + CLASS_2_27792524B35009D3_METHOD_2_DEF989BF0A5D4373_OFFSET))(this, a1);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27792524B35009D3_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_4A13BD8A67015544()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27792524B35009D3_METHOD_2_4A13BD8A67015544_OFFSET))(this);
	}

	::System::Single Method_2_89FADE33F34E4AE0(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_27792524B35009D3_METHOD_2_89FADE33F34E4AE0_OFFSET))(this, a1);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_27792524B35009D3_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27792524B35009D3_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27792524B35009D3_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_9C45022812211693(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_27792524B35009D3_METHOD_2_9C45022812211693_OFFSET))(this, a1);
	}

	::System::Void Method_2_21EF1E5312EEE5C3(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_27792524B35009D3_METHOD_2_21EF1E5312EEE5C3_OFFSET))(this, a1, a2);
	}
};

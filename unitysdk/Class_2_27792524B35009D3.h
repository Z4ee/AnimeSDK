#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace RPG::GameCore { class ClockFaceEmotion; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_27792524B35009D3_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBCDFCE0)
#define CLASS_2_27792524B35009D3_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xBCE0280)
#define CLASS_2_27792524B35009D3_METHOD_2_21EF1E5312EEE5C3_OFFSET UNITYSDK_OFFSET(0xBCE08F0)
#define CLASS_2_27792524B35009D3_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0xBCE0360)
#define CLASS_2_27792524B35009D3_METHOD_2_4A13BD8A67015544_OFFSET UNITYSDK_OFFSET(0xBCE05C0)
#define CLASS_2_27792524B35009D3_METHOD_2_89FADE33F34E4AE0_OFFSET UNITYSDK_OFFSET(0xBCE0870)
#define CLASS_2_27792524B35009D3_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xBCE0200)
#define CLASS_2_27792524B35009D3_METHOD_2_9C45022812211693_OFFSET UNITYSDK_OFFSET(0xBCE0A60)
#define CLASS_2_27792524B35009D3_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0xBCE04E0)
#define CLASS_2_27792524B35009D3_METHOD_2_DEF989BF0A5D4373_OFFSET UNITYSDK_OFFSET(0xBCE0420)
#define CLASS_2_27792524B35009D3_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xBCDFDF0)
#define CLASS_2_27792524B35009D3_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xBCDFDA0)
#define CLASS_2_27792524B35009D3_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xBCDFD50)
#define CLASS_2_27792524B35009D3__CTOR_OFFSET UNITYSDK_OFFSET(0xBCE0C40)

inline static constexpr unsigned int Class_2_27792524B35009D3_TypeDefinitionIndex = 57229;

class Class_2_27792524B35009D3 : public ::RPG::GameCore::GameComponentBase
{
public:
	// static const ::System::String* NMGBOBCLBGO; // 0x0
	// static const ::System::String* AADCBDCIIJJ; // 0x0
	// static const ::System::Int32 MABGLMNLKFO = 0x168; // 0x0
	// static const ::System::Int32 GCIINIGMGIA = 0xC; // 0x0
	// static const ::System::Int32 NFNLICNAKPJ = 0x3C; // 0x0
	// static const ::System::Int32 JOHJMMPELJO = 0x2D0; // 0x0
	// static const ::System::Single OLKEFGGJHCF; // 0x0
	// static const ::System::Single HLOEIELHANP; // 0x0
	// static const ::System::Single FMKHFLKKOIG; // 0x0
	::UnityEngine::Transform* NPGGDHBEBKJ; // 0x18
	::RPG::GameCore::ClockFaceEmotion* PMAPIEMDKKA; // 0x20
	::UnityEngine::Transform* LCGDIIIMKOA; // 0x28
	::System::Single PGMIOKKLHIE; // 0x30
	::System::Single OGDADCGDHGE; // 0x34
	::System::Single AAFJIGIJILI; // 0x38
	::System::Int32 MPBNACJJDPH; // 0x3C
	::System::Single NOPJIODGDEL; // 0x40
	::System::Single BBNIHAFFFIC; // 0x44
	::System::Single LOIPHFHOOJF; // 0x48

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

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27792524B35009D3_METHOD_2_E3DE31A03057E055_OFFSET))(this);
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

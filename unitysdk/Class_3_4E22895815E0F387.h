#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

namespace MoleMole { class MonoStageEnv; }
namespace MoleMole::Config { class StageEntry; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_4E22895815E0F387_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x13A4E2D0)
#define CLASS_3_4E22895815E0F387_METHOD_3_15114622ABD02B79_OFFSET UNITYSDK_OFFSET(0x13A4E4D0)
#define CLASS_3_4E22895815E0F387_METHOD_3_4A3D71F1A28A6B42_OFFSET UNITYSDK_OFFSET(0x13A4E440)
#define CLASS_3_4E22895815E0F387_METHOD_3_4D10873DB5CC58E4_OFFSET UNITYSDK_OFFSET(0x13A4E4A0)
#define CLASS_3_4E22895815E0F387_METHOD_3_9CA5A80F6B5B9E01_OFFSET UNITYSDK_OFFSET(0x13A4E4B0)
#define CLASS_3_4E22895815E0F387_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x13A4E3B0)
#define CLASS_3_4E22895815E0F387_METHOD_3_C7F8BCB95B0B87EE_OFFSET UNITYSDK_OFFSET(0x13A4E4C0)
#define CLASS_3_4E22895815E0F387_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x13A4E4E0)
#define CLASS_3_4E22895815E0F387_METHOD_3_F7D9D27F7F7223BA_OFFSET UNITYSDK_OFFSET(0x13A4E490)
#define CLASS_3_4E22895815E0F387_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13A4E280)
#define CLASS_3_4E22895815E0F387__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A4E320)
#define CLASS_3_4E22895815E0F387__CTOR_OFFSET UNITYSDK_OFFSET(0x13A4E3A0)

inline static constexpr unsigned int Class_3_4E22895815E0F387_TypeDefinitionIndex = 80103;

class Class_3_4E22895815E0F387 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_3 = 0x6F; // 0x0
	::MoleMole::Config::StageEntry* Field_3_0; // 0x48
	::MoleMole::MonoStageEnv* Field_3_2; // 0x50
	::UnityEngine::GameObject* Field_3_1; // 0x58

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_4E22895815E0F387__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4E22895815E0F387__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4E22895815E0F387_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4E22895815E0F387_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4E22895815E0F387_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_4A3D71F1A28A6B42(::MoleMole::Config::StageEntry* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::StageEntry*))((::PBYTE)hIl2Cpp + CLASS_3_4E22895815E0F387_METHOD_3_4A3D71F1A28A6B42_OFFSET))(this, a1);
	}

	::MoleMole::MonoStageEnv* Method_3_F7D9D27F7F7223BA()
	{
		return ((::MoleMole::MonoStageEnv*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4E22895815E0F387_METHOD_3_F7D9D27F7F7223BA_OFFSET))(this);
	}

	::System::Void Method_3_4D10873DB5CC58E4(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_4E22895815E0F387_METHOD_3_4D10873DB5CC58E4_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_3_9CA5A80F6B5B9E01()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4E22895815E0F387_METHOD_3_9CA5A80F6B5B9E01_OFFSET))(this);
	}

	::MoleMole::Config::StageEntry* Method_3_C7F8BCB95B0B87EE()
	{
		return ((::MoleMole::Config::StageEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4E22895815E0F387_METHOD_3_C7F8BCB95B0B87EE_OFFSET))(this);
	}

	::System::Void Method_3_15114622ABD02B79(::MoleMole::MonoStageEnv* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoStageEnv*))((::PBYTE)hIl2Cpp + CLASS_3_4E22895815E0F387_METHOD_3_15114622ABD02B79_OFFSET))(this, a1);
	}

	static ::Class_3_4E22895815E0F387* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_4E22895815E0F387*(*)())((::PBYTE)hIl2Cpp + CLASS_3_4E22895815E0F387_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};

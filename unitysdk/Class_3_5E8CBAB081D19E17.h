#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoEffectPluginConstantScreenSize; }
namespace MoleMole { class MonoEffectPluginFollowCamera; }
namespace UnityEngine { class Transform; }

#define CLASS_3_5E8CBAB081D19E17_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x149644B0)
#define CLASS_3_5E8CBAB081D19E17_METHOD_3_5EBB72402ACAAC42_OFFSET UNITYSDK_OFFSET(0x14964720)
#define CLASS_3_5E8CBAB081D19E17_METHOD_3_6E0C3A554360467D_OFFSET UNITYSDK_OFFSET(0x149648E0)
#define CLASS_3_5E8CBAB081D19E17_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x149645D0)
#define CLASS_3_5E8CBAB081D19E17_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x14964660)
#define CLASS_3_5E8CBAB081D19E17_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x149643C0)
#define CLASS_3_5E8CBAB081D19E17__CCTOR_OFFSET UNITYSDK_OFFSET(0x14964500)
#define CLASS_3_5E8CBAB081D19E17__CTOR_OFFSET UNITYSDK_OFFSET(0x14964580)

inline static constexpr unsigned int Class_3_5E8CBAB081D19E17_TypeDefinitionIndex = 65081;

class Class_3_5E8CBAB081D19E17 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_12 = 0xB2; // 0x0
	::MoleMole::MonoEffectPluginFollowCamera* Field_3_2; // 0x48
	::UnityEngine::Transform* Field_3_11; // 0x50
	::UnityEngine::Transform* Field_3_6; // 0x58
	::MoleMole::MonoEffectPluginConstantScreenSize* Field_3_1; // 0x60
	::System::Boolean Field_3_14; // 0x68
	::System::Boolean Field_3_13; // 0x69
	::UnityEngine::Vector2 Field_3_8; // 0x6C
	::UnityEngine::Vector3 Field_3_4; // 0x74
	::UnityEngine::Vector3 Field_3_0; // 0x80
	::UnityEngine::Vector2 Field_3_15; // 0x8C
	::System::Single Field_3_5; // 0x94
	::System::Single Field_3_9; // 0x98
	::System::Single Field_3_10; // 0x9C
	::UnityEngine::Vector3 Field_3_7; // 0xA0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_5E8CBAB081D19E17__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5E8CBAB081D19E17__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5E8CBAB081D19E17_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5E8CBAB081D19E17_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5E8CBAB081D19E17_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_5E8CBAB081D19E17* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_5E8CBAB081D19E17*(*)())((::PBYTE)hIl2Cpp + CLASS_3_5E8CBAB081D19E17_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_5EBB72402ACAAC42(::MoleMole::MonoEffectPluginConstantScreenSize* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginConstantScreenSize*))((::PBYTE)hIl2Cpp + CLASS_3_5E8CBAB081D19E17_METHOD_3_5EBB72402ACAAC42_OFFSET))(this, a1);
	}

	::System::Void Method_3_6E0C3A554360467D(::MoleMole::MonoEffectPluginFollowCamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginFollowCamera*))((::PBYTE)hIl2Cpp + CLASS_3_5E8CBAB081D19E17_METHOD_3_6E0C3A554360467D_OFFSET))(this, a1);
	}
};

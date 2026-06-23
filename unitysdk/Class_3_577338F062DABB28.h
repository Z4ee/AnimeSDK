#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoEffectPluginFollowCamera; }
namespace UnityEngine { class Transform; }

#define CLASS_3_577338F062DABB28_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x15DE1F50)
#define CLASS_3_577338F062DABB28_METHOD_3_6E0C3A554360467D_OFFSET UNITYSDK_OFFSET(0x15DE20C0)
#define CLASS_3_577338F062DABB28_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x15DE2030)
#define CLASS_3_577338F062DABB28_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x15DE2110)
#define CLASS_3_577338F062DABB28_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x15DE1ED0)
#define CLASS_3_577338F062DABB28__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DE1FA0)
#define CLASS_3_577338F062DABB28__CTOR_OFFSET UNITYSDK_OFFSET(0x15DE2020)

inline static constexpr unsigned int Class_3_577338F062DABB28_TypeDefinitionIndex = 81493;

class Class_3_577338F062DABB28 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_5 = 0xB1; // 0x0
	::MoleMole::MonoEffectPluginFollowCamera* Field_3_0; // 0x48
	::UnityEngine::Transform* Field_3_3; // 0x50
	::UnityEngine::Vector3 Field_3_1; // 0x58
	::UnityEngine::Vector3 Field_3_2; // 0x64
	::System::Single Field_3_4; // 0x70

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_577338F062DABB28__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_577338F062DABB28__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_577338F062DABB28_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_577338F062DABB28_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_577338F062DABB28_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_6E0C3A554360467D(::MoleMole::MonoEffectPluginFollowCamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginFollowCamera*))((::PBYTE)hIl2Cpp + CLASS_3_577338F062DABB28_METHOD_3_6E0C3A554360467D_OFFSET))(this, a1);
	}

	static ::Class_3_577338F062DABB28* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_577338F062DABB28*(*)())((::PBYTE)hIl2Cpp + CLASS_3_577338F062DABB28_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};

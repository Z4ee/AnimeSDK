#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

namespace MoleMole { class MonoTweenAnimation; }
namespace MoleMole::SceneMark { class StageTweenAnimData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Component; }

#define CLASS_3_DC4C9967889A0B11_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x141957E0)
#define CLASS_3_DC4C9967889A0B11_METHOD_3_498650B77B913777_OFFSET UNITYSDK_OFFSET(0x14195B00)
#define CLASS_3_DC4C9967889A0B11_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x14195A70)
#define CLASS_3_DC4C9967889A0B11_METHOD_3_BEAB6CF0CF797770_OFFSET UNITYSDK_OFFSET(0x14195950)
#define CLASS_3_DC4C9967889A0B11_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x141956E0)
#define CLASS_3_DC4C9967889A0B11__CCTOR_OFFSET UNITYSDK_OFFSET(0x14195830)
#define CLASS_3_DC4C9967889A0B11__CTOR_OFFSET UNITYSDK_OFFSET(0x141958B0)

inline static constexpr unsigned int Class_3_DC4C9967889A0B11_TypeDefinitionIndex = 59635;

class Class_3_DC4C9967889A0B11 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_4 = 0xA2; // 0x0
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Component*, ::MoleMole::SceneMark::StageTweenAnimData*>* Field_3_0; // 0x48
	::MoleMole::MonoTweenAnimation* Field_3_1; // 0x50
	::System::String* Field_3_3; // 0x58
	::System::Single Field_3_2; // 0x60

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_DC4C9967889A0B11__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DC4C9967889A0B11__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DC4C9967889A0B11_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DC4C9967889A0B11_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_DC4C9967889A0B11* Method_3_BEAB6CF0CF797770()
	{
		return ((::Class_3_DC4C9967889A0B11*(*)())((::PBYTE)hIl2Cpp + CLASS_3_DC4C9967889A0B11_METHOD_3_BEAB6CF0CF797770_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DC4C9967889A0B11_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_498650B77B913777(::MoleMole::MonoTweenAnimation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoTweenAnimation*))((::PBYTE)hIl2Cpp + CLASS_3_DC4C9967889A0B11_METHOD_3_498650B77B913777_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

namespace MoleMole { class MonoTweenAnimation; }
namespace MoleMole::SceneMark { class StageTweenAnimData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Component; }

#define CLASS_3_DC4C9967889A0B11_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x15089300)
#define CLASS_3_DC4C9967889A0B11_METHOD_3_498650B77B913777_OFFSET UNITYSDK_OFFSET(0x15089590)
#define CLASS_3_DC4C9967889A0B11_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x15089710)
#define CLASS_3_DC4C9967889A0B11_METHOD_3_BEAB6CF0CF797770_OFFSET UNITYSDK_OFFSET(0x15089470)
#define CLASS_3_DC4C9967889A0B11_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x15089200)
#define CLASS_3_DC4C9967889A0B11__CCTOR_OFFSET UNITYSDK_OFFSET(0x15089350)
#define CLASS_3_DC4C9967889A0B11__CTOR_OFFSET UNITYSDK_OFFSET(0x150893D0)

inline static constexpr unsigned int Class_3_DC4C9967889A0B11_TypeDefinitionIndex = 86221;

class Class_3_DC4C9967889A0B11 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_4 = 0xAD; // 0x0
	::System::String* Field_3_3; // 0x48
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Component*, ::MoleMole::SceneMark::StageTweenAnimData*>* Field_3_0; // 0x50
	::MoleMole::MonoTweenAnimation* Field_3_1; // 0x58
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

	::System::Void Method_3_498650B77B913777(::MoleMole::MonoTweenAnimation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoTweenAnimation*))((::PBYTE)hIl2Cpp + CLASS_3_DC4C9967889A0B11_METHOD_3_498650B77B913777_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DC4C9967889A0B11_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};

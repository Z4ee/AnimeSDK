#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_5ABFA23960A770CB_CLEAR_OFFSET UNITYSDK_OFFSET(0x11FCE4A0)
#define CLASS_1_5ABFA23960A770CB_METHOD_1_110F58AB0967111A_OFFSET UNITYSDK_OFFSET(0x11FCE500)
#define CLASS_1_5ABFA23960A770CB_METHOD_1_1830A35AF4A7A4C6_OFFSET UNITYSDK_OFFSET(0x11FCE740)
#define CLASS_1_5ABFA23960A770CB_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x11FCE830)
#define CLASS_1_5ABFA23960A770CB_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11FCE6E0)
#define CLASS_1_5ABFA23960A770CB_METHOD_1_F18D4F9F17C6280A_OFFSET UNITYSDK_OFFSET(0x11FCE640)
#define CLASS_1_5ABFA23960A770CB__CTOR_OFFSET UNITYSDK_OFFSET(0x11FCE890)

inline static constexpr unsigned int Class_1_5ABFA23960A770CB_TypeDefinitionIndex = 57501;

class Class_1_5ABFA23960A770CB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* MDMHICOGGEJ; // 0x10
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5ABFA23960A770CB__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5ABFA23960A770CB_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_110F58AB0967111A(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_5ABFA23960A770CB_METHOD_1_110F58AB0967111A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F18D4F9F17C6280A(::UnityEngine::Transform* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_5ABFA23960A770CB_METHOD_1_F18D4F9F17C6280A_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5ABFA23960A770CB_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_1_1830A35AF4A7A4C6(::UnityEngine::Transform* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_5ABFA23960A770CB_METHOD_1_1830A35AF4A7A4C6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5ABFA23960A770CB_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};

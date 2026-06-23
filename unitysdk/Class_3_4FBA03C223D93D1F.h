#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAPScrollView/Plugin/Plugin_Rolling_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class Mono3DModelRotateHandler; }

#define CLASS_3_4FBA03C223D93D1F_ADD_OFFSET UNITYSDK_OFFSET(0x14E1B6C0)
#define CLASS_3_4FBA03C223D93D1F_DELTA_OFFSET UNITYSDK_OFFSET(0x14E1B600)
#define CLASS_3_4FBA03C223D93D1F_DIV_OFFSET UNITYSDK_OFFSET(0x14E1B830)
#define CLASS_3_4FBA03C223D93D1F_ISEQUALTO_OFFSET UNITYSDK_OFFSET(0x14E1BA40)
#define CLASS_3_4FBA03C223D93D1F_LERP_OFFSET UNITYSDK_OFFSET(0x14E1BAE0)
#define CLASS_3_4FBA03C223D93D1F_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x14E1B9B0)
#define CLASS_3_4FBA03C223D93D1F_METHOD_3_189C865264480324_OFFSET UNITYSDK_OFFSET(0x14E1BBE0)
#define CLASS_3_4FBA03C223D93D1F_MUL_OFFSET UNITYSDK_OFFSET(0x14E1B780)
#define CLASS_3_4FBA03C223D93D1F_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x14E1B4C0)
#define CLASS_3_4FBA03C223D93D1F_STOPTHESHOLD_OFFSET UNITYSDK_OFFSET(0x14E1B960)
#define CLASS_3_4FBA03C223D93D1F_ZERO_OFFSET UNITYSDK_OFFSET(0x14E1B8E0)
#define CLASS_3_4FBA03C223D93D1F__CTOR_OFFSET UNITYSDK_OFFSET(0x14E1B450)

inline static constexpr unsigned int Class_3_4FBA03C223D93D1F_TypeDefinitionIndex = 56484;

class Class_3_4FBA03C223D93D1F : public ::NAPScrollView::Plugin::Plugin_Rolling_1<::UnityEngine::Vector3>
{
public:
	::MoleMole::Mono3DModelRotateHandler* Field_3_0; // 0x60

	::System::Void _ctor(::MoleMole::Mono3DModelRotateHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Mono3DModelRotateHandler*))((::PBYTE)hIl2Cpp + CLASS_3_4FBA03C223D93D1F__CTOR_OFFSET))(this, a1);
	}

	::System::Void OnAwake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4FBA03C223D93D1F_ONAWAKE_OFFSET))(this);
	}

	::UnityEngine::Vector3 Delta(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_4FBA03C223D93D1F_DELTA_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Add(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_4FBA03C223D93D1F_ADD_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Mul(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_4FBA03C223D93D1F_MUL_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Div(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_4FBA03C223D93D1F_DIV_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Zero()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4FBA03C223D93D1F_ZERO_OFFSET))(this);
	}

	::System::Single StopTheshold()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4FBA03C223D93D1F_STOPTHESHOLD_OFFSET))(this);
	}

	::System::Single Magnitude(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_4FBA03C223D93D1F_MAGNITUDE_OFFSET))(this, a1);
	}

	::System::Boolean IsEqualTo(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_4FBA03C223D93D1F_ISEQUALTO_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Lerp(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_4FBA03C223D93D1F_LERP_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_189C865264480324()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4FBA03C223D93D1F_METHOD_3_189C865264480324_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class FloatCurveBundle;
class SingleFloatCurveBundle;
class Vector3CurveBundle;
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class TextAsset; }
namespace UnityEngine { class Texture3D; }
namespace UnityEngine { class Transform; }

#define CLASS_1_25FCF30962875066_METHOD_1_4EADECF71B73EEAF_1_OFFSET UNITYSDK_OFFSET(0x1ABB6EE0)
#define CLASS_1_25FCF30962875066_METHOD_1_4EADECF71B73EEAF_2_OFFSET UNITYSDK_OFFSET(0x1ABB70D0)
#define CLASS_1_25FCF30962875066_METHOD_1_4EADECF71B73EEAF_OFFSET UNITYSDK_OFFSET(0x1ABB6B30)
#define CLASS_1_25FCF30962875066_METHOD_1_724B238227658159_OFFSET UNITYSDK_OFFSET(0x1ABB7510)
#define CLASS_1_25FCF30962875066_METHOD_1_9A19727B38B84EA0_OFFSET UNITYSDK_OFFSET(0x1ABB72A0)
#define CLASS_1_25FCF30962875066_METHOD_1_A46DEEC6AE51FF47_OFFSET UNITYSDK_OFFSET(0x1ABB6740)
#define CLASS_1_25FCF30962875066_METHOD_1_AC51A33D20D3BA72_OFFSET UNITYSDK_OFFSET(0x1ABB69C0)
#define CLASS_1_25FCF30962875066_METHOD_1_C3616AE24CEC8B64_OFFSET UNITYSDK_OFFSET(0x1ABB7C70)
#define CLASS_1_25FCF30962875066_METHOD_1_DEF08C7681604E32_OFFSET UNITYSDK_OFFSET(0x1ABB6D00)
#define CLASS_1_25FCF30962875066_METHOD_1_ED53886479323A76_OFFSET UNITYSDK_OFFSET(0x1ABB7790)
#define CLASS_1_25FCF30962875066_METHOD_1_FD6F1ED3E593DEC7_OFFSET UNITYSDK_OFFSET(0x1ABB6A00)

inline static constexpr unsigned int Class_1_25FCF30962875066_TypeDefinitionIndex = 40552;

class Class_1_25FCF30962875066 : public ::System::Object
{
public:
	static ::UnityEngine::BoxCollider** StaticGet_Field_1_0()
	{
		return (::UnityEngine::BoxCollider**)Il2CppClass::FromTypeDefinitionIndex(Class_1_25FCF30962875066_TypeDefinitionIndex)->GetStaticField(0x6AF80);
	}
	static ::UnityEngine::RaycastHit* StaticGet_Field_1_1()
	{
		return (::UnityEngine::RaycastHit*)Il2CppClass::FromTypeDefinitionIndex(Class_1_25FCF30962875066_TypeDefinitionIndex)->GetStaticField(0x143C0);
	}
	static ::UnityEngine::Ray* StaticGet_Field_1_2()
	{
		return (::UnityEngine::Ray*)Il2CppClass::FromTypeDefinitionIndex(Class_1_25FCF30962875066_TypeDefinitionIndex)->GetStaticField(0x143F0);
	}

	static ::UnityEngine::Matrix4x4 Method_1_A46DEEC6AE51FF47(::UnityEngine::Transform* a1, ::UnityEngine::Camera* a2)
	{
		return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Transform*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_25FCF30962875066_METHOD_1_A46DEEC6AE51FF47_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_AC51A33D20D3BA72(::SingleFloatCurveBundle* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::SingleFloatCurveBundle*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_25FCF30962875066_METHOD_1_AC51A33D20D3BA72_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_FD6F1ED3E593DEC7(::FloatCurveBundle* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::FloatCurveBundle*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_25FCF30962875066_METHOD_1_FD6F1ED3E593DEC7_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector4 Method_1_4EADECF71B73EEAF(::FloatCurveBundle* a1, ::FloatCurveBundle* a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector4(*)(::FloatCurveBundle*, ::FloatCurveBundle*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_25FCF30962875066_METHOD_1_4EADECF71B73EEAF_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector4 Method_1_DEF08C7681604E32(::FloatCurveBundle* a1, ::FloatCurveBundle* a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector4(*)(::FloatCurveBundle*, ::FloatCurveBundle*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_25FCF30962875066_METHOD_1_DEF08C7681604E32_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector4 Method_1_4EADECF71B73EEAF_1(::FloatCurveBundle* a1, ::FloatCurveBundle* a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector4(*)(::FloatCurveBundle*, ::FloatCurveBundle*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_25FCF30962875066_METHOD_1_4EADECF71B73EEAF_1_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector4 Method_1_4EADECF71B73EEAF_2(::FloatCurveBundle* a1, ::FloatCurveBundle* a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector4(*)(::FloatCurveBundle*, ::FloatCurveBundle*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_25FCF30962875066_METHOD_1_4EADECF71B73EEAF_2_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_1_9A19727B38B84EA0(::Vector3CurveBundle* a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::Vector3CurveBundle*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_25FCF30962875066_METHOD_1_9A19727B38B84EA0_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector4 Method_1_724B238227658159(::Vector3CurveBundle* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector4(*)(::Vector3CurveBundle*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_25FCF30962875066_METHOD_1_724B238227658159_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Texture3D* Method_1_ED53886479323A76(::UnityEngine::TextAsset* a1)
	{
		return ((::UnityEngine::Texture3D*(*)(::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + CLASS_1_25FCF30962875066_METHOD_1_ED53886479323A76_OFFSET))(a1);
	}

	static ::System::Single Method_1_C3616AE24CEC8B64(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_25FCF30962875066_METHOD_1_C3616AE24CEC8B64_OFFSET))(a1, a2, a3, a4, a5);
	}
};

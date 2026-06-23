#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_028911ED0AD7AF8F.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_1_E524FF101124C9B2_STRUCT_2_E076C6FF31662BFC_METHOD_2_012731B9818C2301_OFFSET UNITYSDK_OFFSET(0x7BCAF0)
#define CLASS_1_E524FF101124C9B2_STRUCT_2_E076C6FF31662BFC_METHOD_2_B40AC10910D7B05A_OFFSET UNITYSDK_OFFSET(0x7BCA60)
#define CLASS_1_E524FF101124C9B2_STRUCT_2_E076C6FF31662BFC_METHOD_2_D8DECFDA79E64038_OFFSET UNITYSDK_OFFSET(0x7BCC30)
#define CLASS_1_E524FF101124C9B2_STRUCT_2_E076C6FF31662BFC__CCTOR_OFFSET UNITYSDK_OFFSET(0x138A1DC0)
#define CLASS_1_E524FF101124C9B2_STRUCT_2_E076C6FF31662BFC__CTOR_OFFSET UNITYSDK_OFFSET(0x7BC9C0)

inline static constexpr unsigned int Class_1_E524FF101124C9B2_Struct_2_E076C6FF31662BFC_TypeDefinitionIndex = 66013;

struct alignas(4) Class_1_E524FF101124C9B2_Struct_2_E076C6FF31662BFC
{
	static ::UnityEngine::Color* StaticGet_Field_2_0()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E524FF101124C9B2_Struct_2_E076C6FF31662BFC_TypeDefinitionIndex)->GetStaticField(0xD9C0);
	}
	// static const ::System::Single Field_2_1; // 0x0
	::Struct_2_028911ED0AD7AF8F Field_2_2; // 0x10
	::UnityEngine::Vector3 Field_2_3; // 0x14
	::UnityEngine::Vector3 Field_2_4; // 0x20
	::UnityEngine::Vector3 Field_2_5; // 0x2C
	::System::Single Field_2_6; // 0x38
	::System::Single Field_2_7; // 0x3C
	::System::Single Field_2_8; // 0x40

	::System::Void _ctor(::Struct_2_028911ED0AD7AF8F& a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_028911ED0AD7AF8F&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_STRUCT_2_E076C6FF31662BFC__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_STRUCT_2_E076C6FF31662BFC__CCTOR_OFFSET))();
	}

	::System::Void Method_2_B40AC10910D7B05A(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_STRUCT_2_E076C6FF31662BFC_METHOD_2_B40AC10910D7B05A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_012731B9818C2301(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7, ::UnityEngine::Vector3 a8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_STRUCT_2_E076C6FF31662BFC_METHOD_2_012731B9818C2301_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_D8DECFDA79E64038(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_STRUCT_2_E076C6FF31662BFC_METHOD_2_D8DECFDA79E64038_OFFSET))(this, a1);
	}
};

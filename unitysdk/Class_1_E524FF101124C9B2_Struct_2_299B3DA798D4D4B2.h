#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_028911ED0AD7AF8F.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_1_E524FF101124C9B2_STRUCT_2_299B3DA798D4D4B2_METHOD_2_4A282CE025EABD7E_OFFSET UNITYSDK_OFFSET(0x7EDB00)
#define CLASS_1_E524FF101124C9B2_STRUCT_2_299B3DA798D4D4B2_METHOD_2_99A2136794C075E7_OFFSET UNITYSDK_OFFSET(0x7EDAD0)
#define CLASS_1_E524FF101124C9B2_STRUCT_2_299B3DA798D4D4B2_METHOD_2_B40AC10910D7B05A_OFFSET UNITYSDK_OFFSET(0x7EDB10)
#define CLASS_1_E524FF101124C9B2_STRUCT_2_299B3DA798D4D4B2__CCTOR_OFFSET UNITYSDK_OFFSET(0x14DBAEC0)
#define CLASS_1_E524FF101124C9B2_STRUCT_2_299B3DA798D4D4B2__CTOR_OFFSET UNITYSDK_OFFSET(0x7EDA30)

inline static constexpr unsigned int Class_1_E524FF101124C9B2_Struct_2_299B3DA798D4D4B2_TypeDefinitionIndex = 66014;

struct alignas(4) Class_1_E524FF101124C9B2_Struct_2_299B3DA798D4D4B2
{
	static ::UnityEngine::Color* StaticGet_Field_2_0()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E524FF101124C9B2_Struct_2_299B3DA798D4D4B2_TypeDefinitionIndex)->GetStaticField(0xF2A0);
	}
	// static const ::System::Single Field_2_1; // 0x0
	// static const ::System::Int32 Field_2_2 = 0x168; // 0x0
	::Struct_2_028911ED0AD7AF8F Field_2_3; // 0x10
	::UnityEngine::Vector3 Field_2_4; // 0x14
	::UnityEngine::Vector3 Field_2_5; // 0x20
	::UnityEngine::Vector3 Field_2_6; // 0x2C
	::System::Single Field_2_7; // 0x38
	::System::Single Field_2_8; // 0x3C
	::System::Single Field_2_9; // 0x40

	::System::Void _ctor(::Struct_2_028911ED0AD7AF8F& a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::System::Single a6, ::System::Single a7)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_028911ED0AD7AF8F&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_STRUCT_2_299B3DA798D4D4B2__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_STRUCT_2_299B3DA798D4D4B2__CCTOR_OFFSET))();
	}

	::System::Void Method_2_99A2136794C075E7(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_STRUCT_2_299B3DA798D4D4B2_METHOD_2_99A2136794C075E7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4A282CE025EABD7E(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_STRUCT_2_299B3DA798D4D4B2_METHOD_2_4A282CE025EABD7E_OFFSET))(this, a1);
	}

	::System::Void Method_2_B40AC10910D7B05A(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E524FF101124C9B2_STRUCT_2_299B3DA798D4D4B2_METHOD_2_B40AC10910D7B05A_OFFSET))(this, a1, a2);
	}
};

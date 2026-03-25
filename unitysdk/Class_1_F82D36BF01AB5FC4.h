#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_F82D36BF01AB5FC4_METHOD_1_23841F75B879070A_OFFSET UNITYSDK_OFFSET(0x166EB130)
#define CLASS_1_F82D36BF01AB5FC4_METHOD_1_664222BCF379D634_OFFSET UNITYSDK_OFFSET(0x166EAF90)
#define CLASS_1_F82D36BF01AB5FC4_METHOD_1_872ABC1141BB983D_OFFSET UNITYSDK_OFFSET(0x166EB080)
#define CLASS_1_F82D36BF01AB5FC4_METHOD_1_A48996EAFBC0AF59_OFFSET UNITYSDK_OFFSET(0x166EB000)
#define CLASS_1_F82D36BF01AB5FC4_METHOD_1_DEE90D3447555A55_OFFSET UNITYSDK_OFFSET(0x166E3890)
#define CLASS_1_F82D36BF01AB5FC4__CCTOR_OFFSET UNITYSDK_OFFSET(0x166EB200)
#define CLASS_1_F82D36BF01AB5FC4__CTOR_OFFSET UNITYSDK_OFFSET(0x166EB1F0)

inline static constexpr unsigned int Class_1_F82D36BF01AB5FC4_TypeDefinitionIndex = 28780;

class Class_1_F82D36BF01AB5FC4 : public ::System::Object
{
public:
	static ::RPG::MVector3* StaticGet_Field_1_7()
	{
		return (::RPG::MVector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F82D36BF01AB5FC4_TypeDefinitionIndex)->GetStaticField(0xF0C0);
	}
	static ::System::Guid* StaticGet_Field_1_8()
	{
		return (::System::Guid*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F82D36BF01AB5FC4_TypeDefinitionIndex)->GetStaticField(0xF0CC);
	}
	static ::System::Single* StaticGet_Field_1_9()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F82D36BF01AB5FC4_TypeDefinitionIndex)->GetStaticField(0xF0DC);
	}
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	// static const ::System::Single Field_1_2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xFFFFFFFF; // 0x0
	// static const ::System::UInt32 Field_1_4 = 0x0; // 0x0
	// static const ::System::UInt32 Field_1_5 = 0x0; // 0x0
	// static const ::System::UInt32 Field_1_6 = 0xFFFFFFFF; // 0x0
	// static const ::System::UInt32 Field_1_10 = 0x0; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F82D36BF01AB5FC4__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F82D36BF01AB5FC4__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_664222BCF379D634(::System::Single a1)
	{
		return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F82D36BF01AB5FC4_METHOD_1_664222BCF379D634_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_A48996EAFBC0AF59(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F82D36BF01AB5FC4_METHOD_1_A48996EAFBC0AF59_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_872ABC1141BB983D(::RPG::GameCore::CompareType a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::CompareType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F82D36BF01AB5FC4_METHOD_1_872ABC1141BB983D_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_DEE90D3447555A55(::RPG::GameCore::CompareType a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::CompareType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F82D36BF01AB5FC4_METHOD_1_DEE90D3447555A55_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_23841F75B879070A(::RPG::GameCore::CompareType a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::CompareType, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F82D36BF01AB5FC4_METHOD_1_23841F75B879070A_OFFSET))(a1, a2, a3, a4);
	}
};

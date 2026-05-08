#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class Material; }

#define CLASS_1_7C49A1AA8D795789_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x13B827E0)
#define CLASS_1_7C49A1AA8D795789_METHOD_1_BCB087DFB7399B96_OFFSET UNITYSDK_OFFSET(0x13B82A80)
#define CLASS_1_7C49A1AA8D795789_METHOD_1_BD486D5C6E7D68DB_1_OFFSET UNITYSDK_OFFSET(0x13B829C0)
#define CLASS_1_7C49A1AA8D795789_METHOD_1_BD486D5C6E7D68DB_OFFSET UNITYSDK_OFFSET(0x13B82720)
#define CLASS_1_7C49A1AA8D795789_METHOD_1_D9F053C6E39FF929_1_OFFSET UNITYSDK_OFFSET(0x13B82920)
#define CLASS_1_7C49A1AA8D795789_METHOD_1_D9F053C6E39FF929_OFFSET UNITYSDK_OFFSET(0x13B82880)
#define CLASS_1_7C49A1AA8D795789__CCTOR_OFFSET UNITYSDK_OFFSET(0x13B826C0)
#define CLASS_1_7C49A1AA8D795789__CTOR_OFFSET UNITYSDK_OFFSET(0x13B826B0)

inline static constexpr unsigned int Class_1_7C49A1AA8D795789_TypeDefinitionIndex = 64504;

class Class_1_7C49A1AA8D795789 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7C49A1AA8D795789_TypeDefinitionIndex)->GetStaticField(0xC630);
	}
	static ::System::Int32* StaticGet_Field_1_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7C49A1AA8D795789_TypeDefinitionIndex)->GetStaticField(0xC634);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7C49A1AA8D795789_TypeDefinitionIndex)->GetStaticField(0xC638);
	}
	::UnityEngine::Material* Field_1_0; // 0x10

	::System::Void _ctor(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_7C49A1AA8D795789__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7C49A1AA8D795789__CCTOR_OFFSET))();
	}

	::System::Void Method_1_BD486D5C6E7D68DB(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_7C49A1AA8D795789_METHOD_1_BD486D5C6E7D68DB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C49A1AA8D795789_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::UnityEngine::Color Method_1_D9F053C6E39FF929()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C49A1AA8D795789_METHOD_1_D9F053C6E39FF929_OFFSET))(this);
	}

	::UnityEngine::Color Method_1_D9F053C6E39FF929_1()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C49A1AA8D795789_METHOD_1_D9F053C6E39FF929_1_OFFSET))(this);
	}

	::System::Void Method_1_BD486D5C6E7D68DB_1(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_7C49A1AA8D795789_METHOD_1_BD486D5C6E7D68DB_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_BCB087DFB7399B96(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7C49A1AA8D795789_METHOD_1_BCB087DFB7399B96_OFFSET))(this, a1);
	}
};

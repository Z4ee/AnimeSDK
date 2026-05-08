#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_142;

#define CLASS_1_60F2B3E3F849420C_METHOD_1_5AAEF3CEBE65A5B5_OFFSET UNITYSDK_OFFSET(0x14CD6950)
#define CLASS_1_60F2B3E3F849420C_METHOD_1_9372F15244FC0FBC_OFFSET UNITYSDK_OFFSET(0x14CD6A60)
#define CLASS_1_60F2B3E3F849420C_METHOD_1_E20365345CC9C440_OFFSET UNITYSDK_OFFSET(0x14CD6A00)
#define CLASS_1_60F2B3E3F849420C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14CD68F0)

inline static constexpr unsigned int Class_1_60F2B3E3F849420C_TypeDefinitionIndex = 80366;

class Class_1_60F2B3E3F849420C : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_142** StaticGet_Field_1_0()
	{
		return (::Class_0_16E4307DCC419505_142**)Il2CppClass::FromTypeDefinitionIndex(Class_1_60F2B3E3F849420C_TypeDefinitionIndex)->GetStaticField(0x36EC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_60F2B3E3F849420C__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_5AAEF3CEBE65A5B5(::Class_0_16E4307DCC419505_142* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_142*))((::PBYTE)hIl2Cpp + CLASS_1_60F2B3E3F849420C_METHOD_1_5AAEF3CEBE65A5B5_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_142* Method_1_E20365345CC9C440()
	{
		return ((::Class_0_16E4307DCC419505_142*(*)())((::PBYTE)hIl2Cpp + CLASS_1_60F2B3E3F849420C_METHOD_1_E20365345CC9C440_OFFSET))();
	}

	static ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> Method_1_9372F15244FC0FBC(::Class_0_16E4307DCC419505_142* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::Foundation::ViewObject::GroupMemberIdentifier a4)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::Class_0_16E4307DCC419505_142*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Foundation::ViewObject::GroupMemberIdentifier))((::PBYTE)hIl2Cpp + CLASS_1_60F2B3E3F849420C_METHOD_1_9372F15244FC0FBC_OFFSET))(a1, a2, a3, a4);
	}
};

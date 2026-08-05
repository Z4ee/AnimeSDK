#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_E4DCFD174698F990;
class Class_3_B537A0AA78803363;
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_F036DFF2F2C48118_METHOD_4_05552EE9E247CDDE_OFFSET UNITYSDK_OFFSET(0x142EDBB0)
#define CLASS_4_F036DFF2F2C48118_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x142EDFD0)
#define CLASS_4_F036DFF2F2C48118_METHOD_4_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x142ED120)
#define CLASS_4_F036DFF2F2C48118_METHOD_4_DB421FE04521FF9F_OFFSET UNITYSDK_OFFSET(0x142ED440)
#define CLASS_4_F036DFF2F2C48118_METHOD_4_DE6944114720518B_OFFSET UNITYSDK_OFFSET(0x142ECDE0)
#define CLASS_4_F036DFF2F2C48118_METHOD_4_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x142EDF40)
#define CLASS_4_F036DFF2F2C48118__CTOR_OFFSET UNITYSDK_OFFSET(0x142EDCC0)

inline static constexpr unsigned int Class_4_F036DFF2F2C48118_TypeDefinitionIndex = 57527;

class Class_4_F036DFF2F2C48118 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_4_6; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_10; // 0x30
	::Class_3_B537A0AA78803363* Field_4_9; // 0x38
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_4_0; // 0x40
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_4_7; // 0x48
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_11; // 0x50
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_4_4; // 0x58
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_4_5; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F036DFF2F2C48118__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_DE6944114720518B(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_4_F036DFF2F2C48118_METHOD_4_DE6944114720518B_OFFSET))(this, a1);
	}

	::System::Void Method_4_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F036DFF2F2C48118_METHOD_4_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_4_DB421FE04521FF9F(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_F036DFF2F2C48118_METHOD_4_DB421FE04521FF9F_OFFSET))(this, a1);
	}

	::System::Void Method_4_E9A575D18A0748D9(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_4_F036DFF2F2C48118_METHOD_4_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F036DFF2F2C48118_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 Method_4_05552EE9E247CDDE(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_4_F036DFF2F2C48118_METHOD_4_05552EE9E247CDDE_OFFSET))(a1, a2, a3);
	}
};

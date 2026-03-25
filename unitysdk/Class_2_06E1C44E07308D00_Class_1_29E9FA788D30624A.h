#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3A335394524C9E44.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_2_06E1C44E07308D00_CLASS_1_29E9FA788D30624A_METHOD_1_107F2BA13CF67ACC_OFFSET UNITYSDK_OFFSET(0x117B6AB0)
#define CLASS_2_06E1C44E07308D00_CLASS_1_29E9FA788D30624A_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x117B8E30)
#define CLASS_2_06E1C44E07308D00_CLASS_1_29E9FA788D30624A__CTOR_OFFSET UNITYSDK_OFFSET(0x117B7080)

inline static constexpr unsigned int Class_2_06E1C44E07308D00_Class_1_29E9FA788D30624A_TypeDefinitionIndex = 58660;

class Class_2_06E1C44E07308D00_Class_1_29E9FA788D30624A : public ::System::Object
{
public:
	::UnityEngine::Vector2 Field_1_2; // 0x10
	::System::Single Field_1_0; // 0x18
	::UnityEngine::Vector2 Field_1_1; // 0x1C
	::System::Single Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_CLASS_1_29E9FA788D30624A__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_1_107F2BA13CF67ACC(::Struct_2_3A335394524C9E44 a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::Struct_2_3A335394524C9E44))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_CLASS_1_29E9FA788D30624A_METHOD_1_107F2BA13CF67ACC_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06E1C44E07308D00_CLASS_1_29E9FA788D30624A_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};

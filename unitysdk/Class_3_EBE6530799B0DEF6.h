#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_EBE6530799B0DEF6_METHOD_3_9E3D0C5F7C38F16C_OFFSET UNITYSDK_OFFSET(0x1841B900)
#define CLASS_3_EBE6530799B0DEF6_METHOD_3_C17C5E1EBAECCBCD_OFFSET UNITYSDK_OFFSET(0x1841B980)
#define CLASS_3_EBE6530799B0DEF6__CTOR_OFFSET UNITYSDK_OFFSET(0x1841B950)

inline static constexpr unsigned int Class_3_EBE6530799B0DEF6_TypeDefinitionIndex = 23082;

class Class_3_EBE6530799B0DEF6 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EBE6530799B0DEF6__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_9E3D0C5F7C38F16C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_EBE6530799B0DEF6*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_EBE6530799B0DEF6*&))((::PBYTE)hIl2Cpp + CLASS_3_EBE6530799B0DEF6_METHOD_3_9E3D0C5F7C38F16C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C17C5E1EBAECCBCD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_EBE6530799B0DEF6* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_EBE6530799B0DEF6*))((::PBYTE)hIl2Cpp + CLASS_3_EBE6530799B0DEF6_METHOD_3_C17C5E1EBAECCBCD_OFFSET))(a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_9E5C8E0DF08B4A48_METHOD_3_292FA0EEF6659E6F_OFFSET UNITYSDK_OFFSET(0x18B97FE0)
#define CLASS_3_9E5C8E0DF08B4A48_METHOD_3_F73DE1E21818E48C_OFFSET UNITYSDK_OFFSET(0x18B97F40)
#define CLASS_3_9E5C8E0DF08B4A48__CTOR_OFFSET UNITYSDK_OFFSET(0x18B97FA0)

inline static constexpr unsigned int Class_3_9E5C8E0DF08B4A48_TypeDefinitionIndex = 21266;

class Class_3_9E5C8E0DF08B4A48 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::System::String*>* Field_3_1; // 0x18
	::RPG::MVector3 Field_3_3; // 0x20
	::System::Boolean Field_3_2; // 0x2C
	::System::Boolean Field_3_0; // 0x2D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E5C8E0DF08B4A48__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_F73DE1E21818E48C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_9E5C8E0DF08B4A48*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_9E5C8E0DF08B4A48*&))((::PBYTE)hIl2Cpp + CLASS_3_9E5C8E0DF08B4A48_METHOD_3_F73DE1E21818E48C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_292FA0EEF6659E6F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_9E5C8E0DF08B4A48* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_9E5C8E0DF08B4A48*))((::PBYTE)hIl2Cpp + CLASS_3_9E5C8E0DF08B4A48_METHOD_3_292FA0EEF6659E6F_OFFSET))(a1, a2);
	}
};

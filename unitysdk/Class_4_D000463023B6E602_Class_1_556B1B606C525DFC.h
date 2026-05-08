#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9DFB39885391F41D.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"

class Class_4_D000463023B6E602_Class_1_CE70D96772FC4DD7;
namespace System { class Action; }

#define CLASS_4_D000463023B6E602_CLASS_1_556B1B606C525DFC_METHOD_1_3984EF835B35D1C5_OFFSET UNITYSDK_OFFSET(0x11E76C10)
#define CLASS_4_D000463023B6E602_CLASS_1_556B1B606C525DFC_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x11E76AF0)
#define CLASS_4_D000463023B6E602_CLASS_1_556B1B606C525DFC__CTOR_OFFSET UNITYSDK_OFFSET(0x11E76AE0)

inline static constexpr unsigned int Class_4_D000463023B6E602_Class_1_556B1B606C525DFC_TypeDefinitionIndex = 46765;

class Class_4_D000463023B6E602_Class_1_556B1B606C525DFC : public ::System::Object
{
public:
	::Struct_2_FE9BD044832BC9C3 Field_1_3; // 0x10
	::Struct_2_9DFB39885391F41D Field_1_5; // 0x40
	::Class_4_D000463023B6E602_Class_1_CE70D96772FC4DD7* Field_1_7; // 0x58
	::Struct_2_FE9BD044832BC9C3 Field_1_6; // 0x60
	::System::Boolean Field_1_0; // 0x90
	::System::Int32 Field_1_1; // 0x94
	::System::Int32 Field_1_2; // 0x98
	::System::Int32 Field_1_4; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D000463023B6E602_CLASS_1_556B1B606C525DFC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D000463023B6E602_CLASS_1_556B1B606C525DFC_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_1_3984EF835B35D1C5(::System::Boolean a1, ::System::Int32 a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_4_D000463023B6E602_CLASS_1_556B1B606C525DFC_METHOD_1_3984EF835B35D1C5_OFFSET))(this, a1, a2, a3);
	}
};

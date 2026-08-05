#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/Object.h"

class Class_1_B890BA8430A32496_Class_2_B57A8ED4EE569CA0;
class Class_1_D675521B14CA6BEF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_129E3DFB531702AF__CTOR_OFFSET UNITYSDK_OFFSET(0x10F49FD0)

inline static constexpr unsigned int Class_1_129E3DFB531702AF_TypeDefinitionIndex = 50118;

class Class_1_129E3DFB531702AF : public ::System::Object
{
public:
	::Class_1_D675521B14CA6BEF* Field_1_6; // 0x10
	::Class_1_B890BA8430A32496_Class_2_B57A8ED4EE569CA0* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_1_0; // 0x20
	::System::Int32 Field_1_3; // 0x28
	::System::Boolean Field_1_7; // 0x2C
	::Foundation::ViewObject::GroupMemberIdentifier Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_129E3DFB531702AF__CTOR_OFFSET))(this);
	}
};

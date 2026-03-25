#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_176.h"

class Class_1_F9FBCC956DFCF137_14;
class Class_1_FD611945730E269E;
namespace RPG::Client::Prop { class ChimeraDuelBubbleEvent; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_5AA4588B34B7446E_METHOD_2_3DC36319CC97F5E9_OFFSET UNITYSDK_OFFSET(0x117A9F20)
#define CLASS_2_5AA4588B34B7446E__CTOR_OFFSET UNITYSDK_OFFSET(0x117A9F10)

inline static constexpr unsigned int Class_2_5AA4588B34B7446E_TypeDefinitionIndex = 63240;

class Class_2_5AA4588B34B7446E : public ::Class_1_43BD383C98B4C0C5_176
{
public:
	::System::Func_1<::RPG::Client::Prop::ChimeraDuelBubbleEvent*>* Field_2_1; // 0x10
	::System::Boolean Field_2_0; // 0x18

	::System::Void _ctor(::System::Func_1<::RPG::Client::Prop::ChimeraDuelBubbleEvent*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::RPG::Client::Prop::ChimeraDuelBubbleEvent*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5AA4588B34B7446E__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_FD611945730E269E* Method_2_3DC36319CC97F5E9(::Class_1_F9FBCC956DFCF137_14* a1)
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_14*))((::PBYTE)hIl2Cpp + CLASS_2_5AA4588B34B7446E_METHOD_2_3DC36319CC97F5E9_OFFSET))(this, a1);
	}
};

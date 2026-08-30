#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_213.h"

class Class_1_F9FBCC956DFCF137_27;
class Class_1_FD611945730E269E;
namespace RPG::Client::Prop { class ChimeraDuelBubbleEvent; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_5AA4588B34B7446E_METHOD_2_3DC36319CC97F5E9_OFFSET UNITYSDK_OFFSET(0x1705ACC0)
#define CLASS_2_5AA4588B34B7446E__CTOR_OFFSET UNITYSDK_OFFSET(0x1705ACB0)

inline static constexpr unsigned int Class_2_5AA4588B34B7446E_TypeDefinitionIndex = 77227;

class Class_2_5AA4588B34B7446E : public ::Class_1_43BD383C98B4C0C5_213
{
public:
	::System::Func_1<::RPG::Client::Prop::ChimeraDuelBubbleEvent*>* PHKEALDENKI; // 0x10
	::System::Boolean MFLJMFPCNFL; // 0x18

	::System::Void _ctor(::System::Func_1<::RPG::Client::Prop::ChimeraDuelBubbleEvent*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::RPG::Client::Prop::ChimeraDuelBubbleEvent*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5AA4588B34B7446E__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_FD611945730E269E* Method_2_3DC36319CC97F5E9(::Class_1_F9FBCC956DFCF137_27* a1)
	{
		return ((::Class_1_FD611945730E269E*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_27*))((::PBYTE)hIl2Cpp + CLASS_2_5AA4588B34B7446E_METHOD_2_3DC36319CC97F5E9_OFFSET))(this, a1);
	}
};

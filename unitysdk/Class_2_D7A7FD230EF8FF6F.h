#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C6CBD73325F73BBD.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_D7A7FD230EF8FF6F_METHOD_2_B98D23891FF089E2_OFFSET UNITYSDK_OFFSET(0x133C4DB0)
#define CLASS_2_D7A7FD230EF8FF6F__CTOR_OFFSET UNITYSDK_OFFSET(0x133C4D10)

inline static constexpr unsigned int Class_2_D7A7FD230EF8FF6F_TypeDefinitionIndex = 73551;

class Class_2_D7A7FD230EF8FF6F : public ::Class_1_C6CBD73325F73BBD
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::SimpleJSON::JSONNode*>* Field_2_1; // 0x18
	::System::String* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7A7FD230EF8FF6F__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_B98D23891FF089E2(::Class_2_D7A7FD230EF8FF6F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_D7A7FD230EF8FF6F*))((::PBYTE)hIl2Cpp + CLASS_2_D7A7FD230EF8FF6F_METHOD_2_B98D23891FF089E2_OFFSET))(this, a1);
	}
};

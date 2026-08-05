#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C6CBD73325F73BBD.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_3BA46E053EADC555_METHOD_2_E7E5C6A368577B73_OFFSET UNITYSDK_OFFSET(0x12C8BC50)
#define CLASS_2_3BA46E053EADC555__CTOR_OFFSET UNITYSDK_OFFSET(0x12C8BBB0)

inline static constexpr unsigned int Class_2_3BA46E053EADC555_TypeDefinitionIndex = 66040;

class Class_2_3BA46E053EADC555 : public ::Class_1_C6CBD73325F73BBD
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::SimpleJSON::JSONNode*>* Field_2_0; // 0x18
	::System::String* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BA46E053EADC555__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_E7E5C6A368577B73(::Class_2_3BA46E053EADC555* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_3BA46E053EADC555*))((::PBYTE)hIl2Cpp + CLASS_2_3BA46E053EADC555_METHOD_2_E7E5C6A368577B73_OFFSET))(this, a1);
	}
};

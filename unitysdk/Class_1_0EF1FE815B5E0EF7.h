#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0EF1FE815B5E0EF7__CTOR_OFFSET UNITYSDK_OFFSET(0x15A1B260)

inline static constexpr unsigned int Class_1_0EF1FE815B5E0EF7_TypeDefinitionIndex = 61094;

class Class_1_0EF1FE815B5E0EF7 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* IMCNFPNKKFA; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* CEIJOGLNGND; // 0x18
	::System::String* FLPLCECLOLO; // 0x20
	::System::String* EAIPOEHAPHM; // 0x28
	::System::String* HMCFOJPMFIK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EF1FE815B5E0EF7__CTOR_OFFSET))(this);
	}
};

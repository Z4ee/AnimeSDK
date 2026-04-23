#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1B9BBF1B9A8CC806;
class Class_1_695986DCCF48052E;
class Class_1_74F732AB6D78C9D0;
class Class_1_DC5AD2586C27D8E8;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_C9276C6DD83E9467_METHOD_1_53617315F1BC935F_OFFSET UNITYSDK_OFFSET(0x17AEDED0)
#define CLASS_1_C9276C6DD83E9467_METHOD_1_FA1FD849F68CAF57_OFFSET UNITYSDK_OFFSET(0x17AEDA50)
#define CLASS_1_C9276C6DD83E9467__CTOR_OFFSET UNITYSDK_OFFSET(0x17B14F80)

inline static constexpr unsigned int Class_1_C9276C6DD83E9467_TypeDefinitionIndex = 37812;

class Class_1_C9276C6DD83E9467 : public ::System::Object
{
public:
	// static const ::System::UInt16 Field_1_0 = 0x1; // 0x0
	// static const ::System::String* Field_1_1; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9276C6DD83E9467__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_53617315F1BC935F(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::Class_1_74F732AB6D78C9D0*>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::Class_1_74F732AB6D78C9D0*>*))((::PBYTE)hIl2Cpp + CLASS_1_C9276C6DD83E9467_METHOD_1_53617315F1BC935F_OFFSET))(a1, a2);
	}

	static ::Class_1_DC5AD2586C27D8E8* Method_1_FA1FD849F68CAF57(::Class_1_695986DCCF48052E* a1, ::Class_1_1B9BBF1B9A8CC806* a2)
	{
		return ((::Class_1_DC5AD2586C27D8E8*(*)(::Class_1_695986DCCF48052E*, ::Class_1_1B9BBF1B9A8CC806*))((::PBYTE)hIl2Cpp + CLASS_1_C9276C6DD83E9467_METHOD_1_FA1FD849F68CAF57_OFFSET))(a1, a2);
	}
};

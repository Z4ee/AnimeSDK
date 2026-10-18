#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5B45B9D7D796EF41_METHOD_1_08DCF72FBE01FF99_1_OFFSET UNITYSDK_OFFSET(0x1CD58D00)
#define CLASS_1_5B45B9D7D796EF41_METHOD_1_08DCF72FBE01FF99_OFFSET UNITYSDK_OFFSET(0x1CD58B90)
#define CLASS_1_5B45B9D7D796EF41__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD58E70)

inline static constexpr unsigned int Class_1_5B45B9D7D796EF41_TypeDefinitionIndex = 15462;

class Class_1_5B45B9D7D796EF41 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet_OAFDNADLKAO()
	{
		return (::System::Collections::Generic::List_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B45B9D7D796EF41_TypeDefinitionIndex)->GetStaticField(0x4DB80);
	}
	static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet_DCNMPCPPHJO()
	{
		return (::System::Collections::Generic::List_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B45B9D7D796EF41_TypeDefinitionIndex)->GetStaticField(0x4DB88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B45B9D7D796EF41__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_08DCF72FBE01FF99()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B45B9D7D796EF41_METHOD_1_08DCF72FBE01FF99_OFFSET))();
	}

	static ::System::Void Method_1_08DCF72FBE01FF99_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B45B9D7D796EF41_METHOD_1_08DCF72FBE01FF99_1_OFFSET))();
	}
};

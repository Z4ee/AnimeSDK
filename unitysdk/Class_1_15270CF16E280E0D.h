#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_15270CF16E280E0D_METHOD_1_8AD517D2CEAA9C38_OFFSET UNITYSDK_OFFSET(0xC382A70)
#define CLASS_1_15270CF16E280E0D_METHOD_1_CAA1387F8D547DBB_OFFSET UNITYSDK_OFFSET(0xC382700)
#define CLASS_1_15270CF16E280E0D__CTOR_OFFSET UNITYSDK_OFFSET(0xC382E50)

inline static constexpr unsigned int Class_1_15270CF16E280E0D_TypeDefinitionIndex = 61177;

class Class_1_15270CF16E280E0D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* DJPBMFOFJIB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15270CF16E280E0D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CAA1387F8D547DBB(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_15270CF16E280E0D_METHOD_1_CAA1387F8D547DBB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8AD517D2CEAA9C38(::System::String* a1, ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>>*))((::PBYTE)hIl2Cpp + CLASS_1_15270CF16E280E0D_METHOD_1_8AD517D2CEAA9C38_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F3BFA3A578369157_METHOD_1_15D2AB20F4DFBD38_OFFSET UNITYSDK_OFFSET(0x17A38740)
#define CLASS_1_F3BFA3A578369157__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A38CA0)
#define CLASS_1_F3BFA3A578369157__CTOR_OFFSET UNITYSDK_OFFSET(0x17A38C90)

inline static constexpr unsigned int Class_1_F3BFA3A578369157_TypeDefinitionIndex = 50038;

class Class_1_F3BFA3A578369157 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>** StaticGet_EJCIOGFMOMF()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3BFA3A578369157_TypeDefinitionIndex)->GetStaticField(0x598A0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3BFA3A578369157__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3BFA3A578369157__CCTOR_OFFSET))();
	}

	static ::System::String* Method_1_15D2AB20F4DFBD38(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F3BFA3A578369157_METHOD_1_15D2AB20F4DFBD38_OFFSET))(a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E928105EF1F3433E_METHOD_1_CB7FB1184F382DBB_OFFSET UNITYSDK_OFFSET(0x10B2FF50)
#define CLASS_1_E928105EF1F3433E__CCTOR_OFFSET UNITYSDK_OFFSET(0x10B30350)
#define CLASS_1_E928105EF1F3433E__CTOR_OFFSET UNITYSDK_OFFSET(0x10B30340)

inline static constexpr unsigned int Class_1_E928105EF1F3433E_TypeDefinitionIndex = 40300;

class Class_1_E928105EF1F3433E : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E928105EF1F3433E_TypeDefinitionIndex)->GetStaticField(0x47730);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E928105EF1F3433E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E928105EF1F3433E__CCTOR_OFFSET))();
	}

	static ::System::String* Method_1_CB7FB1184F382DBB(::System::String* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E928105EF1F3433E_METHOD_1_CB7FB1184F382DBB_OFFSET))(a1, a2);
	}
};

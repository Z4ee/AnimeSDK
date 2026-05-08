#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_81A3942BCC6E42B5.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B49E68648EDFB10C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1401D4D0)
#define CLASS_1_B49E68648EDFB10C__CTOR_OFFSET UNITYSDK_OFFSET(0x1401D4C0)

inline static constexpr unsigned int Class_1_B49E68648EDFB10C_TypeDefinitionIndex = 54914;

class Class_1_B49E68648EDFB10C : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Enum_3_81A3942BCC6E42B5>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Enum_3_81A3942BCC6E42B5>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B49E68648EDFB10C_TypeDefinitionIndex)->GetStaticField(0x48ED0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B49E68648EDFB10C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B49E68648EDFB10C__CCTOR_OFFSET))();
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerable; }

#define CLASS_2_CE019A5C94A4EF43___C_METHOD_1_0C9132BD5EDFBD38_OFFSET UNITYSDK_OFFSET(0x14402160)
#define CLASS_2_CE019A5C94A4EF43___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14402110)
#define CLASS_2_CE019A5C94A4EF43___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14402150)

inline static constexpr unsigned int Class_2_CE019A5C94A4EF43___c_TypeDefinitionIndex = 84469;

class Class_2_CE019A5C94A4EF43___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Collections::IEnumerable*>** StaticGet___9__7_0()
	{
		return (::System::Func_1<::System::Collections::IEnumerable*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CE019A5C94A4EF43___c_TypeDefinitionIndex)->GetStaticField(0x47ED0);
	}
	static ::Class_2_CE019A5C94A4EF43___c** StaticGet___9()
	{
		return (::Class_2_CE019A5C94A4EF43___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CE019A5C94A4EF43___c_TypeDefinitionIndex)->GetStaticField(0x47ED8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_CE019A5C94A4EF43___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE019A5C94A4EF43___C__CTOR_OFFSET))(this);
	}

	::System::Collections::IEnumerable* Method_1_0C9132BD5EDFBD38()
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE019A5C94A4EF43___C_METHOD_1_0C9132BD5EDFBD38_OFFSET))(this);
	}
};

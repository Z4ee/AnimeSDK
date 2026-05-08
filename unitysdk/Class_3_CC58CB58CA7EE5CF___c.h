#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_CC58CB58CA7EE5CF;

#define CLASS_3_CC58CB58CA7EE5CF___C_METHOD_1_63E22A79D2DA8C7B_OFFSET UNITYSDK_OFFSET(0x1C0E0780)
#define CLASS_3_CC58CB58CA7EE5CF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C0E0730)
#define CLASS_3_CC58CB58CA7EE5CF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0E0770)

inline static constexpr unsigned int Class_3_CC58CB58CA7EE5CF___c_TypeDefinitionIndex = 9246;

class Class_3_CC58CB58CA7EE5CF___c : public ::System::Object
{
public:
	static ::Class_3_CC58CB58CA7EE5CF___c** StaticGet___9()
	{
		return (::Class_3_CC58CB58CA7EE5CF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_CC58CB58CA7EE5CF___c_TypeDefinitionIndex)->GetStaticField(0x8550);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_CC58CB58CA7EE5CF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CC58CB58CA7EE5CF___C__CTOR_OFFSET))(this);
	}

	::Class_3_CC58CB58CA7EE5CF* Method_1_63E22A79D2DA8C7B()
	{
		return ((::Class_3_CC58CB58CA7EE5CF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CC58CB58CA7EE5CF___C_METHOD_1_63E22A79D2DA8C7B_OFFSET))(this);
	}
};

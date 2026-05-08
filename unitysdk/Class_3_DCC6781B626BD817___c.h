#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_DCC6781B626BD817;

#define CLASS_3_DCC6781B626BD817___C_METHOD_1_63E22A79D2DA8C7B_OFFSET UNITYSDK_OFFSET(0x1C2402B0)
#define CLASS_3_DCC6781B626BD817___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C240260)
#define CLASS_3_DCC6781B626BD817___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2402A0)

inline static constexpr unsigned int Class_3_DCC6781B626BD817___c_TypeDefinitionIndex = 9239;

class Class_3_DCC6781B626BD817___c : public ::System::Object
{
public:
	static ::Class_3_DCC6781B626BD817___c** StaticGet___9()
	{
		return (::Class_3_DCC6781B626BD817___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_DCC6781B626BD817___c_TypeDefinitionIndex)->GetStaticField(0x8780);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_DCC6781B626BD817___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DCC6781B626BD817___C__CTOR_OFFSET))(this);
	}

	::Class_3_DCC6781B626BD817* Method_1_63E22A79D2DA8C7B()
	{
		return ((::Class_3_DCC6781B626BD817*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DCC6781B626BD817___C_METHOD_1_63E22A79D2DA8C7B_OFFSET))(this);
	}
};

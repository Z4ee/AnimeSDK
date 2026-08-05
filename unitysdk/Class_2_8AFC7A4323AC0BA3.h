#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_8AFC7A4323AC0BA3_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x17135900)
#define CLASS_2_8AFC7A4323AC0BA3_METHOD_2_338707BF9F249F9E_OFFSET UNITYSDK_OFFSET(0x17135670)
#define CLASS_2_8AFC7A4323AC0BA3_METHOD_2_5E51EA6655F9D1D1_OFFSET UNITYSDK_OFFSET(0x17135B00)
#define CLASS_2_8AFC7A4323AC0BA3_METHOD_2_91A6CDAE51595EF1_OFFSET UNITYSDK_OFFSET(0x17135970)
#define CLASS_2_8AFC7A4323AC0BA3__CTOR_OFFSET UNITYSDK_OFFSET(0x171358B0)

inline static constexpr unsigned int Class_2_8AFC7A4323AC0BA3_TypeDefinitionIndex = 54482;

class Class_2_8AFC7A4323AC0BA3 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AFC7A4323AC0BA3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_338707BF9F249F9E(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_8AFC7A4323AC0BA3_METHOD_2_338707BF9F249F9E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AFC7A4323AC0BA3_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_91A6CDAE51595EF1(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8AFC7A4323AC0BA3_METHOD_2_91A6CDAE51595EF1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5E51EA6655F9D1D1(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8AFC7A4323AC0BA3_METHOD_2_5E51EA6655F9D1D1_OFFSET))(this, a1, a2);
	}
};

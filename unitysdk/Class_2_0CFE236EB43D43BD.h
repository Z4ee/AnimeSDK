#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UITwoDMapElement_Data_HollowEffect; }
namespace UnityEngine { class Material; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_0CFE236EB43D43BD_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x16234B90)
#define CLASS_2_0CFE236EB43D43BD_METHOD_2_A7059CD7DD0C03BC_OFFSET UNITYSDK_OFFSET(0x16234B00)
#define CLASS_2_0CFE236EB43D43BD_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16235470)
#define CLASS_2_0CFE236EB43D43BD_METHOD_2_F0C3225BD49C7509_OFFSET UNITYSDK_OFFSET(0x16234C60)
#define CLASS_2_0CFE236EB43D43BD__CTOR_OFFSET UNITYSDK_OFFSET(0x16234C10)

inline static constexpr unsigned int Class_2_0CFE236EB43D43BD_TypeDefinitionIndex = 64917;

class Class_2_0CFE236EB43D43BD : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::UnityEngine::Material* Field_2_1; // 0x50
	::Class_2_000597E145D7A42A<::MoleMole::UITwoDMapElement_Data_HollowEffect*>* Field_2_0; // 0x58
	::UnityEngine::Material* Field_2_2; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CFE236EB43D43BD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A7059CD7DD0C03BC(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_0CFE236EB43D43BD_METHOD_2_A7059CD7DD0C03BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CFE236EB43D43BD_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_F0C3225BD49C7509(::MoleMole::UITwoDMapElement_Data_HollowEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UITwoDMapElement_Data_HollowEffect*))((::PBYTE)hIl2Cpp + CLASS_2_0CFE236EB43D43BD_METHOD_2_F0C3225BD49C7509_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CFE236EB43D43BD_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A0B58236B258B7B2.h"
#include "unitysdk/Enum_3_7F3F4476896DB547.h"
#include "unitysdk/NapMaterialProperty.h"

class NapRenderer;
namespace MoleMole { class MonoRenderHandler; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }

#define CLASS_2_5FFAB5719C6C9D1B_METHOD_2_02416282B55EC5F3_OFFSET UNITYSDK_OFFSET(0x13ADF6C0)
#define CLASS_2_5FFAB5719C6C9D1B_METHOD_2_02F0C0F567BF0FC7_OFFSET UNITYSDK_OFFSET(0x13ADFB60)
#define CLASS_2_5FFAB5719C6C9D1B_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x13ADF9A0)
#define CLASS_2_5FFAB5719C6C9D1B_METHOD_2_2439B52C953E2E46_OFFSET UNITYSDK_OFFSET(0x13ADFCB0)
#define CLASS_2_5FFAB5719C6C9D1B_METHOD_2_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x13ADF930)
#define CLASS_2_5FFAB5719C6C9D1B_METHOD_2_5EBCF276C230582C_OFFSET UNITYSDK_OFFSET(0x13ADFE60)
#define CLASS_2_5FFAB5719C6C9D1B_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x13ADF620)
#define CLASS_2_5FFAB5719C6C9D1B_METHOD_2_9E18077320785B6F_OFFSET UNITYSDK_OFFSET(0x13ADFAA0)
#define CLASS_2_5FFAB5719C6C9D1B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13ADFE70)
#define CLASS_2_5FFAB5719C6C9D1B__CTOR_OFFSET UNITYSDK_OFFSET(0x13ADF610)

inline static constexpr unsigned int Class_2_5FFAB5719C6C9D1B_TypeDefinitionIndex = 44526;

class Class_2_5FFAB5719C6C9D1B : public ::Class_1_A0B58236B258B7B2
{
public:
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::NapRenderer*>* Field_2_2; // 0x40
	::NapMaterialProperty Field_2_1; // 0x48
	::System::Int32 Field_2_0; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FFAB5719C6C9D1B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FFAB5719C6C9D1B_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_02416282B55EC5F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FFAB5719C6C9D1B_METHOD_2_02416282B55EC5F3_OFFSET))(this);
	}

	::System::Void Method_2_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FFAB5719C6C9D1B_METHOD_2_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Boolean Method_2_9E18077320785B6F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FFAB5719C6C9D1B_METHOD_2_9E18077320785B6F_OFFSET))(this);
	}

	::System::Void Method_2_02F0C0F567BF0FC7(::Enum_3_7F3F4476896DB547 a1, ::System::String* a2, ::MoleMole::MonoRenderHandler* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_7F3F4476896DB547, ::System::String*, ::MoleMole::MonoRenderHandler*))((::PBYTE)hIl2Cpp + CLASS_2_5FFAB5719C6C9D1B_METHOD_2_02F0C0F567BF0FC7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_2439B52C953E2E46()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FFAB5719C6C9D1B_METHOD_2_2439B52C953E2E46_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FFAB5719C6C9D1B_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_5EBCF276C230582C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FFAB5719C6C9D1B_METHOD_2_5EBCF276C230582C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FFAB5719C6C9D1B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};

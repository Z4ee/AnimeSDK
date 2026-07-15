#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }
namespace System { class FormatException; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentBag_1; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_AEB41C92C66E4F8C_METHOD_1_2434B5A8F8358CF4_OFFSET UNITYSDK_OFFSET(0x1AF2E5D0)
#define CLASS_1_AEB41C92C66E4F8C_METHOD_1_45E1DD4C3004BE8D_OFFSET UNITYSDK_OFFSET(0x1AF2CA00)
#define CLASS_1_AEB41C92C66E4F8C_METHOD_1_46DC1B7A23E8F63B_OFFSET UNITYSDK_OFFSET(0x1AF2D660)
#define CLASS_1_AEB41C92C66E4F8C_METHOD_1_5B6891ACE8F7E909_OFFSET UNITYSDK_OFFSET(0x1AF2E530)
#define CLASS_1_AEB41C92C66E4F8C_METHOD_1_7D02D663A9812A42_OFFSET UNITYSDK_OFFSET(0x1AF2C910)
#define CLASS_1_AEB41C92C66E4F8C_METHOD_1_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x1AF2CC90)
#define CLASS_1_AEB41C92C66E4F8C_METHOD_1_8D94830F96A2A934_OFFSET UNITYSDK_OFFSET(0x1AF2C6F0)
#define CLASS_1_AEB41C92C66E4F8C_METHOD_1_BB097BD2A2DFBFFA_OFFSET UNITYSDK_OFFSET(0x1AF2C450)
#define CLASS_1_AEB41C92C66E4F8C_METHOD_1_C2F366E4DDF9B195_OFFSET UNITYSDK_OFFSET(0x1AF2CCA0)
#define CLASS_1_AEB41C92C66E4F8C_METHOD_1_C3AFFA7F66B1CB2D_OFFSET UNITYSDK_OFFSET(0x1AF2DC50)
#define CLASS_1_AEB41C92C66E4F8C_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x1AF2C660)
#define CLASS_1_AEB41C92C66E4F8C_METHOD_1_D7D0CD092E7E5457_OFFSET UNITYSDK_OFFSET(0x1AF2E480)
#define CLASS_1_AEB41C92C66E4F8C_METHOD_1_DAC74854F8E730C9_OFFSET UNITYSDK_OFFSET(0x1AF2CDC0)
#define CLASS_1_AEB41C92C66E4F8C_METHOD_1_E11C87AB2E6DB49B_OFFSET UNITYSDK_OFFSET(0x1AF2D1C0)
#define CLASS_1_AEB41C92C66E4F8C_METHOD_1_E6F43BC16622B0E6_OFFSET UNITYSDK_OFFSET(0x1AF2CCE0)
#define CLASS_1_AEB41C92C66E4F8C_METHOD_1_F57C23A8ACA862D2_OFFSET UNITYSDK_OFFSET(0x1AF2E6A0)
#define CLASS_1_AEB41C92C66E4F8C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF2E7A0)
#define CLASS_1_AEB41C92C66E4F8C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AF2C3D0)
#define CLASS_1_AEB41C92C66E4F8C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF2C2E0)

inline static constexpr unsigned int Class_1_AEB41C92C66E4F8C_TypeDefinitionIndex = 10498;

class Class_1_AEB41C92C66E4F8C : public ::System::Object
{
public:
	static ::System::Collections::Concurrent::ConcurrentBag_1<::Class_1_AEB41C92C66E4F8C*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Concurrent::ConcurrentBag_1<::Class_1_AEB41C92C66E4F8C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AEB41C92C66E4F8C_TypeDefinitionIndex)->GetStaticField(0x4E10);
	}
	::System::String* Field_1_1; // 0x10
	::System::Text::StringBuilder* Field_1_2; // 0x18
	::System::Int32 Field_1_3; // 0x20

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AEB41C92C66E4F8C__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEB41C92C66E4F8C__CTOR_1_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AEB41C92C66E4F8C__CCTOR_OFFSET))();
	}

	::RPG::GameCore::DynamicValue* Method_1_BB097BD2A2DFBFFA()
	{
		return ((::RPG::GameCore::DynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEB41C92C66E4F8C_METHOD_1_BB097BD2A2DFBFFA_OFFSET))(this);
	}

	static ::RPG::GameCore::DynamicValue* Method_1_45E1DD4C3004BE8D(::System::String* a1)
	{
		return ((::RPG::GameCore::DynamicValue*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AEB41C92C66E4F8C_METHOD_1_45E1DD4C3004BE8D_OFFSET))(a1);
	}

	::RPG::GameCore::DynamicValue* Method_1_8D94830F96A2A934()
	{
		return ((::RPG::GameCore::DynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEB41C92C66E4F8C_METHOD_1_8D94830F96A2A934_OFFSET))(this);
	}

	::RPG::GameCore::DynamicValue* Method_1_C2F366E4DDF9B195()
	{
		return ((::RPG::GameCore::DynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEB41C92C66E4F8C_METHOD_1_C2F366E4DDF9B195_OFFSET))(this);
	}

	::RPG::GameCore::DynamicValue* Method_1_E6F43BC16622B0E6()
	{
		return ((::RPG::GameCore::DynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEB41C92C66E4F8C_METHOD_1_E6F43BC16622B0E6_OFFSET))(this);
	}

	::RPG::GameCore::DynamicValue* Method_1_DAC74854F8E730C9()
	{
		return ((::RPG::GameCore::DynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEB41C92C66E4F8C_METHOD_1_DAC74854F8E730C9_OFFSET))(this);
	}

	::System::Char Method_1_F57C23A8ACA862D2()
	{
		return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEB41C92C66E4F8C_METHOD_1_F57C23A8ACA862D2_OFFSET))(this);
	}

	::RPG::GameCore::DynamicValue* Method_1_C3AFFA7F66B1CB2D()
	{
		return ((::RPG::GameCore::DynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEB41C92C66E4F8C_METHOD_1_C3AFFA7F66B1CB2D_OFFSET))(this);
	}

	::RPG::GameCore::DynamicValue* Method_1_E11C87AB2E6DB49B()
	{
		return ((::RPG::GameCore::DynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEB41C92C66E4F8C_METHOD_1_E11C87AB2E6DB49B_OFFSET))(this);
	}

	::RPG::GameCore::DynamicValue* Method_1_46DC1B7A23E8F63B()
	{
		return ((::RPG::GameCore::DynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEB41C92C66E4F8C_METHOD_1_46DC1B7A23E8F63B_OFFSET))(this);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEB41C92C66E4F8C_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Char Method_1_5B6891ACE8F7E909()
	{
		return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEB41C92C66E4F8C_METHOD_1_5B6891ACE8F7E909_OFFSET))(this);
	}

	::System::Void Method_1_2434B5A8F8358CF4(::System::Char a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + CLASS_1_AEB41C92C66E4F8C_METHOD_1_2434B5A8F8358CF4_OFFSET))(this, a1);
	}

	::System::Void Method_1_D7D0CD092E7E5457(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AEB41C92C66E4F8C_METHOD_1_D7D0CD092E7E5457_OFFSET))(this, a1);
	}

	::System::FormatException* Method_1_7D02D663A9812A42(::System::String* a1)
	{
		return ((::System::FormatException*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AEB41C92C66E4F8C_METHOD_1_7D02D663A9812A42_OFFSET))(this, a1);
	}

	::System::Void Method_1_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AEB41C92C66E4F8C_METHOD_1_7D201B4343E63821_OFFSET))(this, a1);
	}
};

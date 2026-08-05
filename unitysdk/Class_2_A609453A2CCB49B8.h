#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

namespace BinaryTracingCore::Source::TracingTools { class LogChannel; }
namespace BinaryTracingCore::Source::TracingTools { class TracingSystem; }
namespace System { class String; }
namespace System::IO { class FileStream; }

#define CLASS_2_A609453A2CCB49B8_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1476A850)
#define CLASS_2_A609453A2CCB49B8_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1476A5C0)
#define CLASS_2_A609453A2CCB49B8_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x1476A810)
#define CLASS_2_A609453A2CCB49B8_METHOD_2_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x1476A900)
#define CLASS_2_A609453A2CCB49B8_METHOD_2_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0x1476A940)
#define CLASS_2_A609453A2CCB49B8_METHOD_2_CA373AA1C7054598_5_OFFSET UNITYSDK_OFFSET(0x1476A980)
#define CLASS_2_A609453A2CCB49B8_METHOD_2_CA373AA1C7054598_6_OFFSET UNITYSDK_OFFSET(0x1476A9C0)
#define CLASS_2_A609453A2CCB49B8_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1476A580)
#define CLASS_2_A609453A2CCB49B8_METHOD_2_F13FB6EFDE7C86C2_OFFSET UNITYSDK_OFFSET(0x1476A520)
#define CLASS_2_A609453A2CCB49B8_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1476A360)
#define CLASS_2_A609453A2CCB49B8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1476A3A0)
#define CLASS_2_A609453A2CCB49B8_UPDATE_OFFSET UNITYSDK_OFFSET(0x1476A600)
#define CLASS_2_A609453A2CCB49B8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1476A680)
#define CLASS_2_A609453A2CCB49B8__CTOR_OFFSET UNITYSDK_OFFSET(0x1476A660)

inline static constexpr unsigned int Class_2_A609453A2CCB49B8_TypeDefinitionIndex = 51644;

class Class_2_A609453A2CCB49B8 : public ::Foundation::SingletonDisposable_1<::Class_2_A609453A2CCB49B8*>
{
public:
	static ::System::String** StaticGet_Field_2_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A609453A2CCB49B8_TypeDefinitionIndex)->GetStaticField(0x4E080);
	}
	static ::Il2CppArray<::System::Boolean>** StaticGet_Field_2_5()
	{
		return (::Il2CppArray<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A609453A2CCB49B8_TypeDefinitionIndex)->GetStaticField(0x4E088);
	}
	static ::BinaryTracingCore::Source::TracingTools::LogChannel** StaticGet_Field_2_2()
	{
		return (::BinaryTracingCore::Source::TracingTools::LogChannel**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A609453A2CCB49B8_TypeDefinitionIndex)->GetStaticField(0x4E090);
	}
	static ::System::String** StaticGet_Field_2_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A609453A2CCB49B8_TypeDefinitionIndex)->GetStaticField(0x4E098);
	}
	::System::IO::FileStream* Field_2_6; // 0x10
	::BinaryTracingCore::Source::TracingTools::TracingSystem* Field_2_7; // 0x18
	::System::Boolean Field_2_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A609453A2CCB49B8__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A609453A2CCB49B8__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A609453A2CCB49B8_ONCREATE_OFFSET))(this);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A609453A2CCB49B8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A609453A2CCB49B8_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A609453A2CCB49B8_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A609453A2CCB49B8_UPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A609453A2CCB49B8_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_F13FB6EFDE7C86C2(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A609453A2CCB49B8_METHOD_2_F13FB6EFDE7C86C2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A609453A2CCB49B8_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A609453A2CCB49B8_METHOD_2_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A609453A2CCB49B8_METHOD_2_CA373AA1C7054598_4_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A609453A2CCB49B8_METHOD_2_CA373AA1C7054598_5_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A609453A2CCB49B8_METHOD_2_CA373AA1C7054598_6_OFFSET))(this);
	}
};

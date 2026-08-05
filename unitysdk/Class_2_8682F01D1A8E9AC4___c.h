#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B7637CFF22586878;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_8682F01D1A8E9AC4___C_METHOD_1_BF523663C5477DEB_OFFSET UNITYSDK_OFFSET(0x13E63C20)
#define CLASS_2_8682F01D1A8E9AC4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E63BD0)
#define CLASS_2_8682F01D1A8E9AC4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13E63C10)

inline static constexpr unsigned int Class_2_8682F01D1A8E9AC4___c_TypeDefinitionIndex = 49134;

class Class_2_8682F01D1A8E9AC4___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_B7637CFF22586878*>** StaticGet___9__19_0()
	{
		return (::System::Comparison_1<::Class_1_B7637CFF22586878*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8682F01D1A8E9AC4___c_TypeDefinitionIndex)->GetStaticField(0x35F70);
	}
	static ::Class_2_8682F01D1A8E9AC4___c** StaticGet___9()
	{
		return (::Class_2_8682F01D1A8E9AC4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8682F01D1A8E9AC4___c_TypeDefinitionIndex)->GetStaticField(0x35F78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_BF523663C5477DEB(::Class_1_B7637CFF22586878* a1, ::Class_1_B7637CFF22586878* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_B7637CFF22586878*, ::Class_1_B7637CFF22586878*))((::PBYTE)hIl2Cpp + CLASS_2_8682F01D1A8E9AC4___C_METHOD_1_BF523663C5477DEB_OFFSET))(this, a1, a2);
	}
};

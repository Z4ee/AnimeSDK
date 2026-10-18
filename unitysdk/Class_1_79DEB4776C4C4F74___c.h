#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_79DEB4776C4C4F74___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D00500)
#define CLASS_1_79DEB4776C4C4F74___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15D00530)
#define CLASS_1_79DEB4776C4C4F74___C__FROMHTTP_B__2_0_OFFSET UNITYSDK_OFFSET(0x15D00550)
#define CLASS_1_79DEB4776C4C4F74___C__FROMSERVERARCHIVE_B__1_0_OFFSET UNITYSDK_OFFSET(0x15D00540)

inline static constexpr unsigned int Class_1_79DEB4776C4C4F74___c_TypeDefinitionIndex = 67523;

class Class_1_79DEB4776C4C4F74___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::UInt32, ::System::Int32>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_79DEB4776C4C4F74___c_TypeDefinitionIndex)->GetStaticField(0x1EBD0);
	}
	static ::Class_1_79DEB4776C4C4F74___c** StaticGet___9()
	{
		return (::Class_1_79DEB4776C4C4F74___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_79DEB4776C4C4F74___c_TypeDefinitionIndex)->GetStaticField(0x1EBD8);
	}
	static ::System::Func_2<::System::UInt32, ::System::Int32>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_79DEB4776C4C4F74___c_TypeDefinitionIndex)->GetStaticField(0x1EBE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_79DEB4776C4C4F74___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79DEB4776C4C4F74___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _FromServerArchive_b__1_0(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_79DEB4776C4C4F74___C__FROMSERVERARCHIVE_B__1_0_OFFSET))(this, a1);
	}

	::System::Int32 _FromHttp_b__2_0(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_79DEB4776C4C4F74___C__FROMHTTP_B__2_0_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FCC22A0BAD3D5A17;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_60D92CA5612B0AC5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x112D71D0)
#define CLASS_1_60D92CA5612B0AC5___C__CTOR_OFFSET UNITYSDK_OFFSET(0x112D7210)
#define CLASS_1_60D92CA5612B0AC5___C___TRYCREATEFORBOSS_B__4_0_OFFSET UNITYSDK_OFFSET(0x112D7380)
#define CLASS_1_60D92CA5612B0AC5___C___TRYCREATEFORMEMORY_B__1_0_OFFSET UNITYSDK_OFFSET(0x112D7220)
#define CLASS_1_60D92CA5612B0AC5___C___TRYCREATEFORSTORY_B__2_0_OFFSET UNITYSDK_OFFSET(0x112D72D0)

inline static constexpr unsigned int Class_1_60D92CA5612B0AC5___c_TypeDefinitionIndex = 74224;

class Class_1_60D92CA5612B0AC5___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_FCC22A0BAD3D5A17*, ::System::Int32>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::Class_1_FCC22A0BAD3D5A17*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_60D92CA5612B0AC5___c_TypeDefinitionIndex)->GetStaticField(0x16C70);
	}
	static ::System::Func_2<::Class_1_FCC22A0BAD3D5A17*, ::System::Int32>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::Class_1_FCC22A0BAD3D5A17*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_60D92CA5612B0AC5___c_TypeDefinitionIndex)->GetStaticField(0x16C78);
	}
	static ::System::Func_2<::Class_1_FCC22A0BAD3D5A17*, ::System::Int32>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::Class_1_FCC22A0BAD3D5A17*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_60D92CA5612B0AC5___c_TypeDefinitionIndex)->GetStaticField(0x16C80);
	}
	static ::Class_1_60D92CA5612B0AC5___c** StaticGet___9()
	{
		return (::Class_1_60D92CA5612B0AC5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_60D92CA5612B0AC5___c_TypeDefinitionIndex)->GetStaticField(0x16C88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_60D92CA5612B0AC5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60D92CA5612B0AC5___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __TryCreateForMemory_b__1_0(::Class_1_FCC22A0BAD3D5A17* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_FCC22A0BAD3D5A17*))((::PBYTE)hIl2Cpp + CLASS_1_60D92CA5612B0AC5___C___TRYCREATEFORMEMORY_B__1_0_OFFSET))(this, a1);
	}

	::System::Int32 __TryCreateForStory_b__2_0(::Class_1_FCC22A0BAD3D5A17* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_FCC22A0BAD3D5A17*))((::PBYTE)hIl2Cpp + CLASS_1_60D92CA5612B0AC5___C___TRYCREATEFORSTORY_B__2_0_OFFSET))(this, a1);
	}

	::System::Int32 __TryCreateForBoss_b__4_0(::Class_1_FCC22A0BAD3D5A17* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_FCC22A0BAD3D5A17*))((::PBYTE)hIl2Cpp + CLASS_1_60D92CA5612B0AC5___C___TRYCREATEFORBOSS_B__4_0_OFFSET))(this, a1);
	}
};

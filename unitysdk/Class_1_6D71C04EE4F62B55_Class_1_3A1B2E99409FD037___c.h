#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_6D71C04EE4F62B55_CLASS_1_3A1B2E99409FD037___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1976F430)
#define CLASS_1_6D71C04EE4F62B55_CLASS_1_3A1B2E99409FD037___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1976F470)
#define CLASS_1_6D71C04EE4F62B55_CLASS_1_3A1B2E99409FD037___C__DEBUGSTRING_B__2_0_OFFSET UNITYSDK_OFFSET(0x1976F480)

inline static constexpr unsigned int Class_1_6D71C04EE4F62B55_Class_1_3A1B2E99409FD037___c_TypeDefinitionIndex = 36646;

class Class_1_6D71C04EE4F62B55_Class_1_3A1B2E99409FD037___c : public ::System::Object
{
public:
	static ::Class_1_6D71C04EE4F62B55_Class_1_3A1B2E99409FD037___c** StaticGet___9()
	{
		return (::Class_1_6D71C04EE4F62B55_Class_1_3A1B2E99409FD037___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6D71C04EE4F62B55_Class_1_3A1B2E99409FD037___c_TypeDefinitionIndex)->GetStaticField(0xC530);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::String*>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6D71C04EE4F62B55_Class_1_3A1B2E99409FD037___c_TypeDefinitionIndex)->GetStaticField(0xC538);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6D71C04EE4F62B55_CLASS_1_3A1B2E99409FD037___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D71C04EE4F62B55_CLASS_1_3A1B2E99409FD037___C__CTOR_OFFSET))(this);
	}

	::System::String* _DebugString_b__2_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_6D71C04EE4F62B55_CLASS_1_3A1B2E99409FD037___C__DEBUGSTRING_B__2_0_OFFSET))(this, a1);
	}
};

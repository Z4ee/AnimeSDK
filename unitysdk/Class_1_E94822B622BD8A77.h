#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_75F412C0FED9B712.h"
#include "unitysdk/System/Object.h"

class Class_1_7AB88D713F5121B3;
class Class_3_1A345EAE5F749316_56;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E94822B622BD8A77_METHOD_1_2C36B166BF135F00_OFFSET UNITYSDK_OFFSET(0x1396E850)
#define CLASS_1_E94822B622BD8A77_METHOD_1_70437D85C11C5222_OFFSET UNITYSDK_OFFSET(0x1396E9F0)
#define CLASS_1_E94822B622BD8A77_METHOD_1_F6F644FA7BAFE302_OFFSET UNITYSDK_OFFSET(0x1396EB00)
#define CLASS_1_E94822B622BD8A77__CTOR_OFFSET UNITYSDK_OFFSET(0x1396E840)

inline static constexpr unsigned int Class_1_E94822B622BD8A77_TypeDefinitionIndex = 77609;

class Class_1_E94822B622BD8A77 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_7AB88D713F5121B3*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E94822B622BD8A77__CTOR_OFFSET))(this);
	}

	::Class_1_7AB88D713F5121B3* Method_1_2C36B166BF135F00(::Enum_3_75F412C0FED9B712 a1)
	{
		return ((::Class_1_7AB88D713F5121B3*(*)(::PVOID, ::Enum_3_75F412C0FED9B712))((::PBYTE)hIl2Cpp + CLASS_1_E94822B622BD8A77_METHOD_1_2C36B166BF135F00_OFFSET))(this, a1);
	}

	::System::Void Method_1_70437D85C11C5222(::Class_1_7AB88D713F5121B3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7AB88D713F5121B3*))((::PBYTE)hIl2Cpp + CLASS_1_E94822B622BD8A77_METHOD_1_70437D85C11C5222_OFFSET))(this, a1);
	}

	::System::Void Method_1_F6F644FA7BAFE302(::Class_3_1A345EAE5F749316_56* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1A345EAE5F749316_56*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E94822B622BD8A77_METHOD_1_F6F644FA7BAFE302_OFFSET))(this, a1, a2);
	}
};

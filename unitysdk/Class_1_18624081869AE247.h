#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FollowPointMapping; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_18624081869AE247_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96EAE10)
#define CLASS_1_18624081869AE247_METHOD_1_23D741E7A70C4611_OFFSET UNITYSDK_OFFSET(0x96EAEA0)
#define CLASS_1_18624081869AE247_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x96EAE90)
#define CLASS_1_18624081869AE247_METHOD_1_93F01A45F24DFDB8_OFFSET UNITYSDK_OFFSET(0x96EAD30)
#define CLASS_1_18624081869AE247_METHOD_1_9DB2C80C0CD4760B_OFFSET UNITYSDK_OFFSET(0x96EABA0)
#define CLASS_1_18624081869AE247_METHOD_1_CCC3561EF32613CB_OFFSET UNITYSDK_OFFSET(0x96EACA0)
#define CLASS_1_18624081869AE247_METHOD_1_CF654166A870DE25_OFFSET UNITYSDK_OFFSET(0x96EAC10)
#define CLASS_1_18624081869AE247_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x96EAE80)
#define CLASS_1_18624081869AE247__CTOR_OFFSET UNITYSDK_OFFSET(0x96EAFD0)

inline static constexpr unsigned int Class_1_18624081869AE247_TypeDefinitionIndex = 63093;

class Class_1_18624081869AE247 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_18624081869AE247_TypeDefinitionIndex)->GetStaticField(0x5910);
	}
	static ::System::Single* StaticGet_Field_1_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_18624081869AE247_TypeDefinitionIndex)->GetStaticField(0x5914);
	}
	::System::Collections::Generic::List_1<::RPG::Client::FollowPointMapping*>* Field_1_2; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18624081869AE247__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9DB2C80C0CD4760B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18624081869AE247_METHOD_1_9DB2C80C0CD4760B_OFFSET))(this);
	}

	::System::Void Method_1_CF654166A870DE25(::RPG::Client::FollowPointMapping* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FollowPointMapping*))((::PBYTE)hIl2Cpp + CLASS_1_18624081869AE247_METHOD_1_CF654166A870DE25_OFFSET))(this, a1);
	}

	::System::Void Method_1_CCC3561EF32613CB(::RPG::Client::FollowPointMapping* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FollowPointMapping*))((::PBYTE)hIl2Cpp + CLASS_1_18624081869AE247_METHOD_1_CCC3561EF32613CB_OFFSET))(this, a1);
	}

	::System::Void Method_1_93F01A45F24DFDB8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_18624081869AE247_METHOD_1_93F01A45F24DFDB8_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18624081869AE247_DISPOSE_OFFSET))(this);
	}

	static ::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_18624081869AE247_METHOD_1_F0088C88851A7DFB_OFFSET))();
	}

	static ::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_18624081869AE247_METHOD_1_5323F2DF46A044DA_OFFSET))();
	}

	static ::System::Void Method_1_23D741E7A70C4611(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_18624081869AE247_METHOD_1_23D741E7A70C4611_OFFSET))(a1, a2);
	}
};

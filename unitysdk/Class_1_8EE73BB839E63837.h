#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimePuzzle/ChimeProxy.h"
#include "unitysdk/RPG/Client/Prop/ChimePuzzle/LogicChimeType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8EE73BB839E63837_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14AF7030)
#define CLASS_1_8EE73BB839E63837_METHOD_1_18A694FF42B5E9A8_OFFSET UNITYSDK_OFFSET(0x14AF6D00)
#define CLASS_1_8EE73BB839E63837_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x14AF6F40)
#define CLASS_1_8EE73BB839E63837_METHOD_1_649210AD9881A694_OFFSET UNITYSDK_OFFSET(0x14AF6FC0)
#define CLASS_1_8EE73BB839E63837_METHOD_1_890C33E37D8C7EEB_OFFSET UNITYSDK_OFFSET(0x14AF7350)
#define CLASS_1_8EE73BB839E63837_METHOD_1_8DE44EEC3E24E5B0_OFFSET UNITYSDK_OFFSET(0x14AF75E0)
#define CLASS_1_8EE73BB839E63837_METHOD_1_9FB11787D483AC1E_1_OFFSET UNITYSDK_OFFSET(0x14AF6EF0)
#define CLASS_1_8EE73BB839E63837_METHOD_1_9FB11787D483AC1E_OFFSET UNITYSDK_OFFSET(0x14AF6CB0)
#define CLASS_1_8EE73BB839E63837_METHOD_1_A058F94367CF6323_OFFSET UNITYSDK_OFFSET(0x14AF6F80)
#define CLASS_1_8EE73BB839E63837_METHOD_1_C91C6A2706B91373_OFFSET UNITYSDK_OFFSET(0x14AF74E0)
#define CLASS_1_8EE73BB839E63837_METHOD_1_ED18D0F433EED9D3_OFFSET UNITYSDK_OFFSET(0x14AF7140)
#define CLASS_1_8EE73BB839E63837__CCTOR_OFFSET UNITYSDK_OFFSET(0x14AF7650)
#define CLASS_1_8EE73BB839E63837__CTOR_OFFSET UNITYSDK_OFFSET(0x14AF6980)

inline static constexpr unsigned int Class_1_8EE73BB839E63837_TypeDefinitionIndex = 75030;

class Class_1_8EE73BB839E63837 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8EE73BB839E63837_TypeDefinitionIndex)->GetStaticField(0x12930);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8EE73BB839E63837_TypeDefinitionIndex)->GetStaticField(0x12934);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::Prop::ChimePuzzle::LogicChimeType>* Field_1_3; // 0x18
	::Il2CppArray<::System::Int32>* Field_1_4; // 0x20
	::System::Int32 Field_1_5; // 0x28

	::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimePuzzle::ChimeProxy>* a1, ::Il2CppArray<::System::Int32>* a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimePuzzle::ChimeProxy>*, ::Il2CppArray<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8EE73BB839E63837__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8EE73BB839E63837__CCTOR_OFFSET))();
	}

	::System::Void Method_1_9FB11787D483AC1E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8EE73BB839E63837_METHOD_1_9FB11787D483AC1E_OFFSET))(this, a1);
	}

	::System::Void Method_1_9FB11787D483AC1E_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8EE73BB839E63837_METHOD_1_9FB11787D483AC1E_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8EE73BB839E63837_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* Method_1_A058F94367CF6323()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8EE73BB839E63837_METHOD_1_A058F94367CF6323_OFFSET))(this);
	}

	::System::Void Method_1_649210AD9881A694(::Il2CppArray<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_8EE73BB839E63837_METHOD_1_649210AD9881A694_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8EE73BB839E63837_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_18A694FF42B5E9A8(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8EE73BB839E63837_METHOD_1_18A694FF42B5E9A8_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_890C33E37D8C7EEB(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8EE73BB839E63837_METHOD_1_890C33E37D8C7EEB_OFFSET))(this, a1);
	}

	::System::Void Method_1_ED18D0F433EED9D3(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8EE73BB839E63837_METHOD_1_ED18D0F433EED9D3_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_C91C6A2706B91373(::System::Int32 a1, ::System::Int32 a2, ::System::Collections::Generic::HashSet_1<::System::Int32>* a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_8EE73BB839E63837_METHOD_1_C91C6A2706B91373_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_8DE44EEC3E24E5B0(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8EE73BB839E63837_METHOD_1_8DE44EEC3E24E5B0_OFFSET))(this, a1, a2);
	}
};

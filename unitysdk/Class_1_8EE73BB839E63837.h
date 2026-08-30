#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimePuzzle/ChimeProxy.h"
#include "unitysdk/RPG/Client/Prop/ChimePuzzle/LogicChimeType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8EE73BB839E63837_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1679E9D0)
#define CLASS_1_8EE73BB839E63837_METHOD_1_18A694FF42B5E9A8_OFFSET UNITYSDK_OFFSET(0x1679E6A0)
#define CLASS_1_8EE73BB839E63837_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1679E8E0)
#define CLASS_1_8EE73BB839E63837_METHOD_1_890C33E37D8C7EEB_OFFSET UNITYSDK_OFFSET(0x1679ECE0)
#define CLASS_1_8EE73BB839E63837_METHOD_1_8DE44EEC3E24E5B0_OFFSET UNITYSDK_OFFSET(0x1679EF70)
#define CLASS_1_8EE73BB839E63837_METHOD_1_9FB11787D483AC1E_1_OFFSET UNITYSDK_OFFSET(0x1679E890)
#define CLASS_1_8EE73BB839E63837_METHOD_1_9FB11787D483AC1E_OFFSET UNITYSDK_OFFSET(0x1679E650)
#define CLASS_1_8EE73BB839E63837_METHOD_1_A058F94367CF6323_OFFSET UNITYSDK_OFFSET(0x1679E920)
#define CLASS_1_8EE73BB839E63837_METHOD_1_C91C6A2706B91373_OFFSET UNITYSDK_OFFSET(0x1679EE70)
#define CLASS_1_8EE73BB839E63837_METHOD_1_D8A0114F97292E4B_OFFSET UNITYSDK_OFFSET(0x1679E960)
#define CLASS_1_8EE73BB839E63837_METHOD_1_ED18D0F433EED9D3_OFFSET UNITYSDK_OFFSET(0x1679EAD0)
#define CLASS_1_8EE73BB839E63837__CCTOR_OFFSET UNITYSDK_OFFSET(0x1679EFE0)
#define CLASS_1_8EE73BB839E63837__CTOR_OFFSET UNITYSDK_OFFSET(0x1679E320)

inline static constexpr unsigned int Class_1_8EE73BB839E63837_TypeDefinitionIndex = 78515;

class Class_1_8EE73BB839E63837 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_EHNNGMCDIIL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8EE73BB839E63837_TypeDefinitionIndex)->GetStaticField(0x109B0);
	}
	static ::System::Int32* StaticGet_PNNIOKLAAPO()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8EE73BB839E63837_TypeDefinitionIndex)->GetStaticField(0x109B4);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::Prop::ChimePuzzle::LogicChimeType>* OCIJCENFCOD; // 0x10
	::Il2CppArray<::System::Int32>* FDHJNHGLLEL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* FOIBNHFMDMO; // 0x20
	::System::Int32 BFLNNOEKIGE; // 0x28

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

	::System::Void Method_1_D8A0114F97292E4B(::Il2CppArray<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_8EE73BB839E63837_METHOD_1_D8A0114F97292E4B_OFFSET))(this, a1);
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

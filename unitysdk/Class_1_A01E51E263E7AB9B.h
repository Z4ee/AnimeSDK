#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimePuzzle/ChimeProxy.h"
#include "unitysdk/RPG/Client/Prop/ChimePuzzle/LogicChimeType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A01E51E263E7AB9B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x128BBBC0)
#define CLASS_1_A01E51E263E7AB9B_METHOD_1_02516B8A22250A59_OFFSET UNITYSDK_OFFSET(0x128BBF10)
#define CLASS_1_A01E51E263E7AB9B_METHOD_1_182CD42E5078143A_OFFSET UNITYSDK_OFFSET(0x128BBCF0)
#define CLASS_1_A01E51E263E7AB9B_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x128BBAD0)
#define CLASS_1_A01E51E263E7AB9B_METHOD_1_4AEC33C405B54F54_OFFSET UNITYSDK_OFFSET(0x128BB8E0)
#define CLASS_1_A01E51E263E7AB9B_METHOD_1_59E7F0FAA3A212FC_1_OFFSET UNITYSDK_OFFSET(0x128BBA80)
#define CLASS_1_A01E51E263E7AB9B_METHOD_1_59E7F0FAA3A212FC_OFFSET UNITYSDK_OFFSET(0x128BB890)
#define CLASS_1_A01E51E263E7AB9B_METHOD_1_8DE44EEC3E24E5B0_OFFSET UNITYSDK_OFFSET(0x128BC190)
#define CLASS_1_A01E51E263E7AB9B_METHOD_1_A058F94367CF6323_OFFSET UNITYSDK_OFFSET(0x128BBB10)
#define CLASS_1_A01E51E263E7AB9B_METHOD_1_C91C6A2706B91373_OFFSET UNITYSDK_OFFSET(0x128BC090)
#define CLASS_1_A01E51E263E7AB9B_METHOD_1_D8A0114F97292E4B_OFFSET UNITYSDK_OFFSET(0x128BBB50)
#define CLASS_1_A01E51E263E7AB9B__CCTOR_OFFSET UNITYSDK_OFFSET(0x128BC200)
#define CLASS_1_A01E51E263E7AB9B__CTOR_OFFSET UNITYSDK_OFFSET(0x128BB590)

inline static constexpr unsigned int Class_1_A01E51E263E7AB9B_TypeDefinitionIndex = 72483;

class Class_1_A01E51E263E7AB9B : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A01E51E263E7AB9B_TypeDefinitionIndex)->GetStaticField(0x85C0);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A01E51E263E7AB9B_TypeDefinitionIndex)->GetStaticField(0x85C4);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::Prop::ChimePuzzle::LogicChimeType>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* Field_1_3; // 0x18
	::Il2CppArray<::System::Int32>* Field_1_5; // 0x20
	::System::Int32 Field_1_4; // 0x28

	::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimePuzzle::ChimeProxy>* a1, ::Il2CppArray<::System::Int32>* a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimePuzzle::ChimeProxy>*, ::Il2CppArray<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A01E51E263E7AB9B__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A01E51E263E7AB9B__CCTOR_OFFSET))();
	}

	::System::Void Method_1_59E7F0FAA3A212FC(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A01E51E263E7AB9B_METHOD_1_59E7F0FAA3A212FC_OFFSET))(this, a1);
	}

	::System::Void Method_1_59E7F0FAA3A212FC_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A01E51E263E7AB9B_METHOD_1_59E7F0FAA3A212FC_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A01E51E263E7AB9B_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* Method_1_A058F94367CF6323()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A01E51E263E7AB9B_METHOD_1_A058F94367CF6323_OFFSET))(this);
	}

	::System::Void Method_1_D8A0114F97292E4B(::Il2CppArray<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_A01E51E263E7AB9B_METHOD_1_D8A0114F97292E4B_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A01E51E263E7AB9B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_4AEC33C405B54F54(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A01E51E263E7AB9B_METHOD_1_4AEC33C405B54F54_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_02516B8A22250A59(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A01E51E263E7AB9B_METHOD_1_02516B8A22250A59_OFFSET))(this, a1);
	}

	::System::Void Method_1_182CD42E5078143A(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A01E51E263E7AB9B_METHOD_1_182CD42E5078143A_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_C91C6A2706B91373(::System::Int32 a1, ::System::Int32 a2, ::System::Collections::Generic::HashSet_1<::System::Int32>* a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_A01E51E263E7AB9B_METHOD_1_C91C6A2706B91373_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_8DE44EEC3E24E5B0(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A01E51E263E7AB9B_METHOD_1_8DE44EEC3E24E5B0_OFFSET))(this, a1, a2);
	}
};

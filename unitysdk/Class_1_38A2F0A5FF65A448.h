#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BitFlag_1.h"
#include "unitysdk/RPG/Client/TickListType.h"
#include "unitysdk/System/Object.h"

class Class_1_5B09D01242BFD305;
class Class_1_A6BCD2E5D9DCE6F4;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_38A2F0A5FF65A448_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18750D80)
#define CLASS_1_38A2F0A5FF65A448_METHOD_1_58EC1DC03C51AF25_OFFSET UNITYSDK_OFFSET(0x18750900)
#define CLASS_1_38A2F0A5FF65A448_METHOD_1_8E8ECC766418E841_OFFSET UNITYSDK_OFFSET(0x18750A50)
#define CLASS_1_38A2F0A5FF65A448_METHOD_1_B7EE792065394A3E_OFFSET UNITYSDK_OFFSET(0x18750460)
#define CLASS_1_38A2F0A5FF65A448_METHOD_1_BC6889F6D3879316_OFFSET UNITYSDK_OFFSET(0x18750B70)
#define CLASS_1_38A2F0A5FF65A448_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x18750D70)
#define CLASS_1_38A2F0A5FF65A448_METHOD_1_E7BB4166A0088316_OFFSET UNITYSDK_OFFSET(0x18750AF0)
#define CLASS_1_38A2F0A5FF65A448_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x18750CD0)
#define CLASS_1_38A2F0A5FF65A448_METHOD_1_F7A65DF12D5A66F0_OFFSET UNITYSDK_OFFSET(0x18750C50)
#define CLASS_1_38A2F0A5FF65A448__CTOR_OFFSET UNITYSDK_OFFSET(0x18750280)

inline static constexpr unsigned int Class_1_38A2F0A5FF65A448_TypeDefinitionIndex = 67010;

class Class_1_38A2F0A5FF65A448 : public ::System::Object
{
public:
	::Il2CppArray<::System::Int32>* Field_1_0; // 0x10
	::Il2CppArray<::System::Int32>* Field_1_1; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_2; // 0x20
	::Il2CppArray<::Class_1_5B09D01242BFD305*>* Field_1_3; // 0x28
	::System::Int32 Field_1_4; // 0x30
	::System::Int32 Field_1_5; // 0x34

	::System::Void _ctor(::System::Int32 a1, ::Il2CppArray<::System::Int32>* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_38A2F0A5FF65A448__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B7EE792065394A3E(::Class_1_A6BCD2E5D9DCE6F4* a1, ::RPG::Client::TickListType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A6BCD2E5D9DCE6F4*, ::RPG::Client::TickListType))((::PBYTE)hIl2Cpp + CLASS_1_38A2F0A5FF65A448_METHOD_1_B7EE792065394A3E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_58EC1DC03C51AF25(::Class_1_A6BCD2E5D9DCE6F4* a1, ::RPG::Client::TickListType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A6BCD2E5D9DCE6F4*, ::RPG::Client::TickListType))((::PBYTE)hIl2Cpp + CLASS_1_38A2F0A5FF65A448_METHOD_1_58EC1DC03C51AF25_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8E8ECC766418E841(::Class_1_A6BCD2E5D9DCE6F4* a1, ::RPG::Client::BitFlag_1<::RPG::Client::TickListType> a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A6BCD2E5D9DCE6F4*, ::RPG::Client::BitFlag_1<::RPG::Client::TickListType>))((::PBYTE)hIl2Cpp + CLASS_1_38A2F0A5FF65A448_METHOD_1_8E8ECC766418E841_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E7BB4166A0088316(::Class_1_A6BCD2E5D9DCE6F4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A6BCD2E5D9DCE6F4*))((::PBYTE)hIl2Cpp + CLASS_1_38A2F0A5FF65A448_METHOD_1_E7BB4166A0088316_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_BC6889F6D3879316(::System::Int32 a1, ::RPG::Client::TickListType a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32, ::RPG::Client::TickListType))((::PBYTE)hIl2Cpp + CLASS_1_38A2F0A5FF65A448_METHOD_1_BC6889F6D3879316_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_F7A65DF12D5A66F0(::RPG::Client::TickListType a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::Client::TickListType))((::PBYTE)hIl2Cpp + CLASS_1_38A2F0A5FF65A448_METHOD_1_F7A65DF12D5A66F0_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38A2F0A5FF65A448_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38A2F0A5FF65A448_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38A2F0A5FF65A448_DISPOSE_OFFSET))(this);
	}
};

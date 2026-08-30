#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_52DE58AEA447C9CD;
namespace RPG::Client { class MonsterData; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AF10B3ABB955124D_METHOD_1_0F8D6364B34C7195_OFFSET UNITYSDK_OFFSET(0xBB0B920)
#define CLASS_1_AF10B3ABB955124D_METHOD_1_166A5C3824B99A58_OFFSET UNITYSDK_OFFSET(0xBB0AE00)
#define CLASS_1_AF10B3ABB955124D_METHOD_1_7C665533C9EC8042_OFFSET UNITYSDK_OFFSET(0xBB0BA40)
#define CLASS_1_AF10B3ABB955124D_METHOD_1_EF588D80912AB8A5_OFFSET UNITYSDK_OFFSET(0xBB0BB90)
#define CLASS_1_AF10B3ABB955124D__CTOR_OFFSET UNITYSDK_OFFSET(0xBB0BC40)

inline static constexpr unsigned int Class_1_AF10B3ABB955124D_TypeDefinitionIndex = 80174;

class Class_1_AF10B3ABB955124D : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF10B3ABB955124D__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MonsterData*>*>* Method_1_166A5C3824B99A58(::Class_1_52DE58AEA447C9CD* a1, ::System::Int32 a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MonsterData*>*>*(*)(::PVOID, ::Class_1_52DE58AEA447C9CD*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AF10B3ABB955124D_METHOD_1_166A5C3824B99A58_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_0F8D6364B34C7195(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AF10B3ABB955124D_METHOD_1_0F8D6364B34C7195_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7C665533C9EC8042(::Class_1_52DE58AEA447C9CD* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_52DE58AEA447C9CD*))((::PBYTE)hIl2Cpp + CLASS_1_AF10B3ABB955124D_METHOD_1_7C665533C9EC8042_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::System::UInt32>* Method_1_EF588D80912AB8A5(::Class_1_52DE58AEA447C9CD* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID, ::Class_1_52DE58AEA447C9CD*))((::PBYTE)hIl2Cpp + CLASS_1_AF10B3ABB955124D_METHOD_1_EF588D80912AB8A5_OFFSET))(this, a1);
	}
};

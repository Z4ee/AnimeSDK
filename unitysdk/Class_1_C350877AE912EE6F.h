#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonsterData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C350877AE912EE6F_METHOD_1_3CA7536A5A1D8C68_OFFSET UNITYSDK_OFFSET(0xBC7EC50)
#define CLASS_1_C350877AE912EE6F_METHOD_1_6B783ABD009F4DE7_OFFSET UNITYSDK_OFFSET(0xBC7EAB0)
#define CLASS_1_C350877AE912EE6F_METHOD_1_E5BFBA3B771C3531_OFFSET UNITYSDK_OFFSET(0xBC7EB40)
#define CLASS_1_C350877AE912EE6F__CTOR_OFFSET UNITYSDK_OFFSET(0xBC7ED20)

inline static constexpr unsigned int Class_1_C350877AE912EE6F_TypeDefinitionIndex = 63998;

class Class_1_C350877AE912EE6F : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C350877AE912EE6F__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* Method_1_6B783ABD009F4DE7(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C350877AE912EE6F_METHOD_1_6B783ABD009F4DE7_OFFSET))(this, a1);
	}

	::RPG::Client::MonsterData* Method_1_E5BFBA3B771C3531(::System::UInt32 a1)
	{
		return ((::RPG::Client::MonsterData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C350877AE912EE6F_METHOD_1_E5BFBA3B771C3531_OFFSET))(this, a1);
	}

	::System::String* Method_1_3CA7536A5A1D8C68(::System::UInt32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C350877AE912EE6F_METHOD_1_3CA7536A5A1D8C68_OFFSET))(this, a1);
	}
};

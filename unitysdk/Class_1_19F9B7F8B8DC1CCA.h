#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_19F9B7F8B8DC1CCA_METHOD_1_2C398C9EADFD2762_OFFSET UNITYSDK_OFFSET(0x1181E6B0)
#define CLASS_1_19F9B7F8B8DC1CCA_METHOD_1_3E4E9510B9875F1E_OFFSET UNITYSDK_OFFSET(0x1181E660)
#define CLASS_1_19F9B7F8B8DC1CCA__CTOR_OFFSET UNITYSDK_OFFSET(0x1181E6A0)

inline static constexpr unsigned int Class_1_19F9B7F8B8DC1CCA_TypeDefinitionIndex = 50843;

class Class_1_19F9B7F8B8DC1CCA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19F9B7F8B8DC1CCA__CTOR_OFFSET))(this);
	}

	static ::Class_1_19F9B7F8B8DC1CCA* Method_1_3E4E9510B9875F1E()
	{
		return ((::Class_1_19F9B7F8B8DC1CCA*(*)())((::PBYTE)hIl2Cpp + CLASS_1_19F9B7F8B8DC1CCA_METHOD_1_3E4E9510B9875F1E_OFFSET))();
	}

	::System::Void Method_1_2C398C9EADFD2762(::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + CLASS_1_19F9B7F8B8DC1CCA_METHOD_1_2C398C9EADFD2762_OFFSET))(this, a1);
	}
};

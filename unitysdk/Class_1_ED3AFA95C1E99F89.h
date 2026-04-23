#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_ED3AFA95C1E99F89_Class_1_6FFEE2E417AAADB3;
namespace RPG::GameCore { class TextJoinConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_ED3AFA95C1E99F89_METHOD_1_7CF1517F98DDE022_OFFSET UNITYSDK_OFFSET(0x9781B40)
#define CLASS_1_ED3AFA95C1E99F89_METHOD_1_E8D9C51A90BA2B74_OFFSET UNITYSDK_OFFSET(0x9781D70)
#define CLASS_1_ED3AFA95C1E99F89__CTOR_OFFSET UNITYSDK_OFFSET(0x9781B30)

inline static constexpr unsigned int Class_1_ED3AFA95C1E99F89_TypeDefinitionIndex = 68651;

class Class_1_ED3AFA95C1E99F89 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_ED3AFA95C1E99F89_Class_1_6FFEE2E417AAADB3*>* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::TextJoinConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TextJoinConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_ED3AFA95C1E99F89__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_7CF1517F98DDE022(::RPG::GameCore::TextJoinConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TextJoinConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_ED3AFA95C1E99F89_METHOD_1_7CF1517F98DDE022_OFFSET))(this, a1);
	}

	::System::String* Method_1_E8D9C51A90BA2B74()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED3AFA95C1E99F89_METHOD_1_E8D9C51A90BA2B74_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4B3E004A217894D5.h"

namespace MoleMole { class RandomMonsterSelectParam; }
namespace MoleMole::Project::Config { class MonsterGroupTemplateExt; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_A67E1EDB732F2EA4_METHOD_3_2E3A01BF187502FD_OFFSET UNITYSDK_OFFSET(0x13D1EC70)
#define CLASS_3_A67E1EDB732F2EA4_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x13D20F30)
#define CLASS_3_A67E1EDB732F2EA4_METHOD_3_3DD6921FAE7E698B_OFFSET UNITYSDK_OFFSET(0x13D1F970)
#define CLASS_3_A67E1EDB732F2EA4_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13D20FC0)
#define CLASS_3_A67E1EDB732F2EA4_METHOD_3_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0x13D1FE50)
#define CLASS_3_A67E1EDB732F2EA4__CTOR_OFFSET UNITYSDK_OFFSET(0x13D1E7A0)

inline static constexpr unsigned int Class_3_A67E1EDB732F2EA4_TypeDefinitionIndex = 58492;

class Class_3_A67E1EDB732F2EA4 : public ::Class_2_4B3E004A217894D5<::Class_3_A67E1EDB732F2EA4*>
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_7; // 0x0
	// static const ::System::String* Field_3_6; // 0x0
	// static const ::System::String* Field_3_5; // 0x0
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_3; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_2; // 0x48
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_1; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A67E1EDB732F2EA4__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_3_2E3A01BF187502FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A67E1EDB732F2EA4_METHOD_3_2E3A01BF187502FD_OFFSET))(this);
	}

	::System::Void Method_3_DAEB67F34AF80609()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A67E1EDB732F2EA4_METHOD_3_DAEB67F34AF80609_OFFSET))(this);
	}

	::System::Boolean Method_3_3DD6921FAE7E698B(::MoleMole::Project::Config::MonsterGroupTemplateExt* a1, ::MoleMole::RandomMonsterSelectParam* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Project::Config::MonsterGroupTemplateExt*, ::MoleMole::RandomMonsterSelectParam*))((::PBYTE)hIl2Cpp + CLASS_3_A67E1EDB732F2EA4_METHOD_3_3DD6921FAE7E698B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A67E1EDB732F2EA4_METHOD_3_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A67E1EDB732F2EA4_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};

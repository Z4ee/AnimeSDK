#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_83E6638060174809;
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D31FB8D7186DB2BC_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0xB4FDC60)
#define CLASS_1_D31FB8D7186DB2BC_METHOD_1_CD6FEC127CA76584_OFFSET UNITYSDK_OFFSET(0xB4FD7B0)
#define CLASS_1_D31FB8D7186DB2BC_METHOD_1_E40D3509E1B85237_OFFSET UNITYSDK_OFFSET(0xB4FD940)
#define CLASS_1_D31FB8D7186DB2BC_METHOD_1_EF28F31B550CAA5F_OFFSET UNITYSDK_OFFSET(0xB4FDAD0)
#define CLASS_1_D31FB8D7186DB2BC__CTOR_OFFSET UNITYSDK_OFFSET(0xB4FDC70)

inline static constexpr unsigned int Class_1_D31FB8D7186DB2BC_TypeDefinitionIndex = 53167;

class Class_1_D31FB8D7186DB2BC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_83E6638060174809*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D31FB8D7186DB2BC__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::ICharacterSkillRowData* Method_1_CD6FEC127CA76584(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D31FB8D7186DB2BC_METHOD_1_CD6FEC127CA76584_OFFSET))(this, a1);
	}

	::RPG::GameCore::ICharacterSkillRowData* Method_1_E40D3509E1B85237(::System::String* a1)
	{
		return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D31FB8D7186DB2BC_METHOD_1_E40D3509E1B85237_OFFSET))(this, a1);
	}

	::System::Void Method_1_EF28F31B550CAA5F(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*))((::PBYTE)hIl2Cpp + CLASS_1_D31FB8D7186DB2BC_METHOD_1_EF28F31B550CAA5F_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_83E6638060174809*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_83E6638060174809*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D31FB8D7186DB2BC_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}
};

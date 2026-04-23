#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_04089E9105CCB96A;
namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class String; }

#define CLASS_1_148FC490588BDD52_GET_USING_OFFSET UNITYSDK_OFFSET(0x923EE60)
#define CLASS_1_148FC490588BDD52_METHOD_1_10552BB88B9ECC75_OFFSET UNITYSDK_OFFSET(0x923E5E0)
#define CLASS_1_148FC490588BDD52_METHOD_1_5B8110E68E8D546F_OFFSET UNITYSDK_OFFSET(0x923E040)
#define CLASS_1_148FC490588BDD52_METHOD_1_85134B7B20E1588A_OFFSET UNITYSDK_OFFSET(0x923DFF0)
#define CLASS_1_148FC490588BDD52_METHOD_1_A81411FD91C9D143_OFFSET UNITYSDK_OFFSET(0x923E640)
#define CLASS_1_148FC490588BDD52_METHOD_1_B306591A8EEF16DE_OFFSET UNITYSDK_OFFSET(0x923E940)
#define CLASS_1_148FC490588BDD52_METHOD_1_F3F0E070DF8D46B3_OFFSET UNITYSDK_OFFSET(0x923EEA0)
#define CLASS_1_148FC490588BDD52_METHOD_1_F777E2887C21937E_OFFSET UNITYSDK_OFFSET(0x923E090)
#define CLASS_1_148FC490588BDD52_SET_USING_OFFSET UNITYSDK_OFFSET(0x923EE70)
#define CLASS_1_148FC490588BDD52__CTOR_OFFSET UNITYSDK_OFFSET(0x923F060)

inline static constexpr unsigned int Class_1_148FC490588BDD52_TypeDefinitionIndex = 67262;

class Class_1_148FC490588BDD52 : public ::System::Object
{
public:
	::RPG::Client::UIController* Field_1_1; // 0x10
	::Class_1_04089E9105CCB96A* Field_1_2; // 0x18
	::System::Boolean _Using_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_148FC490588BDD52__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_85134B7B20E1588A(::RPG::Client::UIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_1_148FC490588BDD52_METHOD_1_85134B7B20E1588A_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_5B8110E68E8D546F()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_148FC490588BDD52_METHOD_1_5B8110E68E8D546F_OFFSET))(this);
	}

	::System::Void Method_1_10552BB88B9ECC75(::RPG::Client::UIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_1_148FC490588BDD52_METHOD_1_10552BB88B9ECC75_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A81411FD91C9D143()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_148FC490588BDD52_METHOD_1_A81411FD91C9D143_OFFSET))(this);
	}

	::System::String* Method_1_B306591A8EEF16DE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_148FC490588BDD52_METHOD_1_B306591A8EEF16DE_OFFSET))(this);
	}

	::System::Boolean get_Using()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_148FC490588BDD52_GET_USING_OFFSET))(this);
	}

	::System::Void set_Using(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_148FC490588BDD52_SET_USING_OFFSET))(this, value);
	}

	::RPG::Client::Promises::IPromise* Method_1_F777E2887C21937E()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_148FC490588BDD52_METHOD_1_F777E2887C21937E_OFFSET))(this);
	}

	::RPG::Client::UIController* Method_1_F3F0E070DF8D46B3()
	{
		return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_148FC490588BDD52_METHOD_1_F3F0E070DF8D46B3_OFFSET))(this);
	}
};

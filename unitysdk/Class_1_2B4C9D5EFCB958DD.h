#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D611BC3F2C0A31B5;
namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class String; }

#define CLASS_1_2B4C9D5EFCB958DD_GET_USING_OFFSET UNITYSDK_OFFSET(0x153EC7A0)
#define CLASS_1_2B4C9D5EFCB958DD_METHOD_1_08FA67828C2BF0E2_OFFSET UNITYSDK_OFFSET(0x153EC160)
#define CLASS_1_2B4C9D5EFCB958DD_METHOD_1_1169E58CBC52AB21_OFFSET UNITYSDK_OFFSET(0x153EBC20)
#define CLASS_1_2B4C9D5EFCB958DD_METHOD_1_7EC6FAD1BBD9A469_OFFSET UNITYSDK_OFFSET(0x153EB680)
#define CLASS_1_2B4C9D5EFCB958DD_METHOD_1_85134B7B20E1588A_OFFSET UNITYSDK_OFFSET(0x153EB5E0)
#define CLASS_1_2B4C9D5EFCB958DD_METHOD_1_92DDFB61A2DC6128_OFFSET UNITYSDK_OFFSET(0x153EBCC0)
#define CLASS_1_2B4C9D5EFCB958DD_METHOD_1_A2F3FEB30B425887_OFFSET UNITYSDK_OFFSET(0x153EB630)
#define CLASS_1_2B4C9D5EFCB958DD_METHOD_1_CD4A6532B8C779AA_OFFSET UNITYSDK_OFFSET(0x153EC7E0)
#define CLASS_1_2B4C9D5EFCB958DD_SET_USING_OFFSET UNITYSDK_OFFSET(0x153EC7B0)
#define CLASS_1_2B4C9D5EFCB958DD__CTOR_OFFSET UNITYSDK_OFFSET(0x153EC8D0)

inline static constexpr unsigned int Class_1_2B4C9D5EFCB958DD_TypeDefinitionIndex = 72959;

class Class_1_2B4C9D5EFCB958DD : public ::System::Object
{
public:
	::RPG::Client::UIController* INGLBIDJIMA; // 0x10
	::Class_1_D611BC3F2C0A31B5* MHAEBFAEFCG; // 0x18
	::System::Boolean _Using_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B4C9D5EFCB958DD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_85134B7B20E1588A(::RPG::Client::UIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_1_2B4C9D5EFCB958DD_METHOD_1_85134B7B20E1588A_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_A2F3FEB30B425887()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B4C9D5EFCB958DD_METHOD_1_A2F3FEB30B425887_OFFSET))(this);
	}

	::System::Void Method_1_1169E58CBC52AB21(::RPG::Client::UIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_1_2B4C9D5EFCB958DD_METHOD_1_1169E58CBC52AB21_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_92DDFB61A2DC6128()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B4C9D5EFCB958DD_METHOD_1_92DDFB61A2DC6128_OFFSET))(this);
	}

	::System::String* Method_1_08FA67828C2BF0E2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B4C9D5EFCB958DD_METHOD_1_08FA67828C2BF0E2_OFFSET))(this);
	}

	::System::Boolean get_Using()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B4C9D5EFCB958DD_GET_USING_OFFSET))(this);
	}

	::System::Void set_Using(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2B4C9D5EFCB958DD_SET_USING_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_7EC6FAD1BBD9A469()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B4C9D5EFCB958DD_METHOD_1_7EC6FAD1BBD9A469_OFFSET))(this);
	}

	::RPG::Client::UIController* Method_1_CD4A6532B8C779AA()
	{
		return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B4C9D5EFCB958DD_METHOD_1_CD4A6532B8C779AA_OFFSET))(this);
	}
};

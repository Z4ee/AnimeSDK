#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BEC5D8EEC9856D94_1;
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class String; }

#define CLASS_1_BFEF14C428189256_GET_FOOTER_OFFSET UNITYSDK_OFFSET(0x15E33490)
#define CLASS_1_BFEF14C428189256_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x15E33480)
#define CLASS_1_BFEF14C428189256__CTOR_OFFSET UNITYSDK_OFFSET(0x15E334A0)

inline static constexpr unsigned int Class_1_BFEF14C428189256_TypeDefinitionIndex = 50389;

class Class_1_BFEF14C428189256 : public ::System::Object
{
public:
	::Class_1_BEC5D8EEC9856D94_1* _Footer_k__BackingField; // 0x10
	::R3::ReactiveProperty_1<::System::String*>* _Message_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFEF14C428189256__CTOR_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::String*>* get_Message()
	{
		return ((::R3::ReactiveProperty_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFEF14C428189256_GET_MESSAGE_OFFSET))(this);
	}

	::Class_1_BEC5D8EEC9856D94_1* get_Footer()
	{
		return ((::Class_1_BEC5D8EEC9856D94_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFEF14C428189256_GET_FOOTER_OFFSET))(this);
	}
};

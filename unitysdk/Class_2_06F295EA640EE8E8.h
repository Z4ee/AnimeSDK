#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E9521D589CA4AB8B.h"
#include "unitysdk/RPG/Client/WorkGroupType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_06F295EA640EE8E8_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xBE1CBC0)
#define CLASS_2_06F295EA640EE8E8_METHOD_2_43BA89836C4B03DD_OFFSET UNITYSDK_OFFSET(0xBE18C60)
#define CLASS_2_06F295EA640EE8E8_METHOD_2_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0xBE1CE60)
#define CLASS_2_06F295EA640EE8E8_METHOD_2_90F04FFA0E653625_OFFSET UNITYSDK_OFFSET(0xBE1CE70)
#define CLASS_2_06F295EA640EE8E8_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBE1CB80)
#define CLASS_2_06F295EA640EE8E8_METHOD_2_F5909B5FD6F94F42_OFFSET UNITYSDK_OFFSET(0xBE1CC80)
#define CLASS_2_06F295EA640EE8E8_ONSTARTLOADING_OFFSET UNITYSDK_OFFSET(0xBE1C9E0)
#define CLASS_2_06F295EA640EE8E8_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xBE1C8D0)
#define CLASS_2_06F295EA640EE8E8__CTOR_OFFSET UNITYSDK_OFFSET(0xBE18CB0)

inline static constexpr unsigned int Class_2_06F295EA640EE8E8_TypeDefinitionIndex = 61152;

class Class_2_06F295EA640EE8E8 : public ::Class_1_E9521D589CA4AB8B
{
public:
	::System::Collections::Generic::List_1<::Class_1_E9521D589CA4AB8B*>* OFOJIMCMCDK; // 0x50
	::RPG::Client::WorkGroupType PJNDKBNAGBA; // 0x58
	::System::Int32 FJOBEKIPOOD; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06F295EA640EE8E8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43BA89836C4B03DD(::RPG::Client::WorkGroupType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::WorkGroupType))((::PBYTE)hIl2Cpp + CLASS_2_06F295EA640EE8E8_METHOD_2_43BA89836C4B03DD_OFFSET))(this, a1);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06F295EA640EE8E8_ONUNINIT_OFFSET))(this);
	}

	::System::Void OnStartLoading()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06F295EA640EE8E8_ONSTARTLOADING_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06F295EA640EE8E8_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06F295EA640EE8E8_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_F5909B5FD6F94F42(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_06F295EA640EE8E8_METHOD_2_F5909B5FD6F94F42_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_E9521D589CA4AB8B*>* Method_2_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_E9521D589CA4AB8B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06F295EA640EE8E8_METHOD_2_4993EDAE54425105_OFFSET))(this);
	}

	::RPG::Client::WorkGroupType Method_2_90F04FFA0E653625()
	{
		return ((::RPG::Client::WorkGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06F295EA640EE8E8_METHOD_2_90F04FFA0E653625_OFFSET))(this);
	}
};

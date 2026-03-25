#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B8B7AE2DAD90AA4E;
class Class_1_EBB10EC01CCC4716_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_99711449DFAB5464_GET_BATTLEREPLAYKEY_OFFSET UNITYSDK_OFFSET(0xD160350)
#define CLASS_1_99711449DFAB5464_GET_REPLAYINFO_OFFSET UNITYSDK_OFFSET(0xD160370)
#define CLASS_1_99711449DFAB5464_METHOD_1_169C9AE8F88E4F64_OFFSET UNITYSDK_OFFSET(0xD1602B0)
#define CLASS_1_99711449DFAB5464_METHOD_1_4DDD3DE2D159DC6E_OFFSET UNITYSDK_OFFSET(0xD15FF50)
#define CLASS_1_99711449DFAB5464_SET_BATTLEREPLAYKEY_OFFSET UNITYSDK_OFFSET(0xD160360)
#define CLASS_1_99711449DFAB5464_SET_REPLAYINFO_OFFSET UNITYSDK_OFFSET(0xD160380)
#define CLASS_1_99711449DFAB5464__CTOR_OFFSET UNITYSDK_OFFSET(0xD160340)

inline static constexpr unsigned int Class_1_99711449DFAB5464_TypeDefinitionIndex = 54313;

class Class_1_99711449DFAB5464 : public ::System::Object
{
public:
	::System::String* _BattleReplayKey_k__BackingField; // 0x10
	::Class_1_EBB10EC01CCC4716_1* _ReplayInfo_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99711449DFAB5464__CTOR_OFFSET))(this);
	}

	static ::System::Collections::Generic::List_1<::Class_1_99711449DFAB5464*>* Method_1_4DDD3DE2D159DC6E(::System::Collections::Generic::IEnumerable_1<::Class_1_B8B7AE2DAD90AA4E*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_99711449DFAB5464*>*(*)(::System::Collections::Generic::IEnumerable_1<::Class_1_B8B7AE2DAD90AA4E*>*))((::PBYTE)hIl2Cpp + CLASS_1_99711449DFAB5464_METHOD_1_4DDD3DE2D159DC6E_OFFSET))(a1);
	}

	static ::Class_1_99711449DFAB5464* Method_1_169C9AE8F88E4F64(::Class_1_B8B7AE2DAD90AA4E* a1)
	{
		return ((::Class_1_99711449DFAB5464*(*)(::Class_1_B8B7AE2DAD90AA4E*))((::PBYTE)hIl2Cpp + CLASS_1_99711449DFAB5464_METHOD_1_169C9AE8F88E4F64_OFFSET))(a1);
	}

	::System::String* get_BattleReplayKey()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99711449DFAB5464_GET_BATTLEREPLAYKEY_OFFSET))(this);
	}

	::System::Void set_BattleReplayKey(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_99711449DFAB5464_SET_BATTLEREPLAYKEY_OFFSET))(this, value);
	}

	::Class_1_EBB10EC01CCC4716_1* get_ReplayInfo()
	{
		return ((::Class_1_EBB10EC01CCC4716_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99711449DFAB5464_GET_REPLAYINFO_OFFSET))(this);
	}

	::System::Void set_ReplayInfo(::Class_1_EBB10EC01CCC4716_1* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_1*))((::PBYTE)hIl2Cpp + CLASS_1_99711449DFAB5464_SET_REPLAYINFO_OFFSET))(this, value);
	}
};

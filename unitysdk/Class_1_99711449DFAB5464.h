#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_4;
class Class_1_8654F1DF226F6DE3_2;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_99711449DFAB5464_GET_BATTLEREPLAYKEY_OFFSET UNITYSDK_OFFSET(0x1356A100)
#define CLASS_1_99711449DFAB5464_GET_REPLAYINFO_OFFSET UNITYSDK_OFFSET(0x1356A120)
#define CLASS_1_99711449DFAB5464_METHOD_1_169C9AE8F88E4F64_OFFSET UNITYSDK_OFFSET(0x1356A060)
#define CLASS_1_99711449DFAB5464_METHOD_1_E07A4E6DDA4C1AF7_OFFSET UNITYSDK_OFFSET(0x13569C90)
#define CLASS_1_99711449DFAB5464_SET_BATTLEREPLAYKEY_OFFSET UNITYSDK_OFFSET(0x1356A110)
#define CLASS_1_99711449DFAB5464_SET_REPLAYINFO_OFFSET UNITYSDK_OFFSET(0x1356A130)
#define CLASS_1_99711449DFAB5464__CTOR_OFFSET UNITYSDK_OFFSET(0x1356A0F0)

inline static constexpr unsigned int Class_1_99711449DFAB5464_TypeDefinitionIndex = 62409;

class Class_1_99711449DFAB5464 : public ::System::Object
{
public:
	::Class_1_21DCD4640D389503_4* _ReplayInfo_k__BackingField; // 0x10
	::System::String* _BattleReplayKey_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99711449DFAB5464__CTOR_OFFSET))(this);
	}

	static ::System::Collections::Generic::List_1<::Class_1_99711449DFAB5464*>* Method_1_E07A4E6DDA4C1AF7(::System::Collections::Generic::IEnumerable_1<::Class_1_8654F1DF226F6DE3_2*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_99711449DFAB5464*>*(*)(::System::Collections::Generic::IEnumerable_1<::Class_1_8654F1DF226F6DE3_2*>*))((::PBYTE)hIl2Cpp + CLASS_1_99711449DFAB5464_METHOD_1_E07A4E6DDA4C1AF7_OFFSET))(a1);
	}

	static ::Class_1_99711449DFAB5464* Method_1_169C9AE8F88E4F64(::Class_1_8654F1DF226F6DE3_2* a1)
	{
		return ((::Class_1_99711449DFAB5464*(*)(::Class_1_8654F1DF226F6DE3_2*))((::PBYTE)hIl2Cpp + CLASS_1_99711449DFAB5464_METHOD_1_169C9AE8F88E4F64_OFFSET))(a1);
	}

	::System::String* get_BattleReplayKey()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99711449DFAB5464_GET_BATTLEREPLAYKEY_OFFSET))(this);
	}

	::System::Void set_BattleReplayKey(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_99711449DFAB5464_SET_BATTLEREPLAYKEY_OFFSET))(this, a1);
	}

	::Class_1_21DCD4640D389503_4* get_ReplayInfo()
	{
		return ((::Class_1_21DCD4640D389503_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99711449DFAB5464_GET_REPLAYINFO_OFFSET))(this);
	}

	::System::Void set_ReplayInfo(::Class_1_21DCD4640D389503_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_4*))((::PBYTE)hIl2Cpp + CLASS_1_99711449DFAB5464_SET_REPLAYINFO_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5E4ED920015DC82D.h"
#include "unitysdk/Struct_2_019938BC9C50B169_2.h"

class Class_0_16E4307DCC419505_705;
class Class_1_A79BBA326B4EB058;
namespace RPG::Client::Promises { class IPromise; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A4885DDF11901422_METHOD_2_36F78CD320EE055D_OFFSET UNITYSDK_OFFSET(0xA66CAD0)
#define CLASS_2_A4885DDF11901422_METHOD_2_5D42B8E01EDE64BA_OFFSET UNITYSDK_OFFSET(0xA66CD10)
#define CLASS_2_A4885DDF11901422_METHOD_2_771816A27B737E8B_OFFSET UNITYSDK_OFFSET(0xA66D240)
#define CLASS_2_A4885DDF11901422_METHOD_2_98506FF8B9216391_OFFSET UNITYSDK_OFFSET(0xA66C930)
#define CLASS_2_A4885DDF11901422_METHOD_2_98F924CDC206BF58_OFFSET UNITYSDK_OFFSET(0xA66D1F0)
#define CLASS_2_A4885DDF11901422__CTOR_OFFSET UNITYSDK_OFFSET(0xA66C8B0)
#define CLASS_2_A4885DDF11901422__UNLOCKAVATARPATH_B__3_0_OFFSET UNITYSDK_OFFSET(0xA66D290)

inline static constexpr unsigned int Class_2_A4885DDF11901422_TypeDefinitionIndex = 58719;

class Class_2_A4885DDF11901422 : public ::Class_1_5E4ED920015DC82D
{
public:
	::Class_0_16E4307DCC419505_705* Field_2_0; // 0x20

	::System::Void _ctor(::Class_0_16E4307DCC419505_705* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_705*))((::PBYTE)hIl2Cpp + CLASS_2_A4885DDF11901422__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_2_98506FF8B9216391(::Struct_2_019938BC9C50B169_2& a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Struct_2_019938BC9C50B169_2&))((::PBYTE)hIl2Cpp + CLASS_2_A4885DDF11901422_METHOD_2_98506FF8B9216391_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_2_36F78CD320EE055D(::Struct_2_019938BC9C50B169_2& a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Struct_2_019938BC9C50B169_2&))((::PBYTE)hIl2Cpp + CLASS_2_A4885DDF11901422_METHOD_2_36F78CD320EE055D_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_2_5D42B8E01EDE64BA(::System::Collections::Generic::List_1<::Struct_2_019938BC9C50B169_2>* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_019938BC9C50B169_2>*))((::PBYTE)hIl2Cpp + CLASS_2_A4885DDF11901422_METHOD_2_5D42B8E01EDE64BA_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_2_98F924CDC206BF58(::Struct_2_019938BC9C50B169_2& a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Struct_2_019938BC9C50B169_2&))((::PBYTE)hIl2Cpp + CLASS_2_A4885DDF11901422_METHOD_2_98F924CDC206BF58_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_2_771816A27B737E8B(::Struct_2_019938BC9C50B169_2& a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Struct_2_019938BC9C50B169_2&))((::PBYTE)hIl2Cpp + CLASS_2_A4885DDF11901422_METHOD_2_771816A27B737E8B_OFFSET))(this, a1);
	}

	::System::Void _UnlockAvatarPath_b__3_0(::Class_1_A79BBA326B4EB058* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A79BBA326B4EB058*))((::PBYTE)hIl2Cpp + CLASS_2_A4885DDF11901422__UNLOCKAVATARPATH_B__3_0_OFFSET))(this, a1);
	}
};

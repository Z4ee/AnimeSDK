#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5E4ED920015DC82D.h"
#include "unitysdk/Struct_2_D645B4E0B73852B6_1.h"

class Class_0_16E4307DCC419505_779;
class Class_1_CF23ADEF21446080;
namespace RPG::Client::Promises { class IPromise; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A4885DDF11901422_METHOD_2_36F78CD320EE055D_OFFSET UNITYSDK_OFFSET(0xB9946F0)
#define CLASS_2_A4885DDF11901422_METHOD_2_5D42B8E01EDE64BA_OFFSET UNITYSDK_OFFSET(0xB994930)
#define CLASS_2_A4885DDF11901422_METHOD_2_771816A27B737E8B_OFFSET UNITYSDK_OFFSET(0xB994E60)
#define CLASS_2_A4885DDF11901422_METHOD_2_98506FF8B9216391_OFFSET UNITYSDK_OFFSET(0xB994550)
#define CLASS_2_A4885DDF11901422_METHOD_2_98F924CDC206BF58_OFFSET UNITYSDK_OFFSET(0xB994E10)
#define CLASS_2_A4885DDF11901422__CTOR_OFFSET UNITYSDK_OFFSET(0xB9944D0)
#define CLASS_2_A4885DDF11901422__UNLOCKAVATARPATH_B__3_0_OFFSET UNITYSDK_OFFSET(0xB994EB0)

inline static constexpr unsigned int Class_2_A4885DDF11901422_TypeDefinitionIndex = 62836;

class Class_2_A4885DDF11901422 : public ::Class_1_5E4ED920015DC82D
{
public:
	::Class_0_16E4307DCC419505_779* BABONNPNLIP; // 0x20

	::System::Void _ctor(::Class_0_16E4307DCC419505_779* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_779*))((::PBYTE)hIl2Cpp + CLASS_2_A4885DDF11901422__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_2_98506FF8B9216391(::Struct_2_D645B4E0B73852B6_1& a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Struct_2_D645B4E0B73852B6_1&))((::PBYTE)hIl2Cpp + CLASS_2_A4885DDF11901422_METHOD_2_98506FF8B9216391_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_2_36F78CD320EE055D(::Struct_2_D645B4E0B73852B6_1& a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Struct_2_D645B4E0B73852B6_1&))((::PBYTE)hIl2Cpp + CLASS_2_A4885DDF11901422_METHOD_2_36F78CD320EE055D_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_2_5D42B8E01EDE64BA(::System::Collections::Generic::List_1<::Struct_2_D645B4E0B73852B6_1>* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_D645B4E0B73852B6_1>*))((::PBYTE)hIl2Cpp + CLASS_2_A4885DDF11901422_METHOD_2_5D42B8E01EDE64BA_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_2_98F924CDC206BF58(::Struct_2_D645B4E0B73852B6_1& a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Struct_2_D645B4E0B73852B6_1&))((::PBYTE)hIl2Cpp + CLASS_2_A4885DDF11901422_METHOD_2_98F924CDC206BF58_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_2_771816A27B737E8B(::Struct_2_D645B4E0B73852B6_1& a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Struct_2_D645B4E0B73852B6_1&))((::PBYTE)hIl2Cpp + CLASS_2_A4885DDF11901422_METHOD_2_771816A27B737E8B_OFFSET))(this, a1);
	}

	::System::Void _UnlockAvatarPath_b__3_0(::Class_1_CF23ADEF21446080* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CF23ADEF21446080*))((::PBYTE)hIl2Cpp + CLASS_2_A4885DDF11901422__UNLOCKAVATARPATH_B__3_0_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LogTag.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_181;
namespace RPG::Client { template <typename T> class PendingRspEntry_1; }
namespace System { class Exception; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_ACD0390146938DDC_METHOD_1_1FA4DE373FC66642_OFFSET UNITYSDK_OFFSET(0xC336D70)
#define CLASS_1_ACD0390146938DDC_METHOD_1_37F6242AF2353321_OFFSET UNITYSDK_OFFSET(0xC3370D0)
#define CLASS_1_ACD0390146938DDC_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xC336CE0)
#define CLASS_1_ACD0390146938DDC_METHOD_1_9CFB1612CED3785F_OFFSET UNITYSDK_OFFSET(0xC336E30)
#define CLASS_1_ACD0390146938DDC_METHOD_1_B0AB8F3435D50A94_OFFSET UNITYSDK_OFFSET(0xC336D30)
#define CLASS_1_ACD0390146938DDC__CTOR_OFFSET UNITYSDK_OFFSET(0xC336C60)

inline static constexpr unsigned int Class_1_ACD0390146938DDC_TypeDefinitionIndex = 69375;

class Class_1_ACD0390146938DDC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_43BD383C98B4C0C5_181*>* NBLMOBNAOJE; // 0x10
	::RPG::LogTag IOOEMMBEKPM; // 0x18

	::System::Void _ctor(::RPG::LogTag a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::LogTag))((::PBYTE)hIl2Cpp + CLASS_1_ACD0390146938DDC__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACD0390146938DDC_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::RPG::LogTag Method_1_B0AB8F3435D50A94()
	{
		return ((::RPG::LogTag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACD0390146938DDC_METHOD_1_B0AB8F3435D50A94_OFFSET))(this);
	}

	::System::Boolean Method_1_1FA4DE373FC66642(::System::UInt32 a1, ::Class_1_43BD383C98B4C0C5_181* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_1_43BD383C98B4C0C5_181*))((::PBYTE)hIl2Cpp + CLASS_1_ACD0390146938DDC_METHOD_1_1FA4DE373FC66642_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_9CFB1612CED3785F(::System::UInt32 a1, ::System::UInt32 a2, ::System::Object* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_ACD0390146938DDC_METHOD_1_9CFB1612CED3785F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_37F6242AF2353321(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_ACD0390146938DDC_METHOD_1_37F6242AF2353321_OFFSET))(this, a1);
	}
};

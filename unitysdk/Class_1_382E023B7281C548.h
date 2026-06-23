#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B2EF9AC793155ADE;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_382E023B7281C548_METHOD_1_1AB77C700F708C28_OFFSET UNITYSDK_OFFSET(0x179E0B50)
#define CLASS_1_382E023B7281C548_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x179E0D00)
#define CLASS_1_382E023B7281C548_METHOD_1_F4BC0C3EA9EE7E30_OFFSET UNITYSDK_OFFSET(0x179E0DA0)
#define CLASS_1_382E023B7281C548__CTOR_OFFSET UNITYSDK_OFFSET(0x179E0AC0)

inline static constexpr unsigned int Class_1_382E023B7281C548_TypeDefinitionIndex = 61980;

class Class_1_382E023B7281C548 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_B2EF9AC793155ADE*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_382E023B7281C548__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1AB77C700F708C28(::System::Int32 a1, ::System::UInt32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_382E023B7281C548_METHOD_1_1AB77C700F708C28_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_382E023B7281C548_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Int32 Method_1_F4BC0C3EA9EE7E30(::System::Int32 a1, ::System::UInt32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_382E023B7281C548_METHOD_1_F4BC0C3EA9EE7E30_OFFSET))(this, a1, a2);
	}
};

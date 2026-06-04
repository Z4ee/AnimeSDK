#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AD6EAABC8C018C94.h"

class Class_1_6CF32442E7A80121;
namespace RPG::Client { class ChessRogueData; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }

#define CLASS_2_59A4B833349D9A26_DISPOSE_OFFSET UNITYSDK_OFFSET(0x119160C0)
#define CLASS_2_59A4B833349D9A26_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x11916110)
#define CLASS_2_59A4B833349D9A26_METHOD_2_901D5A7422339B1D_OFFSET UNITYSDK_OFFSET(0x11917190)
#define CLASS_2_59A4B833349D9A26_METHOD_2_BC3FC93C7803165D_OFFSET UNITYSDK_OFFSET(0x11917020)
#define CLASS_2_59A4B833349D9A26_METHOD_2_C5767AF40114A4A5_OFFSET UNITYSDK_OFFSET(0x11916AF0)
#define CLASS_2_59A4B833349D9A26_METHOD_2_CA60279571D22E9B_OFFSET UNITYSDK_OFFSET(0x11916E40)
#define CLASS_2_59A4B833349D9A26_METHOD_2_DE68F5D1014AA876_OFFSET UNITYSDK_OFFSET(0x11916320)
#define CLASS_2_59A4B833349D9A26_METHOD_2_FDFE65F0723C3AD8_OFFSET UNITYSDK_OFFSET(0x119167A0)
#define CLASS_2_59A4B833349D9A26__CTOR_OFFSET UNITYSDK_OFFSET(0x119160B0)
#define CLASS_2_59A4B833349D9A26___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11917280)

inline static constexpr unsigned int Class_2_59A4B833349D9A26_TypeDefinitionIndex = 63116;

class Class_2_59A4B833349D9A26 : public ::Class_1_AD6EAABC8C018C94
{
public:
	::RPG::Client::Promises::Promise* Field_2_0; // 0x38
	::System::Boolean Field_2_1; // 0x40

	::System::Void _ctor(::RPG::Client::ChessRogueData* a1, ::Class_1_6CF32442E7A80121* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChessRogueData*, ::Class_1_6CF32442E7A80121*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_59A4B833349D9A26__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59A4B833349D9A26_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59A4B833349D9A26_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_DE68F5D1014AA876()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59A4B833349D9A26_METHOD_2_DE68F5D1014AA876_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_FDFE65F0723C3AD8()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59A4B833349D9A26_METHOD_2_FDFE65F0723C3AD8_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_C5767AF40114A4A5()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59A4B833349D9A26_METHOD_2_C5767AF40114A4A5_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_CA60279571D22E9B()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59A4B833349D9A26_METHOD_2_CA60279571D22E9B_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_BC3FC93C7803165D()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59A4B833349D9A26_METHOD_2_BC3FC93C7803165D_OFFSET))(this);
	}

	::System::Void Method_2_901D5A7422339B1D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_59A4B833349D9A26_METHOD_2_901D5A7422339B1D_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59A4B833349D9A26___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AD6EAABC8C018C94.h"

class Class_1_C9DFE5EE7107C629_8;
namespace RPG::Client { class ChessRogueData; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }

#define CLASS_2_59A4B833349D9A26_DISPOSE_OFFSET UNITYSDK_OFFSET(0x135204D0)
#define CLASS_2_59A4B833349D9A26_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x13520520)
#define CLASS_2_59A4B833349D9A26_METHOD_2_901D5A7422339B1D_OFFSET UNITYSDK_OFFSET(0x135215A0)
#define CLASS_2_59A4B833349D9A26_METHOD_2_BC3FC93C7803165D_OFFSET UNITYSDK_OFFSET(0x13521430)
#define CLASS_2_59A4B833349D9A26_METHOD_2_C5767AF40114A4A5_OFFSET UNITYSDK_OFFSET(0x13520F00)
#define CLASS_2_59A4B833349D9A26_METHOD_2_CA60279571D22E9B_OFFSET UNITYSDK_OFFSET(0x13521250)
#define CLASS_2_59A4B833349D9A26_METHOD_2_DE68F5D1014AA876_OFFSET UNITYSDK_OFFSET(0x13520730)
#define CLASS_2_59A4B833349D9A26_METHOD_2_FDFE65F0723C3AD8_OFFSET UNITYSDK_OFFSET(0x13520BB0)
#define CLASS_2_59A4B833349D9A26__CTOR_OFFSET UNITYSDK_OFFSET(0x135204C0)

inline static constexpr unsigned int Class_2_59A4B833349D9A26_TypeDefinitionIndex = 67479;

class Class_2_59A4B833349D9A26 : public ::Class_1_AD6EAABC8C018C94
{
public:
	::RPG::Client::Promises::Promise* GJLMIAMPLLE; // 0x38
	::System::Boolean PBNMDACHCHL; // 0x40

	::System::Void _ctor(::RPG::Client::ChessRogueData* a1, ::Class_1_C9DFE5EE7107C629_8* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChessRogueData*, ::Class_1_C9DFE5EE7107C629_8*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_59A4B833349D9A26__CTOR_OFFSET))(this, a1, a2, a3);
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
};

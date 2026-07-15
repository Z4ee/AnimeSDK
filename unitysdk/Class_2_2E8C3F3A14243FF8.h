#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGameFlowContext.h"

class Class_1_2594562E2DDF2BC6;
class Class_1_7E879E2723D836B1;
class Class_1_8F58629771D14EB4;
namespace RPG::Client { class BaseGameFlow; }
namespace RPG::Client::CakeRace { class CakeRaceLoanPrepareData; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_2E8C3F3A14243FF8_METHOD_2_10BF8217085E997B_OFFSET UNITYSDK_OFFSET(0x1875B990)
#define CLASS_2_2E8C3F3A14243FF8_METHOD_2_6678955BD96D99C5_OFFSET UNITYSDK_OFFSET(0x1875B870)
#define CLASS_2_2E8C3F3A14243FF8_METHOD_2_A31E169AAD5F47D5_OFFSET UNITYSDK_OFFSET(0x1875BCB0)
#define CLASS_2_2E8C3F3A14243FF8_METHOD_2_AECF8BEC293ED42A_1_OFFSET UNITYSDK_OFFSET(0x1875AF70)
#define CLASS_2_2E8C3F3A14243FF8_METHOD_2_AECF8BEC293ED42A_OFFSET UNITYSDK_OFFSET(0x1875AED0)
#define CLASS_2_2E8C3F3A14243FF8_METHOD_2_BED83F7DB7E355BA_OFFSET UNITYSDK_OFFSET(0x1875B110)
#define CLASS_2_2E8C3F3A14243FF8_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1875B0D0)
#define CLASS_2_2E8C3F3A14243FF8_METHOD_2_DBDC831C3106161B_OFFSET UNITYSDK_OFFSET(0x1875B3D0)
#define CLASS_2_2E8C3F3A14243FF8_METHOD_2_E02151D560E11533_OFFSET UNITYSDK_OFFSET(0x1875B010)
#define CLASS_2_2E8C3F3A14243FF8__CTOR_OFFSET UNITYSDK_OFFSET(0x1875B0C0)

inline static constexpr unsigned int Class_2_2E8C3F3A14243FF8_TypeDefinitionIndex = 72546;

class Class_2_2E8C3F3A14243FF8 : public ::RPG::Client::BaseGameFlowContext
{
public:
	::System::Void _ctor(::RPG::Client::BaseGameFlow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + CLASS_2_2E8C3F3A14243FF8__CTOR_OFFSET))(this, a1);
	}

	::Class_1_7E879E2723D836B1* Method_2_AECF8BEC293ED42A()
	{
		return ((::Class_1_7E879E2723D836B1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E8C3F3A14243FF8_METHOD_2_AECF8BEC293ED42A_OFFSET))(this);
	}

	::Class_1_2594562E2DDF2BC6* Method_2_AECF8BEC293ED42A_1()
	{
		return ((::Class_1_2594562E2DDF2BC6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E8C3F3A14243FF8_METHOD_2_AECF8BEC293ED42A_1_OFFSET))(this);
	}

	static ::Class_2_2E8C3F3A14243FF8* Method_2_E02151D560E11533(::RPG::Client::BaseGameFlow* a1)
	{
		return ((::Class_2_2E8C3F3A14243FF8*(*)(::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + CLASS_2_2E8C3F3A14243FF8_METHOD_2_E02151D560E11533_OFFSET))(a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E8C3F3A14243FF8_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_BED83F7DB7E355BA(::RPG::Client::CakeRace::CakeRaceLoanPrepareData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceLoanPrepareData*))((::PBYTE)hIl2Cpp + CLASS_2_2E8C3F3A14243FF8_METHOD_2_BED83F7DB7E355BA_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_2_DBDC831C3106161B(::RPG::Client::CakeRace::CakeRaceLoanPrepareData* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceLoanPrepareData*))((::PBYTE)hIl2Cpp + CLASS_2_2E8C3F3A14243FF8_METHOD_2_DBDC831C3106161B_OFFSET))(this, a1);
	}

	::System::Void Method_2_6678955BD96D99C5(::Class_1_8F58629771D14EB4* a1, ::RPG::Client::CakeRace::CakeRaceLoanPrepareData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8F58629771D14EB4*, ::RPG::Client::CakeRace::CakeRaceLoanPrepareData*))((::PBYTE)hIl2Cpp + CLASS_2_2E8C3F3A14243FF8_METHOD_2_6678955BD96D99C5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_10BF8217085E997B(::Class_1_8F58629771D14EB4* a1, ::RPG::Client::CakeRace::CakeRaceLoanPrepareData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8F58629771D14EB4*, ::RPG::Client::CakeRace::CakeRaceLoanPrepareData*))((::PBYTE)hIl2Cpp + CLASS_2_2E8C3F3A14243FF8_METHOD_2_10BF8217085E997B_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* Method_2_A31E169AAD5F47D5(::RPG::Client::CakeRace::CakeRaceLoanPrepareData* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceLoanPrepareData*))((::PBYTE)hIl2Cpp + CLASS_2_2E8C3F3A14243FF8_METHOD_2_A31E169AAD5F47D5_OFFSET))(this, a1);
	}
};

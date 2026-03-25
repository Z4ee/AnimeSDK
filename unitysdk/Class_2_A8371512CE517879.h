#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGameFlowContext.h"

class Class_1_0D4B763E40BF8CFF;
class Class_1_791CB467786D8BD6;
class Class_1_8F58629771D14EB4;
namespace RPG::Client { class BaseGameFlow; }
namespace RPG::Client::CakeRace { class CakeRaceLoanPrepareData; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_A8371512CE517879_METHOD_2_6678955BD96D99C5_OFFSET UNITYSDK_OFFSET(0x11887080)
#define CLASS_2_A8371512CE517879_METHOD_2_66F91397C46B5553_OFFSET UNITYSDK_OFFSET(0x11887190)
#define CLASS_2_A8371512CE517879_METHOD_2_A31E169AAD5F47D5_OFFSET UNITYSDK_OFFSET(0x11887420)
#define CLASS_2_A8371512CE517879_METHOD_2_B64C60973842FE45_1_OFFSET UNITYSDK_OFFSET(0x11886830)
#define CLASS_2_A8371512CE517879_METHOD_2_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0x11886790)
#define CLASS_2_A8371512CE517879_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11886990)
#define CLASS_2_A8371512CE517879_METHOD_2_CF53C0F19A4B6FB0_OFFSET UNITYSDK_OFFSET(0x11886C40)
#define CLASS_2_A8371512CE517879_METHOD_2_E02151D560E11533_OFFSET UNITYSDK_OFFSET(0x118868D0)
#define CLASS_2_A8371512CE517879_METHOD_2_F516FA48386FDECE_OFFSET UNITYSDK_OFFSET(0x118869D0)
#define CLASS_2_A8371512CE517879__CTOR_OFFSET UNITYSDK_OFFSET(0x11886980)

inline static constexpr unsigned int Class_2_A8371512CE517879_TypeDefinitionIndex = 62222;

class Class_2_A8371512CE517879 : public ::RPG::Client::BaseGameFlowContext
{
public:
	::System::Void _ctor(::RPG::Client::BaseGameFlow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + CLASS_2_A8371512CE517879__CTOR_OFFSET))(this, a1);
	}

	::Class_1_791CB467786D8BD6* Method_2_B64C60973842FE45()
	{
		return ((::Class_1_791CB467786D8BD6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8371512CE517879_METHOD_2_B64C60973842FE45_OFFSET))(this);
	}

	::Class_1_0D4B763E40BF8CFF* Method_2_B64C60973842FE45_1()
	{
		return ((::Class_1_0D4B763E40BF8CFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8371512CE517879_METHOD_2_B64C60973842FE45_1_OFFSET))(this);
	}

	static ::Class_2_A8371512CE517879* Method_2_E02151D560E11533(::RPG::Client::BaseGameFlow* a1)
	{
		return ((::Class_2_A8371512CE517879*(*)(::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + CLASS_2_A8371512CE517879_METHOD_2_E02151D560E11533_OFFSET))(a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8371512CE517879_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_F516FA48386FDECE(::RPG::Client::CakeRace::CakeRaceLoanPrepareData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceLoanPrepareData*))((::PBYTE)hIl2Cpp + CLASS_2_A8371512CE517879_METHOD_2_F516FA48386FDECE_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_2_CF53C0F19A4B6FB0(::RPG::Client::CakeRace::CakeRaceLoanPrepareData* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceLoanPrepareData*))((::PBYTE)hIl2Cpp + CLASS_2_A8371512CE517879_METHOD_2_CF53C0F19A4B6FB0_OFFSET))(this, a1);
	}

	::System::Void Method_2_6678955BD96D99C5(::Class_1_8F58629771D14EB4* a1, ::RPG::Client::CakeRace::CakeRaceLoanPrepareData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8F58629771D14EB4*, ::RPG::Client::CakeRace::CakeRaceLoanPrepareData*))((::PBYTE)hIl2Cpp + CLASS_2_A8371512CE517879_METHOD_2_6678955BD96D99C5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_66F91397C46B5553(::Class_1_8F58629771D14EB4* a1, ::RPG::Client::CakeRace::CakeRaceLoanPrepareData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8F58629771D14EB4*, ::RPG::Client::CakeRace::CakeRaceLoanPrepareData*))((::PBYTE)hIl2Cpp + CLASS_2_A8371512CE517879_METHOD_2_66F91397C46B5553_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* Method_2_A31E169AAD5F47D5(::RPG::Client::CakeRace::CakeRaceLoanPrepareData* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceLoanPrepareData*))((::PBYTE)hIl2Cpp + CLASS_2_A8371512CE517879_METHOD_2_A31E169AAD5F47D5_OFFSET))(this, a1);
	}
};

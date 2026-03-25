#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceMsgId.h"
#include "unitysdk/RPG/Client/LittleGameShare/FightServerLogLevel.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_61;
class Class_1_0E9EED74A778662A_2;
class Class_1_43BD383C98B4C0C5_178;
class Class_3_626F93E2306641CC;
class Class_3_98C806684F7CC372_9;
namespace Google::Protobuf { class IMessage; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_2DBD782DB24F19A1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x896F7A0)
#define CLASS_1_2DBD782DB24F19A1_METHOD_1_00A4B38C951C5BD5_OFFSET UNITYSDK_OFFSET(0x8970490)
#define CLASS_1_2DBD782DB24F19A1_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x896F3A0)
#define CLASS_1_2DBD782DB24F19A1_METHOD_1_3413400EE689EDF7_OFFSET UNITYSDK_OFFSET(0x89702F0)
#define CLASS_1_2DBD782DB24F19A1_METHOD_1_4628F59881B23161_OFFSET UNITYSDK_OFFSET(0x896F300)
#define CLASS_1_2DBD782DB24F19A1_METHOD_1_4EC36533011147D3_OFFSET UNITYSDK_OFFSET(0x896F910)
#define CLASS_1_2DBD782DB24F19A1_METHOD_1_54B1B6BDC655CB89_OFFSET UNITYSDK_OFFSET(0x896F400)
#define CLASS_1_2DBD782DB24F19A1_METHOD_1_597AB60160B3313A_OFFSET UNITYSDK_OFFSET(0x8970840)
#define CLASS_1_2DBD782DB24F19A1_METHOD_1_67FB95F7E1649EA1_OFFSET UNITYSDK_OFFSET(0x8970AE0)
#define CLASS_1_2DBD782DB24F19A1_METHOD_1_69831B9F1D1ADD06_OFFSET UNITYSDK_OFFSET(0x89705D0)
#define CLASS_1_2DBD782DB24F19A1_METHOD_1_A7365EBD388F793C_OFFSET UNITYSDK_OFFSET(0x8970C70)
#define CLASS_1_2DBD782DB24F19A1_METHOD_1_A8F347956705A769_OFFSET UNITYSDK_OFFSET(0x8970B50)
#define CLASS_1_2DBD782DB24F19A1_METHOD_1_B454A31C7AC848CE_OFFSET UNITYSDK_OFFSET(0x896FC50)
#define CLASS_1_2DBD782DB24F19A1_METHOD_1_C32F779EA8F32ECD_OFFSET UNITYSDK_OFFSET(0x896FAF0)
#define CLASS_1_2DBD782DB24F19A1_METHOD_1_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x89707F0)
#define CLASS_1_2DBD782DB24F19A1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x896F760)
#define CLASS_1_2DBD782DB24F19A1_METHOD_1_D7862DDFEBFBA0AF_OFFSET UNITYSDK_OFFSET(0x8970410)
#define CLASS_1_2DBD782DB24F19A1_METHOD_1_DA632777C01B1782_OFFSET UNITYSDK_OFFSET(0x8970CC0)
#define CLASS_1_2DBD782DB24F19A1_METHOD_1_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x896F670)
#define CLASS_1_2DBD782DB24F19A1__CTOR_OFFSET UNITYSDK_OFFSET(0x896F580)

inline static constexpr unsigned int Class_1_2DBD782DB24F19A1_TypeDefinitionIndex = 63520;

class Class_1_2DBD782DB24F19A1 : public ::System::Object
{
public:
	::System::Collections::Generic::Queue_1<::Class_1_43BD383C98B4C0C5_178*>* Field_1_2; // 0x10
	::Class_3_626F93E2306641CC* Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId, ::System::Collections::Generic::List_1<::Class_3_98C806684F7CC372_9*>*>* Field_1_1; // 0x20
	::Class_0_16E4307DCC419505_61* Field_1_3; // 0x28

	::System::Void _ctor(::Class_3_626F93E2306641CC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_626F93E2306641CC*))((::PBYTE)hIl2Cpp + CLASS_1_2DBD782DB24F19A1__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_4628F59881B23161()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DBD782DB24F19A1_METHOD_1_4628F59881B23161_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DBD782DB24F19A1_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	static ::Class_1_2DBD782DB24F19A1* Method_1_54B1B6BDC655CB89(::Class_3_626F93E2306641CC* a1)
	{
		return ((::Class_1_2DBD782DB24F19A1*(*)(::Class_3_626F93E2306641CC*))((::PBYTE)hIl2Cpp + CLASS_1_2DBD782DB24F19A1_METHOD_1_54B1B6BDC655CB89_OFFSET))(a1);
	}

	::System::Void Method_1_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DBD782DB24F19A1_METHOD_1_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DBD782DB24F19A1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DBD782DB24F19A1_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_4EC36533011147D3(::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId a1, ::Class_3_98C806684F7CC372_9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId, ::Class_3_98C806684F7CC372_9*))((::PBYTE)hIl2Cpp + CLASS_1_2DBD782DB24F19A1_METHOD_1_4EC36533011147D3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C32F779EA8F32ECD(::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId a1, ::Class_3_98C806684F7CC372_9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId, ::Class_3_98C806684F7CC372_9*))((::PBYTE)hIl2Cpp + CLASS_1_2DBD782DB24F19A1_METHOD_1_C32F779EA8F32ECD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B454A31C7AC848CE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2DBD782DB24F19A1_METHOD_1_B454A31C7AC848CE_OFFSET))(this, a1);
	}

	::System::Void Method_1_3413400EE689EDF7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DBD782DB24F19A1_METHOD_1_3413400EE689EDF7_OFFSET))(this);
	}

	::System::Void Method_1_00A4B38C951C5BD5(::Class_1_43BD383C98B4C0C5_178* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_178*))((::PBYTE)hIl2Cpp + CLASS_1_2DBD782DB24F19A1_METHOD_1_00A4B38C951C5BD5_OFFSET))(this, a1);
	}

	::System::Void Method_1_69831B9F1D1ADD06(::Class_1_43BD383C98B4C0C5_178* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_178*))((::PBYTE)hIl2Cpp + CLASS_1_2DBD782DB24F19A1_METHOD_1_69831B9F1D1ADD06_OFFSET))(this, a1);
	}

	::System::Void Method_1_C50B93169B85DAEA(::Class_0_16E4307DCC419505_61* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_61*))((::PBYTE)hIl2Cpp + CLASS_1_2DBD782DB24F19A1_METHOD_1_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void Method_1_597AB60160B3313A(::System::UInt32 a1, ::Google::Protobuf::IMessage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + CLASS_1_2DBD782DB24F19A1_METHOD_1_597AB60160B3313A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_67FB95F7E1649EA1(::System::String* a1, ::RPG::Client::LittleGameShare::FightServerLogLevel a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::LittleGameShare::FightServerLogLevel))((::PBYTE)hIl2Cpp + CLASS_1_2DBD782DB24F19A1_METHOD_1_67FB95F7E1649EA1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A8F347956705A769(::Class_1_0E9EED74A778662A_2* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0E9EED74A778662A_2*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_2DBD782DB24F19A1_METHOD_1_A8F347956705A769_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A7365EBD388F793C(::Google::Protobuf::IMessage* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::IMessage*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_2DBD782DB24F19A1_METHOD_1_A7365EBD388F793C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DA632777C01B1782(::Google::Protobuf::IMessage* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::IMessage*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2DBD782DB24F19A1_METHOD_1_DA632777C01B1782_OFFSET))(this, a1, a2);
	}

	::Class_1_43BD383C98B4C0C5_178* Method_1_D7862DDFEBFBA0AF()
	{
		return ((::Class_1_43BD383C98B4C0C5_178*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2DBD782DB24F19A1_METHOD_1_D7862DDFEBFBA0AF_OFFSET))(this);
	}
};

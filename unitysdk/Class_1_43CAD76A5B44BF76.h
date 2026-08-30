#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_43CAD76A5B44BF76_Class_1_851E42474B6C53CF;
namespace RPG::Client { class MonoClockParkStoryCharacter; }
namespace RPG::Client { class MonoSpineStoryAnimEventListener; }
namespace RPG::Client { class MonoSpineStoryController; }
namespace RPG::GameCore { class ClockParkStoryConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_43CAD76A5B44BF76_DISPOSE_OFFSET UNITYSDK_OFFSET(0x195378A0)
#define CLASS_1_43CAD76A5B44BF76_METHOD_1_02F18FA9FE9F907A_OFFSET UNITYSDK_OFFSET(0x195380F0)
#define CLASS_1_43CAD76A5B44BF76_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x19538940)
#define CLASS_1_43CAD76A5B44BF76_METHOD_1_09EF92B54F64E1A4_OFFSET UNITYSDK_OFFSET(0x19538550)
#define CLASS_1_43CAD76A5B44BF76_METHOD_1_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0x19539170)
#define CLASS_1_43CAD76A5B44BF76_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x19539060)
#define CLASS_1_43CAD76A5B44BF76_METHOD_1_2DA8F7A684C1DC34_OFFSET UNITYSDK_OFFSET(0x19538050)
#define CLASS_1_43CAD76A5B44BF76_METHOD_1_3528E5AEECF3EE4B_OFFSET UNITYSDK_OFFSET(0x19538EF0)
#define CLASS_1_43CAD76A5B44BF76_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x195392D0)
#define CLASS_1_43CAD76A5B44BF76_METHOD_1_86ADBB4228161C74_OFFSET UNITYSDK_OFFSET(0x195395D0)
#define CLASS_1_43CAD76A5B44BF76_METHOD_1_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x19539330)
#define CLASS_1_43CAD76A5B44BF76_METHOD_1_AB1A8DFD378DB0BE_OFFSET UNITYSDK_OFFSET(0x19538A80)
#define CLASS_1_43CAD76A5B44BF76_METHOD_1_AD33C755E5D9741F_OFFSET UNITYSDK_OFFSET(0x19538990)
#define CLASS_1_43CAD76A5B44BF76_METHOD_1_AF8423DBB79590E7_OFFSET UNITYSDK_OFFSET(0x19537EC0)
#define CLASS_1_43CAD76A5B44BF76_METHOD_1_C2D66F61AAAE8BC5_OFFSET UNITYSDK_OFFSET(0x19539B50)
#define CLASS_1_43CAD76A5B44BF76_METHOD_1_C30D88B8CC4EDF96_OFFSET UNITYSDK_OFFSET(0x195399F0)
#define CLASS_1_43CAD76A5B44BF76_METHOD_1_CD3AA47BC28882AC_OFFSET UNITYSDK_OFFSET(0x195396F0)
#define CLASS_1_43CAD76A5B44BF76_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x19538860)
#define CLASS_1_43CAD76A5B44BF76_METHOD_1_D2A08F3D951A0C1D_OFFSET UNITYSDK_OFFSET(0x19539210)
#define CLASS_1_43CAD76A5B44BF76__CTOR_OFFSET UNITYSDK_OFFSET(0x19537770)

inline static constexpr unsigned int Class_1_43CAD76A5B44BF76_TypeDefinitionIndex = 60396;

class Class_1_43CAD76A5B44BF76 : public ::System::Object
{
public:
	// static const ::System::Single LBOLEADEEKK; // 0x0
	// static const ::System::Single POCPBOKKLJB; // 0x0
	::System::Collections::Generic::List_1<::RPG::Client::MonoClockParkStoryCharacter*>* NMMHJPOOPEB; // 0x10
	::Il2CppArray<::System::String*>* COLBNHBELCC; // 0x18
	::System::Collections::Generic::List_1<::Class_1_43CAD76A5B44BF76_Class_1_851E42474B6C53CF*>* BAHEAMBNLME; // 0x20
	::RPG::Client::MonoSpineStoryController* CPIIOIPAAKK; // 0x28
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x30
	::RPG::Client::MonoSpineStoryAnimEventListener* BGFDACCIPJI; // 0x38
	::Il2CppArray<::System::String*>* LCBJGHLBMAM; // 0x40
	::System::Action* JCIFPBNPAIO; // 0x48
	::System::Action* GOKIJLFOJAB; // 0x50
	::RPG::GameCore::ClockParkStoryConfig* IGHAHBNLIJA; // 0x58
	::System::Boolean EJDEKKEOHBE; // 0x60
	::System::Boolean LMAJJNKPEPF; // 0x61
	::System::Single EAFFOJLIIMN; // 0x64

	::System::Void _ctor(::RPG::Client::MonoSpineStoryController* a1, ::RPG::GameCore::ClockParkStoryConfig* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoSpineStoryController*, ::RPG::GameCore::ClockParkStoryConfig*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_43CAD76A5B44BF76__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43CAD76A5B44BF76_DISPOSE_OFFSET))(this);
	}

	::RPG::Client::MonoClockParkStoryCharacter* Method_1_AF8423DBB79590E7(::System::String* a1)
	{
		return ((::RPG::Client::MonoClockParkStoryCharacter*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_43CAD76A5B44BF76_METHOD_1_AF8423DBB79590E7_OFFSET))(this, a1);
	}

	::System::Void Method_1_2DA8F7A684C1DC34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43CAD76A5B44BF76_METHOD_1_2DA8F7A684C1DC34_OFFSET))(this);
	}

	::System::Void Method_1_02F18FA9FE9F907A(::System::String* a1, ::RPG::Client::TextID a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_43CAD76A5B44BF76_METHOD_1_02F18FA9FE9F907A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_09EF92B54F64E1A4(::RPG::Client::TextID a1, ::RPG::Client::TextID a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::RPG::Client::TextID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_43CAD76A5B44BF76_METHOD_1_09EF92B54F64E1A4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_43CAD76A5B44BF76_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::System::Void Method_1_AD33C755E5D9741F(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_43CAD76A5B44BF76_METHOD_1_AD33C755E5D9741F_OFFSET))(this, a1);
	}

	::System::Void Method_1_AB1A8DFD378DB0BE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43CAD76A5B44BF76_METHOD_1_AB1A8DFD378DB0BE_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43CAD76A5B44BF76_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_0B7E3489D2C0938B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43CAD76A5B44BF76_METHOD_1_0B7E3489D2C0938B_OFFSET))(this);
	}

	::System::Void Method_1_D2A08F3D951A0C1D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_43CAD76A5B44BF76_METHOD_1_D2A08F3D951A0C1D_OFFSET))(this, a1);
	}

	::System::Void Method_1_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43CAD76A5B44BF76_METHOD_1_A1781348F0A89177_OFFSET))(this);
	}

	::System::Boolean Method_1_86ADBB4228161C74()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43CAD76A5B44BF76_METHOD_1_86ADBB4228161C74_OFFSET))(this);
	}

	::System::Void Method_1_CD3AA47BC28882AC(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_43CAD76A5B44BF76_METHOD_1_CD3AA47BC28882AC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_C30D88B8CC4EDF96(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_43CAD76A5B44BF76_METHOD_1_C30D88B8CC4EDF96_OFFSET))(this, a1);
	}

	::System::Void Method_1_3528E5AEECF3EE4B(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_43CAD76A5B44BF76_METHOD_1_3528E5AEECF3EE4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43CAD76A5B44BF76_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_C2D66F61AAAE8BC5(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_43CAD76A5B44BF76_METHOD_1_C2D66F61AAAE8BC5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43CAD76A5B44BF76_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}
};
